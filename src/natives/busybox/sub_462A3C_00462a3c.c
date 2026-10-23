// busybox.exe @ 0x462a3c size=35

int sub_462A3C(int a1, int a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_407C00(a1, "%u %u %u %u %u %u %d", (void **)va);
}

