// busybox.exe @ 0x46304c size=60

int sub_46304C(const char *a1, ...)
{
  int v1; // ebx
  int result; // eax
  va_list va; // [esp+1Ch] [ebp+8h] BYREF

  va_start(va, a1);
  v1 = dword_486010;
  result = sub_407C50(dword_486010 + 384, 200, (int)a1, (int)va);
  *(_DWORD *)(v1 + 56) = 1;
  return result;
}

