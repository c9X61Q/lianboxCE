// gettime.exe @ 0x422a8c size=95

_DWORD *__cdecl GetLcidFromLanguage(_DWORD *a1)
{
  struct __acrt_ptd *v1; // esi
  int PrimaryLen_0; // edx
  __int16 *v3; // ecx
  _WORD *v4; // edi
  __int16 v5; // ax
  int v6; // ecx
  _DWORD *result; // eax

  v1 = __acrt_getptd();
  PrimaryLen_0 = 2;
  v3 = *((__int16 **)v1 + 20);
  v4 = v3 + 1;
  do
    v5 = *v3++;
  while ( v5 != 0 );
  v6 = v3 - v4;
  *((_DWORD *)v1 + 24) = v6 == 3;
  if ( v6 != 3 )
    PrimaryLen_0 = GetPrimaryLen_0(*((_DWORD *)v1 + 20));
  *((_DWORD *)v1 + 23) = PrimaryLen_0;
  EnumSystemLocalesW(LanguageEnumProc, 1u);
  result = a1;
  if ( (*(_BYTE *)a1 & 4) == 0 )
    *a1 = 0;
  return result;
}

