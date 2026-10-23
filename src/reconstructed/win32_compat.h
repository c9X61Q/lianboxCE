/* win32_compat.h —— 让重建后的代码在非 Windows 上也能编译/自检的最小兼容层
 * 只提供重建代码实际用到的类型与内建宏，不模拟 Win32 行为。 */
#ifndef WIN32_COMPAT_H
#define WIN32_COMPAT_H
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
typedef uint8_t  BYTE;
typedef uint16_t WORD;
typedef uint32_t DWORD;   /* 原文所有 dword_ 全局的真身 */
typedef int32_t  LONG;
typedef int      BOOL;
typedef void    *HANDLE;
typedef void    *HMODULE;
typedef void    *HRSRC;
typedef void    *HGLOBAL;
typedef void    *LPVOID;
typedef const void *LPCVOID;
typedef char     CHAR;
typedef uint16_t WCHAR;
typedef WCHAR   *LPWSTR;
typedef const WCHAR *LPCWSTR;
typedef intptr_t LONG_PTR;
#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif
#define CALLBACK
#define SecureZeroMemory(p,n) memset((p),0,(n))
#define WINAPI
#endif
