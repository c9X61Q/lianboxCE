// busybox.exe @ 0x4611cc size=43

int sub_4611CC(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+20h] [ebp+10h] BYREF

  va_start(va, a3);
  return sub_407C50(a1, a2, (int)"%c %s%s%s %d/%d %d%%", (int)va);
}

