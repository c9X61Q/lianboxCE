// gettime.exe @ 0x421bb7 size=11

errno_t __cdecl wcsncat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  return common_tcsncat_s<wchar_t>((char *)Destination, SizeInWords, (__int16 *)Source, MaxCount);
}

