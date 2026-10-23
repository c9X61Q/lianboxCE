// busybox.exe @ 0x463088 size=102

char *sub_463088(int a1, ...)
{
  int v1; // ebx
  char *Destination; // esi
  char *result; // eax
  va_list va; // [esp+24h] [ebp+8h] BYREF

  va_start(va, a1);
  v1 = dword_486010;
  Destination = (char *)(dword_486010 + 384);
  strcpy((char *)(dword_486010 + 384), "\x1B[7m");
  sub_407C50(v1 + 388, 191, a1, (int)va);
  result = strcat(Destination, "\x1B[m");
  *(_DWORD *)(v1 + 56) = 8;
  return result;
}

