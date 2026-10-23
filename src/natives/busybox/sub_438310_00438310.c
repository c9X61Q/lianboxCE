// busybox.exe @ 0x438310 size=771

void __cdecl __noreturn sub_438310(int a1, int a2)
{
  int v2; // edi
  int v3; // esi
  _BYTE *v4; // eax
  char v5; // cl
  char *v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  char **v10; // esi
  const char *v11; // edi
  _BYTE *Block; // ebp
  int i; // edx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  _DWORD *v17; // edi
  int j; // ebp
  int v19; // eax
  int v20; // edx
  FILE *v21; // eax
  char **v22; // ebp
  int v23; // ebp
  unsigned int v24; // edi
  int v25; // eax
  int v26; // edx
  int v27; // [esp+Ch] [ebp-34h]
  FILE *v28; // [esp+10h] [ebp-30h]
  char v29; // [esp+16h] [ebp-2Ah]
  char v30; // [esp+17h] [ebp-29h]
  char v31; // [esp+18h] [ebp-28h]
  unsigned int v32; // [esp+1Ch] [ebp-24h]
  int v33; // [esp+20h] [ebp-20h]
  int v34; // [esp+20h] [ebp-20h]
  int v35; // [esp+20h] [ebp-20h]
  int v36; // [esp+20h] [ebp-20h]
  char *v37; // [esp+28h] [ebp-18h]
  int v38; // [esp+2Ch] [ebp-14h]

  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE **)(a2 + 4);
  if ( v4 == nullptr || *v4 != 45 || (unsigned __int8)((v5 = v4[1]) - 48) > 9u )
  {
    v30 = 0;
    v29 = 0;
    v27 = 1;
    v7 = 10;
    goto LABEL_11;
  }
  v2 = a1 - 1;
  v3 = a2 + 4;
  v6 = v4 + 1;
  v30 = 0;
  v29 = 0;
  v27 = 1;
  while ( 1 )
  {
    if ( *v6 == 45 )
      v30 = 1;
    v7 = sub_47096C(v5, "b");
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_11:
        v8 = sub_4040F0(v2, v3, "n:c:qv");
        if ( v8 <= 0 )
        {
          v9 = dword_473090;
          v10 = (char **)(v3 + 4 * dword_473090);
          if ( *v10 == nullptr )
            *--v10 = "-";
          if ( v27 >= v2 - v9 )
            v27 = 0;
          if ( v7 > 0x1FFFFFFE && v30 != 0 )
            sub_41783C("count is too big: %lu", v7);
          v32 = v7 + 1;
          v31 = 0;
          v11 = "==> %s <==\n";
          while ( 2 )
          {
            v28 = sub_431518(*v10);
            if ( v28 != nullptr )
            {
              if ( v28 == off_4730E8(0) )
                *v10 = "standard input";
              if ( v27 != 0 )
                sub_46F088(v11, *v10);
              if ( v30 != 0 )
              {
                if ( v29 != 0 )
                {
                  Block = (_BYTE *)sub_470E78();
                  for ( i = 0; ; i = v33 + 1 )
                  {
                    v33 = i;
                    v14 = sub_46F03C(v28);
                    if ( v14 == -1 )
                      goto LABEL_46;
                    v15 = v33 + 1;
                    Block[v33] = v14;
                    if ( v7 == v33 )
                      break;
                  }
                  while ( 1 )
                  {
                    if ( v15 == v32 )
                      v15 = 0;
                    sub_46F0B8((unsigned __int8)Block[v15]);
                    v16 = sub_46F03C(v28);
                    if ( v16 == -1 )
                      break;
                    Block[v15++] = v16;
                  }
LABEL_46:
                  free(Block);
                }
                else
                {
                  v17 = (_DWORD *)sub_4728CC();
                  for ( j = 0; ; ++j )
                  {
                    v19 = sub_470EE8();
                    if ( v19 == 0 )
                      goto LABEL_55;
                    v20 = j + 1;
                    v17[j] = v19;
                    if ( v7 == j )
                      break;
                  }
                  while ( 1 )
                  {
                    if ( v32 == v20 )
                      v20 = 0;
                    v34 = v20;
                    v21 = off_4730E8(1);
                    v22 = (char **)&v17[v34];
                    v38 = v34;
                    v37 = *v22;
                    sub_46EF20(*v22, v21);
                    v35 = sub_470EE8();
                    if ( v35 == 0 )
                      break;
                    free(v37);
                    v20 = v38 + 1;
                    *v22 = (char *)v35;
                  }
LABEL_55:
                  v23 = 0;
                  do
                  {
                    v36 = v23++;
                    free((void *)v17[v23 - 1]);
                  }
                  while ( v7 != v36 );
                  free(v17);
                }
              }
              else
              {
                v24 = v7;
                while ( v24 != 0 )
                {
                  v25 = sub_46F03C(v28);
                  if ( v25 == -1 )
                    break;
                  if ( v25 == 10 || v29 != 0 )
                    --v24;
                  sub_46F0B8(v25);
                }
              }
              sub_4235F4();
              if ( sub_42EE00(v28) != 0 )
              {
                sub_418224(*v10, v26);
                goto LABEL_67;
              }
            }
            else
            {
LABEL_67:
              v31 = 1;
            }
            ++v10;
            v11 = "\n==> %s <==\n";
            if ( *v10 == nullptr )
              sub_42F138(v31);
            continue;
          }
        }
        if ( v8 != 118 )
          break;
        v27 = -1;
      }
      if ( v8 > 118 )
        goto LABEL_21;
      if ( v8 != 113 )
        break;
      v27 = 0x7FFFFFFF;
    }
    if ( v8 > 113 )
      goto LABEL_21;
    if ( v8 == 99 )
    {
      v29 = 1;
      goto LABEL_20;
    }
    if ( v8 != 110 )
LABEL_21:
      sub_418164();
LABEL_20:
    v6 = dword_48601C;
  }
}

