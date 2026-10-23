// gettime.exe @ 0x422640 size=77

BOOL __cdecl TestDefaultCountry(wchar_t *String2)
{
  wchar_t String1[10]; // [esp+4h] [ebp-18h] BYREF

  return __acrt_GetLocaleInfoEx(String2, 0x59u, String1, 9) != 0 && wcsncmp(String1, String2, 9u) == 0;
}

