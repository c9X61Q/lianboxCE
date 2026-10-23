/*
 * unpack.c —— 重建自 sub_401BA0 / enum_types_cb / enum_names_cb /
 *             load_resource_copy / resource_worker / init_config
 *
 * 反编译破坏点与修复：
 *   1) 资源枚举是三条回调链，伪代码里被拆成互相不可读的函数 → 合并为
 *      pe_enum_rcdata() 一个显式遍历，保留原回调语义（只认 type 10）
 *   2) 清单（package table）在伪代码里是 str_append/sub_4057F0 的字符串手术
 *      → 还原为 parse_manifest()，按 ':' 与 '*' 切分
 *   3) 16 字节容器头在伪代码里是 lpBuffer+16 的裸偏移 → BLOB_HDR
 *   4) RC4 / inflate 之间的长度变量混用 (nNumberOfBytesToWrite) → 明确 out_len
 *   5) 写盘是 write_file(sub_40478D) 的多层包装 → write_tree_file()
 *
 * 产物与 lian86.exe 运行时落盘的文件逐字节一致（见 verify.sh）。
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <dirent.h>
#include <zlib.h>
#ifndef _WIN32
#include <sys/stat.h>
#include <sys/types.h>
#endif
#include "lian86.h"

#define MAX_RES   64
#define MAX_TREE  64

typedef struct { char name[64]; const BYTE *data; DWORD size; } RES_ITEM;
typedef struct { WCHAR path[260]; int is_dir; DWORD size; int used; } TREE_ITEM;

static const BYTE *g_file;
static size_t g_filesz;
static DWORD  g_sec_va[32], g_sec_vs[32], g_sec_raw[32], g_sec_rsz[32];
static int    g_sec_n;

/* ---------- 极简 PE 读取（等价于 LoadLibrary + FindResourceW 的定位部分） ---------- */
static DWORD rva2off(DWORD rva)
{
    for (int i = 0; i < g_sec_n; i++) {
        DWORD span = g_sec_vs[i] > g_sec_rsz[i] ? g_sec_vs[i] : g_sec_rsz[i];
        if (rva >= g_sec_va[i] && rva < g_sec_va[i] + span)
            return g_sec_raw[i] + (rva - g_sec_va[i]);
    }
    return 0;
}

static int pe_init(const BYTE *f, size_t n)
{
    g_file = f; g_filesz = n;
    if (n < 0x40 || f[0] != 'M' || f[1] != 'Z') return 0;
    DWORD pe = *(const DWORD *)(f + 0x3C);
    if (pe + 24 > n || memcmp(f + pe, "PE\0\0", 4)) return 0;
    WORD nsec  = *(const WORD *)(f + pe + 6);
    WORD optsz = *(const WORD *)(f + pe + 20);
    const BYTE *opt = f + pe + 24;
    WORD magic = *(const WORD *)opt;
    DWORD ddoff = (magic == 0x10B) ? 96 : 112;
    DWORD rsrc_rva = *(const DWORD *)(opt + ddoff + 2 * 8);
    g_sec_n = nsec;
    const BYTE *sh = opt + optsz;
    for (int i = 0; i < nsec && i < 32; i++, sh += 40) {
        g_sec_vs[i]  = *(const DWORD *)(sh + 8);
        g_sec_va[i]  = *(const DWORD *)(sh + 12);
        g_sec_rsz[i] = *(const DWORD *)(sh + 16);
        g_sec_raw[i] = *(const DWORD *)(sh + 20);
    }
    return rsrc_rva ? (int)rva2off(rsrc_rva) : 0;
}

static void dir_string(DWORD base, DWORD nameoff, char *out, size_t outsz)
{
    const BYTE *p = g_file + base + (nameoff & 0x7FFFFFFF);
    WORD len = *(const WORD *)p;
    size_t k = 0;
    for (WORD i = 0; i < len && k + 1 < outsz; i++) {
        WCHAR c = ((const WCHAR *)(p + 2))[i];
        out[k++] = (c < 0x80) ? (char)c : '?';
    }
    out[k] = 0;
}

