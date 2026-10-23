// gettime.exe @ 0x427308 size=62

int __cdecl __acrt_LCMapStringW(
        wchar_t *a1,
        DWORD dwMapFlags,
        wchar_t *Source,
        int MaxCount,
        LPWSTR lpDestStr,
        int cchDest)
{
  int v6; // esi
  signed int v7; // eax

  v6 = MaxCount;
  if ( MaxCount > 0 )
  {
    v7 = wcsnlen(Source, MaxCount);
    v6 = v7 + 1;
    if ( v7 >= MaxCount )
      v6 = v7;
  }
  return sub_41A4E9(a1, dwMapFlags, Source, v6, lpDestStr, cchDest, 0, 0, 0);
}

