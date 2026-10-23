// gettime.exe @ 0x422003 size=134

errno_t __cdecl GetLocaleNameFromDefault(int a1)
{
  errno_t result; // eax
  wchar_t Source[86]; // [esp+4h] [ebp-B0h] BYREF

  *(_DWORD *)(a1 + 8) |= 0x104u;
  result = __acrt_GetUserDefaultLocaleName(Source, 0x55u);
  if ( result > 1 )
  {
    result = wcsncpy_s((wchar_t *)(a1 + 592), 0x55u, Source, wcslen(Source) + 1);
    if ( result != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  return result;
}

