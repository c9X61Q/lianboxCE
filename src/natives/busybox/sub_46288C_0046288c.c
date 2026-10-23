// busybox.exe @ 0x46288c size=35

int sub_46288C(int a1, const char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407CD0(a1, (int)"%.15s/", (int)va);
}

