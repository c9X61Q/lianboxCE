/* strings.h —— 反编译中未解析的字符串常量（按 VA 定位后恢复原文） */
#ifndef STRINGS_H
#define STRINGS_H
/* asc_41702E @0x0041702E */ #define S_STAR        L"*"
/* asc_41703A @0x0041703A */ #define S_BACKSLASH   L"\\"
/* asc_41703E @0x0041703E */ #define S_DOT         L"."
/* unk_4170C8 / unk_41707C : 运行期 GetProcAddress 用的 API 名表，按字母序，
 * 形如 "MessageBoxW\0\0\0\0DefWindowProcW\0\0\0\0DestroyWindow\0..."，
 * 不是密文——这是静态导入只有 138 个的原因。 */
#endif
