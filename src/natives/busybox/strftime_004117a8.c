// busybox.exe @ 0x4117a8 size=6

// attributes: thunk
size_t __cdecl strftime(char *Buffer, size_t SizeInBytes, const char *Format, const struct tm *Tm)
{
  return __imp_strftime(Buffer, SizeInBytes, Format, Tm);
}

