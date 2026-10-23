// gettime.exe @ 0x41f510 size=11

errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  return common_tcsncpy_s<wchar_t>(Destination, SizeInWords, (int)Source, MaxCount);
}

