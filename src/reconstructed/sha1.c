/*
 * sha1.c —— 重建自 sub_40B9C7（压缩函数）/ sub_40CCB6（流式 update）
 *
 * 反编译破坏点：
 *   1) 结构体没有类型：a1[0..4]=h0..h4, a1[5]=bitlen 低, a1[6]=bitlen 高,
 *      缓冲在 (BYTE*)a1+28 —— 伪代码里全是 a1+7 / a1+6 的裸偏移
 *   2) 轮常量被写成十进制魔术数 1518500249 等 → 还原为 0x5A827999 系列
 *   3) f 函数写成 v5 ^ v4 & (v6 ^ v5) → 还原为 Ch(x,y,z)
 *   4) __ROL4__/__ROR4__ 的字节序处理被用在输入装载处（big-endian 转换）
 */
#include "lian86.h"

typedef struct {
    DWORD h[5];      /* a1[0..4] */
    DWORD len_lo;    /* a1[5]     */
    DWORD len_hi;    /* a1[6]     */
    BYTE  buf[64];   /* (BYTE*)a1 + 28 */
} SHA1_CTX;

#define ROL(x,n) (((x) << (n)) | ((x) >> (32 - (n))))
#define Ch(x,y,z) (((x) & (y)) ^ (~(x) & (z)))
#define Parity(x,y,z) ((x) ^ (y) ^ (z))
#define Maj(x,y,z) (((x) & (y)) | ((z) & ((x) | (y))))

static DWORD be32(const BYTE *p)
{
    return ((DWORD)p[0] << 24) | ((DWORD)p[1] << 16) | ((DWORD)p[2] << 8) | p[3];
}

/* @0x0040B9C7 —— 与原文一致：一次处理 64 字节，写回 ctx->h */
void sha1_block(DWORD *state, const BYTE *blk, DWORD *w)
{
    DWORD a = state[0], b = state[1], c = state[2], d = state[3], e = state[4];
    DWORD t;
    for (int i = 0; i < 16; i++) w[i] = be32(blk + i * 4);
    for (int i = 16; i < 80; i++)
        w[i] = ROL(w[i-3] ^ w[i-8] ^ w[i-14] ^ w[i-16], 1);

    for (int i = 0; i < 80; i++) {
        DWORD f, k;
        if (i < 20)      { f = Ch(b,c,d);          k = 0x5A827999; }  /* 原文 1518500249 */
        else if (i < 40) { f = Parity(b,c,d);      k = 0x6ED9EBA1; }
        else if (i < 60) { f = Maj(b,c,d);         k = 0x8F1BBCDC; }
        else             { f = Parity(b,c,d);      k = 0xCA62C1D6; }
        t = ROL(a,5) + f + e + k + w[i];
        e = d; d = c; c = ROL(b,30); b = a; a = t;
    }
    state[0]+=a; state[1]+=b; state[2]+=c; state[3]+=d; state[4]+=e;
}

/* @0x0040CCB6 */
void *sha1_update(DWORD *ctx, const BYTE *data, unsigned len)
{
    SHA1_CTX *c = (SHA1_CTX *)ctx;
    static DWORD w[80];
    unsigned off = (c->len_lo >> 3) & 63;
    c->len_lo += len << 3;
    if (c->len_lo < (len << 3)) c->len_hi++;
    c->len_hi += len >> 29;

    if (off + len >= 64) {
        unsigned n = 64 - off;
        memcpy(c->buf + off, data, n);
        sha1_block(c->h, c->buf, w);
        unsigned i;
        for (i = n; i + 63 < len; i += 64) sha1_block(c->h, data + i, w);
        off = 0; data += i; len -= i;
    }
    memcpy(c->buf + off, data, len);
    return c->buf + off;
}

/* 便利封装：一次性摘要（原文由调用方拼 ctx + final） */
void sha1(const BYTE *data, unsigned len, DWORD out[5])
{
    SHA1_CTX c;
    c.h[0]=0x67452301; c.h[1]=0xEFCDAB89; c.h[2]=0x98BADCFE; c.h[3]=0x10325476; c.h[4]=0xC3D2E1F0;
    c.len_lo = c.len_hi = 0;
    sha1_update(c.h, data, len);
    unsigned off = (c.len_lo >> 3) & 63;
    BYTE pad[128]; unsigned padlen;
    DWORD bits_lo = c.len_lo, bits_hi = c.len_hi;
    pad[0] = 0x80; memset(pad+1, 0, sizeof pad - 1);
    padlen = (off < 56) ? (56 - off) : (120 - off);
    sha1_update(c.h, pad, padlen);
    BYTE lenb[8] = { bits_hi>>24, bits_hi>>16, bits_hi>>8, bits_hi,
                     bits_lo>>24, bits_lo>>16, bits_lo>>8, bits_lo };
    sha1_update(c.h, lenb, 8);
    memcpy(out, c.h, 5 * sizeof(DWORD));
}
