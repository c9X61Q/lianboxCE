// busybox.exe @ 0x411740 size=6

// attributes: thunk
int __cdecl vfprintf(FILE *const Stream, const char *const Format, va_list ArgList)
{
  return __imp_vfprintf(Stream, Format, ArgList);
}

