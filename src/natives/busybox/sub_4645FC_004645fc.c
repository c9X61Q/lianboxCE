// busybox.exe @ 0x4645fc size=324

int __cdecl sub_4645FC(int a1, int a2)
{
  char **v2; // ebp
  char **i; // ebx
  int v4; // esi
  int j; // edi
  int v6; // ecx
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  int v11; // [esp+8h] [ebp-24h]
  int v12; // [esp+Ch] [ebp-20h]
  FILE *Stream; // [esp+10h] [ebp-1Ch]
  int v14; // [esp+14h] [ebp-18h]
  _DWORD v15[5]; // [esp+18h] [ebp-14h] BYREF

  v15[0] = 0;
  sub_435D44(a2, (int)&unk_47A660);
  v2 = (char **)(a2 + 4 * dword_473090);
  if ( *v2 == nullptr )
    *--v2 = "-";
  for ( i = v2; *i != nullptr; ++i )
    ;
  v4 = 0;
  v12 = 0;
  do
  {
    Stream = sub_431518(*--i);
    if ( Stream == nullptr )
      goto LABEL_22;
    *_errno() = 0;
    for ( j = 0; ; j = v7 )
    {
      v11 = fgetc(Stream);
      if ( v11 == -1 )
        break;
      if ( (j & 0x7F) == 0 )
        v4 = sub_471600(v6, j + 132);
      v7 = j + 1;
      *(_BYTE *)(v4 + j + 4) = v11;
      if ( v11 == 10 )
        goto LABEL_16;
LABEL_18:
      ;
    }
    if ( j != 0 )
    {
      v7 = j;
LABEL_16:
      v14 = v7;
      v8 = (_DWORD *)sub_471600(v7, v7 + 4);
      *v8 = v14;
      sub_43E368(v15, (int)v8);
      v4 = 0;
      if ( v11 != -1 )
      {
        v7 = 0;
        goto LABEL_18;
      }
    }
    if ( *_errno() != 0 && *_errno() != 2 )
    {
      sub_418224(*i, v9);
LABEL_22:
      v12 = 1;
    }
  }
  while ( v2 != i );
  while ( v15[0] != 0 )
  {
    sub_471D00(**(_DWORD **)(v15[0] + 4), *(_DWORD *)(v15[0] + 4) + 4);
    v15[0] = *(_DWORD *)v15[0];
  }
  return v12;
}