/* 只认 RT_RCDATA(10)：对应 enum_types_cb 里的 `if (lpType == 10)` */
static void pe_enum_rcdata(void (*fn)(const char *, const BYTE *, DWORD, void *), void *ud)
{
    DWORD pe = *(const DWORD *)(g_file + 0x3C);
    const BYTE *opt = g_file + pe + 24;
    WORD magic = *(const WORD *)opt;
    DWORD ddoff = (magic == 0x10B) ? 96 : 112;
    DWORD rsrc_rva = *(const DWORD *)(opt + ddoff + 2 * 8);
    DWORD base = rva2off(rsrc_rva);

    const BYTE *d = g_file + base;
    WORD named = *(const WORD *)(d + 12), ids = *(const WORD *)(d + 14);
    for (int i = 0; i < named + ids; i++) {
        const BYTE *e = d + 16 + i * 8;
        DWORD nm = *(const DWORD *)e, off2 = *(const DWORD *)(e + 4);
        if (!(off2 & 0x80000000)) continue;
        if (!(nm & 0x80000000) && nm != 10) continue;            /* type != RT_RCDATA */
        if ((nm & 0x80000000)) {                                  /* 具名类型也要跳过 */
            char tn[64]; dir_string(base, nm, tn, sizeof tn);
            if (strcmp(tn, "10") != 0) continue;
        }
        const BYTE *nd = d + (off2 & 0x7FFFFFFF);
        WORD n2 = *(const WORD *)(nd + 12), i2 = *(const WORD *)(nd + 14);
        for (int k = 0; k < n2 + i2; k++) {
            const BYTE *e2 = nd + 16 + k * 8;
            DWORD nm2 = *(const DWORD *)e2, o2 = *(const DWORD *)(e2 + 4);
            char rname[64] = "?";
            if (nm2 & 0x80000000) dir_string(base, nm2, rname, sizeof rname);
            else snprintf(rname, sizeof rname, "#%u", nm2);
            if (!(o2 & 0x80000000)) {                 /* 名字项直接是数据（无语言层） */
                const BYTE *de0 = d + o2;             /* 偏移相对资源节基址 */
                DWORD drva = *(const DWORD *)de0, dsz = *(const DWORD *)(de0 + 4);
                DWORD fo = rva2off(drva);
                if (fo && fo + dsz <= g_filesz) fn(rname, g_file + fo, dsz, ud);
                continue;
            }
            const BYTE *ld = d + (o2 & 0x7FFFFFFF);   /* 同理：相对资源节基址 */
            WORD n3 = *(const WORD *)(ld + 12), i3 = *(const WORD *)(ld + 14);
            if (n3 + i3 < 1) continue;
            const BYTE *e3 = ld + 16;                              /* 取第一个语言 */
            DWORD doff2 = *(const DWORD *)(e3 + 4);
            if (doff2 & 0x80000000) continue;
            const BYTE *de = d + doff2;   /* 数据项偏移同样相对资源节基址 */
            DWORD drva = *(const DWORD *)de, dsz = *(const DWORD *)(de + 4);
            DWORD fo = rva2off(drva);
            if (fo && fo + dsz <= g_filesz) fn(rname, g_file + fo, dsz, ud);
        }
    }
}

/* ---------- 清单解析（原 init_config 的字符串手术） ---------- */
static int parse_manifest(const BYTE *p, DWORD n, TREE_ITEM *out, int max)
{
    /* UTF-16LE "path:type:*size*" 序列 */
    static WCHAR w[16384];
    int wl = 0;
    for (DWORD i = 0; i + 1 < n && wl < 16383; i += 2) {
        WCHAR c = (WCHAR)(p[i] | (p[i + 1] << 8));
        if (!c) continue;          /* 内嵌 NUL 只是分隔/填充，不是终止 */
        w[wl++] = c;
    }
    w[wl] = 0;

    int cnt = 0, i = 0;
    while (i < wl && cnt < max) {
        WCHAR path[260]; int pl = 0;
        while (i < wl && w[i] != ':' && pl < 259) path[pl++] = w[i++];
        path[pl] = 0;
        if (i >= wl) break;
        i++;                                     /* ':' */
        int type = 0;
        while (i < wl && w[i] >= '0' && w[i] <= '9') type = type * 10 + (w[i++] - '0');
        if (i < wl && w[i] == ':') i++;
        if (i < wl && w[i] == '*') i++;
        DWORD size = 0;
        while (i < wl && w[i] >= '0' && w[i] <= '9') size = size * 10 + (w[i++] - '0');
        if (i < wl && w[i] == '*') i++;

        memcpy(out[cnt].path, path, sizeof(WCHAR) * (pl + 1));
        out[cnt].is_dir = (type == 16);
        out[cnt].size = size;
        out[cnt].used = 0;
        cnt++;
    }
    return cnt;
}

