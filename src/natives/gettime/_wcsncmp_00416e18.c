// gettime.exe @ 0x416e18 size=58

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int result; // eax

  result = MaxCount;
  if ( MaxCount != 0 )
  {
    while ( --result != 0 && *String1 != 0 && *String1 == *String2 )
    {
      ++String1;
      ++String2;
    }
    return *String1 - *String2;
  }
  return result;
}

