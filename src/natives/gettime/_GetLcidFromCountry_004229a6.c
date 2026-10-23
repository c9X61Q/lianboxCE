// gettime.exe @ 0x4229a6 size=75

_DWORD *__cdecl GetLcidFromCountry(_DWORD *a1)
{
  struct __acrt_ptd *v1; // edx
  __int16 *v2; // ecx
  _WORD *v3; // esi
  __int16 v4; // ax
  _DWORD *result; // eax

  v1 = __acrt_getptd();
  v2 = *((__int16 **)v1 + 21);
  v3 = v2 + 1;
  do
    v4 = *v2++;
  while ( v4 != 0 );
  *((_DWORD *)v1 + 25) = v2 - v3 == 3;
  EnumSystemLocalesW(CountryEnumProc, 1u);
  result = a1;
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

