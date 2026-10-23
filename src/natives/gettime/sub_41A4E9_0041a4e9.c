// gettime.exe @ 0x41a4e9 size=93

int __stdcall sub_41A4E9(
        wchar_t *a1,
        DWORD dwMapFlags,
        LPCWSTR lpSrcStr,
        int cchSrc,
        LPWSTR lpDestStr,
        int cchDest,
        int a7,
        int a8,
        int a9)
{
  int (__stdcall *v9)(); // eax
  LCID v11; // eax

  v9 = sub_41A019();
  if ( v9 != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), wchar_t *, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int))v9)(
             v9,
             a1,
             dwMapFlags,
             lpSrcStr,
             cchSrc,
             lpDestStr,
             cchDest,
             a7,
             a8,
             a9);
  v11 = __acrt_LocaleNameToLCID(a1, 0);
  return LCMapStringW(v11, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}

