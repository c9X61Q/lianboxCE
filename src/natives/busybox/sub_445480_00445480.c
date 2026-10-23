// busybox.exe @ 0x445480 size=124

int __cdecl sub_445480(int a1, const CHAR *a2, int a3, WCHAR *a4, int *a5)
{
  int v5; // ebx
  int v7[4]; // [esp+18h] [ebp-10h] BYREF

  v5 = (*(int (__cdecl **)(int, const CHAR *, int))(a1 + 16))(a1, a2, a3);
  if ( v5 != -1 )
  {
    v7[0] = v5;
    if ( ConvertINetMultiByteToUnicode((LPDWORD)(a1 + 24), *(_DWORD *)a1, a2, v7, a4, a5) != 0 || v7[0] != v5 )
    {
      *_errno() = 42;
      return -1;
    }
  }
  return v5;
}

