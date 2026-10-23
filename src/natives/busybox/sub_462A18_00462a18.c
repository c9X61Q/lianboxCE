// busybox.exe @ 0x462a18 size=35

int sub_462A18(int a1, int a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407C00(a1, "%8x%8x%8x%8x%8x%8x%8x%*16c%8x%8x%8x", (void **)va);
}

