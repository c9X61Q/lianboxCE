// gettime.exe @ 0x426b96 size=76

int __cdecl _wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( dword_438A0C != 0 )
    return _wcsnicmp_l(String1, String2, MaxCount, nullptr);
  if ( String1 != nullptr && String2 != nullptr )
    return sub_426B47((unsigned __int16 *)String1, (unsigned __int16 *)String2, MaxCount);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

