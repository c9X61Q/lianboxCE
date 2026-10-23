// busybox.exe @ 0x4036c0 size=116

int sub_4036C0(char *Format, ...)
{
  char *v1; // esi
  FILE *Stream; // eax
  FILE *v3; // eax
  FILE *v4; // eax
  va_list va; // [esp+24h] [ebp+8h] BYREF

  va_start(va, Format);
  v1 = **_p___argv();
  Stream = (FILE *)sub_4113D0(2);
  fprintf(Stream, "%s: ", v1);
  v3 = (FILE *)sub_4113D0(2);
  vfprintf(v3, Format, va);
  v4 = (FILE *)sub_4113D0(2);
  return fputc(10, v4);
}

