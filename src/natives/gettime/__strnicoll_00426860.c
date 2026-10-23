// gettime.exe @ 0x426860 size=41

int __cdecl _strnicoll(const char *String1, const char *String2, size_t MaxCount)
{
  if ( dword_438A0C != 0 )
    return _strnicoll_l(String1, String2, MaxCount, nullptr);
  else
    return _strnicmp(String1, String2, MaxCount);
}

