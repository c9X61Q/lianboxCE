// busybox.exe @ 0x44fe20 size=2322

void sub_44FE20()
{
  char *Str; // esi
  void *v1; // edx
  int v2; // ecx
  int i; // ebx
  char v4; // al
  bool v5; // dl
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  char v9; // al
  char v10; // bp
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  const char *v15; // eax
  char *v16; // edi
  char *v17; // eax
  char *v18; // edi
  char *v19; // eax
  int v20; // ecx
  char *v21; // edi
  int v22; // eax
  int v23; // edx
  char v24; // al
  int v25; // edx
  int v26; // ebp
  int v27; // eax
  int v28; // edx
  int k; // edx
  int v30; // eax
  char v31; // al
  int v32; // ecx
  int v33; // eax
  FILE *v34; // edi
  int v35; // edx
  size_t v36; // edi
  size_t v37; // eax
  int v38; // ecx
  const char *v39; // edi
  const char *v40; // eax
  int j; // eax
  int v42; // ebp
  size_t v43; // edi
  size_t v44; // eax
  char *v45; // eax
  size_t v46; // edi
  size_t v47; // eax
  char *v48; // eax
  char *v49; // eax
  char *Block; // [esp+14h] [ebp-44h]
  bool v51; // [esp+18h] [ebp-40h]
  int v52; // [esp+18h] [ebp-40h]
  char v53; // [esp+18h] [ebp-40h]
  int v54; // [esp+1Ch] [ebp-3Ch]
  int v55; // [esp+20h] [ebp-38h]
  int v56; // [esp+24h] [ebp-34h]
  int v57; // [esp+28h] [ebp-30h]
  unsigned __int8 v58; // [esp+2Eh] [ebp-2Ah]
  char v59; // [esp+2Fh] [ebp-29h]
  int v60; // [esp+30h] [ebp-28h]
  bool v61; // [esp+34h] [ebp-24h]
  int v62; // [esp+34h] [ebp-24h]
  int v63; // [esp+38h] [ebp-20h]
  int v64; // [esp+38h] [ebp-20h]
  char v65; // [esp+38h] [ebp-20h]
  int v66; // [esp+3Ch] [ebp-1Ch]
  int v67; // [esp+3Ch] [ebp-1Ch]
  int v68; // [esp+40h] [ebp-18h]
  char v69; // [esp+46h] [ebp-12h] BYREF
  char v70[17]; // [esp+47h] [ebp-11h] BYREF

  v69 = 10;
  Str = (char *)sub_434F64(v70, &v69);
  v54 = 0;
  while ( Str != nullptr )
  {
    v58 = v70[0];
    Block = (char *)sub_434F64(v70, &v69);
    ++v54;
    v56 = 0;
LABEL_4:
    for ( i = dword_485C60; i != 0; i = *(_DWORD *)i )
    {
      v4 = *(_BYTE *)(i + 44);
      v5 = (v4 & 2) != 0;
      if ( (v4 & 2) != 0 )
        goto LABEL_25;
      *(_DWORD *)(i + 24) = *(_DWORD *)(i + 28);
      v2 = *(_DWORD *)(i + 16);
      if ( v2 != 0 )
      {
        if ( v2 > 0 )
        {
          if ( *(_DWORD *)(i + 24) == 0 && *(_DWORD *)(i + 8) == 0 )
          {
            v6 = v54 == v2;
LABEL_17:
            if ( v6 )
              goto LABEL_25;
            goto LABEL_18;
          }
          if ( v54 >= v2 )
            goto LABEL_21;
        }
      }
      else if ( *(_DWORD *)(i + 24) == 0 && *(_DWORD *)(i + 4) == 0 )
      {
        v6 = *(_DWORD *)(i + 8) == 0;
        goto LABEL_17;
      }
LABEL_18:
      v7 = *(_DWORD *)(i + 4);
      if ( v7 != 0 )
      {
        v51 = v5;
        v8 = sub_459FE8(v7, Str, 0, 0, 0);
        v5 = v51;
        if ( v8 == 0 )
        {
          dword_485C5C = *(_DWORD *)(i + 4);
LABEL_21:
          *(_BYTE *)(i + 44) |= 2u;
          goto LABEL_26;
        }
      }
      v4 = *(_BYTE *)(i + 44);
      if ( *(_DWORD *)(i + 16) != -1 || Block != nullptr )
      {
        *(_BYTE *)(i + 44) = v4 & 0xFD;
        v9 = 0;
        v10 = 0;
        goto LABEL_42;
      }
LABEL_25:
      *(_BYTE *)(i + 44) = v4 | 2;
LABEL_26:
      v11 = *(_DWORD *)(i + 24);
      if ( v11 < -1 )
      {
        v2 = v54 - v11;
        *(_DWORD *)(i + 24) = v54 - v11 - 2;
      }
      if ( *(int *)(i + 16) > 0 )
        *(_DWORD *)(i + 16) = -2;
      v12 = *(_DWORD *)(i + 24);
      if ( v12 != 0 )
      {
        if ( v12 == -1 )
        {
          if ( Block != nullptr )
            goto LABEL_37;
        }
        else if ( v12 > v54 )
        {
          goto LABEL_37;
        }
        LOBYTE(v12) = 0;
      }
      else if ( *(_DWORD *)(i + 8) != 0 )
      {
LABEL_37:
        v13 = *(_DWORD *)(i + 8);
        LOBYTE(v12) = !v5 || v13 == 0 || sub_459FE8(v13, Str, 0, 0, 0) != 0;
      }
      *(_BYTE *)(i + 44) = *(_BYTE *)(i + 44) & 0xFD | (2 * (v12 & 1));
      v9 = 1;
      v10 = 1;
LABEL_42:
      v1 = (void *)(*(_BYTE *)(i + 44) & 1);
      if ( *(_BYTE *)(i + 49) == 123 )
      {
        if ( (_BYTE)v1 == 0 )
          v10 = v9 ^ 1;
        if ( v10 == 0 )
          continue;
        v14 = 0;
        do
        {
          LOBYTE(v1) = *(_BYTE *)(i + 49);
          if ( (_BYTE)v1 == 123 )
          {
            ++v14;
          }
          else if ( (_BYTE)v1 == 125 && --v14 == 0 )
          {
            goto LABEL_170;
          }
          i = *(_DWORD *)i;
        }
        while ( i != 0 );
        v15 = "unterminated {";
LABEL_69:
        sub_418210(v15);
      }
      if ( (_BYTE)v1 == 0 )
        v10 = v9 ^ 1;
      if ( v10 == 0 )
      {
        if ( *(_DWORD *)(i + 4) != 0 )
          dword_485C5C = *(_DWORD *)(i + 4);
        switch ( *(_BYTE *)(i + 49) )
        {
          case '=':
            sub_46EEFC((FILE *)qword_485BEC, "%d\n", v54);
            continue;
          case 'D':
            v19 = strchr(Str, 10);
            if ( v19 == nullptr )
              goto LABEL_173;
            sub_448258((int)Str, (int)(v19 + 1));
            goto LABEL_4;
          case 'G':
            v43 = 2;
            if ( Str != nullptr )
              v43 = strlen(Str) + 2;
            v44 = 0;
            if ( unk_485BF4 != nullptr )
              v44 = strlen(unk_485BF4);
            v45 = (char *)sub_471600(v2, v43 + v44);
            Str = v45;
            if ( v43 == 2 )
              *v45 = 0;
            strcat(v45, "\n");
            v58 = 10;
            if ( unk_485BF4 != nullptr )
              strcat(Str, unk_485BF4);
            continue;
          case 'H':
            v46 = 2;
            if ( unk_485BF4 != nullptr )
              v46 = strlen(unk_485BF4) + 2;
            v47 = 0;
            if ( Str != nullptr )
              v47 = strlen(Str);
            v48 = (char *)sub_471600(v2, v46 + v47);
            unk_485BF4 = v48;
            if ( v46 == 2 )
              *v48 = 0;
            strcat(unk_485BF4, "\n");
            if ( Str != nullptr )
              strcat(unk_485BF4, Str);
            continue;
          case 'N':
            if ( Block == nullptr )
              goto LABEL_171;
            v36 = strlen(Str);
            v37 = strlen(Block);
            Str = (char *)sub_471600(v38, v36 + v37 + 2);
            Str[v36] = 10;
            strcpy(&Str[v36 + 1], Block);
            v58 = v70[0];
            Block = (char *)sub_434F64(v70, &v69);
            ++v54;
            continue;
          case 'P':
            v17 = strchr(Str, 10);
            v18 = v17;
            if ( v17 == nullptr )
              goto LABEL_63;
            *v17 = 0;
            sub_452A90(&v69, qword_485BEC, 10);
            *v18 = 10;
            continue;
          case 'T':
            if ( v56 == 0 )
              goto LABEL_134;
            continue;
          case 'a':
            v33 = sub_47188C();
            sub_43E384(&dword_485C68, v33);
            continue;
          case 'b':
            goto LABEL_134;
          case 'c':
            if ( (*(_BYTE *)(i + 44) & 2) == 0 )
              sub_452A90(&v69, qword_485BEC, 10);
            goto LABEL_173;
          case 'd':
            goto LABEL_173;
          case 'g':
            free(Str);
            Str = (char *)sub_47188C();
            continue;
          case 'h':
            free(unk_485BF4);
            unk_485BF4 = (char *)sub_47188C();
            continue;
          case 'i':
            sub_452A90(&v69, qword_485BEC, 10);
            continue;
          case 'n':
            if ( MultiByteStr == 0 )
              sub_452A90(&v69, qword_485BEC, v58);
            if ( Block == nullptr )
              goto LABEL_173;
            free(Str);
            v58 = v70[0];
            ++v54;
            Str = Block;
            Block = (char *)sub_434F64(v70, &v69);
            v56 = 0;
            continue;
          case 'p':
LABEL_63:
            sub_452A90(&v69, qword_485BEC, 10);
            continue;
          case 'q':
            free(Block);
            Block = nullptr;
            goto LABEL_171;
          case 'r':
            v34 = (FILE *)sub_4314C0(*(char **)(i + 36));
            if ( v34 != nullptr )
            {
              while ( 1 )
              {
                v35 = sub_470E94();
                if ( v35 == 0 )
                  break;
                sub_43E384(&dword_485C68, v35);
              }
              fclose(v34);
            }
            continue;
          case 's':
            v55 = *(_DWORD *)(i + 12);
            if ( v55 == 0 )
            {
              v55 = dword_485C5C;
              if ( dword_485C5C == 0 )
              {
                v15 = "no previous regexp";
                goto LABEL_69;
              }
            }
            dword_485C5C = v55;
            if ( sub_459FE8(v55, Str, 10, (int)&dword_485C0C, 0) == 1 )
              continue;
            dword_485C70 = sub_470E78();
            dword_485C78 = 64;
            dword_485C74 = 0;
            v59 = 0;
            v21 = Str;
            v61 = true;
            v60 = 0;
            while ( 1 )
            {
              v57 = dword_485C0C;
              v52 = dword_485C10[0];
              ++v60;
              v22 = *(_DWORD *)(i + 40);
              v23 = 0;
              if ( v60 == v22 || v22 == 0 )
                break;
              while ( 1 )
              {
                v24 = v21[v23];
                if ( v52 <= v23 )
                  break;
                v63 = v23;
                sub_44D140(v24, v20);
                v23 = v63 + 1;
              }
              v25 = v52;
              if ( v52 < 0 )
                v25 = 0;
              v21 += v25;
              if ( v57 == v52 && v24 != 0 )
              {
                ++v21;
                sub_44D140(v24, v20);
              }
LABEL_103:
              if ( *v21 == 0 )
              {
                if ( v59 != 0 )
                  goto LABEL_107;
                v59 = 1;
              }
              if ( sub_459FE8(v55, v21, 10, (int)&dword_485C0C, 1) == 1 )
              {
                do
                {
LABEL_107:
                  v53 = *v21++;
                  sub_44D140(v53, v20);
                }
                while ( v53 != 0 );
                free(Str);
                Str = (char *)dword_485C70;
                if ( v10 != 0 )
                {
                  if ( (*(_BYTE *)(i + 44) & 4) != 0 )
                    sub_452A90(&v69, qword_485BEC, v58);
                  v1 = *(void **)(i + 32);
                  v56 = 1;
                  if ( v1 != nullptr )
                  {
                    v32 = i + 48;
LABEL_113:
                    sub_452A90(v32, v1, v58);
                  }
                }
                goto LABEL_170;
              }
            }
            while ( v57 > v23 )
            {
              v64 = v23;
              sub_44D140(v21[v23], v20);
              v23 = v64 + 1;
            }
            v65 = v61 || (v52 | v57) != 0;
            if ( v65 == 0 )
            {
LABEL_98:
              v31 = v21[v52];
              if ( v31 != 0 )
              {
                sub_44D140(v31, v20);
                v30 = v52 + 1;
              }
              else
              {
                v30 = v52;
                v59 = 1;
              }
              goto LABEL_101;
            }
            v62 = *(_DWORD *)(i + 36);
            v26 = 0;
            break;
          case 't':
            if ( v56 == 0 )
              continue;
            v56 = 0;
LABEL_134:
            v39 = *(const char **)(i + 36);
            if ( v39 == nullptr )
              goto LABEL_171;
            for ( i = dword_485C60; ; i = *(_DWORD *)i )
            {
              if ( i == 0 )
                sub_41784C("can't find label for jump to '%s'", v39);
              if ( *(_BYTE *)(i + 49) == 58 )
              {
                v40 = *(const char **)(i + 36);
                if ( v40 != nullptr && strcmp(v40, v39) == 0 )
                  break;
              }
            }
            continue;
          case 'w':
            v32 = i + 48;
            v1 = *(void **)(i + 32);
            goto LABEL_113;
          case 'x':
            v49 = unk_485BF4;
            if ( unk_485BF4 == nullptr )
              v49 = (char *)sub_4728CC(v2);
            unk_485BF4 = Str;
            Str = v49;
            v58 = 10;
            continue;
          case 'y':
            v16 = Str;
LABEL_147:
            LOBYTE(v1) = *v16;
            if ( *v16 == 0 )
              continue;
            v42 = *(_DWORD *)(i + 36);
            for ( j = 0; ; j += 2 )
            {
              LOBYTE(v2) = *(_BYTE *)(v42 + j);
              if ( (_BYTE)v2 == 0 )
                goto LABEL_146;
              if ( (_BYTE)v2 == (_BYTE)v1 )
                break;
            }
            *v16 = *(_BYTE *)(v42 + j + 1);
LABEL_146:
            ++v16;
            goto LABEL_147;
          default:
            continue;
        }
        while ( 2 )
        {
          LOBYTE(v27) = *(_BYTE *)(v62 + v26);
          switch ( (_BYTE)v27 )
          {
            case 0:
              v10 = v65;
              v30 = v52;
              if ( v57 == v52 )
                goto LABEL_98;
LABEL_101:
              v21 += v30;
              if ( *(_DWORD *)(i + 40) == 0 )
              {
                v20 = v52;
                v61 = v57 == v52;
                goto LABEL_103;
              }
              goto LABEL_107;
            case 0x5C:
              ++v26;
              v27 = *(unsigned __int8 *)(v62 + v26);
              v20 = v27 - 48;
              if ( (unsigned int)(v27 - 48) <= 9 )
              {
                v28 = dword_485A8C[2 * v27];
                if ( v28 != -1 )
                {
                  while ( v28 < dword_485C10[2 * v20] )
                  {
                    v68 = v20;
                    v66 = v28 + 1;
                    sub_44D140(v21[v28], v20);
                    v20 = v68;
                    v28 = v66;
                  }
                }
                break;
              }
LABEL_95:
              sub_44D140(v27, v20);
              break;
            case 0x26:
              for ( k = dword_485C0C; k < dword_485C10[0]; k = v67 )
              {
                v67 = k + 1;
                sub_44D140(v21[k], v20);
              }
              break;
            default:
              goto LABEL_95;
          }
          ++v26;
          continue;
        }
      }
LABEL_170:
      ;
    }
LABEL_171:
    if ( MultiByteStr == 0 )
      sub_452A90(&v69, qword_485BEC, v58);
LABEL_173:
    sub_430F14((int)&v69, v1);
    free(Str);
    Str = Block;
  }
}

