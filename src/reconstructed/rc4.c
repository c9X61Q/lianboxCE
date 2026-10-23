/*
 * rc4.c —— 重建自 sub_4011EF @0x004011EF
 *
 * 反编译原文特征（保留以证明等价）：
 *   S 盒与 K 盒都是 DWORD 数组（每项 4 字节，只用低 8 位）：
 *       *v19++ = v13;                      // S[i] = i
 *       *(_DWORD *)(v12[0]+4*v13) = *v20++;// K[i] = key[i % keylen]（遇 0 回卷）
 *   KSA:  v14 = (u8)(K[i] + S[i] + v14); swap(S[i], S[v14]);
 *   PRGA: v13 = (u8)(v13+1); v14 = (u8)(S[v13]+v14);
 *         swap(S[v13],S[v14]); out[i] = in[i] ^ S[(u8)(S[v14]+S[v13])];
 *
 * 反编译破坏点：
 *   - 数组元素类型被写成 int/DWORD，实际语义是字节
 *   - keylen 被硬编码成 32（mov [esp+4Ch+var_44], 20h）
 *   - 用 _BYTE* 与 _DWORD* 混用做异或，掩盖了「逐字节」语义
 */
#include "lian86.h"

#define KEYLEN 32

void rc4_crypt(BYTE *buf, int len, const WCHAR *key)
{
    DWORD S[256], K[256];
    int i, j = 0;
    int klen = KEYLEN;                  /* 原文：var_44 = 0x20 */
    const BYTE *kb = (const BYTE *)key;  /* 原文经 sub_405700 转成窄串后按字节读 */

    /* ---- KSA ---- */
    for (i = 0; i < 256; i++) {
        S[i] = (DWORD)i;
        K[i] = kb[i % klen];            /* 原文：遇 0 回卷到 key 头 */
    }
    for (i = 0; i < 256; i++) {
        DWORD t;
        j = (BYTE)(K[i] + S[i] + j);
        t = S[i]; S[i] = S[j]; S[j] = t;
    }

    /* ---- PRGA ---- */
    {
        int a = 0, b = 0;
        for (i = 0; i < len; i++) {
            DWORD t;
            a = (BYTE)(a + 1);
            b = (BYTE)(S[a] + b);
            t = S[a]; S[a] = S[b]; S[b] = t;
            buf[i] ^= (BYTE)S[(BYTE)(S[b] + S[a])];
        }
    }

    SecureZeroMemory(S, sizeof(S));
    SecureZeroMemory(K, sizeof(K));
}
