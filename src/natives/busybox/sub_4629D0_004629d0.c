// busybox.exe @ 0x4629d0 size=35

int sub_4629D0(int a1, const char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407C00(a1, "%p", (void **)va);
}

