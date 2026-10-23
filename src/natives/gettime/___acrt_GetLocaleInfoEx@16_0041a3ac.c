// gettime.exe @ 0x41a3ac size=63

int __stdcall __acrt_GetLocaleInfoEx(wchar_t *a1, LCTYPE LCType, LPWSTR lpLCData, int cchData)
{
  int (__stdcall *InitializeCriticalSection)(); // eax
  LCID v6; // eax

  InitializeCriticalSection = try_get_InitializeCriticalSectionEx();
  if ( InitializeCriticalSection != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), wchar_t *, LCTYPE, LPWSTR, int))InitializeCriticalSection)(
             InitializeCriticalSection,
             a1,
             LCType,
             lpLCData,
             cchData);
  v6 = __acrt_LocaleNameToLCID(a1, 0);
  return GetLocaleInfoW(v6, LCType, lpLCData, cchData);
}

