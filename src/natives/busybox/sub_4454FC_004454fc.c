// busybox.exe @ 0x4454fc size=165

int __cdecl sub_4454FC(int a1, const WCHAR *a2, int a3, CHAR *a4, int a5)
{
  int v5; // edi
  int v6; // edx
  int result; // eax
  int v8; // [esp+30h] [ebp-20h] BYREF
  CHAR v9[28]; // [esp+34h] [ebp-1Ch] BYREF

  v8 = 16;
  v5 = a3;
  if ( ConvertINetUnicodeToMultiByte((LPDWORD)(a1 + 24), *(_DWORD *)a1, a2, &a3, v9, &v8) == 0 && a3 == v5 )
  {
    if ( v8 > a5 )
    {
      *_errno() = 7;
      return -1;
    }
    v6 = (*(int (__cdecl **)(int, CHAR *, int))(a1 + 16))(a1, v9, v8);
    result = v8;
    if ( v6 == v8 )
    {
      qmemcpy(a4, v9, v8);
      return result;
    }
  }
  *_errno() = 42;
  return -1;
}

