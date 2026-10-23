// busybox.exe @ 0x4629ac size=35

int sub_4629AC(int a1, int a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407C00(a1, "%p", (void **)va);
}

