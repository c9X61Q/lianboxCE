// gettime.exe @ 0x422d6a size=213

BOOL __stdcall LanguageEnumProc(LPWSTR a1)
{
  struct __acrt_ptd *v1; // ebx
  _DWORD *v2; // edi
  LCID v3; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  WCHAR LCData[120]; // [esp+Ch] [ebp-F4h] BYREF

  v1 = __acrt_getptd();
  v2 = *((_DWORD **)__acrt_getptd() + 211);
  v3 = LcidFromHexString(a1);
  if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 24) != 0 ? 3 : 4097, LCData, 120) == 0 )
  {
    *v2 = 0;
    return true;
  }
  v5 = _wcsicmp(*((const wchar_t **)v1 + 20), LCData);
  v6 = *((_DWORD *)v1 + 24);
  if ( v5 != 0 )
  {
    if ( v6 != 0 || *((_DWORD *)v1 + 23) == 0 || _wcsicmp(*((const wchar_t **)v1 + 20), LCData) != 0 )
      return (*v2 & 4) == 0;
    v7 = TestDefaultLanguage(v3, 0);
  }
  else
  {
    if ( v6 != 0 )
    {
LABEL_11:
      *v2 |= 4u;
      v2[1] = v3;
      v2[2] = v3;
      return (*v2 & 4) == 0;
    }
    v7 = TestDefaultLanguage(v3, 1);
  }
  if ( v7 != 0 )
    goto LABEL_11;
  return (*v2 & 4) == 0;
}

