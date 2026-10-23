// busybox.exe @ 0x41fc7c size=952

int sub_41FC7C()
{
  FILE *v0; // eax
  int v1; // eax
  int v2; // eax
  _DWORD *i; // ebx
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // eax
  size_t v7; // eax
  int v8; // eax
  __int64 v9; // kr00_8
  int v10; // ebx
  int j; // edx
  int v12; // edx
  const char *v13; // eax
  char *v14; // ebx
  __int64 v15; // kr08_8
  int v16; // ebx
  __int64 v17; // kr10_8
  int k; // edx
  int v19; // edx
  int Str; // [esp+0h] [ebp-C4h]
  __int64 v22; // [esp+40h] [ebp-84h]
  int v23; // [esp+40h] [ebp-84h]
  int v24; // [esp+40h] [ebp-84h]
  void *Block; // [esp+48h] [ebp-7Ch]
  _DWORD *v26; // [esp+4Ch] [ebp-78h]
  char *v27; // [esp+50h] [ebp-74h]
  __int64 v28[14]; // [esp+54h] [ebp-70h] BYREF

  v22 = 0;
  v26 = nullptr;
  while ( 1 )
  {
    if ( (dword_486008 & 4) != 0 )
    {
      v0 = off_4730E8(0);
      v1 = sub_417980(v0, nullptr);
    }
    else
    {
      off_4730E8(0);
      v1 = sub_470E94();
    }
    Block = (void *)v1;
    if ( v1 == 0 )
      break;
    v27 = (char *)v1;
    while ( *v27 == 46 )
    {
      if ( v27[1] != 47 )
        goto LABEL_12;
      do
        ++v27;
      while ( *v27 == 47 );
    }
    if ( *v27 != 0 )
    {
LABEL_12:
      if ( (dword_486008 & 0x80u) == 0 )
        v2 = sub_443484(v27, v28);
      else
        v2 = sub_444C28(v27, v28);
      if ( v2 != 0 )
LABEL_16:
        sub_41823C(v27);
      if ( MultiByteStr != -1 )
        LODWORD(v28[3]) = MultiByteStr;
      if ( *(&MultiByteStr + 1) != -1 )
        HIDWORD(v28[3]) = *(&MultiByteStr + 1);
      if ( (v28[2] & 0xD000) != 0x8000 )
      {
        v28[5] = 0;
        if ( (v28[2] & 0xF000) == 0x4000 )
          goto LABEL_35;
      }
      if ( SHIDWORD(v28[2]) <= 1 )
        goto LABEL_35;
      for ( i = v26; i != nullptr; i = (_DWORD *)*i )
      {
        if ( i[5] == HIDWORD(v28[1]) && i[4] == LODWORD(v28[1]) )
          goto LABEL_32;
      }
      i = (_DWORD *)sub_4728CC();
      qmemcpy(i + 2, v28, 96);
      *i = v26;
      v26 = i;
LABEL_32:
      strlen(v27);
      v4 = sub_470E78();
      strcpy((char *)(v4 + 4), v27);
      *(_DWORD *)v4 = i[1];
      i[1] = v4;
    }
LABEL_54:
    free(Block);
  }
  do
  {
    if ( v26 != nullptr )
    {
      qmemcpy(v28, v26 + 2, 0x60u);
      v5 = (_DWORD *)v26[1];
      v27 = (char *)(v5 + 1);
      v6 = *v5;
      v26[1] = v6;
      if ( v6 != 0 )
        v28[5] = 0;
      else
        v26 = (_DWORD *)*v26;
LABEL_35:
      v7 = strlen(v27);
      goto LABEL_36;
    }
    memset(v28, 0, 0x60u);
    v27 = "TRAILER!!!";
    v7 = strlen("TRAILER!!!");
LABEL_36:
    v8 = sub_46F088(
           "070701%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X%08X00000000%s%c",
           LODWORD(v28[1]),
           LOWORD(v28[2]),
           LODWORD(v28[3]),
           HIDWORD(v28[3]),
           HIDWORD(v28[2]),
           LODWORD(v28[7]),
           LODWORD(v28[5]),
           0,
           0,
           0,
           0,
           v7 + 1,
           v27,
           0);
    v9 = v22 + v8;
    v10 = -(v22 + v8) & 3;
    for ( j = v10; ; j = v23 )
    {
      v12 = j - 1;
      if ( v12 == -1 )
        break;
      v23 = v12;
      sub_418130(0);
    }
    v22 = v9 + v10;
    if ( v28[5] != 0 )
    {
      if ( (v28[2] & 0xF000) == 0xA000 )
      {
        v13 = (const char *)sub_471264();
        v14 = (char *)v13;
        if ( v13 == nullptr )
          goto LABEL_16;
        v15 = v22 + (int)sub_46F088("%s", v13);
        free(v14);
      }
      else
      {
        v16 = sub_47154C();
        sub_42F128(Str);
        sub_416EDC(v28[5]);
        v17 = v28[5] + v22;
        sub_442EA4(v16);
        v15 = v17;
      }
      for ( k = -(int)v15 & 3; ; k = v24 )
      {
        v19 = k - 1;
        if ( v19 == -1 )
          break;
        v24 = v19;
        sub_418130(0);
      }
      v22 = v15 + (-(int)v15 & 3);
    }
    if ( Block != nullptr )
      goto LABEL_54;
  }
  while ( v27 != "TRAILER!!!" );
  return 0;
}

