// busybox.exe @ 0x435d60 size=27

int sub_435D60(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+14h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_46CBD8(a3, a2, va);
}

