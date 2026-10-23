/*
 * lian86.h —— 由 IDA Hex-Ray 伪代码重建的类型与声明
 *
 * 反编译破坏点及修复：
 *   1) 全局都是 dword_4180xx 的无名整数 → 按用途命名并给出正确类型
 *   2) 指针被降级为 int/_DWORD → 全部还原为指针
 *   3) 字符串常量 asc_4170xx 未解析 → 见 strings.h（含 API 名表）
 *   4) 12 字节表项没有结构 → TREE_ENTRY
 *   5) __userpurge / __OFADD__ 等编译器内建痕迹 → 用正常 C 表达
 *   括号里的原始地址用于和 src/lian86x86 下的逐函数伪代码对照。
 */
#ifndef LIAN86_H
#define LIAN86_H

#include <stdint.h>
#ifdef _WIN32
#include <windows.h>
#else
#include "win32_compat.h"
#endif

/* ---- 与反编译表项布局一致的解包清单结构（dword_4180F0，步长 12） ---- */
typedef struct TREE_ENTRY {
    DWORD   size;       /* +0 : 原始大小（清单里 *N* 的数字）        */
    WCHAR  *path;       /* +4 : 相对路径，如 L"bin\\calc.bat"        */
    DWORD   reserved;   /* +8 : sub_4059E0() 的返回值，未参与解包    */
} TREE_ENTRY;

/* ---- 全局（原名 → 新名） ----
 * dword_4180A8  g_base_dir     解包根目录（运行期拼出）
 * dword_4180C4  g_sep          路径分隔串（asc_41703A = L"\\"）
 * dword_4180F0  g_tree         清单表数组
 * dword_4180D8  g_done_count   已落盘计数
 * dword_4180DC  g_log_verbose  是否调 sub_40ADC5 记日志
 * dword_4180C0  g_threaded     1=开线程解包
 * dword_418070  g_worker_handle
 * dword_41808C  g_api_names    运行期 API 名表指针（0x4170C8 / 0x41707C）
 */
extern WCHAR *g_base_dir;      /* @0x004180A8 */
extern WCHAR *g_sep;           /* @0x004180C4 */
extern TREE_ENTRY *g_tree;     /* @0x004180F0 */
extern DWORD  g_done_count;    /* @0x004180D8 */
extern int    g_log_verbose;   /* @0x004180DC */
extern int    g_threaded;      /* @0x004180C0 */

/* ---- 解包管线（地址即原函数） ---- */
BOOL  unpack_initiate(void);                                   /* @0x00401BA0 */
BOOL  CALLBACK enum_types_cb(HMODULE, LPWSTR, LONG_PTR);        /* @0x00402033 */
BOOL  CALLBACK enum_names_cb(HMODULE, LPCWSTR, LPWSTR, LONG_PTR);/* @0x00402E03 */
void *load_resource_copy(HMODULE, HRSRC);                      /* @0x00402664 */
void  resource_worker(void *param);                            /* @0x004026C7 */

/* ---- 密码学 ---- */
void  rc4_crypt(BYTE *buf, int len, const WCHAR *key);         /* @0x004011EF */
void  sha1_block(DWORD *state, const BYTE *blk, DWORD *w);      /* @0x0040B9C7 */
void *sha1_update(DWORD *ctx, const BYTE *data, unsigned len);  /* @0x0040CCB6 */
int   zlib_inflate_blob(void *dst, DWORD *dst_len, const BYTE *src, DWORD src_len); /* @0x0040EE60 */
DWORD crc32_update(DWORD crc, const BYTE *p, unsigned len);     /* @0x00410CA0 */

/* ---- 常量（见 strings.h） ---- */
#define RC4_KEY_W  L"034E320527074386435FEB4BE077281E"   /* 资源解密主密钥 */
#define DECOY_KEY_W L"HQRIQPHSPUHUR38TR3Sfif4fi07728Ii"  /* 9 字节小串用的第二把 */

/* 解包容器头：16 字节，之后是 zlib 流 */
#pragma pack(push,1)
typedef struct BLOB_HDR { uint64_t reserved; uint64_t out_len; } BLOB_HDR;
#pragma pack(pop)

#endif /* LIAN86_H */
