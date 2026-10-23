// busybox.exe @ 0x413438 size=820

void __usercall sub_413438(int a1@<eax>, int a2@<ecx>)
{
  const char *Str; // ebx
  const char *v3; // ebx
  const char *v4; // edi
  int v5; // ebp
  int v6; // esi
  char v7; // bl
  char *v8; // eax
  const char *v9; // edi
  int MaxCount; // eax
  unsigned int v11; // ebx
  char v12; // al
  size_t v13; // eax
  size_t v14; // eax
  size_t v15; // eax
  size_t v16; // eax
  const char *v17; // ebx
  char *v18; // [esp+Ch] [ebp-30h]
  _BYTE *v20; // [esp+14h] [ebp-28h]
  _BYTE *Block; // [esp+18h] [ebp-24h]
  _BYTE *v23; // [esp+24h] [ebp-18h] BYREF
  _BYTE *v24[5]; // [esp+28h] [ebp-14h] BYREF

  v20 = (_BYTE *)sub_47188C();
  v23 = nullptr;
  v24[0] = nullptr;
  Str = sub_4047B0(v20, ",", &v23);
  do
  {
    v3 = &Str[strspn(Str, " ")];
    Block = (_BYTE *)sub_47188C();
    v4 = sub_4047B0(Block, "|", v24);
    v5 = 0;
    if ( (a2 & 0xFFFFFFFD) == 1 && strcmp(v3, v4) != 0 )
    {
      v5 = sub_4728CC();
      *(_BYTE *)v5 = (16 * (a2 + 1)) | *(_BYTE *)v5 & 0xF;
      *(_WORD *)(v5 + 1) = sub_45CD18();
      sub_4132FC(a1, v5);
    }
    do
    {
      v6 = sub_470E78();
      v7 = (16 * a2) | *(_BYTE *)v6 & 0xF;
      *(_BYTE *)v6 = v7;
      v18 = (char *)&v4[strspn(v4, " ")];
      v8 = strchr(v18, 40);
      if ( v8 != nullptr )
      {
        v9 = &v8[strspn(v8, " (")];
        MaxCount = strspn(v9, "<=>");
        v11 = MaxCount;
        if ( MaxCount > 0 )
        {
          if ( (unsigned int)MaxCount > 2 )
            MaxCount = 2;
          if ( strncmp(v9, "=", MaxCount) == 0 )
          {
            v12 = *(_BYTE *)v6 & 0xF0 | 1;
          }
          else
          {
            v13 = v11;
            if ( v11 > 3 )
              v13 = 3;
            if ( strncmp(v9, "<<", v13) == 0 )
            {
              v12 = *(_BYTE *)v6 & 0xF0 | 2;
            }
            else
            {
              v14 = v11;
              if ( v11 > 3 )
                v14 = 3;
              if ( strncmp(v9, "<=", v14) == 0 )
              {
                v12 = *(_BYTE *)v6 & 0xF0 | 3;
              }
              else
              {
                v15 = v11;
                if ( v11 > 3 )
                  v15 = 3;
                if ( strncmp(v9, ">>", v15) == 0 )
                {
                  v12 = *(_BYTE *)v6 & 0xF0 | 4;
                }
                else
                {
                  v16 = v11;
                  if ( v11 > 3 )
                    v16 = 3;
                  if ( strncmp(v9, ">=", v16) != 0 )
                    sub_418210();
                  v12 = *(_BYTE *)v6 & 0xF0 | 5;
                }
              }
            }
          }
          *(_BYTE *)v6 = v12;
        }
        v17 = &v9[v11 + strspn(&v9[v11], " ")];
        v17[strcspn(v17, " )")] = 0;
      }
      else
      {
        *(_BYTE *)v6 = v7 & 0xF0 | 6;
      }
      *(_WORD *)(v6 + 4) = sub_45CD18();
      v18[strcspn(v18, " (")] = 0;
      *(_WORD *)(v6 + 1) = sub_45CD18();
      if ( v5 != 0 )
        ++*(_WORD *)(v5 + 4);
      sub_4132FC(a1, v6);
      v4 = sub_4047B0(nullptr, "|", v24);
    }
    while ( v4 != nullptr );
    free(Block);
    Str = sub_4047B0(nullptr, ",", &v23);
  }
  while ( Str != nullptr );
  free(v20);
}

