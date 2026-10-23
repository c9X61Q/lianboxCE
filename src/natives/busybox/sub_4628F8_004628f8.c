// busybox.exe @ 0x4628f8 size=35

int sub_4628F8(int a1, const char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407CD0(a1, (int)"%03o", (int)va);
}

