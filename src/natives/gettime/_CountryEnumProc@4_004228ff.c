// gettime.exe @ 0x4228ff size=167

BOOL __stdcall CountryEnumProc(LPWSTR a1)
{
  struct __acrt_ptd *v1; // ebx
  _DWORD *v2; // edi
  LCID v3; // esi
  WCHAR LCData[120]; // [esp+Ch] [ebp-F4h] BYREF

  v1 = __acrt_getptd();
  v2 = *((_DWORD **)__acrt_getptd() + 211);
  v3 = LcidFromHexString(a1);
  if ( GetLocaleInfoW(v3, *((_DWORD *)v1 + 25) != 0 ? 7 : 4098, LCData, 120) != 0 )
  {
    if ( _wcsicmp(*((const wchar_t **)v1 + 21), LCData) == 0 && TestDefaultCountry_0(v3) != 0 )
    {
      *v2 |= 4u;
      v2[2] = v3;
      v2[1] = v3;
    }
    return (*v2 & 4) == 0;
  }
  else
  {
    *v2 = 0;
    return true;
  }
}

