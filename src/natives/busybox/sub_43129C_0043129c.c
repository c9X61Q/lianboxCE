// busybox.exe @ 0x43129c size=75

int sub_43129C(int a1, int a2, const char *a3, ...)
{
  int v3; // esi
  int result; // eax
  int v5; // [esp+0h] [ebp-18h]
  va_list va; // [esp+28h] [ebp+10h] BYREF

  va_start(va, a3);
  ++*(_DWORD *)(dword_485FF0 + 56);
  v3 = sub_407C50(a1, a2, (int)a3, (int)va);
  sub_43B8DC(v5);
  result = v3;
  if ( a2 <= v3 )
    return a2;
  return result;
}

