// busybox.exe @ 0x458414 size=3049

int __usercall sub_458414@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>, int a4)
{
  int v5; // ecx
  int v6; // esi
  void *v7; // ecx
  int v8; // eax
  int j; // ebx
  char v10; // al
  int k; // edi
  char v12; // al
  int v13; // eax
  int v14; // eax
  int v15; // edi
  char v16; // dl
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  const char *v23; // eax
  char *v24; // edi
  int v25; // edi
  unsigned __int8 *i; // edi
  int v28; // eax
  _BYTE *v29; // edx
  int v30; // eax
  void *v31; // esp
  const void *v32; // edx
  unsigned int v33; // ecx
  int v34; // eax
  int v35; // esi
  int v36; // eax
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  unsigned int *v40; // edx
  char v41; // bl
  int v42; // eax
  int v43; // edx
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  char *v47; // eax
  int v48; // eax
  unsigned int *v49; // edx
  void *v50; // esp
  int v51; // eax
  int v52; // eax
  unsigned int v53; // esi
  void *v54; // esp
  int v55; // eax
  int v56; // esi
  int v57; // eax
  int *v58; // eax
  int *v59; // esi
  int v60; // edi
  char v61; // dl
  void *v62; // ecx
  char v63; // cl
  _BYTE *v64; // eax
  unsigned int v65; // ecx
  void *v66; // esp
  int v67; // eax
  char Str; // [esp+0h] [ebp-58h]
  int v69; // [esp+8h] [ebp-50h]
  char v70; // [esp+8h] [ebp-50h]
  int v71; // [esp+Ch] [ebp-4Ch]
  unsigned int v72; // [esp+10h] [ebp-48h] BYREF
  char v73; // [esp+16h] [ebp-42h]
  char v74; // [esp+17h] [ebp-41h]
  unsigned int *v75; // [esp+18h] [ebp-40h]
  _BYTE *v76; // [esp+1Ch] [ebp-3Ch]
  unsigned int v77; // [esp+20h] [ebp-38h]
  unsigned int *v78; // [esp+24h] [ebp-34h]
  int v79; // [esp+28h] [ebp-30h] BYREF
  char *v80; // [esp+2Ch] [ebp-2Ch] BYREF
  char v81; // [esp+30h] [ebp-28h] BYREF
  _BYTE v82[3]; // [esp+31h] [ebp-27h] BYREF
  _BYTE v83[36]; // [esp+34h] [ebp-24h] BYREF

  v71 = a2;
  v77 = a3;
  memset(v83, 0, 0x18u);
  v5 = 0;
  if ( a2 == 4 )
  {
    v83[0] = 1;
LABEL_4:
    v83[1] |= 4u;
    goto LABEL_5;
  }
  v83[0] = v71;
  if ( v71 == 1 )
    goto LABEL_4;
LABEL_5:
  v79 = 0;
  v6 = *(_DWORD *)(dword_485FF4 + 4);
  v78 = (unsigned int *)v83;
  v73 = 0;
  v74 = 0;
  while ( 2 )
  {
    if ( v77 <= 1 )
      goto LABEL_7;
    if ( a1 == 257 )
      a1 = sub_44CC98();
    if ( a4 != 0 )
    {
      while ( a1 == 9 )
        a1 = sub_44CC98();
    }
    v76 = (_BYTE *)(v6 - *(_DWORD *)(dword_485FF4 + 4));
    for ( i = (unsigned __int8 *)v77; ; ++i )
    {
      v6 = (int)sub_411E88(a1, (_BYTE *)v6);
      v28 = *i;
      if ( (_BYTE)v28 == 0 )
        break;
      if ( v28 != a1 )
        goto LABEL_132;
      a1 = sub_44CC98();
    }
    if ( a1 == 10 || a1 == 256 )
    {
      ++*((_DWORD *)off_473358 + 1);
      byte_4734B0 = byte_473320;
      a1 = 256;
      goto LABEL_135;
    }
LABEL_132:
    v29 = &v76[*(_DWORD *)(dword_485FF4 + 4) + 1];
    v5 = v6 - (_DWORD)v29;
    if ( (_BYTE *)v6 != v29 )
    {
      v30 = a1 > 255;
      a1 = (unsigned __int8)v76[*(_DWORD *)(dword_485FF4 + 4)];
      v5 -= v30;
      if ( v5 != 0 )
      {
        v31 = alloca(sub_4115D8(4 * ((unsigned int)(v5 + 16) >> 2), v5, Str));
        qmemcpy(&v72, v32, v33);
        *((_BYTE *)&v72 + v33) = 0;
        sub_452850((const char *)&v72, 0);
      }
    }
LABEL_135:
    v6 = (int)&v76[*(_DWORD *)(dword_485FF4 + 4)];
LABEL_7:
    v76 = *(_BYTE **)(dword_485FF4 + 8);
    if ( (unsigned int)&v76[-v6] <= 3 )
      v6 = sub_441F7C(4, v6);
    switch ( sub_411DE0(a1, *(_BYTE *)v78, v5) )
    {
      case 0:
        goto LABEL_97;
      case 1:
        if ( *(_BYTE *)v78 == 0 && v78[1] == 0 )
          goto LABEL_103;
        *(_BYTE *)v6 = a1;
        sub_446CD0(v7);
        if ( *(_BYTE *)v78 == 2 )
          v8 = sub_44CA70();
        else
          v8 = sub_44CC6C();
        a1 = v8;
        ++v6;
        continue;
      case 2:
        v13 = sub_44CC98();
        if ( v13 == 256 )
        {
          *(_WORD *)v6 = 23681;
          sub_452778();
          v6 += 2;
          goto LABEL_99;
        }
        if ( v71 != 4 || v13 != 36 )
        {
          LOBYTE(v76) = *((_BYTE *)v78 + 1);
          if ( ((v13 != 36) & ((unsigned __int8)v76 >> 2)) == 0 || ((v13 - 92) & 0xFFFFFFFB) == 0 )
            goto LABEL_58;
          if ( v13 == 34 )
          {
            if ( v77 == 0 )
              goto LABEL_58;
          }
          else if ( v13 != 125 )
          {
            goto LABEL_57;
          }
          if ( v78[1] != 0 )
            goto LABEL_58;
        }
LABEL_57:
        *(_WORD *)v6 = 23681;
        v6 += 2;
LABEL_58:
        *(_BYTE *)v6 = -127;
        *(_BYTE *)(v6 + 1) = v13;
        v6 += 2;
        goto LABEL_90;
      case 3:
        *(_BYTE *)v78 = 2;
        goto LABEL_60;
      case 4:
        LOWORD(v76) = *v78;
        *(_WORD *)v78 = (unsigned __int16)v76 & 0xFB00 | 0x401;
        goto LABEL_63;
      case 5:
        if ( v77 == 0 || v78[1] != 0 )
        {
          if ( v78[2] == 0 )
            *(_WORD *)v78 &= 0xFB00u;
          v73 = 0;
          v74 = 1;
          if ( a1 == 34 )
          {
LABEL_63:
            if ( v78[1] != 0 )
              *((_BYTE *)v78 + 1) = !(*((_BYTE *)v78 + 1) & 1) | *((_BYTE *)v78 + 1) & 0xFE;
          }
LABEL_60:
          if ( v77 == 0 )
          {
            *(_BYTE *)v6 = -120;
            goto LABEL_98;
          }
        }
        else
        {
          *(_BYTE *)v6++ = a1;
          v73 = 0;
        }
        goto LABEL_99;
      case 6:
        if ( (byte_473198 & 8) != 0 )
        {
          *(_BYTE *)v6++ = 96;
LABEL_90:
          v74 = 1;
          goto LABEL_99;
        }
        v41 = 1;
        goto LABEL_241;
      case 7:
        v14 = sub_44CC6C();
        v15 = v14;
        if ( (byte_473198 & 8) != 0 || v14 > 255 )
          goto LABEL_165;
        if ( v14 == 123 || v14 == 40 || v14 == 95 )
        {
          if ( v14 == 40 )
          {
            if ( sub_44CC6C() == 40 )
            {
              v40 = (unsigned int *)v78[4];
              if ( v40 == nullptr )
              {
                v66 = alloca(sub_4115D8(0x24u, v39, Str));
                v40 = &v72;
              }
              memset(v40, 0, 0x18u);
              *(_BYTE *)v40 = 3;
              v67 = (int)v78;
              v40[5] = (unsigned int)v78;
              *(_DWORD *)(v67 + 16) = v40;
              *((_BYTE *)v40 + 1) |= 4u;
              *(_BYTE *)v6 = -122;
              v78 = v40;
              goto LABEL_98;
            }
            sub_452778();
            v41 = 0;
LABEL_241:
            v76 = *(_BYTE **)(dword_485FF4 + 4);
            v75 = nullptr;
            v53 = v6 - (_DWORD)v76;
            v72 = v53;
            if ( v53 != 0 )
            {
              v54 = alloca(sub_4115D8(4 * ((v53 + 15) >> 2), (int)v7, Str));
              v75 = &v72;
              qmemcpy(&v72, v76, v72);
              v7 = nullptr;
            }
            if ( v41 == 0 )
            {
LABEL_265:
              v58 = (int *)v79;
              v59 = &v79;
              while ( v58 != nullptr )
              {
                v59 = v58;
                v58 = (int *)*v58;
              }
              *v59 = sub_463A54();
              v60 = dword_473374;
              dword_473374 = 0;
              v61 = 0;
              if ( v41 != 0 )
              {
                v61 = byte_473320;
                byte_473320 = 0;
              }
              v70 = v61;
              v76 = sub_43E060(2);
              if ( v41 != 0 )
              {
                byte_473320 = v70;
              }
              else
              {
                if ( sub_458374() != 10 )
                  sub_452FDC(10);
                sub_45E79C();
              }
              sub_44B928(v62);
              dword_473374 = v60;
              v63 = (char)v76;
              *(_DWORD *)(*v59 + 4) = v76;
              sub_44D8A4(v63);
              if ( v41 != 0 )
                byte_4735A8 = 0;
              v64 = (_BYTE *)sub_4371F8(v72 + 1);
              if ( v75 != nullptr )
              {
                v65 = v72;
                qmemcpy(v64, v75, v72);
                v64 += v65;
              }
              v6 = (int)(v64 + 1);
              *v64 = -124;
              goto LABEL_99;
            }
            while ( 2 )
            {
              sub_45E8B8(v7, 2);
              v55 = sub_44CC6C();
              LOBYTE(v56) = v55;
              if ( v55 <= 257 )
              {
                if ( v55 > 255 )
                  goto LABEL_260;
                if ( v55 == 96 )
                {
                  if ( *(_BYTE **)(dword_485FF4 + 4) != sub_411E88(0, v76) )
                  {
                    sub_462C74();
                    sub_45E79C();
                  }
                  goto LABEL_265;
                }
                if ( v55 <= 96 )
                {
                  if ( v55 == 10 )
                  {
                    sub_446CBC();
                  }
                  else if ( v55 == 92 )
                  {
                    v57 = sub_44CA70();
                    v56 = v57;
                    if ( v57 != 92 )
                    {
                      if ( v57 == 96 || v57 == 36 )
                        goto LABEL_259;
                      if ( (*((_BYTE *)v78 + 1) & 4) != 0 && v57 == 34 )
                      {
                        LOBYTE(v56) = 34;
                      }
                      else
                      {
                        v76 = sub_411E88(92, v76);
LABEL_259:
                        if ( v56 > 255 )
                        {
LABEL_260:
                          v23 = "EOF in backquote substitution";
LABEL_108:
                          sub_452FB4(v23);
                        }
                      }
                    }
                  }
                }
              }
              v76 = sub_411E88(v56, v76);
              continue;
            }
          }
        }
        else if ( (unsigned __int8)((v14 | 0x20) - 97) > 0x19u )
        {
          if ( (unsigned int)(v14 - 33) > 0x1F || (v38 = -1040215539, !_bittest(&v38, v14 - 33)) )
          {
LABEL_165:
            if ( *(_BYTE *)v78 != 1 && v14 == 39 )
              v73 = 1;
            else
              *(_BYTE *)v6++ = 36;
            sub_452778();
            goto LABEL_99;
          }
        }
        LOBYTE(v76) = *(_BYTE *)v78;
        *(_BYTE *)v6 = -126;
        v72 = *(_DWORD *)(dword_485FF4 + 4);
        LOBYTE(a1) = 1;
        if ( v14 == 123 )
        {
          v15 = sub_44CC6C();
          a1 = 0;
        }
        v75 = (unsigned int *)(v6 + 2);
        while ( 1 )
        {
          if ( v15 == 95 || (unsigned __int8)((v15 | 0x20) - 97) <= 0x19u )
            goto LABEL_186;
          if ( (unsigned __int8)(v15 - 48) <= 9u )
          {
            while ( 1 )
            {
              v75 = (unsigned int *)sub_411E88(v15, v75);
              v45 = sub_44CC6C();
              v15 = v45;
              if ( (_BYTE)a1 != 0 )
                break;
              if ( (unsigned __int8)(v45 - 48) > 9u )
                goto LABEL_209;
            }
            if ( v45 != 125 && (_BYTE)a1 == 10 )
LABEL_207:
              LOBYTE(a1) = 10;
            goto LABEL_227;
          }
          if ( v15 == 125 )
            goto LABEL_227;
          v42 = sub_44CC6C();
          v43 = v42;
          if ( (_BYTE)a1 != 0 || v15 != 35 )
            goto LABEL_200;
          if ( v42 == 95 )
            break;
          if ( (unsigned __int8)(v42 - 48) > 9u && (unsigned __int8)((v42 | 0x20) - 97) > 0x19u )
          {
            v69 = v42;
            if ( sub_44CC6C() == 125 && v69 != 125 )
            {
              v15 = v69;
              LOBYTE(a1) = 10;
              v43 = 125;
            }
            else
            {
              sub_452778();
              v43 = v69;
            }
LABEL_200:
            if ( (unsigned int)(v15 - 33) <= 0x1F )
            {
              v46 = -1040215539;
              if ( _bittest(&v46, v15 - 33) )
              {
                v75 = (unsigned int *)(v6 + 3);
                *(_BYTE *)(v6 + 2) = v15;
                v15 = v43;
                goto LABEL_205;
              }
            }
            if ( (_BYTE)a1 == 10 )
              LOBYTE(a1) = 0;
            goto LABEL_227;
          }
          LOBYTE(a1) = 10;
          v15 = v42;
        }
        LOBYTE(v15) = 95;
        LOBYTE(a1) = 10;
        do
        {
          do
          {
LABEL_186:
            v75 = (unsigned int *)sub_411E88(v15, v75);
            v44 = sub_44CC6C();
            v15 = v44;
          }
          while ( v44 == 95 );
        }
        while ( (unsigned __int8)(v44 - 48) <= 9u || (unsigned __int8)((v44 | 0x20) - 97) <= 0x19u );
LABEL_205:
        if ( v15 == 125 )
        {
          if ( (_BYTE)a1 == 0 )
            goto LABEL_219;
LABEL_227:
          sub_452778();
          goto LABEL_228;
        }
        if ( (_BYTE)a1 == 10 )
          goto LABEL_207;
        if ( (_BYTE)a1 != 0 )
          goto LABEL_227;
LABEL_209:
        if ( v15 == 58 )
        {
          v15 = sub_44CC6C();
          if ( strchr("}-+?=", v15) == nullptr )
          {
            sub_452778();
            LOBYTE(a1) = 12;
            goto LABEL_228;
          }
          LOBYTE(a1) = 16;
          goto LABEL_219;
        }
        if ( v15 > 58 )
          goto LABEL_217;
        if ( v15 == 47 )
        {
          v48 = sub_44CC6C();
          LOBYTE(a1) = 14;
          LOBYTE(v76) = 0;
          if ( v48 == 47 )
            goto LABEL_230;
          LOBYTE(a1) = 13;
          goto LABEL_227;
        }
        if ( v15 <= 47 && ((v15 - 35) & 0xFFFFFFFD) == 0 )
        {
          LOBYTE(a1) = 2 * (v15 == 35) + 6;
          if ( v15 == sub_44CC6C() )
            LOBYTE(a1) = 2 * (v15 == 35) + 7;
          else
            sub_452778();
          LOBYTE(v76) = 0;
          goto LABEL_230;
        }
LABEL_217:
        a1 = 0;
LABEL_219:
        v47 = strchr("}-+?=", v15);
        if ( v47 != nullptr )
          a1 |= v47 - "}-+?=" + 1;
LABEL_228:
        if ( (_BYTE)v76 == 3 )
          LOBYTE(v76) = 1;
LABEL_230:
        if ( (*(_BYTE *)v78 != (_BYTE)v76 || (*((_BYTE *)v78 + 1) & 1) != 0) && (_BYTE)a1 != 1 )
        {
          v49 = (unsigned int *)v78[4];
          if ( v49 == nullptr )
          {
            v50 = alloca(sub_4115D8(0x24u, (int)v78, Str));
            v49 = &v72;
          }
          memset(v49, 0, 0x18u);
          *(_BYTE *)v49 = (_BYTE)v76;
          v51 = (int)v78;
          v49[5] = (unsigned int)v78;
          *(_DWORD *)(v51 + 16) = v49;
          *((_BYTE *)v49 + 1) = *((_BYTE *)v49 + 1) & 0xF9 | (4 * ((_BYTE)v76 != 0)) | 2;
          v78 = v49;
        }
        *(_BYTE *)(v6 - v72 + *(_DWORD *)(dword_485FF4 + 4) + 1) = a1;
        if ( (_BYTE)a1 != 1 )
        {
          v52 = (int)v78;
          ++v78[1];
          if ( (*(_BYTE *)(v52 + 1) & 4) != 0 )
            ++*(_DWORD *)(v52 + 8);
        }
        v6 = (int)sub_411E88(61, v75);
LABEL_99:
        if ( *(_BYTE *)v78 == 2 )
          v22 = sub_44CA70();
        else
          v22 = sub_44CC6C();
        a1 = v22;
        goto LABEL_7;
      case 8:
        v16 = *((_BYTE *)v78 + 1);
        if ( (v16 & 1) == 0 )
        {
          v17 = v78[1];
          if ( v17 > 0 )
          {
            v18 = v17 - 1;
            v19 = (int)v78;
            v78[1] = v18;
            if ( v18 != 0 || (v16 & 2) == 0 )
            {
              v20 = v78[2];
              LOBYTE(a1) = -125;
              if ( v20 > 0 )
                v78[2] = v20 - 1;
            }
            else
            {
              v78 = *(unsigned int **)(v19 + 20);
              LOBYTE(a1) = -125;
            }
          }
        }
        goto LABEL_97;
      case 9:
        ++v78[3];
        goto LABEL_97;
      case 10:
        v21 = v78[3];
        if ( v21 <= 0 )
        {
          if ( sub_44CC6C() == 41 )
          {
            v78 = (unsigned int *)v78[5];
            LOBYTE(a1) = -121;
          }
          else
          {
            sub_452778();
          }
        }
        else
        {
          v78[3] = v21 - 1;
        }
        goto LABEL_97;
      case 11:
        goto LABEL_103;
      case 12:
        if ( a1 != 92 || v73 == 0 )
          goto LABEL_42;
        a1 = sub_44CA70();
        v80 = strchr("nrbtfavx\\01234567", a1);
        if ( v80 != nullptr )
        {
          v81 = a1;
          v80 = &v81;
          if ( (unsigned __int8)(a1 - 48) <= 7u )
          {
            for ( j = 3; j != 0; --j )
            {
              v10 = sub_44CA70();
              *++v80 = v10;
              if ( (unsigned __int8)(v10 - 48) > 7u )
                break;
            }
            sub_452778();
            goto LABEL_33;
          }
          if ( a1 != 120 )
          {
            v80 = v82;
LABEL_33:
            *v80 = 0;
            v80 = &v81;
            LOBYTE(a1) = sub_418050(&v80);
            if ( (_BYTE)a1 == 0 )
              goto LABEL_99;
LABEL_42:
            if ( v77 == 0 || (*((_BYTE *)v78 + 1) & 4) != 0 || v78[1] != 0 )
              *(_BYTE *)v6++ = -127;
LABEL_97:
            *(_BYTE *)v6 = a1;
LABEL_98:
            ++v6;
            goto LABEL_99;
          }
          for ( k = 3; k != 0; --k )
          {
            v76 = (_BYTE *)k;
            v12 = sub_44CA70();
            *++v80 = v12;
            if ( (unsigned __int8)(v12 - 48) > 9u && (unsigned __int8)((v12 | 0x20) - 97) > 5u )
              goto LABEL_30;
          }
          v76 = nullptr;
LABEL_30:
          sub_452778();
          if ( v76 != (_BYTE *)3 )
            goto LABEL_33;
        }
        else if ( a1 == 39 || a1 == 34 )
        {
LABEL_38:
          if ( (a1 & 0x100) != 0 )
          {
            if ( v77 == 0 || (*((_BYTE *)v78 + 1) & 4) != 0 )
              *(_BYTE *)v6++ = -127;
            *(_BYTE *)v6++ = 92;
          }
          goto LABEL_42;
        }
        BYTE1(a1) |= 1u;
        goto LABEL_38;
      case 14:
        goto LABEL_99;
      default:
        if ( v78[1] != 0 )
        {
          if ( a1 == 257 )
            goto LABEL_99;
          goto LABEL_97;
        }
        if ( a1 == 38 )
        {
          if ( sub_44CA70() == 62 )
            a1 = 318;
          sub_452778();
        }
LABEL_103:
        if ( *(_BYTE *)v78 == 3 )
        {
          v23 = "missing '))'";
          goto LABEL_108;
        }
        if ( v77 == 0 && *(_BYTE *)v78 != 0 )
        {
          v23 = "unterminated quoted string";
          goto LABEL_108;
        }
        if ( v78[1] != 0 )
        {
          v23 = "missing '}'";
          goto LABEL_108;
        }
        *(_BYTE *)v6 = 0;
        v24 = *(char **)(dword_485FF4 + 4);
        if ( v77 != 0 )
          goto LABEL_119;
        if ( ((a1 & 0xFFFFFFFD) == 0x3C || a1 == 318) && v74 == 0 && sub_43C648(v24) )
        {
          if ( *v24 != 0 )
            v25 = atoi(v24);
          else
            v25 = -1;
          v34 = sub_463A54();
          v35 = v34;
          if ( a1 == 62 )
          {
            *(_DWORD *)(v34 + 8) = 1;
            v36 = sub_44CC6C();
            switch ( v36 )
            {
              case '>':
                *(_BYTE *)v35 = 21;
LABEL_157:
                if ( v25 >= 0 )
                  *(_DWORD *)(v35 + 8) = v25;
                dword_473570 = v35;
                byte_473450 = 2;
                return 2;
              case '|':
                *(_BYTE *)v35 = 18;
                goto LABEL_157;
              case '&':
                *(_BYTE *)v35 = 22;
                goto LABEL_157;
              default:
                break;
            }
            *(_BYTE *)v35 = 16;
          }
          else
          {
            if ( a1 == 318 )
            {
              *(_DWORD *)(v34 + 8) = 1;
              sub_44CA70();
              *(_BYTE *)v35 = 17;
              goto LABEL_157;
            }
            v37 = sub_44CC6C();
            if ( v37 == 62 )
            {
              *(_BYTE *)v35 = 20;
              goto LABEL_157;
            }
            if ( v37 > 62 )
              goto LABEL_155;
            if ( v37 == 38 )
            {
              *(_BYTE *)v35 = 23;
              goto LABEL_157;
            }
            if ( v37 == 60 )
            {
              v35 = sub_463A54();
              *(_BYTE *)v35 = 24;
              dword_473370 = sub_463A54();
              *(_DWORD *)(dword_473370 + 4) = v35;
              if ( sub_44CC6C() == 45 )
              {
                *(_BYTE *)(dword_473370 + 12) = 1;
                goto LABEL_157;
              }
            }
            else
            {
LABEL_155:
              *(_BYTE *)v35 = 19;
            }
          }
          sub_452778();
          goto LABEL_157;
        }
        sub_452778();
LABEL_119:
        byte_473568 = v74;
        dword_473114 = v79;
        sub_462C74();
        dword_4735D0 = v24;
        byte_473450 = 3;
        return 3;
    }
  }
}

