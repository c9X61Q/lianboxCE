// busybox.exe @ 0x46bce0 size=621

_BYTE *__usercall sub_46BCE0@<eax>(char *a1@<eax>)
{
  char *Str; // ebx
  char v2; // al
  char v3; // al
  signed int v4; // eax
  int v5; // ebp
  char v6; // al
  char *v7; // edi
  unsigned int v8; // esi
  char *v10; // edx
  const char *v11; // eax
  char *v12; // eax
  unsigned int v13; // eax
  size_t v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // esi
  char v17; // dl
  unsigned int v18; // ebp
  char v19; // dl
  char v20; // dl
  char *i; // eax
  char v22; // dl
  char v23; // al
  _BYTE *v24; // eax
  int v25; // [esp+Ch] [ebp-118h]
  int v26; // [esp+Ch] [ebp-118h]
  int v27; // [esp+Ch] [ebp-118h]
  CHAR v28[276]; // [esp+10h] [ebp-114h] BYREF

  Str = a1;
  v2 = *a1;
  if ( (v2 == 92 || v2 == 47) && sub_468114(Str) == 0 )
  {
    while ( 1 )
    {
      v3 = Str[1];
      if ( v3 != 92 && v3 != 47 )
        break;
      ++Str;
    }
  }
  v4 = strlen(Str);
  if ( v4 > 1 && (unsigned __int8)((*Str | 0x20) - 97) <= 0x19u && Str[1] == 58 )
  {
    v5 = 2;
    if ( v4 != 2 )
    {
      v6 = Str[2];
      if ( v6 == 47 || v6 == 92 )
        v5 = 0;
    }
  }
  else
  {
    v5 = 1;
    if ( sub_468114(Str) == 0 )
    {
      if ( *Str == 47 || (v5 = 4, *Str == 92) )
        v5 = 3;
    }
  }
  v7 = sub_462B40(Str);
  if ( v5 == 2 )
  {
    v26 = *(_DWORD *)(dword_485FF4 + 4);
    if ( sub_4336F0(Str, v28, 0x104u) != nullptr )
    {
      v10 = (char *)sub_462C50(v28, v26);
      v7 += 2;
      Str += 2;
      v8 = 2;
      goto LABEL_31;
    }
    return nullptr;
  }
  v25 = *(_DWORD *)(dword_485FF4 + 4);
  if ( (unsigned int)(v5 - 3) > 1 )
  {
    v13 = sub_45B414(Str);
    v8 = v13;
    if ( v13 != 0 )
    {
      v10 = sub_4631C4(Str, v13, v25);
      v7 += v8;
      Str += v8;
      goto LABEL_31;
    }
    return nullptr;
  }
  v8 = sub_45B414(*(char **)(dword_485FF0 + 36));
  if ( v8 == 0 )
    return nullptr;
  v11 = *(const char **)(dword_485FF0 + 36);
  if ( v5 == 4 )
    v12 = (char *)sub_462C50(v11, v25);
  else
    v12 = sub_4631C4(v11, v8, v25);
  v10 = v12;
LABEL_31:
  v27 = (int)v10;
  v14 = strlen(Str);
  v15 = (_BYTE *)sub_441F7C(v14 + 2, v27);
  v16 = (_BYTE *)(*(_DWORD *)(dword_485FF4 + 4) + v8 + 1);
  if ( *Str == 47 || *Str == 92 )
  {
    v18 = (unsigned int)(v15 + 1);
    *v15 = 47;
    v19 = Str[1];
    if ( v19 != 92 && v19 != 47 || (v20 = Str[2]) == 47 || v20 == 92 )
    {
      ++v7;
      goto LABEL_48;
    }
    v18 = (unsigned int)(v15 + 2);
    v15[1] = 47;
    v7 += 2;
  }
  else
  {
    v17 = *(v15 - 1);
    if ( v17 == 47 || v17 == 92 )
    {
      v18 = (unsigned int)v15;
    }
    else
    {
      v18 = (unsigned int)(v15 + 1);
      *v15 = 47;
    }
    if ( v18 <= (unsigned int)v16 || *v16 != 47 && *v16 != 92 )
      goto LABEL_48;
  }
  ++v16;
LABEL_48:
  for ( i = strtok(v7, "/\\"); i != nullptr; i = strtok(nullptr, "/\\") )
  {
    if ( *i != 46 )
      goto LABEL_58;
    v22 = i[1];
    if ( v22 != 46 )
    {
      if ( v22 == 0 )
        continue;
LABEL_58:
      v24 = (_BYTE *)sub_462C50(i, v18);
      v18 = (unsigned int)(v24 + 1);
      *v24 = 47;
      continue;
    }
    if ( i[2] != 0 )
      goto LABEL_58;
    do
    {
      if ( v18 <= (unsigned int)v16 )
        break;
      v23 = *(_BYTE *)(--v18 - 1);
      if ( v23 == 47 )
        break;
    }
    while ( v23 != 92 );
  }
  *(_BYTE *)((__PAIR64__(v18, (unsigned int)v16) - v18) >> 32) = 0;
  sub_430E8C(*(char **)(dword_485FF4 + 4));
  return sub_418E48(*(_BYTE **)(dword_485FF4 + 4));
}

