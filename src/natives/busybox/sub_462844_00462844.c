// busybox.exe @ 0x462844 size=35

int sub_462844(int a1, const char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407CD0(a1, (int)"%lld", (int)va);
}

