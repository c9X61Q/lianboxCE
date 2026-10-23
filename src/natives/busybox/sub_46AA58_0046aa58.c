// busybox.exe @ 0x46aa58 size=3112

int __cdecl sub_46AA58(int a1, int a2)
{
  int v2; // edi
  char *v3; // esi
  char *v4; // ebx
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx
  char *v8; // edi
  const char *v9; // eax
  char *v10; // eax
  __int64 v11; // rax
  __int64 v12; // kr00_8
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  _BYTE *v16; // esi
  unsigned int v17; // edi
  unsigned __int16 v18; // bx
  int v19; // ecx
  const char *v20; // eax
  const char *v21; // eax
  int v22; // ecx
  int v23; // ecx
  const char *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  const char *v27; // eax
  _BYTE *v28; // eax
  int v29; // eax
  int v30; // ecx
  const char *v31; // eax
  const char *v32; // eax
  const char *v33; // eax
  int v34; // ecx
  void *v35; // ecx
  int v36; // eax
  const char *v37; // eax
  const char *v38; // eax
  char *v39; // ebx
  int v40; // ecx
  __int64 v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // eax
  char *Str; // [esp+0h] [ebp-110h]
  char *Stra; // [esp+0h] [ebp-110h]
  char *Strb; // [esp+0h] [ebp-110h]
  char *Source; // [esp+4h] [ebp-10Ch]
  char *Sourcea; // [esp+4h] [ebp-10Ch]
  int v50; // [esp+8h] [ebp-108h]
  int v51; // [esp+8h] [ebp-108h]
  int v52; // [esp+8h] [ebp-108h]
  unsigned __int16 v53; // [esp+24h] [ebp-ECh]
  int v54; // [esp+2Ch] [ebp-E4h]
  CHAR *Block; // [esp+30h] [ebp-E0h]
  char *Blocka; // [esp+30h] [ebp-E0h]
  int v57; // [esp+34h] [ebp-DCh]
  int v58; // [esp+34h] [ebp-DCh]
  char v59; // [esp+39h] [ebp-D7h]
  char v60; // [esp+3Ah] [ebp-D6h]
  char v61; // [esp+3Bh] [ebp-D5h]
  int v62; // [esp+3Ch] [ebp-D4h]
  int FileHandle; // [esp+40h] [ebp-D0h]
  _DWORD *v64; // [esp+44h] [ebp-CCh] BYREF
  _DWORD *v65; // [esp+48h] [ebp-C8h] BYREF
  char Destination[7]; // [esp+4Dh] [ebp-C3h] BYREF
  int v67; // [esp+54h] [ebp-BCh] BYREF
  unsigned __int16 v68; // [esp+58h] [ebp-B8h]
  unsigned __int16 v69; // [esp+5Ah] [ebp-B6h]
  unsigned __int16 v70; // [esp+5Ch] [ebp-B4h]
  int v71; // [esp+5Eh] [ebp-B2h]
  int v72; // [esp+62h] [ebp-AEh]
  unsigned int v73; // [esp+66h] [ebp-AAh]
  unsigned __int16 v74; // [esp+6Ah] [ebp-A6h]
  char v75[12]; // [esp+70h] [ebp-A0h] BYREF
  int v76; // [esp+7Ch] [ebp-94h]
  int v77; // [esp+80h] [ebp-90h]
  unsigned int v78; // [esp+84h] [ebp-8Ch]
  unsigned __int16 v79; // [esp+88h] [ebp-88h]
  unsigned __int16 v80; // [esp+8Ah] [ebp-86h]
  unsigned __int16 v81; // [esp+8Ch] [ebp-84h]
  __int64 v82; // [esp+90h] [ebp-80h]
  int v83; // [esp+98h] [ebp-78h]
  int v84; // [esp+9Ch] [ebp-74h]
  int v85; // [esp+A0h] [ebp-70h]
  unsigned __int8 v86; // [esp+B0h] [ebp-60h]
  int *v87; // [esp+100h] [ebp-10h]

  v87 = &a1;
  v57 = a1;
  v2 = a2;
  v64 = nullptr;
  v65 = nullptr;
  v3 = nullptr;
  v4 = nullptr;
  FileHandle = -1;
  v61 = 0;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  while ( 1 )
  {
    v5 = sub_4040F0(v57, v2, "-d:lnopqxjv");
    if ( v5 == -1 )
      break;
    if ( v5 != 1 )
    {
      switch ( v5 )
      {
        case 'd':
          v3 = dword_48601C;
          continue;
        case 'j':
          v62 |= 4u;
          continue;
        case 'l':
          goto LABEL_10;
        case 'n':
          v61 = 1;
          continue;
        case 'o':
          v61 = 2;
          continue;
        case 'p':
          FileHandle = 1;
          goto LABEL_8;
        case 'q':
LABEL_8:
          ++v60;
          continue;
        case 'v':
          ++v59;
LABEL_10:
          v62 |= 1u;
          continue;
        case 'x':
          v62 |= 2u;
          continue;
        default:
          goto LABEL_20;
      }
    }
    if ( v4 != nullptr )
    {
      v6 = &v64;
      if ( (v62 & 2) != 0 )
        v6 = &v65;
      sub_43E368(v6, (int)dword_48601C);
    }
    else
    {
      strlen(dword_48601C);
      v4 = (char *)sub_470E78();
      strcpy(v4, dword_48601C);
    }
  }
  if ( v4 == nullptr )
LABEL_20:
    sub_418164();
  if ( *v4 != 45 || v4[1] != 0 )
  {
    v8 = &v4[strlen(v4)];
    if ( sub_443508(v4, 0, v50) < 0 )
    {
      strcpy(v8, ".zip");
      if ( sub_443508(v4, 0, v51) < 0 )
      {
        strcpy(v8, ".ZIP");
        if ( sub_443508(v4, 0, v52) < 0 )
        {
          *v8 = 0;
          sub_41784C("can't open %s[.zip]", v4);
        }
      }
    }
    sub_471530(Str);
  }
  else
  {
    sub_470C64();
    if ( v61 == 0 )
      v61 = 1;
  }
  if ( v3 != nullptr )
  {
    sub_443494(v3);
    sub_470B28();
  }
  if ( v60 <= 1 )
  {
    if ( v60 == 0 )
    {
      v9 = (const char *)sub_44F0C8((int)v4, v7);
      sub_46F088("Archive:  %s\n", v9);
    }
    if ( (v62 & 1) != 0 )
    {
      v10 = " Length   Method    Size  Cmpr    Date    Time   CRC-32   Name\n"
            "--------  ------  ------- ---- ---------- ----- --------  ----";
      if ( v59 == 0 )
        v10 = "  Length      Date    Time    Name\n---------  ---------- -----   ----";
      sub_46F108(v10);
    }
  }
  v11 = sub_443400(3, 0, 2);
  if ( HIDWORD(v11) != -1 || (v58 = -1, (_DWORD)v11 != -1) )
  {
    v12 = v11 - 0x10000;
    if ( (((unsigned __int64)(v11 - 0x10000) >> 32) & 0x80000000) != 0LL )
      v12 = 0;
    sub_470E28(0);
    Block = (CHAR *)sub_4728CC(v13);
    sub_432664(0x10000, Block);
    v14 = (unsigned int)Block;
    v58 = -1;
    while ( v14 <= (unsigned int)(Block + 65516) )
    {
      v15 = v14 + 1;
      if ( *(_BYTE *)v14 == 80 && *(_BYTE *)(v14 + 1) == 75 )
      {
        v15 = v14 + 2;
        if ( *(_BYTE *)(v14 + 2) == 5 )
        {
          v15 = v14 + 3;
          if ( *(_BYTE *)(v14 + 3) == 6 && *(unsigned int *)(v14 + 16) < v12 + (int)(v15 - (_DWORD)Block) )
            v58 = *(_DWORD *)(v14 + 16);
        }
      }
      v14 = v15;
    }
    free(Block);
  }
  v16 = nullptr;
  Blocka = nullptr;
  v54 = 0;
  v17 = 0;
  while ( 1 )
  {
    if ( v58 == -1 )
    {
      while ( 1 )
      {
        sub_4715C8(4, v75);
        if ( *(_DWORD *)v75 == 33639248 )
          goto LABEL_161;
        if ( *(_DWORD *)v75 != 134695760 )
          break;
        sub_46B680(Stra, Source);
      }
      if ( *(_DWORD *)v75 != 67324752 )
        sub_41784C("invalid zip magic %08X", *(_DWORD *)v75);
      sub_4715C8(26, &v67);
      if ( (v67 & 0x80000) != 0 )
      {
        Sourcea = "8 (streaming)";
        goto LABEL_71;
      }
      v18 = 438;
      v53 = 511;
      goto LABEL_69;
    }
    sub_470E28(0);
    sub_4715C8(4, &v67);
    if ( v67 == 101010256 )
      break;
    sub_4715C8(42, v75);
    v58 += v81 + v79 + v80 + 46;
    if ( v58 == 0 )
      break;
    sub_470E28(0);
    sub_4715C8(26, &v67);
    if ( (v67 & 0x80000) != 0 )
    {
      v71 = v76;
      v72 = v77;
      v73 = v78;
    }
    v18 = 438;
    v53 = 511;
    if ( v75[1] == 3 )
    {
      v18 = WORD2(v82);
      v53 = WORD2(v82);
    }
LABEL_69:
    if ( (v67 & 0x10000) != 0 )
    {
      Sourcea = "1 (encryption)";
LABEL_71:
      sub_41784C("zip flag %s is not supported", Sourcea);
    }
    free(v16);
    if ( v74 > 0xFFFu )
      goto LABEL_73;
    v16 = (_BYTE *)sub_4728CC(v19);
    sub_4715C8(v74, v16);
    sub_46B680(Strb, Source);
    v21 = sub_4638F8(v16);
    sub_448258((int)v16, (int)v21);
    if ( sub_4305B0(v65, (int)v16) != nullptr || v64 != nullptr && sub_4305B0(v64, (int)v16) == nullptr )
      goto LABEL_158;
    if ( (v62 & 1) != 0 )
    {
      sub_4627B4(
        (int)v75,
        (int)"%02u-%02u-%04u %02u:%02u",
        (v70 >> 5) & 0xF,
        v70 & 0x1F,
        (v70 >> 9) + 1980,
        v69 >> 11,
        (v69 >> 5) & 0x3F);
      if ( v59 != 0 )
      {
        sub_4627B4((int)Destination, (int)"%6u", v68);
        if ( v68 != 0 )
        {
          if ( v68 == 8 )
          {
            strcpy(Destination, "Defl:N");
            Destination[5] = byte_478C7C[(HIWORD(v67) >> 1) & 3];
          }
        }
        else
        {
          strcpy(Destination, "Stored");
        }
        v25 = v73 - v72;
        if ( (int)(v73 - v72) < 0 )
          v25 = 0;
        v26 = 100 * v25;
        if ( v73 != 0 )
          v26 /= v73;
        v27 = (const char *)sub_44F0C8((int)v16, v73);
        sub_46F088("%8u  %s%9u%4u%% %s %08x  %s\n", v73, Destination, v72, v26, v75, v71, v27);
        v54 += v72;
      }
      else
      {
        v24 = (const char *)sub_44F0C8((int)v16, v23);
        sub_46F088("%9u  %s   %s\n", v73, v75, v24);
      }
      v17 += v73;
      goto LABEL_158;
    }
    if ( FileHandle == 1 )
    {
      if ( v60 == 0 )
        goto LABEL_126;
LABEL_127:
      if ( (v18 & 0xF000) != 0xA000 )
        goto LABEL_133;
      if ( FileHandle == 1 )
        goto LABEL_160;
LABEL_129:
      if ( v73 <= 0xFFF )
      {
        if ( v68 != 0 )
        {
          v20 = "compressed symlink is not supported";
          goto LABEL_143;
        }
        v39 = (char *)sub_4728CC(v22);
        sub_4715C8(v73, v39);
        sub_4209AC(v39, v16);
        free(v39);
        goto LABEL_160;
      }
LABEL_73:
      v20 = "bad archive";
      goto LABEL_143;
    }
    if ( (v62 & 4) != 0 )
    {
      v28 = sub_416E24(v16);
      sub_448258((int)v16, (int)v28);
    }
    if ( *v16 == 0 )
      goto LABEL_158;
    if ( sub_43D3D4(v16, 47) != nullptr )
    {
      v29 = sub_434938(v16);
      if ( v29 == -1 )
      {
        if ( v60 == 0 )
        {
          v31 = (const char *)sub_44F0C8((int)v16, v30);
          sub_46F088("   creating: %s\n", v31);
        }
        sub_46AA24();
        if ( sub_417C00(v16, v53, 0x80000000) != 0 )
          sub_470D44(Stra);
      }
      else if ( (v29 & 0xF000) != 0x4000 )
      {
        v32 = (const char *)sub_44F0C8((int)v16, v30);
        sub_41784C("'%s' exists but is not a %s", v32, "directory");
      }
LABEL_158:
      sub_46B680(Stra, Source);
      goto LABEL_160;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v36 = sub_434938(v16);
        if ( v36 == -1 )
          goto LABEL_122;
        if ( v61 == 1 )
          goto LABEL_158;
        if ( (v36 & 0xF000) != 0x8000 )
          goto LABEL_114;
        if ( v61 == 2 )
          goto LABEL_122;
        v33 = (const char *)sub_44F0C8((int)v16, v34);
        sub_46F088("replace %s? [y]es, [n]o, [A]ll, [N]one, [r]ename: ", v33);
        sub_445C0C();
        if ( (sub_434938(v16) & 0xF000) != 0x8000 )
        {
LABEL_114:
          v37 = (const char *)sub_44F0C8((int)v16, v34);
          sub_41784C("'%s' exists but is not a %s", v37, "regular file");
        }
        if ( v86 == 121 )
          goto LABEL_122;
        if ( v86 > 0x79u )
          goto LABEL_159;
        if ( v86 != 114 )
          break;
        sub_46F088("new name: ");
        sub_445C0C();
        free(v16);
        v16 = (_BYTE *)sub_47188C();
        sub_41C7E0(v35);
      }
      if ( v86 <= 0x72u )
      {
        if ( v86 == 110 )
          goto LABEL_158;
        if ( v86 > 0x6Eu )
          goto LABEL_159;
        if ( v86 == 65 )
          break;
        if ( v86 == 78 )
        {
          v61 = 1;
          goto LABEL_158;
        }
      }
LABEL_159:
      sub_46F088("error: invalid response [%c]\n", v86);
    }
    v61 = 2;
LABEL_122:
    sub_46AA24();
    if ( (v18 & 0xF000) == 0xA000 )
    {
      FileHandle = -1;
      if ( v60 == 0 )
      {
LABEL_126:
        v38 = (const char *)sub_44F0C8((int)v16, v22);
        sub_46F088("  inflating: %s\n", v38);
        goto LABEL_127;
      }
      goto LABEL_129;
    }
    FileHandle = sub_471558(v18, 769);
    if ( v60 == 0 )
      goto LABEL_126;
LABEL_133:
    if ( v68 == 0 )
    {
      if ( v73 != 0 )
      {
        Source = (char *)sub_416EDC(v73);
        Stra = Source;
      }
      goto LABEL_136;
    }
    sub_43AD1C(v75);
    v83 = v72;
    v84 = 0;
    v76 = 3;
    v77 = FileHandle;
    if ( v68 == 8 )
    {
      if ( (((unsigned __int64)sub_43A4EC(v75) >> 32) & 0x80000000) != 0LL )
        goto LABEL_140;
      if ( v71 != ~v85 )
      {
        v20 = "crc error";
LABEL_143:
        sub_418210(v20);
      }
    }
    else
    {
      switch ( v68 )
      {
        case 0xCu:
          v41 = sub_468C1C((int)v75, v40);
          break;
        case 0xEu:
          LODWORD(v41) = sub_469060((int)v75);
          break;
        case 0x5Fu:
          v41 = sub_469EE8((int)v75);
          break;
        default:
          sub_41784C("unsupported method %u", v68);
      }
      v82 = v41;
      if ( v41 < 0 )
      {
LABEL_140:
        v20 = "inflate error";
        goto LABEL_143;
      }
    }
    if ( HIDWORD(v82) != 0 || v73 != (_DWORD)v82 )
      sub_4181F8("bad length");
LABEL_136:
    if ( FileHandle != 1 )
      sub_442EA4(FileHandle);
LABEL_160:
    ++Blocka;
  }
LABEL_161:
  if ( v60 <= 1 && (v62 & 1) != 0 )
  {
    if ( v59 != 0 )
    {
      v42 = v17 - v54;
      if ( (int)(v17 - v54) < 0 )
        v42 = 0;
      v43 = 100 * v42;
      if ( v17 != 0 )
        v43 /= v17;
      sub_46F088(
        "--------          ------- ----%28s----\n%8lu%17lu%4u%%%28s%u files\n",
        (const char *)&unk_478C11,
        v17,
        v54,
        v43,
        (const char *)&unk_478C11,
        Blocka);
    }
    else
    {
      sub_46F088(
        " --------%21s-------\n%9lu%21s%u files\n",
        (const char *)&unk_478C11,
        v17,
        (const char *)&unk_478C11,
        Blocka);
    }
  }
  return 0;
}

