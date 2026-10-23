// busybox.exe @ 0x44b9cc size=547

void __cdecl __noreturn sub_44B9CC(int a1, int a2)
{
  char v2; // di
  int v3; // esi
  FILE **v4; // ebx
  int i; // esi
  char *v6; // eax
  FILE *v7; // eax
  char *v8; // esi
  int v9; // edi
  int v10; // ebp
  FILE *v11; // eax
  char *v12; // ecx
  FILE *Stream; // eax
  int j; // edi
  char *v15; // ebp
  int v16; // eax
  FILE *v17; // eax
  char *v18; // edx
  char v19; // cl
  FILE *v20; // eax
  void *Block; // [esp+0h] [ebp-34h]
  int v22; // [esp+Ch] [ebp-28h]
  int v23; // [esp+10h] [ebp-24h]
  int v24; // [esp+10h] [ebp-24h]
  _BYTE *v25; // [esp+14h] [ebp-20h]
  char *Buffera; // [esp+18h] [ebp-1Ch]
  unsigned __int8 Buffer; // [esp+18h] [ebp-1Ch]
  char *Bufferb; // [esp+18h] [ebp-1Ch]
  char *Bufferc; // [esp+18h] [ebp-1Ch]
  unsigned __int8 v30; // [esp+1Fh] [ebp-15h]
  _BYTE *v31; // [esp+20h] [ebp-14h] BYREF

  v31 = &unk_47A044;
  v2 = sub_435D44(a2, (int)&unk_47A046, &v31);
  v3 = dword_473090;
  if ( (v2 & 1) != 0 )
  {
    if ( *v31 == 0 )
      sub_418210("-d '' is not supported");
    v22 = sub_4635C0() - (_DWORD)v31;
  }
  else
  {
    v22 = 1;
  }
  v4 = (FILE **)(a2 + 4 * v3);
  if ( *v4 == nullptr )
    *--v4 = (FILE *)"-";
  for ( i = 0; ; ++i )
  {
    v6 = (char *)v4[i];
    if ( v6 == nullptr )
      break;
    v7 = sub_431518(v6);
    v4[i] = v7;
    if ( v7 == nullptr )
      sub_470D44(Block);
  }
  v25 = v31;
  if ( (v2 & 2) != 0 )
  {
    while ( *v4 != nullptr )
    {
      v8 = nullptr;
      v9 = 0;
      while ( 1 )
      {
        v23 = sub_470E94();
        if ( v23 == 0 )
          break;
        v10 = v9;
        if ( v8 != nullptr )
        {
          Buffera = (char *)off_4730E8;
          v11 = off_4730E8(1);
          sub_46EF20(v8, v11);
          free(v8);
          v10 = v9 + 1;
          v12 = Buffera;
          if ( v22 == v9 + 1 )
            v10 = 0;
          Buffer = v25[v9];
          if ( Buffer != 0 )
          {
            Stream = (FILE *)((int (__cdecl *)(int))v12)(1);
            fputc(Buffer, Stream);
          }
        }
        v9 = v10;
        v8 = (char *)v23;
      }
      if ( v8 != nullptr )
      {
        sub_46F088("%s\n", v8);
        free(v8);
      }
      sub_42EE00(*v4++);
    }
    goto LABEL_30;
  }
  v24 = i;
LABEL_29:
  if ( v24 <= 0 )
LABEL_30:
    sub_42F138(0);
  v15 = nullptr;
  for ( j = 0; ; ++j )
  {
    if ( i == j )
      goto LABEL_29;
    if ( v4[j] != nullptr )
    {
      v16 = sub_470E94();
      if ( v16 == 0 )
      {
        sub_42EE00(v4[j]);
        v4[j] = nullptr;
        --v24;
        continue;
      }
      Bufferb = (char *)v16;
      v17 = off_4730E8(1);
      sub_46EF20(Bufferb, v17);
      free(Bufferb);
      if ( j == i - 1 )
      {
        v18 = v15;
        v19 = 10;
LABEL_41:
        v30 = v19;
        Bufferc = v18;
        v20 = off_4730E8(1);
        fputc(v30, v20);
        v15 = Bufferc;
        continue;
      }
      v18 = v15 + 1;
      if ( (char *)v22 == v15 + 1 )
        v18 = nullptr;
      v19 = v15[(_DWORD)v25];
      v15 = v18;
      if ( v19 != 0 )
        goto LABEL_41;
    }
  }
}

