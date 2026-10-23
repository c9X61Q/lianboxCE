// gettime.exe @ 0x426733 size=109

int __cdecl sub_426733(wchar_t *String1, wchar_t *String2, size_t MaxCount)
{
  if ( dword_438A0C != 0 )
    return _wcsnicoll_l(String1, String2, MaxCount, nullptr);
  if ( String1 != nullptr && String2 != nullptr && MaxCount <= 0x7FFFFFFF )
    return sub_426B47(String1, String2, MaxCount);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0x7FFFFFFF;
}

