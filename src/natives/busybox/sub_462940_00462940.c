// busybox.exe @ 0x462940 size=35

int sub_462940(int a1, char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407C00(a1, a2, (void **)va);
}

