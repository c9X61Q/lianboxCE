// busybox.exe @ 0x461174 size=43

int sub_461174(int a1, int a2, const char *a3, ...)
{
  va_list va; // [esp+20h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_407C50(a1, a2, (int)a3, (int)va);
}

