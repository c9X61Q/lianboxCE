// gettime.exe @ 0x422491 size=190

BOOL __stdcall LanguageEnumProcEx(wchar_t *Source, int a2, int a3)
{
  struct __acrt_ptd *v3; // esi
  wchar_t String2[120]; // [esp+8h] [ebp-F4h] BYREF

  v3 = __acrt_getptd();
  if ( __acrt_GetLocaleInfoEx(Source, *((_DWORD *)v3 + 24) != 0 ? 3 : 4097, String2, 120) != 0 )
  {
    if ( _wcsicmp(*((const wchar_t **)v3 + 20), String2) == 0 )
    {
      if ( wcsncpy_s((wchar_t *)v3 + 336, 0x55u, Source, wcslen(Source) + 1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      *((_DWORD *)v3 + 22) |= 4u;
    }
    return (*((_DWORD *)v3 + 22) & 4) == 0;
  }
  else
  {
    *((_DWORD *)v3 + 22) = 0;
    return true;
  }
}

