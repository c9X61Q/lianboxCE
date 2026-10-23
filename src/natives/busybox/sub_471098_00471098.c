// busybox.exe @ 0x471098 size=158

_DWORD *__usercall sub_471098@<eax>(char *a1@<eax>, int *a2@<edx>)
{
  _DWORD *v4; // eax
  _DWORD *Block; // ebx
  void (*v6)(void); // edx
  int v7; // eax
  int v8; // edx
  int v9; // esi
  int v10; // esi

  v4 = sub_447AE4(a1);
  Block = v4;
  if ( v4 != nullptr )
  {
    v6 = (void (*)(void))v4[1];
    if ( v6 != nullptr )
    {
      v7 = 2147479552;
      if ( a2 != nullptr )
        v7 = *a2;
      Block[5] = v7;
      v6();
      v9 = Block[7];
      if ( v9 != 0 )
      {
        if ( a2 != nullptr )
          *a2 = Block[6];
        goto LABEL_10;
      }
    }
    else
    {
      v10 = *(char *)v4;
      sub_4714EC();
      v9 = sub_471138(v10);
      *(_BYTE *)Block = 0;
      if ( v9 != 0 )
        goto LABEL_10;
    }
    sub_417FE4(v8, "read error from '%s'", a1);
    v9 = 0;
LABEL_10:
    sub_442EA4(Block[3]);
    free(Block);
    return (_DWORD *)v9;
  }
  return Block;
}

