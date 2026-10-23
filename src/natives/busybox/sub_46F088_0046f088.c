// busybox.exe @ 0x46f088 size=46

void sub_46F088(const char *a1, ...)
{
  FILE *v1; // eax
  va_list va; // [esp+18h] [ebp+8h] BYREF

  va_start(va, a1);
  v1 = off_4730E8(1);
  sub_46F1AC(v1, (int)a1, (int)va);
}

