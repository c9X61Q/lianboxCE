// busybox.exe @ 0x4628b0 size=35

int sub_4628B0(int a1, int a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407CD0(a1, (int)"%0*llo", (int)va);
}

