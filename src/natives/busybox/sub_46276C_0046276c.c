// busybox.exe @ 0x46276c size=35

int sub_46276C(int a1, int a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407CD0(a1, a2, (int)va);
}

