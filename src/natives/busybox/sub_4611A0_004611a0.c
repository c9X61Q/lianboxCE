// busybox.exe @ 0x4611a0 size=43

int sub_4611A0(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+20h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_407C50(a1, a2, (int)"Location: %s/%s%s\r\n", (int)va);
}