/* ---------- 落盘（等价 sub_40478D → CreateFile/WriteFile） ---------- */
static int write_tree_file(const WCHAR *rel, const BYTE *data, DWORD n, const char *root)
{
    char narrow[520]; size_t k = 0;
    for (int i = 0; rel[i] && k + 1 < sizeof narrow; i++) {
        WCHAR c = rel[i];
        narrow[k++] = (c == '\\') ? '/' : (char)c;
    }
    narrow[k] = 0;
    char full[1024];
    snprintf(full, sizeof full, "%s/%s", root, narrow);
    for (char *p = full + strlen(root) + 1; *p; p++) {
        if (*p == '/') { *p = 0; 
#ifdef _WIN32
            _mkdir(full);
#else
            mkdir(full, 0755);
#endif
            *p = '/'; }
    }
    FILE *f = fopen(full, "wb");
    if (!f) { fprintf(stderr, "  [!] 写失败 %s\n", full); return 0; }
    size_t w = fwrite(data, 1, n, f);
    fclose(f);
    return w == n;
}

/* ---------- 解密+解压（清单与普通资源共用同一条管线） ---------- */
static int decrypt_blob(const BYTE *raw, DWORD rsz, const BYTE *key, BYTE **out, DWORD *out_len)
{
    if (rsz < 16) return 0;
    BYTE *imp = malloc(rsz);
    memcpy(imp, raw, rsz);
    rc4_crypt(imp, (int)rsz, (const WCHAR *)key);   /* @0x4011EF（key 已是窄串） */

    BLOB_HDR *h = (BLOB_HDR *)imp;
    DWORD want = (DWORD)h->out_len;
    BYTE *dst = malloc(want ? want : 1);
    uLongf dlen = want;
    int zr = uncompress(dst, &dlen, imp + 16, rsz - 16);   /* @0x40EE60 */
    if (zr == Z_OK) { *out = dst; *out_len = (DWORD)dlen; }
    else { free(dst); *out = imp; *out_len = rsz; free(NULL); return 1; } /* 未压缩：返回 imp，注意释放 */
    free(imp);
    return 1;
}

/* ---------- 主流程 ---------- */
typedef struct { RES_ITEM items[MAX_RES]; int n; } RES_LIST;
static void collect(const char *name, const BYTE *p, DWORD sz, void *ud)
{
    RES_LIST *l = ud;
    if (l->n >= MAX_RES) return;
    snprintf(l->items[l->n].name, sizeof l->items[l->n].name, "%s", name);
    l->items[l->n].data = p;
    l->items[l->n].size = sz;
    l->n++;
}

/* ---------- --list ---------- */
static void cmd_list(const char *path)
{
    FILE *f = fopen(path, "rb");
    if (!f) { perror("open"); exit(2); }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    BYTE *buf = malloc(n);
    if (fread(buf, 1, n, f) != (size_t)n) { fprintf(stderr, "short read\n"); exit(2); }
    fclose(f);
    if (!pe_init(buf, n)) { fprintf(stderr, "不是 PE 或没有资源目录\n"); exit(2); }

    RES_LIST rl = {0};
    pe_enum_rcdata(collect, &rl);
    printf("%-42s %10s\n", "RCDATA 资源名", "压缩大小");
    printf("------------------------------------------ ----------\n");
    unsigned long total = 0;
    for (int i = 0; i < rl.n; i++) {
        printf("%-42s %10u\n", rl.items[i].name, rl.items[i].size);
        total += rl.items[i].size;
    }
    printf("共 %d 个，合计 %lu 字节\n", rl.n, total);

    WCHAR keyw[64];
    for (int i = 0; RC4_KEY_W[i]; i++) keyw[i] = RC4_KEY_W[i];
    keyw[32] = 0;
    BYTE key[33]; int kl = 0;
    for (int i = 0; keyw[i] && kl < 32; i++) key[kl++] = (BYTE)keyw[i];
    key[kl] = 0;

    for (int i = 0; i < rl.n; i++) {
        if (strncmp(rl.items[i].name, "B35A2601", 8)) continue;
        BYTE *txt = NULL; DWORD len = 0;
        decrypt_blob(rl.items[i].data, rl.items[i].size, key, &txt, &len);
        TREE_ITEM tree[MAX_TREE];
        int tn = parse_manifest(txt, len, tree, MAX_TREE);
        int dirs = 0, files = 0;
        printf("\n清单: %d 条（目录 %d / 文件 %d）\n", tn,
               ({int d=0; for(int k=0;k<tn;k++) if(tree[k].is_dir) d++; d;}),
               ({int d=0; for(int k=0;k<tn;k++) if(!tree[k].is_dir) d++; d;}));
        (void)dirs; (void)files;
        for (int k = 0; k < tn; k++) {
            char nb[300]; int j = 0;
            for (; tree[k].path[j] && j < 299; j++) nb[j] = (char)tree[k].path[j];
            nb[j] = 0;
            printf("  %-46s %s %u\n", nb, tree[k].is_dir ? "DIR " : "FILE", tree[k].size);
        }
        free(txt);
        break;
    }
    free(buf);
}

