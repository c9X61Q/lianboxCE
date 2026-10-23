// busybox.exe @ 0x4164e8 size=484

int sub_4164E8()
{
  int v0; // esi
  char *i; // ebx
  char v2; // dl
  int v3; // edi
  char *v4; // ebx
  int v5; // eax
  int v6; // edx
  char v7; // al
  size_t v8; // eax
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int result; // eax
  char v13; // [esp+12h] [ebp-2Eh]
  char v14; // [esp+13h] [ebp-2Dh]
  const char *Str; // [esp+14h] [ebp-2Ch]
  char *Block; // [esp+18h] [ebp-28h]
  int v17; // [esp+1Ch] [ebp-24h]
  int *v18; // [esp+1Ch] [ebp-24h]
  char *v19; // [esp+24h] [ebp-1Ch]
  _BYTE v20[16]; // [esp+30h] [ebp-10h] BYREF

  sub_447010();
  sub_446AA0();
  sub_42B834();
  sub_436704();
  Block = (char *)sub_47188C();
  v19 = Block;
  v0 = 0;
  while ( *v19 != 0 )
  {
    for ( i = v19; *i != 0; ++i )
    {
      v2 = i[1];
      if ( *i == 37 )
      {
        ++i;
        if ( v2 != 37 )
          break;
      }
    }
    while ( *i != 0 && (unsigned __int8)((*i | 0x20) - 97) > 0x19u )
    {
      if ( *i == 42 )
        sub_4645B8();
      ++i;
    }
    v17 = v0 + i - v19 + 240;
    v3 = sub_452C80(v20, v17);
    v13 = *i;
    v4 = &i[-(*i == 0) + 1];
    v14 = *v4;
    *v4 = 0;
    sub_446AA0();
    v5 = sub_42B834();
    if ( v13 == 99 || v13 == 0 )
    {
      v18 = (int *)v5;
      sub_436630();
      v6 = *v18;
      BYTE1(v6) = BYTE1(*v18) ^ 0x40;
      if ( (v6 & 0x4201) != 0 )
        v7 = (__int16)sub_436630();
      else
        v7 = *(_BYTE *)sub_436704();
      goto LABEL_22;
    }
    if ( v13 == 115 )
    {
      Str = (const char *)sub_436704();
      v8 = strlen(Str);
      v3 = sub_452C80(v20, v8 + v17);
      v7 = (char)Str;
LABEL_22:
      v9 = sub_4627D8(v3 + v0, v19, v7);
      goto LABEL_24;
    }
    v10 = sub_436630();
    v9 = sub_43118C(v10, 0);
LABEL_24:
    v11 = v0 + v9;
    *v4 = v14;
    if ( v0 < v11 )
      v0 = v11;
    v19 = v4;
  }
  free(Block);
  sub_4470A4();
  result = sub_471600();
  *(_BYTE *)(result + v0) = 0;
  return result;
}

