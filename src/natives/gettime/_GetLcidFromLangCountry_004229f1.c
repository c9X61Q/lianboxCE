// gettime.exe @ 0x4229f1 size=155

bool __cdecl GetLcidFromLangCountry(_DWORD *a1)
{
  struct __acrt_ptd *v1; // esi
  int PrimaryLen_0; // edx
  __int16 *v3; // ecx
  _WORD *v4; // edi
  __int16 v5; // ax
  bool v6; // zf
  __int16 *v7; // ecx
  _WORD *v8; // edi
  __int16 v9; // ax
  bool result; // al

  v1 = __acrt_getptd();
  PrimaryLen_0 = 2;
  v3 = *((__int16 **)v1 + 20);
  v4 = v3 + 1;
  do
    v5 = *v3++;
  while ( v5 != 0 );
  v6 = v3 - v4 == 3;
  v7 = *((__int16 **)v1 + 21);
  *((_DWORD *)v1 + 24) = v6;
  v8 = v7 + 1;
  do
    v9 = *v7++;
  while ( v9 != 0 );
  *((_DWORD *)v1 + 25) = v7 - v8 == 3;
  a1[1] = 0;
  if ( *((_DWORD *)v1 + 24) == 0 )
    PrimaryLen_0 = GetPrimaryLen_0(*((_DWORD *)v1 + 20));
  *((_DWORD *)v1 + 23) = PrimaryLen_0;
  EnumSystemLocalesW(LangCountryEnumProc, 1u);
  result = (*a1 & 0x100) != 0;
  if ( (*a1 & 0x200) == 0 || (*a1 & 7) == 0 || !result )
    *a1 = 0;
  return result;
}

