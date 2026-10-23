// busybox.exe @ 0x4480e8 size=72

int sub_4480E8(const char *a1, ...)
{
  FILE *v1; // eax
  int v3; // [esp+Ch] [ebp-8h]
  va_list va; // [esp+1Ch] [ebp+8h] BYREF

  va_start(va, a1);
  ++*(_DWORD *)(dword_485FF0 + 56);
  v1 = off_4730E8(1);
  v3 = sub_46F1AC(v1, (int)a1, (int)va);
  sub_43B8DC();
  return v3;
}

