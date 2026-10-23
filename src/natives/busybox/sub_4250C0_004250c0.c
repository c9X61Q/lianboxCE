// busybox.exe @ 0x4250c0 size=4764

_BYTE *__usercall sub_4250C0@<eax>(int a1@<eax>)
{
  int v1; // ecx
  unsigned int *v2; // ebx
  unsigned __int8 v3; // dl
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  const char *v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  const char *Str; // eax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // eax
  char v21; // al
  char v22; // al
  BOOL v23; // esi
  int v24; // ecx
  char *v25; // ebp
  char *v26; // edi
  int v27; // eax
  const char *v28; // edi
  int v29; // eax
  unsigned int v30; // edx
  const char *v31; // esi
  int v32; // edi
  int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // esi
  _BYTE *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  const char *v40; // eax
  _BYTE *v41; // edx
  unsigned int v42; // eax
  int v43; // esi
  const char *v44; // eax
  int v45; // eax
  unsigned int v46; // eax
  const char *v47; // eax
  const char *v48; // edx
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v52; // ecx
  unsigned __int8 v53; // al
  int i; // esi
  signed int j; // edi
  _BYTE *v56; // eax
  int v57; // eax
  int v58; // esi
  unsigned int v59; // edi
  int v60; // edi
  int v61; // eax
  _BYTE *v62; // eax
  _BYTE *v63; // edx
  unsigned int v64; // eax
  int v65; // eax
  unsigned int v66; // eax
  int v67; // eax
  _BYTE *v68; // eax
  char v69; // dl
  int v70; // eax
  unsigned int v71; // eax
  int v72; // eax
  unsigned int v73; // esi
  int k; // edi
  unsigned int v75; // eax
  int v76; // eax
  int v77; // eax
  int *v78; // eax
  _BYTE *v79; // eax
  int v80; // edx
  int v81; // ecx
  int v82; // ecx
  unsigned int v83; // eax
  int v84; // eax
  int v85; // ebp
  int v86; // edi
  BOOL v87; // esi
  unsigned int v88; // eax
  int v89; // eax
  const char *v90; // esi
  int v91; // edi
  unsigned __int8 v92; // si
  size_t v93; // eax
  int v94; // eax
  unsigned __int8 v95; // si
  unsigned int v96; // eax
  unsigned int v97; // eax
  int v98; // eax
  int v99; // edx
  unsigned int v100; // eax
  int v101; // eax
  char v102; // cl
  char *v103; // edx
  char v104; // al
  int v105; // ebx
  unsigned int v106; // eax
  unsigned int v107; // esi
  unsigned int v108; // esi
  unsigned int v109; // edx
  _BYTE *result; // eax
  int Val; // [esp+4h] [ebp-3Ch]
  char *Vala; // [esp+4h] [ebp-3Ch]
  _BYTE *v114; // [esp+18h] [ebp-28h]
  unsigned int v115; // [esp+1Ch] [ebp-24h]
  const char *v116; // [esp+1Ch] [ebp-24h]
  int v117; // [esp+1Ch] [ebp-24h]
  int v118; // [esp+1Ch] [ebp-24h]
  int v119; // [esp+1Ch] [ebp-24h]
  char *v120; // [esp+1Ch] [ebp-24h]
  _BYTE *v121; // [esp+1Ch] [ebp-24h]
  const char *v122; // [esp+1Ch] [ebp-24h]
  const char *v123; // [esp+20h] [ebp-20h] BYREF
  char Destination[28]; // [esp+24h] [ebp-1Ch] BYREF

  memset(Destination, 0, 0xCu);
  sub_460354();
  v2 = (unsigned int *)dword_486010;
  if ( a1 >= -8 )
  {
    if ( (unsigned int)(a1 + 7) <= 5 )
      goto LABEL_24;
  }
  else if ( a1 >= -11 )
  {
    goto LABEL_24;
  }
  if ( *(_BYTE *)(dword_486010 + 19) == 2 )
  {
    if ( a1 == -8 )
    {
LABEL_189:
      *((_BYTE *)v2 + 19) = 1;
      goto LABEL_210;
    }
    if ( **(_BYTE **)(dword_486010 + 8) == 10 )
    {
      *(_BYTE *)(dword_486010 + 19) = 1;
      sub_468398();
      goto LABEL_16;
    }
    if ( a1 > 0 )
    {
      if ( a1 == 27 )
      {
LABEL_15:
        v3 = a1;
        v4 = v2[2];
        v5 = 2;
LABEL_22:
        v6 = sub_41B62C(v4, v3, v5);
LABEL_23:
        v2[2] = v6;
        goto LABEL_313;
      }
    }
    else if ( (unsigned __int8)a1 <= 0x1Fu || (_BYTE)a1 == 0x9B )
    {
      goto LABEL_313;
    }
    v2[2] = sub_4728E8(1, 1);
    goto LABEL_15;
  }
LABEL_16:
  if ( *((_BYTE *)v2 + 19) == 1 )
  {
    if ( a1 != -8 )
    {
      if ( a1 <= 0 && ((_BYTE)a1 == 0x9B || (unsigned __int8)a1 <= 0x1Fu) )
        goto LABEL_313;
      v3 = a1;
      v4 = v2[2];
      v5 = 3;
      goto LABEL_22;
    }
LABEL_209:
    *((_BYTE *)v2 + 19) = 2;
LABEL_210:
    sub_468398();
    goto LABEL_313;
  }
LABEL_24:
  switch ( a1 )
  {
    case -11:
    case -10:
    case 2:
    case 4:
    case 5:
    case 6:
    case 21:
    case 25:
      goto LABEL_26;
    case -9:
      if ( v2[2] >= v2[1] - 1 )
        goto LABEL_313;
      v6 = sub_4728E8(1, 1);
      goto LABEL_23;
    case -8:
    case 105:
      goto LABEL_189;
    case -7:
    case 36:
      while ( 1 )
      {
        v2[2] = sub_4298C0();
        v27 = v2[8] - 1;
        v2[8] = v27;
        if ( v27 <= 0 )
          break;
        sub_427964();
      }
      goto LABEL_313;
    case -6:
      goto LABEL_311;
    case -5:
    case 8:
    case 104:
    case 127:
      do
      {
        sub_427944();
        v7 = v2[8] - 1;
        v2[8] = v7;
      }
      while ( v7 > 0 );
      goto LABEL_313;
    case -4:
    case 32:
    case 108:
      do
      {
        sub_42799C();
        v10 = v2[8] - 1;
        v2[8] = v10;
      }
      while ( v10 > 0 );
      goto LABEL_313;
    case -3:
    case 10:
    case 106:
      do
      {
        sub_427964();
        v2[2] = sub_445848();
        v8 = v2[8] - 1;
        v2[8] = v8;
      }
      while ( v8 > 0 );
      goto LABEL_313;
    case -2:
    case 107:
      do
      {
        sub_427980();
        v2[2] = sub_445848();
        v94 = v2[8] - 1;
        v2[8] = v94;
      }
      while ( v94 > 0 );
      goto LABEL_313;
    case 0:
      goto LABEL_313;
    case 7:
      goto LABEL_37;
    case 12:
    case 18:
      sub_459A78();
      goto LABEL_313;
    case 13:
    case 43:
      do
      {
        sub_427964();
        sub_427A10();
        v9 = v2[8] - 1;
        v2[8] = v9;
      }
      while ( v9 > 0 );
      goto LABEL_313;
    case 27:
      if ( *((_BYTE *)v2 + 19) == 0 )
        sub_439A7C();
      *((_BYTE *)v2 + 19) = 0;
      sub_468398();
      sub_4298B0();
LABEL_37:
      v2[15] = 0;
      goto LABEL_313;
    case 34:
      v11 = (sub_4351A8() | 0x20) - 97;
      if ( v11 > 0x19 )
        goto LABEL_221;
      *((_BYTE *)v2 + 120) = v11;
      goto LABEL_313;
    case 37:
      v123 = (const char *)v2[2];
      v28 = (const char *)v2[1];
      while ( 2 )
      {
        if ( v28 <= v123 )
          goto LABEL_90;
        if ( *v123 != 10 )
        {
          if ( strchr("()[]{}", *(unsigned __int8 *)v123) == nullptr )
          {
            ++v123;
            continue;
          }
          v29 = sub_4309F0();
          if ( v29 != 0 )
            v2[2] = v29;
          else
            sub_439A7C();
LABEL_90:
          if ( *v123 != 10 )
            goto LABEL_313;
        }
        goto LABEL_221;
      }
    case 39:
      v12 = sub_4351A8() | 0x20;
      if ( (unsigned int)(v12 - 97) > 0x19 )
      {
        if ( v12 == 39 )
        {
          v14 = v2[2];
          v15 = v2[86];
          if ( *v2 <= v15 && v15 <= v2[1] - 1 )
          {
            v2[86] = v14;
            v2[85] = v15;
            sub_44DC1C();
            sub_44DC1C();
            v2[87] = sub_44DC1C();
            sub_446708();
            sub_446708();
            v2[88] = sub_446708();
            v14 = v15;
          }
          v2[2] = v14;
          sub_42790C();
          sub_427A10();
          LOBYTE(a1) = 39;
        }
        else
        {
LABEL_221:
          sub_439A7C();
        }
        goto LABEL_313;
      }
      v13 = (const char *)v2[v12 - 38];
      v123 = v13;
      if ( (unsigned int)v13 < *v2 || (unsigned int)v13 >= v2[1] )
        goto LABEL_313;
      v2[2] = (unsigned int)v13;
LABEL_232:
      sub_42790C();
      goto LABEL_233;
    case 44:
      v34 = v2[21];
      if ( v34 == 0 )
        goto LABEL_313;
      v35 = *v2;
      do
      {
        v36 = (_BYTE *)v2[2];
        while ( 1 )
        {
          v123 = --v36;
          if ( v35 > (unsigned int)v36 )
            break;
          if ( *v36 == 10 )
          {
            if ( v34 != 10 )
              break;
LABEL_113:
            v2[2] = (unsigned int)v36;
            break;
          }
          if ( v34 == (unsigned __int8)*v36 )
            goto LABEL_113;
        }
        v37 = v2[8] - 1;
        v2[8] = v37;
      }
      while ( v37 > 0 );
      goto LABEL_313;
    case 45:
      do
      {
        sub_427980();
        sub_427A10();
        v38 = v2[8] - 1;
        v2[8] = v38;
      }
      while ( v38 > 0 );
      goto LABEL_313;
    case 46:
      if ( v2[23] != 0 )
      {
        v39 = sub_4718A8();
        v2[25] = v39;
        v2[24] = v39;
      }
      goto LABEL_313;
    case 47:
    case 63:
      Destination[0] = a1;
      Destination[1] = 0;
      v40 = (const char *)sub_434584();
      v123 = v40;
      if ( *v40 == 0 )
        goto LABEL_313;
      v41 = (_BYTE *)v2[26];
      if ( v40[1] != 0 )
      {
        free((void *)v2[26]);
        v2[26] = sub_47188C();
      }
      else if ( *v41 != 0 )
      {
        *v41 = a1;
      }
      goto LABEL_130;
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
      v51 = v2[8];
      if ( a1 == 48 && v51 <= 0 )
LABEL_311:
        sub_42790C();
      else
        v2[8] = a1 + 10 * v51 - 48;
      goto LABEL_313;
    case 58:
      v120 = (char *)sub_434584();
      sub_41CFDC(v120, v52);
      goto LABEL_313;
    case 59:
      goto LABEL_93;
    case 60:
    case 62:
      sub_41F7C0(*v2, v2[2]);
      v53 = sub_4351A8();
      sub_430B60(v53, &v123);
      sub_4728E8(0, 0);
      v121 = (_BYTE *)sub_418A48(v115);
      v123 = (const char *)sub_4298C0();
      for ( i = sub_41F7C0((unsigned int)v121, (unsigned int)v123); i > 0; --i )
      {
        if ( a1 == 60 )
        {
          if ( *v121 == 9 )
          {
            sub_4657B0(0, v121);
          }
          else if ( *v121 == 32 )
          {
            for ( j = 0; *v121 == 32 && (int)v2[20] > j; ++j )
              sub_4657B0(0, v121);
          }
        }
        else if ( a1 == 62 )
        {
          sub_41B62C((unsigned int)v121, 9u, 1);
        }
        v121 = (_BYTE *)sub_446708();
      }
      v2[2] = sub_430594();
      sub_427A10();
      goto LABEL_65;
    case 65:
      sub_427928();
      goto LABEL_161;
    case 66:
    case 69:
    case 87:
      do
      {
        if ( a1 != 87
          && (v59 = v2[2], v58 = 2 * (a1 != 66) - 1, (unsigned __int8)(*(_BYTE *)(v59 + v58) - 9) > 4u)
          && *(_BYTE *)(v59 + v58) != 32
          || (v2[2] = sub_460ECC(2), v2[2] = sub_460ECC(3), a1 != 87) )
        {
          v60 = dword_486010;
          *(_DWORD *)(v60 + 8) = sub_460ECC(1);
        }
        v61 = v2[8] - 1;
        v2[8] = v61;
      }
      while ( v61 > 0 );
      goto LABEL_313;
    case 67:
    case 68:
      v62 = (_BYTE *)sub_4298C0();
      v63 = v62;
      if ( *v62 == 10 )
      {
        v114 = v62;
        v64 = sub_418A48((unsigned int)v62);
        v63 = v114;
        if ( (int)&v114[-v64] > 0 )
          v63 = v114 - 1;
      }
      v2[2] = (unsigned int)v63;
      v2[2] = sub_4728E8(1, 1);
      if ( a1 == 67 )
        goto LABEL_189;
      sub_4298B0();
      LOBYTE(a1) = 68;
      goto LABEL_313;
    case 71:
      goto LABEL_181;
    case 72:
      v2[2] = v2[17];
      v66 = v2[9] - 1;
      if ( v2[8] > v66 )
        v2[8] = v66;
      v67 = v2[8] - 1;
      v2[8] = v67;
      if ( v67 > 0 )
        sub_4250C0();
      goto LABEL_233;
    case 73:
      sub_42790C();
      sub_427A10();
      goto LABEL_189;
    case 74:
      do
      {
        sub_427928();
        if ( v2[2] < v2[1] - 1 )
        {
          sub_4681D0(1, 1);
          v68 = (_BYTE *)v2[2];
          v2[2] = (unsigned int)(v68 + 1);
          *v68 = 32;
          sub_4681D0(2, 1);
          while ( 1 )
          {
            v69 = *(_BYTE *)v2[2];
            if ( v69 != 32 && v69 != 9 )
              break;
            sub_4657B0(2, v2[2]);
          }
        }
        v70 = v2[8] - 1;
        v2[8] = v70;
      }
      while ( v70 > 0 );
      goto LABEL_65;
    case 76:
      v2[2] = sub_4298F8();
      v71 = v2[9] - 1;
      if ( v2[8] > v71 )
        v2[8] = v71;
      v72 = v2[8] - 1;
      v2[8] = v72;
      if ( v72 > 0 )
        sub_4250C0();
      goto LABEL_232;
    case 77:
      v2[2] = v2[17];
      v73 = (v2[9] - 1) >> 1;
      for ( k = 0; k != v73; ++k )
        v2[2] = sub_446708();
      goto LABEL_313;
    case 78:
      v42 = v2[2];
      v118 = v42 - 1;
      v43 = -1;
      if ( *(_BYTE *)v2[26] == 63 )
      {
        v118 = v42 + 1;
        v43 = 1;
      }
      goto LABEL_127;
    case 79:
      if ( *(_BYTE *)(sub_418A48(v2[2]) - 1) == 10 )
      {
        sub_427980();
LABEL_206:
        sub_427928();
        v57 = sub_41B62C(v2[2], 0xAu, 1);
LABEL_207:
        v2[2] = v57;
      }
      else
      {
        sub_42790C();
        v2[2] = sub_41B62C(v2[2], 0xAu, 1);
        sub_427980();
      }
      goto LABEL_189;
    case 80:
    case 112:
      Str = (const char *)v2[*((unsigned __int8 *)v2 + 120) + 31];
      v116 = Str;
      if ( Str == nullptr )
      {
        Val = (unsigned __int8)sub_46EAD0();
        sub_463088("Nothing in register %c", Val);
        goto LABEL_313;
      }
      if ( strchr(Str, 10) != nullptr )
      {
        if ( a1 == 80 )
        {
          sub_42790C();
        }
        else if ( a1 == 112 )
        {
          v18 = sub_4298C0();
          v19 = v2[1];
          if ( v19 - 1 == v18 )
            v2[2] = v19;
          else
            sub_427964();
        }
      }
      else if ( a1 == 112 )
      {
        sub_42799C();
      }
      sub_4636A4(1, v116);
      goto LABEL_65;
    case 82:
      goto LABEL_209;
    case 85:
      if ( v2[58] == 0 )
        goto LABEL_313;
      sub_418A48(v2[2]);
      v123 = (const char *)sub_4298C0();
      v117 = sub_4657B0(1, v123);
      v20 = v117 + sub_4636A4(2, v2[58]);
      goto LABEL_183;
    case 88:
    case 115:
    case 120:
      do
      {
        v75 = v2[2];
        if ( *(_BYTE *)(v75 - (a1 == 88)) != 10 )
        {
          if ( a1 == 88 )
            v2[2] = v75 - 1;
          v2[2] = sub_4728E8(1, 1);
        }
        v76 = v2[8] - 1;
        v2[8] = v76;
      }
      while ( v76 > 0 );
      sub_4298B0();
      if ( a1 == 115 )
        goto LABEL_189;
      goto LABEL_313;
    case 89:
    case 99:
    case 100:
    case 121:
      v85 = 121;
      if ( a1 != 89 )
        v85 = sub_4351A8();
      v86 = sub_430B60((unsigned __int8)v85, &v123);
      sub_44D22C();
      if ( v85 == 27 )
        goto LABEL_312;
      v87 = (a1 & 0xFFFFFFDF) != 89;
      if ( strchr("wW", v85) != nullptr )
      {
        if ( a1 == 99 )
        {
          while ( ((unsigned __int8)(*v123 - 9) <= 4u || *v123 == 32) && (unsigned int)v123 > v115 )
            --v123;
        }
      }
      else if ( strchr(a0bbeeftLh, v85) == nullptr )
      {
        if ( strchr("cdykjGHL+-{}\r\n", v85) == nullptr )
        {
          sub_439A7C();
LABEL_312:
          LOBYTE(a1) = 27;
          goto LABEL_313;
        }
        v88 = sub_4728E8(v87, 1);
        v2[2] = v88;
        if ( v86 == 0 )
        {
LABEL_270:
          if ( a1 != 99 )
          {
            if ( a1 == 100 )
              goto LABEL_272;
            goto LABEL_273;
          }
LABEL_327:
          strcpy(Destination, "Change");
          LOBYTE(a1) = 99;
          goto LABEL_189;
        }
        if ( a1 == 99 )
        {
          v89 = sub_41B62C(v88, 0xAu, 2);
          v2[2] = v89;
          if ( v89 != v2[1] - 1 )
            sub_427980();
          goto LABEL_327;
        }
        if ( a1 == 100 )
        {
          sub_42790C();
          sub_427A10();
LABEL_272:
          strcpy(Destination, "Delete");
          goto LABEL_275;
        }
LABEL_273:
        if ( (a1 & 0xFFFFFFDF) == 0x59 )
          strcpy(Destination, "Yank");
LABEL_275:
        v122 = (const char *)v2[*((unsigned __int8 *)v2 + 120) + 31];
        v90 = &v122[strlen(v122)];
        v123 = v90;
        v91 = 0;
        while ( v90 >= v122 )
        {
          if ( *v122 == 10 )
            ++v91;
          ++v122;
        }
        v92 = sub_46EAD0();
        v93 = strlen((const char *)v2[*((unsigned __int8 *)v2 + 120) + 31]);
        sub_46304C("%s %u lines (%u chars) using [%c]", Destination, v91, v93, v92);
LABEL_65:
        sub_4298B0();
LABEL_313:
        v105 = dword_486010;
        if ( *(_DWORD *)(dword_486010 + 4) == *(_DWORD *)dword_486010 )
        {
          sub_41B62C(*(_DWORD *)dword_486010, 0xAu, 0);
          *(_DWORD *)(v105 + 8) = *(_DWORD *)v105;
        }
        v106 = *(_DWORD *)(v105 + 8);
        if ( v106 != *(_DWORD *)(v105 + 4) )
          *(_DWORD *)(v105 + 8) = sub_418CCC(v106);
        v107 = *(_DWORD *)(v105 + 8);
        if ( (v107 < *(_DWORD *)(v105 + 348) || v107 > *(_DWORD *)(v105 + 352))
          && strchr("aAcCdDiIJoOpPrRsxX<>~", (unsigned __int8)a1) != nullptr )
        {
          *(_DWORD *)(v105 + 344) = *(_DWORD *)(v105 + 340);
          *(_DWORD *)(v105 + 340) = v107;
          sub_44DC1C();
          *(_DWORD *)(v105 + 348) = sub_44DC1C();
          sub_446708();
          *(_DWORD *)(v105 + 352) = sub_446708();
        }
        if ( (unsigned __int8)(a1 - 48) > 9u )
          *(_DWORD *)(v105 + 32) = 0;
        v108 = *(_DWORD *)(v105 + 8);
        v109 = sub_418A48(v108);
        result = *(_BYTE **)(v105 + 8);
        if ( (int)(v108 - v109) > 0 && *result == 10 && *(_BYTE *)(v105 + 19) == 0 )
          *(_DWORD *)(v105 + 8) = --result;
        return result;
      }
      v2[2] = sub_4728E8(v87, 1);
      goto LABEL_270;
    case 90:
      if ( sub_4351A8() != 90 )
        goto LABEL_221;
      if ( v2[5] != 0 )
      {
        if ( *((_BYTE *)v2 + 17) == 0 )
        {
          v77 = sub_42F6FC(v2[1] - 1, *v2);
          if ( v77 >= 0 )
          {
            LOBYTE(a1) = 90;
            if ( v2[1] - *v2 == v77 )
              *((_BYTE *)v2 + 18) = 0;
          }
          else
          {
            LOBYTE(a1) = 90;
            if ( v77 == -1 )
            {
              v78 = _errno();
              Vala = strerror(*v78);
              sub_463088("Write error: %s", Vala);
            }
          }
          goto LABEL_313;
        }
        sub_463088("'%s' is read only", (const char *)v2[16]);
      }
      else
      {
        *((_BYTE *)v2 + 18) = 0;
      }
      LOBYTE(a1) = 90;
      goto LABEL_313;
    case 94:
      goto LABEL_232;
    case 97:
LABEL_161:
      v56 = (_BYTE *)v2[2];
      if ( *v56 == 10 )
        goto LABEL_189;
      v57 = (int)(v56 + 1);
      goto LABEL_207;
    case 98:
    case 101:
      while ( 2 )
      {
        v79 = (_BYTE *)(2 * (a1 != 98) - 1 + v2[2]);
        if ( (unsigned int)v79 < *v2 || (unsigned int)v79 > v2[1] - 1 )
          goto LABEL_313;
        v2[2] = (unsigned int)v79;
        if ( *v79 == 32 || (unsigned __int8)(*v79 - 9) <= 4u )
          v2[2] = sub_460ECC(3);
        v80 = *(unsigned __int8 *)v2[2];
        v81 = v80 - 48;
        if ( (unsigned __int8)(v80 - 48) <= 9u
          || (LOBYTE(v81) = *(_BYTE *)v2[2], (unsigned __int8)(v82 = (v81 | 0x20) - 97) <= 0x19u)
          || (_BYTE)v80 == 95 )
        {
          v83 = sub_460ECC(5);
        }
        else
        {
          if ( *(_BYTE *)sub_4635B0(v82, v80) == 0 )
            goto LABEL_246;
          v83 = sub_460ECC(4);
        }
        v2[2] = v83;
LABEL_246:
        v84 = v2[8] - 1;
        v2[8] = v84;
        if ( v84 <= 0 )
          goto LABEL_313;
        continue;
      }
    case 102:
      v2[21] = sub_4351A8();
LABEL_93:
      v30 = v2[21];
      do
      {
        if ( v30 == 0 )
          break;
        v123 = (const char *)(v2[2] + 1);
        v31 = (const char *)(v2[1] - 1);
        while ( 1 )
        {
          v32 = *(unsigned __int8 *)v123;
          if ( v31 <= v123 )
            break;
          if ( *v123 == 10 )
          {
            v32 = 10;
            break;
          }
          if ( v30 == v32 )
            goto LABEL_102;
          ++v123;
        }
        if ( v30 == v32 )
LABEL_102:
          v2[2] = (unsigned int)v123;
        v33 = v2[8] - 1;
        v2[8] = v33;
      }
      while ( v33 > 0 );
      goto LABEL_313;
    case 103:
      v65 = sub_4351A8();
      if ( v65 == 103 )
      {
        if ( v2[8] == 0 )
          v2[8] = 1;
LABEL_181:
        v2[2] = v2[1] - 1;
        if ( (int)v2[8] > 0 )
        {
          v20 = sub_430594();
LABEL_183:
          v2[2] = v20;
        }
LABEL_233:
        sub_427A10();
      }
      else
      {
        Destination[0] = 103;
        if ( v65 < 0 )
          LOBYTE(v65) = 42;
        Destination[1] = v65;
        Destination[2] = 0;
        sub_446EC4();
      }
      goto LABEL_313;
    case 109:
      v16 = sub_4351A8() | 0x20;
      if ( (unsigned int)(v16 - 97) > 0x19 )
        goto LABEL_221;
      v2[v16 - 38] = v2[2];
      goto LABEL_313;
    case 110:
      do
      {
LABEL_130:
        v46 = v2[2];
        v118 = v46 + 1;
        v43 = 1;
        if ( *(_BYTE *)v2[26] == 63 )
        {
          v118 = v46 - 1;
          v43 = -1;
        }
LABEL_127:
        v44 = sub_41B7F0(v118, (const char *)(v2[26] + 1), (2 * v43) | 1);
        v123 = v44;
        if ( v44 != nullptr )
        {
          v2[2] = (unsigned int)v44;
        }
        else
        {
          v119 = *v2;
          if ( v43 == -1 )
            v119 = v2[1] - 1;
          v47 = sub_41B7F0(v119, (const char *)(v2[26] + 1), (2 * v43) | 1);
          v123 = v47;
          v48 = "Pattern not found";
          if ( v47 != nullptr )
          {
            v2[2] = (unsigned int)v47;
            v48 = "search hit BOTTOM, continuing at TOP";
            if ( v43 == -1 )
              v48 = "search hit TOP, continuing at BOTTOM";
          }
          sub_463088("%s", v48);
        }
        v45 = v2[8] - 1;
        v2[8] = v45;
      }
      while ( v45 > 0 );
      goto LABEL_313;
    case 111:
      goto LABEL_206;
    case 114:
      v95 = sub_4351A8();
      if ( *(_BYTE *)v2[2] != 10 )
      {
        v96 = sub_4657B0(1, v2[2]);
        v2[2] = v96;
        v2[2] = sub_41B62C(v96, v95, 2);
        sub_427944();
      }
      goto LABEL_65;
    case 116:
      v2[21] = sub_4351A8();
      sub_4250C0();
      if ( *(unsigned __int8 *)v2[2] == v2[21] )
        sub_427944();
      v2[21] = 0;
      goto LABEL_313;
    case 117:
      while ( 2 )
      {
        sub_468398();
        v25 = (char *)v2[1317];
        if ( v25 == nullptr )
        {
          sub_46304C("Already at oldest change");
          goto LABEL_313;
        }
        v21 = v25[12];
        if ( v21 == 3 )
          goto LABEL_77;
        if ( (unsigned __int8)v21 <= 3u )
        {
          if ( v21 == 2 || v21 == 0 )
          {
            sub_4657B0(0, *v2 + *((_DWORD *)v25 + 1) + *((_DWORD *)v25 + 2) - 1);
            sub_46304C(
              "Undo [%d] %s %d chars at position %d",
              v2[5],
              "deleted",
              *((_DWORD *)v25 + 2),
              *((_DWORD *)v25 + 1));
          }
          else
          {
LABEL_77:
            v26 = (char *)(*v2 + *((_DWORD *)v25 + 1));
            sub_465874(v24, *((_DWORD *)v25 + 2));
            qmemcpy(v26, v25 + 13, *((_DWORD *)v25 + 2));
            sub_46304C(
              "Undo [%d] %s %d chars at position %d",
              v2[5],
              "restored",
              *((_DWORD *)v25 + 2),
              *((_DWORD *)v25 + 1));
          }
        }
        v22 = v25[12];
        if ( (unsigned __int8)v22 <= 1u )
        {
          v2[2] = *v2 + *((_DWORD *)v25 + 1);
          sub_459AA4();
          v23 = false;
        }
        else
        {
          v23 = (unsigned __int8)(v22 - 2) <= 1u;
        }
        v2[1317] = *(_DWORD *)v25;
        free(v25);
        --v2[5];
        if ( !v23 )
          goto LABEL_313;
        continue;
      }
    case 119:
      while ( 1 )
      {
        v99 = *(unsigned __int8 *)v2[2];
        if ( (unsigned __int8)(v99 - 48) <= 9u || (unsigned __int8)((v99 | 0x20) - 97) <= 0x19u || (_BYTE)v99 == 95 )
          break;
        if ( *(_BYTE *)sub_4635B0(v1, v99) != 0 )
        {
          v100 = sub_460ECC(4);
          goto LABEL_299;
        }
LABEL_291:
        v97 = v2[2];
        if ( v97 < v2[1] - 1 )
          v2[2] = v97 + 1;
        if ( (unsigned __int8)(*(_BYTE *)v2[2] - 9) <= 4u || *(_BYTE *)v2[2] == 32 )
          v2[2] = sub_460ECC(3);
        v98 = v2[8] - 1;
        v2[8] = v98;
        if ( v98 <= 0 )
          goto LABEL_313;
      }
      v100 = sub_460ECC(5);
LABEL_299:
      v2[2] = v100;
      goto LABEL_291;
    case 122:
      sub_4351A8();
      v2[17] = sub_418A48(v2[2]);
LABEL_26:
      sub_4279BC();
      goto LABEL_313;
    case 123:
      v49 = v2[2];
      v50 = -1;
      goto LABEL_140;
    case 124:
      v6 = sub_445848();
      goto LABEL_23;
    case 125:
      v49 = v2[2];
      v50 = 3;
LABEL_140:
      v123 = sub_41B7F0(v49, "\n\n", v50);
      if ( v123 == nullptr )
        goto LABEL_313;
      v6 = sub_446708();
      goto LABEL_23;
    case 126:
      break;
    default:
      Destination[0] = a1;
      Destination[1] = 0;
      sub_446EC4();
      goto LABEL_65;
  }
  while ( 1 )
  {
    v102 = *(_BYTE *)v2[2];
    if ( (unsigned __int8)(v102 - 97) <= 0x19u )
      break;
    if ( (unsigned __int8)(v102 - 65) <= 0x19u )
    {
      sub_4681D0(1, 1);
      v103 = (char *)v2[2];
      v104 = *v103;
      if ( (unsigned __int8)(*v103 - 65) <= 0x19u )
        v104 += 32;
      goto LABEL_310;
    }
LABEL_304:
    sub_42799C();
    v101 = v2[8] - 1;
    v2[8] = v101;
    if ( v101 <= 0 )
      goto LABEL_65;
  }
  sub_4681D0(1, 1);
  v103 = (char *)v2[2];
  v104 = *v103;
  if ( (unsigned __int8)(*v103 - 97) <= 0x19u )
    v104 -= 32;
LABEL_310:
  *v103 = v104;
  sub_4681D0(2, 1);
  goto LABEL_304;
}

