// busybox.exe @ 0x42f1fc size=150

int __cdecl sub_42F1FC(const CHAR *a1, _DWORD *a2, __int16 a3)
{
  const CHAR *v3; // esi
  _DWORD *v4; // edi
  __int16 v5; // bx
  int result; // eax
  BOOL v7; // eax
  const CHAR *v8; // edx
  BOOL v9; // edx
  int *v10; // ebx
  _BYTE v11[16]; // [esp+8h] [ebp-70h] BYREF
  int v12; // [esp+18h] [ebp-60h]
  int v13; // [esp+60h] [ebp-18h]
  LPCSTR lpFileName; // [esp+68h] [ebp-10h]
  DWORD dwFileAttributes; // [esp+6Ch] [ebp-Ch]

  lpFileName = (LPCSTR)&a1;
  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( sub_444C28(a1, v11) == 0 && (((v12 & 0xF000) - 0x4000) & 0xB000) != 0 )
  {
    *_errno() = 130;
    return -1;
  }
  if ( v4 != nullptr )
  {
    *v4 = v13;
    return 0;
  }
  v7 = SetFileAttributesA(v3, v5 & 0x3127);
  dwFileAttributes = (DWORD)v8;
  lpFileName = v8;
  v9 = v7;
  result = 0;
  if ( !v9 )
  {
    v10 = _errno();
    *v10 = sub_429CD0();
    return -1;
  }
  return result;
}

