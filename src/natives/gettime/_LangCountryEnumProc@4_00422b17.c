// gettime.exe @ 0x422b17 size=595

BOOL __stdcall LangCountryEnumProc(LPWSTR a1)
{
  struct __acrt_ptd *v1; // ebx
  int *v2; // edi
  LCID v3; // esi
  int v4; // eax
  int v5; // ecx
  __int16 *v6; // ecx
  _WORD *v7; // edx
  __int16 v8; // ax
  int v9; // edx
  int v10; // ecx
  bool v11; // zf
  __int16 *v12; // edx
  __int16 v13; // ax
  _WORD *v15; // [esp+Ch] [ebp-FCh]
  WCHAR LCData[120]; // [esp+14h] [ebp-F4h] BYREF

  v1 = __acrt_getptd();
  v2 = *((int **)__acrt_getptd() + 211);
  v3 = LcidFromHexString(a1);
  if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 25) != 0 ? 7 : 4098, LCData, 120) == 0 )
    goto LABEL_38;
  if ( _wcsicmp(*((const wchar_t **)v1 + 21), LCData) != 0 )
    goto LABEL_17;
  if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 24) != 0 ? 3 : 4097, LCData, 120) == 0 )
    goto LABEL_38;
  v4 = _wcsicmp(*((const wchar_t **)v1 + 20), LCData);
  v5 = *v2;
  if ( v4 == 0 )
  {
    v2[1] = v3;
    *v2 = v5 | 0x304;
LABEL_16:
    v2[2] = v3;
    goto LABEL_17;
  }
  if ( (v5 & 2) == 0 )
  {
    if ( *((_DWORD *)v1 + 23) != 0 && _wcsnicmp(*((const wchar_t **)v1 + 20), LCData, *((_DWORD *)v1 + 23)) == 0 )
    {
      *v2 |= 2u;
      v2[2] = v3;
      v6 = *((__int16 **)v1 + 20);
      v7 = v6 + 1;
      do
        v8 = *v6++;
      while ( v8 != 0 );
      if ( v6 - v7 == *((_DWORD *)v1 + 23) )
        v2[1] = v3;
      goto LABEL_17;
    }
    if ( (*v2 & 1) == 0 && TestDefaultCountry_0(v3) != 0 )
    {
      *v2 = v9 | 1;
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( (*v2 & 0x300) == 0x300 )
    return (*v2 & 4) == 0;
  if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 24) != 0 ? 3 : 4097, LCData, 120) != 0 )
  {
    if ( _wcsicmp(*((const wchar_t **)v1 + 20), LCData) != 0 )
    {
      if ( *((_DWORD *)v1 + 24) != 0
        || *((_DWORD *)v1 + 23) == 0
        || _wcsicmp(*((const wchar_t **)v1 + 20), LCData) != 0
        || TestDefaultLanguage(v3, 0) == 0 )
      {
        return (*v2 & 4) == 0;
      }
      *v2 |= 0x100u;
      v11 = v2[1] == 0;
      goto LABEL_35;
    }
    v10 = *v2 | 0x200;
    *v2 = v10;
    if ( *((_DWORD *)v1 + 24) == 0 && *((_DWORD *)v1 + 23) != 0 )
    {
      v12 = *((__int16 **)v1 + 20);
      v15 = v12 + 1;
      do
        v13 = *v12++;
      while ( v13 != 0 );
      if ( v12 - v15 == *((_DWORD *)v1 + 23) )
      {
        if ( TestDefaultLanguage(v3, 1) != 0 )
        {
          *v2 |= 0x100u;
          goto LABEL_22;
        }
        return (*v2 & 4) == 0;
      }
    }
    *v2 = v10 | 0x100;
LABEL_22:
    v11 = v2[1] == 0;
LABEL_35:
    if ( v11 )
      v2[1] = v3;
    return (*v2 & 4) == 0;
  }
LABEL_38:
  *v2 = 0;
  return true;
}

