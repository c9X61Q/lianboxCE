// gettime.exe @ 0x41f2d2 size=73

int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  if ( dword_438A0C != 0 )
    return _wcsicmp_l(String1, String2, nullptr);
  if ( String1 != nullptr && String2 != nullptr )
    return __ascii_wcsicmp((unsigned __int16 *)String1, (unsigned __int16 *)String2);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

