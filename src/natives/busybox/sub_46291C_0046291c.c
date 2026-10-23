// busybox.exe @ 0x46291c size=35

int sub_46291C(int a1, int a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407CD0(a1, (int)"%s%s", (int)va);
}

