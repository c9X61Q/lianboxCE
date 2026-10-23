// busybox.exe @ 0x42b27c size=384

int __cdecl sub_42B27C(int a1, int a2)
{
  _DWORD *v2; // edx
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // ebp
  int v7; // eax
  int *v8; // eax
  char *v9; // eax
  int v10; // ecx
  int v11; // eax
  int ErrorMessage; // [esp+0h] [ebp-80h]
  int v14; // [esp+8h] [ebp-78h]
  int v15; // [esp+10h] [ebp-70h] BYREF
  int FileHandle; // [esp+14h] [ebp-6Ch]
  _DWORD v17[26]; // [esp+18h] [ebp-68h] BYREF

  v2 = *(_DWORD **)(a1 + 4);
  v3 = 0;
  while ( v2 != nullptr )
  {
    ++v3;
    v2 = (_DWORD *)*v2;
  }
  ++*(_DWORD *)(dword_485FF0 + 56);
  sub_441E68();
  v4 = *(_DWORD **)(a1 + 4);
  v5 = -1;
  while ( v4 != nullptr )
  {
    v6 = v4[1];
    if ( *(_BYTE *)v6 == 0 )
    {
      v7 = *(_DWORD *)(v6 + 12);
      if ( v7 != 0 && *sub_429934(*(char **)(v7 + 8)) == 0 )
        sub_4300CC(0, v17, *(_DWORD *)(dword_485FEC + 208) + 5);
    }
    FileHandle = -1;
    if ( *v4 != 0 && sub_44D09C(&v15) < 0 )
    {
      sub_442EA4(v5);
      v8 = _errno();
      v9 = strerror(*v8);
      sub_415B40(v10, "can't create pipe: %s", v9);
    }
    memset(&v17[2], 0, 0x50u);
    v17[12] = 3;
    v17[15] = a2 | 1;
    v17[19] = v4[1];
    v17[16] = v15;
    v17[17] = FileHandle;
    v17[18] = v5;
    sub_46174C(*(char *)(a1 + 1));
    if ( v5 >= 0 )
      sub_442EA4(v5);
    v5 = v15;
    if ( FileHandle != -1 )
      sub_442EA4(FileHandle);
    v4 = (_DWORD *)*v4;
  }
  v11 = 0;
  if ( *(_BYTE *)(a1 + 1) == 0 )
    v11 = sub_46DAE0();
  v14 = v11;
  sub_43B8DC(ErrorMessage);
  return v14;
}

