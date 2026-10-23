// gettime.exe @ 0x4273ab size=109

int __cdecl _strnicmp(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_438A0C != 0 )
    return _strnicmp_l(String1, String2, MaxCount, nullptr);
  if ( String1 != nullptr && String2 != nullptr && MaxCount <= 0x7FFFFFFF )
    return __ascii_strnicmp(String1, String2, MaxCount);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

