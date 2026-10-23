// gettime.exe @ 0x427346 size=101

unsigned int __cdecl __acrt_CompareStringW(
        wchar_t *a1,
        DWORD dwCmpFlags,
        wchar_t *Source,
        int MaxCount,
        PCNZWCH lpString2,
        int a6)
{
  size_t v6; // esi
  size_t v7; // eax
  int v9; // esi

  v6 = MaxCount;
  if ( MaxCount > 0 )
    v6 = wcsnlen(Source, MaxCount);
  v7 = a6;
  if ( a6 > 0 )
    v7 = wcsnlen(lpString2, a6);
  if ( v6 != 0 && v7 != 0 )
    return __acrt_CompareStringEx(a1, dwCmpFlags, Source, v6, lpString2, v7, 0, 0, 0);
  v9 = v6 - v7;
  if ( v9 != 0 )
    return ((v9 >> 31) & 0xFFFFFFFE) + 3;
  else
    return 2;
}

