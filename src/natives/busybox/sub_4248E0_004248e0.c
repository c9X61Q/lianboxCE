// busybox.exe @ 0x4248e0 size=2016

int sub_4248E0()
{
  __int64 v0; // rax
  int v1; // ecx
  int v2; // ebp
  void *v3; // esi
  _BYTE *v4; // eax
  void *v5; // ecx
  const char *v6; // ebx
  unsigned __int8 v7; // dl
  int v8; // eax
  const char *v9; // eax
  _BYTE *v10; // eax
  void *v11; // edx
  unsigned __int8 *v12; // eax
  int v13; // edx
  int v14; // ecx
  _BYTE *v15; // ebx
  int v16; // ebx
  char *v17; // eax
  char *v18; // eax
  char *v19; // edx
  char v20; // al
  _DWORD *v21; // ebx
  int v22; // esi
  int v23; // edi
  int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  _DWORD *v27; // eax
  const char *v28; // ebx
  int v29; // ebp
  int v30; // edx
  int v31; // edi
  _DWORD *v32; // esi
  int v33; // eax
  int v34; // edx
  void *Block; // [esp+0h] [ebp-858h]
  void *Blocka; // [esp+0h] [ebp-858h]
  const char *Blockb; // [esp+0h] [ebp-858h]
  char *Source; // [esp+4h] [ebp-854h]
  int v40; // [esp+Ch] [ebp-84Ch]
  int v41; // [esp+10h] [ebp-848h]
  _DWORD *v42; // [esp+14h] [ebp-844h]
  int v43; // [esp+14h] [ebp-844h]
  size_t v44; // [esp+18h] [ebp-840h]
  int v45; // [esp+1Ch] [ebp-83Ch]
  int v46; // [esp+20h] [ebp-838h]
  int v47; // [esp+24h] [ebp-834h]
  size_t v48; // [esp+28h] [ebp-830h]
  char *v49; // [esp+2Ch] [ebp-82Ch]
  size_t v50; // [esp+30h] [ebp-828h]
  const char *v51; // [esp+34h] [ebp-824h]
  unsigned int v52; // [esp+38h] [ebp-820h]
  unsigned int v53; // [esp+3Ch] [ebp-81Ch]
  unsigned __int8 v54; // [esp+43h] [ebp-815h] BYREF
  _DWORD v55[257]; // [esp+44h] [ebp-814h] BYREF
  char Destination; // [esp+449h] [ebp-40Fh] BYREF
  char Str[1038]; // [esp+44Ah] [ebp-40Eh] BYREF

LABEL_1:
  while ( 1 )
  {
    LODWORD(v0) = sub_456DCC(1023);
    if ( (int)v0 <= 0 )
      return v0;
    do
    {
      LODWORD(v0) = v0 - 1;
      BYTE4(v0) = *((_BYTE *)&v55[1] + v0 + 2);
      if ( BYTE4(v0) != 32 && (unsigned __int8)(BYTE4(v0) - 9) > 4u )
        break;
      *((_BYTE *)&v55[1] + v0 + 2) = 0;
    }
    while ( (_DWORD)v0 != 0 );
    v2 = dword_486010;
    if ( *(_DWORD *)dword_486010 == 0 && *(int *)(dword_486010 + 4) > 0 )
    {
      *(_DWORD *)dword_486010 = 1;
      *(_DWORD *)(v2 + 16) = *(_DWORD *)(v2 + 32);
    }
    sub_460FB8(v1);
    if ( sub_432F64(v55, &v54) != 0 )
    {
      v3 = (void *)v54;
      v40 = v55[0];
      v4 = (_BYTE *)sub_460FB8(Block);
      if ( *v4 == 44 )
      {
        v4 = (_BYTE *)sub_432F64(v55, &v54);
        if ( v4 != nullptr )
        {
          v5 = v3;
          if ( (_BYTE)v3 == 0 )
            v40 = 1;
          v41 = v55[0];
          if ( v54 == 0 )
            v41 = *(_DWORD *)(v2 + 4);
          LOBYTE(v3) = 1;
          goto LABEL_20;
        }
      }
      else
      {
        v5 = v3;
        if ( (_BYTE)v3 == 0 )
          v40 = *(_DWORD *)v2;
        v41 = v40;
LABEL_20:
        v6 = v4 + 1;
        v7 = *v4;
        if ( *v4 > 0x7Au )
          goto LABEL_138;
        if ( v7 > 0x60u )
        {
          switch ( v7 )
          {
            case 'a':
              v8 = v40 + 1;
              goto LABEL_33;
            case 'c':
              sub_423008(v40, v41, v5);
              goto LABEL_32;
            case 'd':
              sub_423008(v40, v41, v5);
              continue;
            case 'f':
              if ( (v4[1] & 0xDF) != 0 )
              {
                v9 = "bad file command";
                goto LABEL_139;
              }
              v10 = (_BYTE *)sub_460FB8(Blocka);
              v11 = *(void **)(v2 + 28);
              if ( *v10 != 0 )
              {
                free(v11);
                goto LABEL_64;
              }
              if ( v11 != nullptr )
                sub_46F088("\"%s\"\n", *(_DWORD *)(v2 + 28));
              else
                sub_46F108("No file name");
              continue;
            case 'i':
              if ( (_BYTE)v3 == 0 && *(_DWORD *)(v2 + 4) == 0 )
                v40 = 1;
LABEL_32:
              v8 = v40;
LABEL_33:
              sub_412C8C(v8);
              continue;
            case 'k':
              v12 = (unsigned __int8 *)sub_460FB8(Blocka);
              v13 = *v12;
              if ( (unsigned int)(v13 - 97) > 0x19 || v12[1] != 0 )
              {
                v9 = "bad mark name";
                goto LABEL_139;
              }
              *(_DWORD *)(v2 + 4 * v13 - 336) = v41;
              continue;
            case 'l':
              v14 = 1;
              goto LABEL_137;
            case 'p':
              v14 = 0;
              goto LABEL_137;
            case 'q':
              LODWORD(v0) = sub_460FB8(Blocka);
              if ( (_BYTE)v3 != 0 || *(_BYTE *)v0 != 0 )
              {
                v9 = "bad quit command";
                goto LABEL_139;
              }
              if ( *(_BYTE *)(v2 + 48) == 0 )
                return v0;
              v0 = sub_456DCC(16);
              if ( (int)v0 < 0 )
                return v0;
              LODWORD(v0) = sub_460FB8(HIDWORD(v0));
              LOBYTE(v0) = *(_BYTE *)v0;
              LODWORD(v0) = v0 | 0x20;
              if ( (_BYTE)v0 == 121 )
                return v0;
              continue;
            case 'r':
              if ( (v4[1] & 0xDF) != 0 )
              {
                v9 = "bad read command";
                goto LABEL_139;
              }
              v15 = (_BYTE *)sub_460FB8(Blocka);
              v9 = "no file name";
              if ( *v15 == 0 )
                goto LABEL_139;
              if ( sub_456728() == 0 && *(_DWORD *)(v2 + 28) == 0 )
LABEL_64:
                *(_DWORD *)(v2 + 28) = sub_47188C();
              continue;
            case 's':
              if ( sub_416B48(v40, v41, "substitute") != 0 )
                continue;
              strcpy(&Destination, v6);
              if ( (Destination & 0xDF) == 0 || Destination == 9 )
              {
                v9 = "bad delimiter for substitute";
                goto LABEL_139;
              }
              v16 = (unsigned __int8)Destination;
              v17 = strchr(Str, (unsigned __int8)Destination);
              if ( v17 == nullptr )
              {
                v9 = "missing 2nd delimiter for substitute";
                goto LABEL_139;
              }
              v49 = v17 + 1;
              *v17 = 0;
              v18 = strchr(v17 + 1, v16);
              v19 = (char *)&unk_47AE19;
              if ( v18 != nullptr )
              {
                v19 = v18 + 1;
                *v18 = 0;
              }
              v47 = 0;
              v46 = 0;
              while ( 2 )
              {
                v20 = *v19;
                if ( *v19 != 0 )
                {
                  if ( v20 == 103 )
                  {
                    v46 = 1;
LABEL_80:
                    ++v19;
                    continue;
                  }
                  if ( v20 == 112 )
                  {
                    v47 = 1;
                    goto LABEL_80;
                  }
                  v9 = "unknown option for substitute";
                  goto LABEL_139;
                }
                break;
              }
              if ( Str[0] != 0 )
              {
                strcpy((char *)&MultiByteStr, Str);
                v51 = Str;
              }
              else
              {
                v9 = "no previous search string";
                if ( (_BYTE)MultiByteStr == 0 )
                  goto LABEL_139;
                v51 = (const char *)&MultiByteStr;
              }
              v21 = (_DWORD *)sub_42FF18();
              if ( v21 != nullptr )
              {
                v44 = strlen(v51);
                v50 = strlen(v49);
                v45 = v50 - v44;
                v22 = 0;
                v23 = 0;
LABEL_86:
                v48 = 0;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    if ( v41 < v40 )
                    {
                      if ( v23 == 0 )
                        sub_41783C("no substitutions found for \"%s\"", v51);
                      goto LABEL_1;
                    }
                    v24 = sub_42FFC8(v44, v51, v48);
                    v25 = v24;
                    if ( v24 < 0 )
                    {
                      if ( v22 != 0 )
                        sub_44DD98(0);
                      v21 = (_DWORD *)*v21;
                      ++v40;
                      v22 = 0;
                      goto LABEL_86;
                    }
                    *(_BYTE *)(v2 + 48) = 1;
                    v48 = v24 + v50;
                    v26 = v24 + 12;
                    v52 = v25 + 12;
                    if ( v45 > 0 )
                      break;
                    qmemcpy((char *)v21 + v26, v49, v50);
                    if ( v45 != 0 )
                    {
                      qmemcpy((char *)v21 + v48 + 12, (char *)v21 + v44 + v25 + 12, v21[2] - v25 - v44);
                      v21[2] += v45;
                    }
                    v22 = v47;
                    v23 = v46;
                    if ( v46 == 0 )
                    {
                      if ( v47 != 0 )
                        sub_44DD98(0);
                      v21 = (_DWORD *)*v21;
LABEL_105:
                      ++v40;
                      v22 = 0;
                      v23 = 1;
                      continue;
                    }
                  }
                  v53 = v25;
                  v42 = (_DWORD *)sub_470E78();
                  v42[2] = v21[2] + v45;
                  qmemcpy(v42 + 3, v21 + 3, v53);
                  qmemcpy((char *)v42 + v52, v49, v50);
                  qmemcpy((char *)v42 + v48 + 12, (char *)v21 + v44 + v53 + 12, v21[2] - v53 - v44);
                  *v42 = *v21;
                  v27 = (_DWORD *)v21[1];
                  v42[1] = v27;
                  *v27 = v42;
                  *(_DWORD *)(*v42 + 4) = v42;
                  if ( v21 == *(_DWORD **)(v2 + 16) )
                    *(_DWORD *)(v2 + 16) = v42;
                  free(v21);
                  if ( v46 == 0 )
                  {
                    if ( v47 != 0 )
                      sub_44DD98(0);
                    v21 = (_DWORD *)*v42;
                    goto LABEL_105;
                  }
                  v22 = v47;
                  v23 = v46;
                  v21 = v42;
                }
              }
              break;
            case 'w':
              if ( (v4[1] & 0xDF) != 0 )
              {
                v9 = "bad write command";
                goto LABEL_139;
              }
              v28 = (const char *)sub_460FB8(Blocka);
              if ( *v28 == 0 )
              {
                v28 = *(const char **)(v2 + 28);
                v9 = "no file name specified";
                if ( v28 == nullptr )
                  goto LABEL_139;
              }
              if ( (_BYTE)v3 == 0 )
              {
                v41 = *(_DWORD *)(v2 + 4);
                *(_BYTE *)(v2 + 48) = 0;
                v40 = 1;
              }
              v29 = sub_416B48(v40, v41, "write");
              if ( v29 != 0 )
                continue;
              v31 = creat(v28, 438);
              if ( v31 < 0 )
                goto LABEL_126;
              sub_46F088("\"%s\", ", v28);
              sub_42F128(Blockb, Source);
              v32 = (_DWORD *)sub_42FF18();
              if ( v32 == nullptr )
                goto LABEL_123;
              v43 = 0;
              while ( 2 )
              {
                if ( v41 < v40 + v43 )
                {
                  if ( sub_442EA4(v31) >= 0 )
                    sub_46F088("%d lines, %d chars\n", v43, v29);
                  else
LABEL_126:
                    sub_418224(v28, v30);
                }
                else
                {
                  v33 = sub_43269C(v32[2], v32 + 3);
                  if ( v33 == v32[2] )
                  {
                    v29 += v33;
                    ++v43;
                    v32 = (_DWORD *)*v32;
                    continue;
                  }
                  sub_418224(v28, v34);
LABEL_123:
                  sub_442EA4(v31);
                }
                break;
              }
              continue;
            case 'z':
              v14 = 0;
              goto LABEL_137;
            default:
              goto LABEL_138;
          }
        }
        else if ( v7 == 61 )
        {
          sub_46F088("%d\n", v40);
        }
        else
        {
          if ( v7 > 0x3Du )
            goto LABEL_138;
          if ( v7 == 46 )
          {
            if ( (_BYTE)v3 != 0 )
            {
              v9 = "no arguments allowed";
              goto LABEL_139;
            }
            goto LABEL_136;
          }
          if ( v7 > 0x2Eu )
          {
LABEL_138:
            v9 = "unimplemented command";
LABEL_139:
            sub_4181F8(v9);
          }
          else
          {
            if ( v7 != 0 )
            {
              if ( v7 != 45 )
                goto LABEL_138;
            }
            else if ( (_BYTE)v3 != 0 )
            {
              v14 = 0;
              goto LABEL_137;
            }
            if ( sub_45E41C() != 0 )
            {
LABEL_136:
              v14 = 0;
LABEL_137:
              sub_44DD98(v14);
            }
          }
        }
      }
    }
  }
}

