// busybox.exe @ 0x462964 size=35

int sub_462964(int a1, char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407C00(a1, a2, (void **)va);
}