/* ---------- --verify ---------- */
static int cmp_tree(const char *a, const char *b, const char *rel)
{
    char pa[1024], pb[1024];
    DIR *da = opendir(a);
    if (!da) { fprintf(stderr, "打不开 %s\n", a); return 1; }
    int bad = 0;
    struct dirent *e;
    while ((e = readdir(da))) {
        if (!strcmp(e->d_name, ".") || !strcmp(e->d_name, "..")) continue;
        snprintf(pa, sizeof pa, "%s/%s", a, e->d_name);
        snprintf(pb, sizeof pb, "%s/%s", b, e->d_name);
        if (e->d_type == DT_DIR) { bad |= cmp_tree(pa, pb, rel); continue; }
        FILE *fa = fopen(pa, "rb"), *fb = fopen(pb, "rb");
        if (!fb) { printf("  缺失: %s/%s\n", rel, e->d_name); bad = 1; if (fa) fclose(fa); continue; }
        if (!fa) { printf("  多余: %s/%s\n", rel, e->d_name); bad = 1; fclose(fb); continue; }
        int ca, cb, diff = 0;
        do { ca = fgetc(fa); cb = fgetc(fb); if (ca != cb) { diff = 1; break; } } while (ca != EOF);
        fclose(fa); fclose(fb);
        if (diff) { printf("  内容不同: %s/%s\n", rel, e->d_name); bad = 1; }
    }
    closedir(da);
    return bad;
}

/* ---------- --selftest ---------- */
void sha1(const BYTE *data, unsigned len, DWORD out[5]);
static int cmd_selftest(void)
{
    DWORD d[5]; char hex[41]; int bad = 0;
    struct { const char *in; const char *want; } v[] = {
        {"abc", "a9993e364706816aba3e25717850c26c9cd0d89d"},
        {"", "da39a3ee5e6b4b0d3255bfef95601890afd80709"},
        {"The quick brown fox jumps over the lazy dog", "2fd4e1c67a2d28fced849ee1bb76e7391b93eb12"},
    };
    for (int i = 0; i < 3; i++) {
        sha1((const BYTE *)v[i].in, (unsigned)strlen(v[i].in), d);
        for (int k = 0; k < 5; k++) sprintf(hex + k * 8, "%08x", d[k]);
        int ok = strcmp(hex, v[i].want) == 0;
        printf("  SHA1(%-45s) %s\n", *v[i].in ? v[i].in : "\"\"", ok ? "OK" : "FAIL");
        if (!ok) bad = 1;
    }
    return bad;
}

static void usage(const char *p)
{
    printf("lian86-unpack —— 由 IDA 伪代码重建的 lian86.exe 资源解包器\n\n");
    printf("用法:\n");
    printf("  %s --list    <lian86.exe>          列出 RCDATA 资源与投放清单\n", p);
    printf("  %s --verify  <lian86.exe> <参考目录> 解包后与参考目录逐字节比对\n", p);
    printf("  %s --selftest                      运行 SHA-1 标准向量自检\n", p);
    printf("  %s <lian86.exe> <输出目录>         解包并落盘\n\n", p);
    printf("说明: 资源 = RC4(32 字节窄串密钥) 后的 [u64 保留][u64 解压长][zlib 流]\n");
}

