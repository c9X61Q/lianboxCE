// busybox.exe @ 0x42db08 size=987

int __usercall sub_42DB08@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  char v3; // bl
  unsigned __int8 *v4; // ebx
  int v5; // ebp
  int *v6; // edi
  unsigned __int8 *v7; // edx
  unsigned __int8 *v8; // esi
  unsigned __int8 *v9; // esi
  unsigned __int8 *v10; // edx
  int v11; // eax
  int v12; // eax
  _DWORD *i; // esi
  int v14; // edi
  const char *j; // ebx
  char v16; // al
  char *v17; // ebx
  char *v18; // eax
  char *v19; // eax
  char v20; // dl
  _DWORD **v21; // ebx
  const char *v22; // edi
  _DWORD *v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // eax
  char *Str; // [esp+0h] [ebp-44h]
  int v31; // [esp+8h] [ebp-3Ch]
  BOOL v32; // [esp+Ch] [ebp-38h]
  char *v33; // [esp+10h] [ebp-34h]
  char *v35; // [esp+18h] [ebp-2Ch]
  int v36; // [esp+1Ch] [ebp-28h]
  unsigned __int8 *v37; // [esp+20h] [ebp-24h]
  unsigned int v38; // [esp+20h] [ebp-24h]
  int v39; // [esp+24h] [ebp-20h]
  int Val; // [esp+28h] [ebp-1Ch]
  int v41; // [esp+28h] [ebp-1Ch]

  v3 = a3;
  dword_473108 = *(_DWORD *)(a1 + 12);
  dword_473334 = *(_DWORD *)(dword_485FF4 + 4);
  sub_4148CC(*(_BYTE **)(a1 + 8), a3);
  if ( a2 != 0 )
  {
    v31 = sub_462C74();
    dword_473330 = (int)&dword_47332C;
    v36 = v3 & 1;
    if ( (v3 & 1) != 0 )
    {
      if ( dword_473388 != 0 )
      {
        v35 = " \t\n\r";
        if ( (*(_BYTE *)(dword_485FEC + 188) & 0x20) == 0 )
          v35 = (char *)(*(_DWORD *)(dword_485FEC + 192) + 4);
        v4 = (unsigned __int8 *)v31;
        v5 = 0;
        v6 = &dword_473378;
        do
        {
          v39 = v5;
          v5 = v6[3];
          v33 = v35;
          if ( v5 != 0 )
            v33 = (char *)(dword_485FF0 + 62);
          v7 = (unsigned __int8 *)(v6[1] + v31);
          v32 = false;
          while ( (unsigned int)v7 < v6[2] + v31 )
          {
            v8 = v7;
            if ( *v7 == 0x81 )
              v8 = v7 + 1;
            v37 = v7;
            Val = *v8;
            v9 = v8 + 1;
            if ( strchr(v33, Val) != nullptr )
            {
              v10 = v37;
              if ( (v5 | v39) == 0 )
              {
                v32 = strchr(" \t\n\r", Val) != nullptr;
                v10 = v37;
              }
              if ( v10 == v4 && v32 )
              {
                v32 = v36;
                v4 = v9;
              }
              else
              {
                *v10 = 0;
                v11 = sub_463A54();
                *(_DWORD *)(v11 + 4) = v4;
                *(_DWORD *)dword_473330 = v11;
                dword_473330 = v11;
                v4 = v9;
                if ( v5 == 0 )
                {
                  v38 = v6[2] + v31;
                  while ( 1 )
                  {
                    v9 = v4;
                    if ( v38 <= (unsigned int)v4 )
                      break;
                    if ( *v4 == 0x81 )
                      v9 = v4 + 1;
                    v41 = *v9;
                    if ( strchr(v33, v41) == nullptr )
                    {
LABEL_29:
                      v9 = v4;
                      break;
                    }
                    if ( strchr(" \t\n\r", v41) != nullptr )
                    {
                      v4 = v9 + 1;
                    }
                    else
                    {
                      if ( !v32 )
                        goto LABEL_29;
                      v4 = v9 + 1;
                      v32 = false;
                    }
                  }
                }
              }
            }
            v7 = v9;
          }
          v6 = (int *)*v6;
        }
        while ( v6 != nullptr );
        if ( v5 != 0 )
        {
LABEL_36:
          v12 = sub_463A54();
          *(_DWORD *)(v12 + 4) = v4;
          *(_DWORD *)dword_473330 = v12;
          dword_473330 = v12;
LABEL_37:
          *(_DWORD *)dword_473330 = 0;
          dword_473330 = (int)&dword_47332C;
          for ( i = (_DWORD *)dword_47332C; ; i = (_DWORD *)*i )
          {
            if ( i == nullptr )
              goto LABEL_72;
            v14 = dword_485FF0;
            if ( *(_BYTE *)(dword_485FF0 + 64) == 0 )
              break;
LABEL_48:
            *(_DWORD *)dword_473330 = i;
            sub_45B26C(0, 0);
            dword_473330 = (int)i;
LABEL_70:
            ;
          }
          for ( j = (const char *)i[1]; ; j = v17 + 1 )
          {
            v18 = strpbrk(j, asc_47E248);
            v17 = v18;
            if ( v18 == nullptr )
              goto LABEL_48;
            v16 = *v18;
            if ( v16 == -120 )
            {
              while ( 1 )
              {
                v19 = v17 + 1;
                v20 = v17[1];
                if ( v20 == -120 )
                  break;
                v17 += 2;
                if ( v20 != -127 )
                  v17 = v19;
                if ( *v17 == 0 )
                  goto LABEL_48;
              }
              ++v17;
              continue;
            }
            if ( (unsigned __int8)v16 > 0x88u )
              goto LABEL_61;
            if ( v16 == -127 )
              goto LABEL_44;
            if ( (unsigned __int8)v16 > 0x81u )
              goto LABEL_61;
            if ( v16 != 91 )
              break;
            if ( strchr(v17 + 1, 93) != nullptr )
            {
LABEL_61:
              v21 = (_DWORD **)dword_473330;
              ++*(_DWORD *)(v14 + 56);
              v22 = (const char *)sub_45B26C(0, 19);
              strlen(v22);
              sub_470E78();
              sub_42DFFC(0);
              sub_4631A8();
              if ( (const char *)i[1] != v22 )
                sub_4631A8();
              sub_43B8DC(Str);
              if ( v21 != (_DWORD **)dword_473330 )
              {
                *(_DWORD *)dword_473330 = 0;
                v23 = *v21;
                v24 = 0;
                while ( v23 != nullptr )
                {
                  ++v24;
                  v23 = (_DWORD *)*v23;
                }
                v25 = (_DWORD *)sub_445898();
                *v21 = v25;
                do
                {
                  v26 = (int)v25;
                  v25 = (_DWORD *)*v25;
                }
                while ( v25 != nullptr );
                dword_473330 = v26;
                goto LABEL_70;
              }
              goto LABEL_48;
            }
LABEL_46:
            ;
          }
          if ( v16 != 92 )
            goto LABEL_61;
LABEL_44:
          if ( v17[1] == 0 )
            goto LABEL_48;
          ++v17;
          goto LABEL_46;
        }
      }
      else
      {
        v4 = (unsigned __int8 *)v31;
      }
      if ( *v4 == 0 )
        goto LABEL_37;
      goto LABEL_36;
    }
    v27 = sub_463A54();
    *(_DWORD *)(v27 + 4) = v31;
    *(_DWORD *)dword_473330 = v27;
    dword_473330 = v27;
LABEL_72:
    v28 = dword_473330;
    *(_DWORD *)dword_473330 = 0;
    if ( dword_47332C != 0 )
    {
      **(_DWORD **)(a2 + 4) = dword_47332C;
      *(_DWORD *)(a2 + 4) = v28;
    }
  }
  return sub_4398B4();
}

