// gettime.exe @ 0x4018e0 size=62

int __cdecl sub_4018E0(int a1, int a2)
{
  int v2; // eax
  void *v3; // eax
  int result; // eax
  _DWORD *v5; // [esp+0h] [ebp-4h]

  v2 = unknown_libname_1(a1);
  v3 = (void *)unknown_libname_1(v2);
  v5 = operator new(4u, v3);
  result = *(_DWORD *)unknown_libname_1(a2);
  *v5 = result;
  return result;
}