int main(int argc, char **argv)
{
    if (argc < 2) { usage(argv[0]); return 2; }
    if (!strcmp(argv[1], "-h") || !strcmp(argv[1], "--help")) { usage(argv[0]); return 0; }
    if (!strcmp(argv[1], "--selftest")) return cmd_selftest();
    if (!strcmp(argv[1], "--list") && argc >= 3) { cmd_list(argv[2]); return 0; }
    if (!strcmp(argv[1], "--verify") && argc >= 4) {
        char tmpl[] = "/tmp/lian86-verify-XXXXXX";
        char *dir = mkdtemp(tmpl);
        if (!dir) { perror("mkdtemp"); return 2; }
        char cmd[2048];
        snprintf(cmd, sizeof cmd, "%s %s %s", argv[0], argv[2], dir);
        if (system(cmd) != 0) { fprintf(stderr, "解包失败\n"); return 2; }
        printf("--- 与 %s 比对 ---\n", argv[3]);
        int bad = cmp_tree(dir, argv[3], "");
        printf(bad ? "✘ 存在差异\n" : "✔ 全部文件逐字节一致\n");
        snprintf(cmd, sizeof cmd, "rm -rf '%s'", dir);
        (void)!system(cmd);
        return bad;
    }
    if (argc < 3) { usage(argv[0]); return 2; }
    FILE *f = fopen(argv[1], "rb");
    if (!f) { perror("open"); return 2; }
    fseek(f, 0, SEEK_END); long n = ftell(f); fseek(f, 0, SEEK_SET);
    BYTE *buf = malloc(n);
    if (fread(buf, 1, n, f) != (size_t)n) { fprintf(stderr, "short read\n"); return 2; }
    fclose(f);

    if (!pe_init(buf, n)) { fprintf(stderr, "不是 PE 或没有资源目录\n"); return 2; }

    RES_LIST rl = {0};
    pe_enum_rcdata(collect, &rl);
    printf("RT_RCDATA 资源: %d 个\n", rl.n);

    /* 清单资源（原 init_config 解析的那一份） */
    TREE_ITEM tree[MAX_TREE]; int tn = 0;
    WCHAR keyw[64];
    for (int i = 0; RC4_KEY_W[i]; i++) keyw[i] = RC4_KEY_W[i];
    keyw[32] = 0;
    /* 原文 sub_405700 把宽串转成窄串后才按字节参与 KSA —— 这里等价展开 */
    BYTE key[33]; int kl = 0;
    for (int i = 0; keyw[i] && kl < 32; i++) key[kl++] = (BYTE)keyw[i];
    key[kl] = 0;

    for (int i = 0; i < rl.n; i++) {
        if (strncmp(rl.items[i].name, "B35A2601", 8) == 0) {
            BYTE *mtxt = NULL; DWORD mlen = 0;
            decrypt_blob(rl.items[i].data, rl.items[i].size, key, &mtxt, &mlen);
            tn = parse_manifest(mtxt, mlen, tree, MAX_TREE);
            free(mtxt);
            break;
        }
    }
    printf("清单条目: %d\n", tn);

    /* 输出根目录（原程序先建 workspace） */
    mkdir(argv[2], 0755);

    /* 先按清单建目录（原 sub_40478D 写文件前会逐级建目录） */
    for (int t = 0; t < tn; t++) {
        if (!tree[t].is_dir) continue;
        char rel[520]; int k = 0;
        for (int i = 0; tree[t].path[i] && k < 519; i++)
            rel[k++] = (tree[t].path[i] == '\\') ? '/' : (char)tree[t].path[i];
        rel[k] = 0;
        char *q = strrchr(rel, '/');
        if (q) *q = 0; else continue;         /* 去掉末尾的 "?" 占位 */
        char full[1024]; snprintf(full, sizeof full, "%s/%s", argv[2], rel);
        { char tmp[1024]; snprintf(tmp, sizeof tmp, "%s", full);
          for (char *c = tmp + strlen(argv[2]) + 1; *c; c++)
              if (*c == '/') { *c = 0; mkdir(tmp, 0755); *c = '/'; }
          mkdir(tmp, 0755); }
    }

    int written = 0, skipped = 0;
    for (int i = 0; i < rl.n; i++) {
        const BYTE *raw = rl.items[i].data;
        DWORD rsz = rl.items[i].size;
        if (rsz < 16 || rsz > 16 * 1024 * 1024) continue;

        BYTE *fin_buf = NULL; DWORD fin_len = 0;
        decrypt_blob(raw, rsz, key, &fin_buf, &fin_len);
        const BYTE *fin = fin_buf;

        /* 按清单里的 size 认领路径（原 resource_worker 的匹配语义） */
        int matched = -1;
        for (int t = 0; t < tn; t++) {
            if (!tree[t].is_dir && !tree[t].used && tree[t].size == fin_len) {
                matched = t; break;
            }
        }
        if (matched >= 0) {
            tree[matched].used = 1;
            if (write_tree_file(tree[matched].path, fin, fin_len, argv[2])) written++;
            else skipped++;
        } else {
            skipped++;
        }
        free(fin_buf);
    }
    printf("落盘 %d 个，未匹配 %d 个\n", written, skipped);
    free(buf);
    return 0;
}
