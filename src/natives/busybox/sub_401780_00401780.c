// busybox.exe @ 0x401780 size=89

void __noreturn sub_401780(char *Format, ...)
{
  FILE *Stream; // eax
  FILE *v2; // eax
  va_list va; // [esp+24h] [ebp+8h] BYREF

  va_start(va, Format);
  Stream = (FILE *)sub_4113D0(2);
  fwrite("Mingw-w64 runtime failure:\n", 1u, 0x1Bu, Stream);
  v2 = (FILE *)sub_4113D0(2);
  vfprintf(v2, Format, va);
  abort();
}

