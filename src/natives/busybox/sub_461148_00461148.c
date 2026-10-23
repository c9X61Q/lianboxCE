// busybox.exe @ 0x461148 size=43

int sub_461148(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+20h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_407C50(a1, a2, a3, (int)va);
}

