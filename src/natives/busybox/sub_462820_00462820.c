// busybox.exe @ 0x462820 size=35

int sub_462820(int a1, const char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407CD0((int)&qword_485BF8, (int)"REST %llu", (int)va);
}

