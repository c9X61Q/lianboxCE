// busybox.exe @ 0x435d44 size=25

int sub_435D44(int a1, int a2, ...)
{
  va_list va; // [esp+10h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_46CBD8(0, a2, va);
}

