// busybox.exe @ 0x46eefc size=35

int sub_46EEFC(FILE *a1, const char *a2, ...)
{
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, a2);
  return sub_46F1AC(a1, (int)a2, (int)va);
}

