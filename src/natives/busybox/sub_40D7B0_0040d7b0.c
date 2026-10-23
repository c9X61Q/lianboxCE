// busybox.exe @ 0x40d7b0 size=5932

int __cdecl sub_40D7B0(int *a1, int a2, int *a3, int *a4, int a5, int a6, int *a7, char **a8)
{
  int v8; // esi
  int v9; // eax
  unsigned int v10; // edx
  int result; // eax
  int v12; // edx
  int v13; // edi
  int v14; // eax
  int v15; // ebp
  int v16; // edx
  int *v17; // eax
  int *v18; // ecx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // eax
  unsigned int v23; // edx
  int v24; // eax
  double v25; // rax
  int v26; // edx
  int v27; // ecx
  signed int v28; // eax
  double v29; // st7
  int v30; // eax
  int v31; // eax
  int v32; // eax
  double v33; // st7
  double v34; // rax
  int v35; // esi
  double v36; // st5
  char *v37; // edx
  double v38; // st6
  double v39; // st7
  double v40; // st6
  char v41; // al
  double v42; // rt0
  double v43; // st5
  char v44; // cl
  char *j; // ebx
  char *v46; // eax
  int v47; // edi
  int v48; // eax
  int v49; // edx
  int v50; // esi
  _DWORD *v51; // edi
  int v52; // eax
  int v53; // eax
  int v54; // esi
  bool v55; // bl
  char v56; // bl
  int v57; // ebx
  int v58; // eax
  int v59; // eax
  bool v60; // dl
  char *v61; // eax
  double v62; // rax
  double v63; // st6
  double v64; // st7
  unsigned int v65; // ebx
  int v66; // ebx
  _DWORD *v67; // esi
  unsigned int k; // eax
  int v69; // eax
  _DWORD *v70; // ebx
  int v71; // ebx
  int v72; // edx
  int v73; // ecx
  _DWORD *v74; // ecx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  unsigned int v78; // eax
  int v79; // eax
  char v80; // dl
  char *v81; // ecx
  char *v82; // eax
  int v83; // ebx
  double v84; // st5
  bool v85; // zf
  double i; // st6
  double v87; // st6
  double v88; // st5
  int v89; // edx
  int v90; // eax
  _DWORD *v91; // esi
  int m; // eax
  _DWORD *v93; // eax
  _DWORD *v94; // edx
  double v95; // st6
  bool v96; // di
  double v97; // st5
  int v98; // ecx
  bool v99; // al
  char *v100; // ecx
  double v101; // rax
  int v102; // ebx
  _DWORD *v103; // eax
  char v104; // cl
  int v105; // edi
  int v106; // eax
  _DWORD *v107; // ecx
  double v108; // st6
  int v109; // eax
  int v110; // [esp+18h] [ebp-84h]
  int v111; // [esp+18h] [ebp-84h]
  int v112; // [esp+18h] [ebp-84h]
  char *v113; // [esp+18h] [ebp-84h]
  char *v114; // [esp+18h] [ebp-84h]
  char *v115; // [esp+18h] [ebp-84h]
  _DWORD *v116; // [esp+18h] [ebp-84h]
  _DWORD *v117; // [esp+18h] [ebp-84h]
  _DWORD *v118; // [esp+18h] [ebp-84h]
  int v119; // [esp+20h] [ebp-7Ch]
  _DWORD *v120; // [esp+20h] [ebp-7Ch]
  int v121; // [esp+24h] [ebp-78h]
  unsigned int v122; // [esp+24h] [ebp-78h]
  bool v123; // [esp+24h] [ebp-78h]
  int v124; // [esp+24h] [ebp-78h]
  int v125; // [esp+28h] [ebp-74h]
  int v126; // [esp+28h] [ebp-74h]
  double v127; // [esp+28h] [ebp-74h]
  double v128; // [esp+30h] [ebp-6Ch]
  int v129; // [esp+30h] [ebp-6Ch]
  char *v130; // [esp+30h] [ebp-6Ch]
  int v131; // [esp+38h] [ebp-64h]
  int v132; // [esp+38h] [ebp-64h]
  char *v133; // [esp+3Ch] [ebp-60h]
  int v134; // [esp+40h] [ebp-5Ch]
  int v135; // [esp+40h] [ebp-5Ch]
  int v136; // [esp+40h] [ebp-5Ch]
  int v137; // [esp+44h] [ebp-58h]
  char v138; // [esp+44h] [ebp-58h]
  int v139; // [esp+48h] [ebp-54h]
  _DWORD *v140; // [esp+48h] [ebp-54h]
  int v141; // [esp+48h] [ebp-54h]
  _DWORD *v142; // [esp+48h] [ebp-54h]
  int v143; // [esp+4Ch] [ebp-50h]
  int v144; // [esp+4Ch] [ebp-50h]
  int v145; // [esp+50h] [ebp-4Ch]
  int v146; // [esp+50h] [ebp-4Ch]
  int v147; // [esp+54h] [ebp-48h]
  bool v148; // [esp+58h] [ebp-44h]
  bool v149; // [esp+58h] [ebp-44h]
  int v150; // [esp+5Ch] [ebp-40h]
  int v151; // [esp+60h] [ebp-3Ch]
  int v152; // [esp+68h] [ebp-34h]
  int v153[8]; // [esp+7Ch] [ebp-20h] BYREF

  v8 = *a4;
  *a4 &= 0xFFFFFFCF;
  v9 = v8 & 7;
  if ( v9 == 3 )
  {
    *a7 = -32768;
    return sub_40D510("Infinity", a8, 8);
  }
  v119 = v8 & 4;
  if ( (v8 & 4) != 0 )
  {
    if ( v9 != 4 )
      return 0;
    *a7 = -32768;
    return sub_40D510("NaN", a8, 3);
  }
  if ( (v8 & 7) == 0 )
  {
LABEL_29:
    *a7 = 1;
    return sub_40D510("0", a8, 1);
  }
  v10 = v9 - 1;
  result = 0;
  if ( v10 > 1 )
    return result;
  v12 = 0;
  v13 = *a1;
  v14 = 32;
  if ( *a1 <= 32 )
  {
    v12 = v8 & 4;
  }
  else
  {
    do
    {
      v14 *= 2;
      ++v12;
    }
    while ( v13 > v14 );
  }
  v110 = (v13 - 1) >> 5;
  v15 = sub_40FFB0(v12);
  v16 = v15 + 20;
  v17 = a3;
  v18 = &a3[v110];
  do
  {
    v19 = *v17++;
    v16 += 4;
    *(_DWORD *)(v16 - 4) = v19;
  }
  while ( v18 >= v17 );
  v20 = v110 * 4 + 4;
  if ( (char *)v18 + 1 < (char *)a3 + 1 )
    v20 = 4;
  v21 = v20 >> 2;
  do
  {
    v22 = v21--;
    if ( *(_DWORD *)(v15 + 4 * v21 + 20) != 0 )
    {
      _BitScanReverse(&v23, *(_DWORD *)(v15 + 4 * v21 + 20));
      *(_DWORD *)(v15 + 16) = v22;
      v21 = 32 * v22 - (v23 ^ 0x1F);
      goto LABEL_15;
    }
  }
  while ( v21 != 0 );
  *(_DWORD *)(v15 + 16) = 0;
LABEL_15:
  v24 = sub_40F9E0(v15);
  v153[0] = v24;
  v134 = a2;
  if ( v24 != 0 )
  {
    sub_40F8D0(v15, v24);
    v21 -= v153[0];
    v134 = v153[0] + a2;
  }
  if ( *(_DWORD *)(v15 + 16) == 0 )
  {
    sub_4100A0(v15);
    goto LABEL_29;
  }
  v25 = sub_4108F0(v15, v153);
  LODWORD(v128) = LODWORD(v25);
  v26 = HIDWORD(v25) & 0xFFFFF | 0x3FF00000;
  v27 = v21 + v134 - 1;
  HIDWORD(v128) = v26;
  v28 = abs32(v27) - 1077;
  v29 = (v128 - 1.5) * 0.289529654602168 + 0.1760912590558 + (double)v27 * 0.301029995663981;
  if ( v28 > 0 )
    v29 = v29 + (double)v28 * 7.0e-17;
  v121 = (int)v29;
  if ( v29 < 0.0 && (double)v121 != v29 )
    --v121;
  HIDWORD(v128) = v26 + (v27 << 20);
  v131 = -v134;
  if ( (unsigned int)v121 > 0x16 )
  {
    v147 = 1;
LABEL_34:
    v137 = 0;
    if ( v134 <= 0 )
      goto LABEL_35;
    goto LABEL_112;
  }
  if ( dbl_4742C0[v121] > v128 )
  {
    v147 = 0;
    --v121;
    goto LABEL_34;
  }
  v147 = 0;
  v137 = 0;
  if ( v134 > 0 )
  {
LABEL_112:
    v131 = 0;
    v137 = v134;
LABEL_35:
    if ( v121 < 0 )
    {
      v30 = v121;
      v137 -= v121;
      v121 = 0;
      v143 = v30;
      v145 = -v30;
      goto LABEL_37;
    }
  }
  v145 = 0;
  v131 += v121;
  v143 = v121;
LABEL_37:
  if ( (unsigned int)a5 > 9 )
  {
    a5 = 0;
  }
  else
  {
    if ( a5 > 5 )
    {
      a5 -= 4;
      v148 = false;
    }
    else
    {
      v148 = (unsigned int)(v21 + v134 + 1021) <= 0x7F7;
    }
    switch ( a5 )
    {
      case 4:
        v139 = 1;
        goto LABEL_44;
      case 5:
        v139 = 1;
LABEL_130:
        v150 = a6 + v143;
        v31 = a6 + v143 + 1;
        v111 = v31;
        if ( v31 <= 0 )
        {
          v153[0] = 1;
          v31 = 1;
        }
        else
        {
          v153[0] = a6 + v143 + 1;
        }
        goto LABEL_47;
      case 2:
        v139 = 0;
LABEL_44:
        v31 = 1;
        if ( a6 > 0 )
          v31 = a6;
        v153[0] = v31;
        v150 = v31;
        v111 = v31;
        a6 = v31;
LABEL_47:
        v133 = (char *)sub_40D4D0(v31);
        v125 = a1[3];
        v85 = v125 == 1;
        v126 = v125 - 1;
        v149 = v148 && (unsigned int)v111 <= 0xE;
        if ( v85 )
          goto LABEL_52;
        goto LABEL_48;
      case 3:
        v139 = 0;
        goto LABEL_130;
      default:
        break;
    }
  }
  v153[0] = (int)((double)v13 * 0.30103) + 3;
  v133 = (char *)sub_40D4D0(v153[0]);
  v112 = a1[3];
  v126 = v112 - 1;
  if ( v112 != 1 )
  {
    a6 = 0;
    v149 = false;
    v139 = 1;
    v150 = -1;
    v111 = -1;
LABEL_48:
    v32 = 2;
    if ( v126 >= 0 )
      v32 = v126;
    v126 = v32;
    if ( (v8 & 8) == 0 )
      goto LABEL_121;
    v126 = 3 - v32;
LABEL_52:
    if ( v149 && (v143 | v126) == 0 )
    {
      v33 = v128;
      v153[0] = 0;
      if ( v147 != 0 && v128 < 1.0 )
      {
        if ( v111 != 0 )
        {
          v35 = v150;
          if ( v150 <= 0 )
          {
LABEL_120:
            v126 = 0;
            goto LABEL_121;
          }
          v33 = v128 * 10.0;
          v151 = -1;
          v101 = v128 * 10.0 * 3.0 + 7.0;
          LODWORD(v127) = LODWORD(v101);
          HIDWORD(v127) = HIDWORD(v101) - 54525952;
LABEL_58:
          v36 = dbl_4742B8[v35];
          if ( v139 != 0 )
          {
            v37 = v133 + 1;
            *v133 = (int)v33 + 48;
            v38 = 0.5 / v36 - v127;
            v39 = v33 - (double)(int)v33;
            if ( v38 > v39 )
            {
LABEL_267:
              v135 = v151 + 1;
              v46 = v133;
              v133 = v37;
              if ( v39 == 0.0 )
              {
                v119 = 0;
                goto LABEL_109;
              }
              goto LABEL_215;
            }
            while ( 1 )
            {
              v43 = v38;
              if ( v38 > 1.0 - v39 )
                break;
              if ( ++v153[0] >= v35 )
                goto LABEL_120;
              ++v37;
              v40 = v39 * 10.0;
              v41 = (int)v40;
              v42 = v40 - (double)(int)v40;
              v38 = v43 * 10.0;
              v39 = v42;
              *(v37 - 1) = v41 + 48;
              if ( v38 > v42 )
                goto LABEL_267;
            }
            v44 = *(v37 - 1);
LABEL_65:
            j = v37;
            v135 = v151 + 1;
            v46 = v133;
            goto LABEL_66;
          }
          v95 = v127 * v36;
          v37 = v133;
          v152 = v13;
          v96 = false;
          v153[0] = 1;
          v97 = v33;
          while ( 1 )
          {
            v98 = (int)v97;
            if ( (int)v97 != 0 )
            {
              v96 = v149;
              v97 = v97 - (double)(int)v97;
            }
            ++v37;
            v44 = v98 + 48;
            *(v37 - 1) = v44;
            if ( v153[0] == v35 )
              break;
            v97 = v97 * 10.0;
            v96 = v149;
            ++v153[0];
          }
          v99 = v96;
          v13 = v152;
          if ( !v99 )
            v97 = v33;
          if ( v97 > v95 + 0.5 )
            goto LABEL_65;
          if ( 0.5 - v95 > v97 )
          {
            v46 = v133;
            if ( v97 == 0.0 )
              v119 = 0;
            else
              v119 = 16;
            v83 = v151 + 1;
            goto LABEL_239;
          }
          goto LABEL_120;
        }
        v62 = v128 + v128 + 7.0;
        LODWORD(v127) = LODWORD(v62);
        HIDWORD(v127) = HIDWORD(v62) - 54525952;
      }
      else
      {
        v34 = v128 + v128 + 7.0;
        LODWORD(v127) = LODWORD(v34);
        HIDWORD(v127) = HIDWORD(v34) - 54525952;
        if ( v111 != 0 )
        {
          v151 = 0;
          v35 = v111;
          goto LABEL_58;
        }
      }
      v63 = v128 - 5.0;
      if ( v63 > v127 )
      {
        v135 = 2;
        v61 = v133;
        v54 = 0;
        v51 = nullptr;
        goto LABEL_106;
      }
      if ( -v127 > v63 )
      {
LABEL_134:
        v54 = 0;
        v51 = nullptr;
        goto LABEL_135;
      }
      goto LABEL_120;
    }
LABEL_121:
    if ( v134 >= 0 && a1[5] >= v143 )
    {
      v64 = dbl_4742C0[v143];
      if ( a6 < 0 )
      {
        v51 = (_DWORD *)v111;
        if ( v111 <= 0 )
        {
          if ( v111 == 0 && v64 * 5.0 < v128 )
          {
            v54 = 0;
            v135 = v143 + 2;
            v61 = v133;
            goto LABEL_106;
          }
          goto LABEL_134;
        }
      }
LABEL_198:
      v153[0] = 1;
      v83 = v143 + 1;
      v135 = v143 + 1;
      v37 = v133 + 1;
      v124 = (int)(v128 / v64);
      *v133 = v124 + 48;
      v84 = v128 - (double)v124 * v64;
      v85 = v84 == 0.0;
      for ( i = v84; ; i = v88 )
      {
        if ( v85 )
        {
          v46 = v133;
          v133 = v37;
          goto LABEL_109;
        }
        if ( v153[0] == v111 )
          break;
        v87 = i * 10.0;
        ++v37;
        ++v153[0];
        v124 = (int)(v87 / v64);
        *(v37 - 1) = v124 + 48;
        v88 = v87 - (double)v124 * v64;
        v85 = v88 == 0.0;
      }
      if ( v126 != 0 )
      {
        if ( v126 == 1 )
        {
          v44 = *(v37 - 1);
          v46 = v133;
          j = v37;
          goto LABEL_66;
        }
        v46 = v133;
        v133 = v37;
LABEL_215:
        v119 = 16;
        goto LABEL_109;
      }
      v108 = i + i;
      v44 = *(v37 - 1);
      if ( v108 > v64 )
      {
        v46 = v133;
        for ( j = v37; ; j = v37 )
        {
LABEL_66:
          v37 = j - 1;
          if ( v44 != 57 )
          {
            v133 = j;
            v104 = v44 + 1;
            goto LABEL_252;
          }
          if ( v37 == v46 )
            break;
          v44 = *(j - 2);
LABEL_69:
          ;
        }
        ++v135;
        v37 = v46;
        v104 = 49;
        v133 = j;
        *v46 = 48;
LABEL_252:
        *v37 = v104;
        v119 = 32;
        goto LABEL_109;
      }
      v46 = v133;
      if ( v108 == v64 && (v124 & 1) != 0 )
        goto LABEL_69;
      v119 = 16;
      do
LABEL_239:
        v100 = v37--;
      while ( *(v100 - 1) == 48 );
      v133 = v100;
      v135 = v83;
      goto LABEL_109;
    }
    if ( v139 == 0 )
    {
      v50 = v145;
      v51 = nullptr;
      v129 = v137;
      goto LABEL_83;
    }
    goto LABEL_77;
  }
  if ( v134 < 0 )
  {
    v105 = v13 - v21;
    a6 = 0;
    v48 = v105 + 1;
    v150 = -1;
    v49 = a1[1];
    v153[0] = v105 + 1;
    v111 = -1;
    if ( v134 - v105 >= v49 )
      goto LABEL_81;
    goto LABEL_78;
  }
  if ( v143 <= a1[5] )
  {
    v111 = -1;
    v64 = dbl_4742C0[v143];
    goto LABEL_198;
  }
  a6 = 0;
  v150 = -1;
  v111 = -1;
LABEL_77:
  v47 = v13 - v21;
  v48 = v47 + 1;
  v49 = a1[1];
  v153[0] = v47 + 1;
  if ( v134 - v47 < v49 )
  {
LABEL_78:
    if ( ((a5 - 3) & 0xFFFFFFFD) != 0 )
    {
      v48 = v134 - v49 + 1;
      v153[0] = v48;
      if ( v111 <= 0 || a5 <= 1 || v48 <= v111 )
        goto LABEL_81;
LABEL_169:
      v75 = v111 - 1;
      if ( v145 < v111 - 1 )
      {
        v50 = 0;
        v89 = v75 - v145;
        v145 = v111 - 1;
        v121 += v89;
      }
      else
      {
        v50 = v145 - v75;
      }
      if ( v111 < 0 )
      {
        v153[0] = 0;
        v129 = v137 - v111;
      }
      else
      {
        v131 += v111;
        v153[0] = v111;
        v129 = v137;
        v137 += v111;
      }
      goto LABEL_82;
    }
  }
  if ( a5 > 1 )
    goto LABEL_169;
LABEL_81:
  v131 += v48;
  v50 = v145;
  v129 = v137;
  v137 += v48;
LABEL_82:
  v139 = 1;
  v51 = (_DWORD *)sub_4101E0(1);
LABEL_83:
  if ( v129 > 0 && v131 > 0 )
  {
    v52 = v131;
    if ( v129 <= v131 )
      v52 = v129;
    v137 -= v52;
    v153[0] = v52;
    v129 -= v52;
    v131 -= v52;
  }
  if ( v145 != 0 )
  {
    if ( v139 != 0 )
    {
      if ( v50 > 0 )
      {
        v51 = (_DWORD *)sub_4103A0(v51, v50);
        v136 = sub_410210(v51, v15);
        sub_4100A0(v15);
        v15 = v136;
      }
      v53 = v145 - v50;
      if ( v145 == v50 )
        goto LABEL_93;
    }
    else
    {
      v53 = v145;
    }
    v15 = sub_4103A0(v15, v53);
  }
LABEL_93:
  v54 = sub_4101E0(1);
  v55 = a5 <= 1 && v21 == 1;
  if ( v121 <= 0 )
  {
    v146 = 0;
    if ( !v55 || a1[1] + 1 >= a2 )
    {
LABEL_95:
      v56 = 31;
      if ( v121 == 0 )
        goto LABEL_96;
      goto LABEL_138;
    }
LABEL_246:
    ++v137;
    ++v131;
    v146 = 1;
    goto LABEL_95;
  }
  v54 = sub_4103A0(v54, v121);
  if ( v55 && a2 > a1[1] + 1 )
    goto LABEL_246;
  v146 = 0;
LABEL_138:
  _BitScanReverse(&v65, *(_DWORD *)(v54 + 4 * *(_DWORD *)(v54 + 16) + 16));
  v56 = v65 ^ 0x1F;
LABEL_96:
  v57 = (v56 - (_BYTE)v131 - 4) & 0x1F;
  v153[0] = v57;
  v58 = v57;
  if ( v57 + v137 > 0 )
  {
    v15 = sub_410520(v15, v57 + v137);
    v58 = v153[0];
  }
  v59 = v131 + v58;
  if ( v59 > 0 )
    v54 = sub_410520(v54, v59);
  v60 = a5 > 2;
  if ( v147 != 0 )
  {
    v123 = a5 > 2;
    v76 = sub_410660(v15, v54);
    v60 = a5 > 2;
    if ( v76 < 0 )
    {
      v15 = sub_410100(v15, 10, 0);
      if ( v139 == 0 )
      {
        if ( v150 > 0 || !v123 )
        {
          v135 = v143;
          v111 = v150;
LABEL_177:
          v70 = v133;
          v153[0] = 1;
          while ( 1 )
          {
            v70 = (_DWORD *)((char *)v70 + 1);
            v78 = sub_40D5B0(v15, v54) + 48;
            *((_BYTE *)v70 - 1) = v78;
            if ( v153[0] >= v111 )
              break;
            v77 = sub_410100(v15, 10, 0);
            ++v153[0];
            v15 = v77;
          }
          LOBYTE(v122) = v78;
          v74 = nullptr;
LABEL_181:
          if ( v126 != 0 )
          {
            v79 = *(_DWORD *)(v15 + 16);
            v80 = *((_BYTE *)v70 - 1);
            if ( v126 != 2 )
            {
              if ( v79 > 1 || *(_DWORD *)(v15 + 20) != 0 )
              {
LABEL_185:
                v120 = v74;
                v81 = v133;
                goto LABEL_188;
              }
LABEL_191:
              while ( v80 == 48 )
              {
                v80 = *((_BYTE *)v70 - 2);
                v70 = (_DWORD *)((char *)v70 - 1);
              }
              goto LABEL_162;
            }
          }
          else
          {
            v117 = v74;
            v15 = sub_410520(v15, 1);
            v90 = sub_410660(v15, v54);
            v80 = *((_BYTE *)v70 - 1);
            v74 = v117;
            if ( v90 > 0 || v90 == 0 && (v122 & 1) != 0 )
              goto LABEL_185;
            v79 = *(_DWORD *)(v15 + 16);
          }
          if ( v79 <= 1 )
          {
            v109 = 16;
            if ( *(_DWORD *)(v15 + 20) == 0 )
              v109 = v119;
            v119 = v109;
          }
          else
          {
            v119 = 16;
          }
          goto LABEL_191;
        }
        goto LABEL_265;
      }
      v51 = (_DWORD *)sub_410100(v51, 10, 0);
      if ( v150 <= 0 && v123 )
      {
LABEL_265:
        --v143;
        v111 = v150;
        goto LABEL_103;
      }
      v135 = v143;
      v111 = v150;
LABEL_140:
      v66 = v129 + v57;
      if ( v66 > 0 )
        v51 = (_DWORD *)sub_410520(v51, v66);
      v140 = v51;
      if ( v146 != 0 )
      {
        v102 = sub_40FFB0(v51[1]);
        memcpy((void *)(v102 + 12), v51 + 3, 4 * v51[4] + 8);
        v140 = (_DWORD *)sub_410520(v102, 1);
      }
      v132 = v54;
      v153[0] = 1;
      v67 = v140;
      v130 = v133;
      for ( k = sub_40D5B0(v15, v132); ; k = sub_40D5B0(v15, v132) )
      {
        v138 = k;
        v122 = k + 48;
        v71 = sub_410660(v15, v51);
        v72 = sub_4106B0(v132, v67);
        if ( *(_DWORD *)(v72 + 12) != 0 )
        {
          sub_4100A0(v72);
          v69 = 1;
        }
        else
        {
          v144 = v72;
          v141 = sub_410660(v15, v72);
          sub_4100A0(v144);
          v69 = a5 | v141;
          if ( (a5 | v141) != 0 )
          {
            v69 = v141;
          }
          else if ( (v126 | *a3 & 1) == 0 )
          {
            v142 = v67;
            v73 = v71;
            v54 = v132;
            v70 = v130 + 1;
            if ( v122 == 57 )
              goto LABEL_264;
            if ( v73 <= 0 )
            {
              if ( *(int *)(v15 + 16) <= 1 )
              {
                if ( *(_DWORD *)(v15 + 20) != 0 )
                  v69 = 16;
              }
              else
              {
                v69 = 16;
              }
            }
            else
            {
              LOBYTE(v122) = v138 + 49;
              v69 = 32;
            }
            v119 = v69;
            *v130 = v122;
            v74 = v51;
            v51 = v142;
            goto LABEL_162;
          }
        }
        if ( v71 < 0 || (a5 | v71) == 0 && (*(_BYTE *)a3 & 1) == 0 )
          break;
        v70 = v130 + 1;
        if ( v69 > 0 && v126 != 2 )
        {
          v142 = v67;
          v54 = v132;
          if ( v122 == 57 )
            goto LABEL_264;
          v74 = v51;
          v119 = 32;
          v51 = v142;
          *v130 = v122 + 1;
          goto LABEL_162;
        }
        *v130 = v122;
        if ( v153[0] == v111 )
        {
          v103 = v67;
          v74 = v51;
          v54 = v132;
          v51 = v103;
          goto LABEL_181;
        }
        v15 = sub_410100(v15, 10, 0);
        if ( v51 == v67 )
        {
          v51 = (_DWORD *)sub_410100(v51, 10, 0);
          v67 = v51;
        }
        else
        {
          v51 = (_DWORD *)sub_410100(v51, 10, 0);
          v67 = (_DWORD *)sub_410100(v67, 10, 0);
        }
        ++v153[0];
        ++v130;
      }
      v142 = v67;
      v54 = v132;
      v70 = v130 + 1;
      if ( v126 != 0 )
      {
        if ( *(int *)(v15 + 16) <= 1 && *(_DWORD *)(v15 + 20) == 0 )
        {
          if ( v69 <= 0 )
          {
            v74 = v51;
            v51 = v142;
            goto LABEL_226;
          }
LABEL_259:
          v15 = sub_410520(v15, 1);
          v106 = sub_410660(v15, v132);
          if ( v106 <= 0 && (v106 != 0 || (v122 & 1) == 0) )
          {
            v126 = 32;
            goto LABEL_262;
          }
          if ( v122 != 57 )
          {
            v126 = 32;
            LOBYTE(v122) = v138 + 49;
            goto LABEL_262;
          }
LABEL_264:
          v107 = v51;
          v80 = 57;
          v51 = v142;
          v120 = v107;
          v81 = v133;
          *v130 = 57;
          while ( 1 )
          {
LABEL_188:
            v82 = (char *)v70 - 1;
            if ( v80 != 57 )
            {
              v74 = v120;
              v119 = 32;
              *v82 = v80 + 1;
              goto LABEL_162;
            }
            if ( v82 == v81 )
              break;
            v80 = *((_BYTE *)v70 - 2);
            v70 = (_DWORD *)((char *)v70 - 1);
          }
          v74 = v120;
          v119 = 32;
          ++v135;
          *v133 = 49;
LABEL_162:
          v116 = v74;
          sub_4100A0(v54);
          if ( v51 == nullptr )
          {
            v46 = v133;
            v133 = (char *)v70;
            goto LABEL_109;
          }
          if ( v116 == nullptr || v116 == v51 )
          {
            v46 = v133;
            v133 = (char *)v70;
          }
          else
          {
            sub_4100A0(v116);
            v46 = v133;
            v133 = (char *)v70;
          }
          goto LABEL_108;
        }
        if ( v126 != 2 )
        {
          v70 = v130 + 1;
          v91 = v142;
          for ( m = sub_410660(v132, v142); m > 0; m = sub_410660(v132, v118) )
          {
            *((_BYTE *)v70 - 1) = v122;
            v93 = (_DWORD *)sub_410100(v91, 10, 0);
            if ( v51 == v91 )
              v51 = v93;
            v118 = v93;
            v15 = sub_410100(v15, 10, 0);
            v130 = (char *)v70;
            v70 = (_DWORD *)((char *)v70 + 1);
            v122 = sub_40D5B0(v15, v132) + 48;
            v91 = v118;
          }
          v142 = v91;
          v94 = v91;
          v54 = v132;
          if ( v122 != 57 )
          {
            v119 = 32;
            v74 = v51;
            v51 = v94;
            LOBYTE(v122) = v122 + 1;
            goto LABEL_226;
          }
          goto LABEL_264;
        }
      }
      else
      {
        if ( v69 > 0 )
          goto LABEL_259;
LABEL_262:
        if ( *(int *)(v15 + 16) <= 1 )
        {
          v74 = v51;
          v51 = v142;
          if ( *(_DWORD *)(v15 + 20) != 0 )
            v119 = 16;
          else
            v119 = v126;
LABEL_226:
          *v130 = v122;
          goto LABEL_162;
        }
      }
      v74 = v51;
      v119 = 16;
      v51 = v142;
      goto LABEL_226;
    }
  }
  if ( v111 > 0 || !v60 )
  {
    v135 = v143 + 1;
    if ( v139 == 0 )
      goto LABEL_177;
    goto LABEL_140;
  }
LABEL_103:
  if ( v111 == 0 )
  {
    v54 = sub_410100(v54, 5, 0);
    if ( (int)sub_410660(v15, v54) > 0 )
    {
      v135 = v143 + 2;
      v61 = v133;
LABEL_106:
      ++v133;
      *v61 = 49;
      v119 = 32;
      goto LABEL_107;
    }
  }
LABEL_135:
  v119 = 16;
  v135 = -a6;
  v61 = v133;
LABEL_107:
  v113 = v61;
  sub_4100A0(v54);
  v46 = v113;
  if ( v51 != nullptr )
  {
LABEL_108:
    v114 = v46;
    sub_4100A0(v51);
    v46 = v114;
  }
LABEL_109:
  v115 = v46;
  sub_4100A0(v15);
  *v133 = 0;
  *a7 = v135;
  result = (int)v115;
  if ( a8 != nullptr )
    *a8 = v133;
  *a4 |= v119;
  return result;
}

