// busybox.exe @ 0x408f10 size=7093

int __cdecl sub_408F10(char *a1, char **a2, int *a3, int *a4, int a5)
{
  char *decimal_point; // edi
  char *v6; // eax
  char v7; // cl
  char *v8; // ebp
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  char *v12; // edx
  int result; // eax
  char *v14; // edi
  _DWORD *v15; // eax
  char *v16; // edx
  char *v17; // esi
  int v18; // ecx
  char *v19; // edx
  char *v20; // edi
  int v21; // esi
  int v22; // edx
  char *v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int j; // eax
  int v29; // ecx
  int v30; // edx
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // edi
  double v34; // st7
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  char v41; // al
  signed int v42; // esi
  double v43; // st7
  _DWORD *v44; // eax
  int v45; // edx
  int v46; // esi
  int v47; // edi
  int v48; // eax
  int v49; // edi
  int v50; // edx
  int v51; // eax
  int v52; // eax
  int v53; // edx
  int v54; // ebx
  int v55; // eax
  int v56; // edi
  int v57; // esi
  int v58; // ebp
  int v59; // ebx
  int v60; // eax
  int v61; // ebx
  int v62; // esi
  int v63; // edx
  int v64; // esi
  int v65; // ebp
  bool v66; // cc
  int v67; // eax
  _DWORD *v68; // eax
  _DWORD *v69; // ebp
  int v70; // ebx
  int v71; // eax
  int v72; // eax
  int v73; // eax
  _DWORD *v74; // edx
  int v75; // ebx
  _DWORD *v76; // esi
  _DWORD *v77; // eax
  int v78; // edx
  unsigned int v79; // ecx
  double v80; // st7
  int v81; // eax
  char *v82; // edx
  int v83; // esi
  int v84; // esi
  int v85; // edi
  int v86; // edx
  int v87; // esi
  int v88; // ecx
  int v89; // ecx
  int v90; // edx
  char v91; // dl
  int v92; // eax
  double v93; // st6
  int v94; // edx
  int v95; // ecx
  int v96; // edi
  int v97; // esi
  int v98; // esi
  int v99; // ecx
  double v100; // st6
  char v101; // cl
  int v102; // eax
  int v103; // ecx
  _DWORD *v104; // eax
  double v105; // st7
  _DWORD *v106; // eax
  int v107; // edx
  unsigned int v108; // ecx
  bool v109; // zf
  _DWORD *v110; // eax
  double v111; // st6
  double v112; // st6
  int v113; // ebx
  _DWORD *v114; // eax
  int *v115; // esi
  int v118; // eax
  int v119; // edx
  _DWORD *v120; // esi
  _DWORD *v121; // eax
  int v122; // eax
  int v123; // ecx
  int v124; // edx
  int v125; // edi
  _DWORD *v126; // edx
  _DWORD *v127; // eax
  _DWORD *v128; // ecx
  int v130; // eax
  unsigned int v131; // eax
  int v132; // ecx
  double Str; // [esp+0h] [ebp-CCh]
  size_t Size; // [esp+8h] [ebp-C4h]
  int v135; // [esp+Ch] [ebp-C0h]
  int v136; // [esp+20h] [ebp-ACh]
  double v137; // [esp+20h] [ebp-ACh]
  int v138; // [esp+20h] [ebp-ACh]
  int v139; // [esp+2Ch] [ebp-A0h]
  int v140; // [esp+2Ch] [ebp-A0h]
  int v141; // [esp+2Ch] [ebp-A0h]
  char *v142; // [esp+30h] [ebp-9Ch]
  int v143; // [esp+30h] [ebp-9Ch]
  int v144; // [esp+30h] [ebp-9Ch]
  int v145; // [esp+30h] [ebp-9Ch]
  int v146; // [esp+34h] [ebp-98h]
  int v147; // [esp+38h] [ebp-94h]
  int v148; // [esp+38h] [ebp-94h]
  char *v149; // [esp+38h] [ebp-94h]
  size_t v150; // [esp+40h] [ebp-8Ch]
  int v151; // [esp+40h] [ebp-8Ch]
  double v152; // [esp+40h] [ebp-8Ch]
  int v153; // [esp+48h] [ebp-84h]
  int v154; // [esp+48h] [ebp-84h]
  int v155; // [esp+4Ch] [ebp-80h]
  char *v156; // [esp+4Ch] [ebp-80h]
  int v157; // [esp+4Ch] [ebp-80h]
  int v158; // [esp+4Ch] [ebp-80h]
  BOOL v159; // [esp+4Ch] [ebp-80h]
  int v160; // [esp+4Ch] [ebp-80h]
  int v161; // [esp+50h] [ebp-7Ch]
  double v162; // [esp+50h] [ebp-7Ch]
  char *i; // [esp+58h] [ebp-74h]
  int v164; // [esp+58h] [ebp-74h]
  char *v165; // [esp+5Ch] [ebp-70h]
  int v166; // [esp+5Ch] [ebp-70h]
  int v167; // [esp+60h] [ebp-6Ch]
  int v168; // [esp+64h] [ebp-68h]
  int v169; // [esp+68h] [ebp-64h]
  int v170; // [esp+6Ch] [ebp-60h]
  int v171; // [esp+70h] [ebp-5Ch]
  int v172; // [esp+74h] [ebp-58h]
  int v173; // [esp+78h] [ebp-54h]
  void *Src; // [esp+7Ch] [ebp-50h]
  int v175; // [esp+80h] [ebp-4Ch]
  int v176; // [esp+84h] [ebp-48h]
  int v177; // [esp+88h] [ebp-44h]
  int v178; // [esp+94h] [ebp-38h] BYREF
  int v179; // [esp+98h] [ebp-34h] BYREF
  int v180; // [esp+9Ch] [ebp-30h] BYREF
  int v181; // [esp+A0h] [ebp-2Ch] BYREF
  int v182; // [esp+A4h] [ebp-28h] BYREF
  char *v183; // [esp+A8h] [ebp-24h] BYREF
  _DWORD *v184; // [esp+ACh] [ebp-20h] BYREF

  decimal_point = localeconv()->decimal_point;
  v180 = 0;
  v150 = strlen(decimal_point);
  v184 = nullptr;
  v146 = *a3;
  v6 = a1;
  v183 = a1;
  while ( 2 )
  {
    v7 = *v6;
    v8 = v6;
    switch ( *v6 )
    {
      case 0:
        goto LABEL_13;
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 32:
        v183 = ++v6;
        continue;
      case 43:
        v169 = 0;
        goto LABEL_223;
      case 45:
        v169 = 1;
LABEL_223:
        v183 = v6 + 1;
        v7 = v6[1];
        if ( v7 != 0 )
        {
          v8 = v6 + 1;
LABEL_4:
          v136 = 0;
          if ( v7 == 48 )
          {
            v23 = v8 + 1;
            if ( (v8[1] & 0xDF) == 0x58 )
            {
              v180 = sub_40EEE0(&v183, a3, a4, &v184, v169);
              if ( v180 != 6 )
                goto LABEL_79;
              v183 = a1;
              v15 = v184;
              if ( a2 != nullptr )
                *a2 = a1;
              goto LABEL_35;
            }
            do
            {
              v183 = v23;
              v8 = v23;
              v7 = *v23++;
            }
            while ( v7 == 48 );
            v15 = nullptr;
            if ( v7 == 0 )
              goto LABEL_31;
            v136 = 1;
          }
          v176 = a3[4];
          v9 = v7;
          if ( (unsigned int)(v7 - 48) > 9 )
          {
            v139 = 0;
            v12 = v8;
            v10 = 0;
            v153 = 0;
          }
          else
          {
            v142 = decimal_point;
            v10 = 0;
            v139 = 0;
            v11 = 0;
            do
            {
              if ( v10 <= 8 )
              {
                v11 = v9 + 10 * v11 - 48;
              }
              else if ( v10 <= 15 )
              {
                v139 = v9 + 10 * v139 - 48;
              }
              v12 = &v8[++v10];
              v183 = &v8[v10];
              v9 = v8[v10];
              v7 = v8[v10];
            }
            while ( (unsigned int)(v9 - 48) <= 9 );
            v153 = v11;
            decimal_point = v142;
          }
          if ( *decimal_point == v7 )
          {
            if ( decimal_point[1] == 0 )
            {
              v81 = 1;
LABEL_180:
              v82 = &v12[v81];
              v183 = v82;
              v9 = *v82;
              if ( v10 != 0 )
              {
                v83 = v9 - 48;
                v143 = v10;
                v14 = nullptr;
                for ( i = nullptr; (unsigned int)(v9 - 48) <= 9; v83 = v9 - 48 )
                {
                  v160 = v83;
                  ++v14;
                  v149 = v183;
                  if ( v83 != 0 )
                  {
                    i = &i[(_DWORD)v14];
                    if ( v14 == (char *)1 )
                    {
                      v124 = v143++;
                    }
                    else
                    {
                      v122 = v143;
                      v123 = v153;
                      v143 += (int)v14;
                      v124 = v143 - 1;
                      v125 = v139;
                      do
                      {
                        if ( v122 <= 8 )
                        {
                          ++v122;
                          v123 *= 10;
                        }
                        else if ( ++v122 <= 16 )
                        {
                          v125 *= 10;
                        }
                      }
                      while ( v124 != v122 );
                      v139 = v125;
                      v153 = v123;
                    }
                    if ( v124 <= 8 )
                    {
LABEL_221:
                      v14 = nullptr;
                      v153 = v160 + 10 * v153;
                    }
                    else
                    {
                      v14 = nullptr;
                      if ( v143 <= 16 )
                        v139 = v83 + 10 * v139;
                    }
                  }
                  v183 = v149 + 1;
                  v9 = v149[1];
                }
              }
              else
              {
                if ( v9 == 48 )
                {
                  v103 = 1 - (_DWORD)v82;
                  do
                  {
                    v14 = &v82[v103];
                    v183 = ++v82;
                    v9 = *v82;
                  }
                  while ( v9 == 48 );
                }
                else
                {
                  v14 = nullptr;
                }
                if ( (unsigned int)(v9 - 49) <= 8 )
                {
                  v8 = v183;
                  v143 = 1;
                  v160 = v9 - 48;
                  i = v14 + 1;
                  v149 = v183;
                  goto LABEL_221;
                }
                i = nullptr;
                v143 = 0;
              }
              v147 = 1;
LABEL_20:
              if ( (v9 & 0xFFFFFFDF) != 0x45 )
              {
                v155 = 0;
                goto LABEL_22;
              }
              if ( (v136 | (unsigned int)v14 | v143) == 0 )
                goto LABEL_30;
              a1 = v183++;
              v9 = a1[1];
              if ( (_BYTE)v9 == 43 )
              {
                v161 = 0;
              }
              else
              {
                if ( (_BYTE)v9 != 45 )
                {
                  v161 = 0;
                  goto LABEL_41;
                }
                v161 = 1;
              }
              v183 = a1 + 2;
              v9 = a1[2];
LABEL_41:
              if ( (unsigned int)(v9 - 48) > 9 )
              {
                v155 = 0;
                v183 = a1;
              }
              else
              {
                if ( v9 == 48 )
                {
                  v16 = v183 + 1;
                  do
                  {
                    v183 = v16;
                    v9 = *v16++;
                  }
                  while ( v9 == 48 );
                }
                v155 = 0;
                if ( (unsigned int)(v9 - 49) <= 8 )
                {
                  v17 = v183;
                  v18 = v9 - 48;
                  v156 = v183++;
                  v9 = v156[1];
                  if ( (unsigned int)(v9 - 48) > 9 )
                    goto LABEL_287;
                  v165 = v14;
                  v19 = v17 + 2;
                  do
                  {
                    v183 = v19;
                    v20 = v19++;
                    v18 = v9 + 10 * v18 - 48;
                    v9 = *(v19 - 1);
                  }
                  while ( (unsigned int)(v9 - 48) <= 9 );
                  v21 = v20 - v156;
                  v14 = v165;
                  v157 = 19999;
                  if ( v21 <= 8 )
                  {
LABEL_287:
                    v119 = 19999;
                    if ( v18 <= 19999 )
                      v119 = v18;
                    v157 = v119;
                  }
                  v22 = -v157;
                  if ( v161 == 0 )
                    v22 = v157;
                  v155 = v22;
                }
              }
LABEL_22:
              if ( v143 == 0 )
              {
                if ( ((unsigned int)v14 | v136) != 0 )
                  goto LABEL_79;
                if ( v147 != 0 )
                  goto LABEL_30;
                if ( v9 != 105 )
                {
                  if ( v9 > 105 )
                  {
                    if ( v9 != 110 )
                      goto LABEL_30;
LABEL_29:
                    if ( sub_410CE0(&v183, "an") == 0 )
                      goto LABEL_30;
                    v180 = 4;
                    *a4 = a3[2] + 1;
                    if ( *v183 != 40 )
                      goto LABEL_79;
                    v180 = sub_40FAA0(&v183, a3, a5);
LABEL_231:
                    *a4 = a3[2] + 1;
                    v15 = v184;
                    goto LABEL_31;
                  }
                  if ( v9 != 73 )
                  {
                    if ( v9 != 78 )
                    {
LABEL_30:
                      v180 = 6;
                      v183 = a1;
                      v15 = v184;
                      goto LABEL_31;
                    }
                    goto LABEL_29;
                  }
                }
                if ( sub_410CE0(&v183, "nf") == 0 )
                  goto LABEL_30;
                --v183;
                if ( sub_410CE0(&v183, "inity") == 0 )
                  ++v183;
                v180 = 3;
                goto LABEL_231;
              }
              v180 = 1;
              v171 = v155 - (_DWORD)i;
              v32 = a3[3] & 3;
              v168 = v32 - v169;
              if ( v32 != 2 )
              {
                v168 = v169 + 1;
                if ( v32 != 3 )
                  v168 = v32 == 0;
              }
              v33 = 16;
              v34 = (double)(unsigned int)v153;
              if ( v10 == 0 )
                v10 = v143;
              if ( v143 <= 16 )
                v33 = v143;
              v137 = v34;
              if ( v143 > 9 )
                v137 = v34 * dbl_474278[v33] + (double)(unsigned int)v139;
              if ( v146 > 53 || v143 > 15 )
              {
                v39 = v155 - (_DWORD)i;
                goto LABEL_106;
              }
              if ( v171 == 0 )
              {
                v38 = sub_408A30(a3, a4, a5, v137, 1, v168, &v180);
                goto LABEL_98;
              }
              if ( v171 <= 0 )
              {
                v39 = v155 - (_DWORD)i;
                if ( v171 < -22 )
                  goto LABEL_106;
                Str = v137 / dbl_4742C0[(_DWORD)&i[-v155]];
              }
              else
              {
                if ( v171 <= 22 )
                {
                  _EDX = LODWORD(v137);
                  if ( LODWORD(v137) != 0 )
                  {
                    __asm { tzcnt   ecx, edx }
                    v140 = 53 - _ECX;
                  }
                  else
                  {
                    _ECX = HIDWORD(v137) | 0x100000;
                    __asm { tzcnt   ecx, ecx }
                    v140 = 21 - _ECX;
                  }
                  v135 = v168;
                  Size = v140 + dword_474220[v171] <= 53;
                  Str = v137 * dbl_4742C0[v171];
                  v137 = Str;
                  goto LABEL_97;
                }
                v42 = v171 + v143 - v33;
                if ( 37 - v143 < v171 )
                  goto LABEL_107;
                Str = v137 * dbl_4742C0[15 - v143] * dbl_4742C0[v171 - (15 - v143)];
              }
              Size = 0;
              v137 = Str;
              v135 = v168;
LABEL_97:
              v38 = sub_408A30(a3, a4, a5, Str, Size, v135, &v180);
LABEL_98:
              if ( v38 != 0 )
                goto LABEL_79;
              v39 = 0;
LABEL_106:
              v42 = v39 + v143 - v33;
              if ( v42 <= 0 )
              {
                if ( v42 != 0 )
                {
                  v84 = -v42;
                  if ( (v84 & 0xF) != 0 )
                    v137 = v137 / dbl_4742C0[v84 & 0xF];
                  v42 = v84 & 0xFFFFFFF0;
                  if ( v42 != 0 )
                  {
                    v85 = v42 >> 4;
                    if ( v42 <= 255 )
                    {
                      v89 = 0;
                    }
                    else
                    {
                      v86 = v42 >> 4;
                      v87 = 0;
                      do
                      {
                        v86 -= 16;
                        v88 = HIDWORD(v137) >> 20;
                        HIDWORD(v137) = HIDWORD(v137) & 0x800FFFFF | 0x3FF00000;
                        v89 = v87 + (v88 & 0x7FF) - 1023;
                        v87 = v89;
                        v137 = v137 * 1.0e-256;
                      }
                      while ( v86 > 15 );
                      v85 &= 0xFu;
                    }
                    v90 = (HIDWORD(v137) >> 20) & 0x7FF;
                    HIDWORD(v137) = HIDWORD(v137) & 0x800FFFFF | 0x3FF00000;
                    v42 = v89 + v90 - 1023;
                    if ( v85 != 0 )
                    {
                      v91 = 0;
                      v92 = 0;
                      v93 = v137;
                      do
                      {
                        if ( (v85 & 1) != 0 )
                        {
                          v93 = v93 * dbl_474380[v92];
                          v91 = 1;
                        }
                        ++v92;
                        v85 >>= 1;
                      }
                      while ( v85 != 0 );
                      if ( v91 == 0 )
                        v93 = v137;
                      v43 = v93;
                      goto LABEL_111;
                    }
                  }
                }
                goto LABEL_110;
              }
LABEL_107:
              if ( (v42 & 0xF) != 0 )
                v137 = v137 * dbl_4742C0[v42 & 0xF];
              v42 &= 0xFFFFFFF0;
              if ( v42 != 0 )
              {
                v94 = v42 >> 4;
                if ( v42 <= 255 )
                {
                  v98 = 0;
                }
                else
                {
                  v95 = v42 >> 4;
                  v96 = 0;
                  do
                  {
                    v95 -= 16;
                    v97 = HIDWORD(v137) >> 20;
                    HIDWORD(v137) = HIDWORD(v137) & 0x800FFFFF | 0x3FF00000;
                    v98 = v96 + (v97 & 0x7FF) - 1023;
                    v96 = v98;
                    v137 = v137 * 1.0e256;
                  }
                  while ( v95 > 15 );
                  v94 &= 0xFu;
                }
                v99 = (HIDWORD(v137) >> 20) & 0x7FF;
                HIDWORD(v137) = HIDWORD(v137) & 0x800FFFFF | 0x3FF00000;
                v43 = v137;
                v42 = v98 + v99 - 1023;
                if ( v94 != 0 )
                {
                  v100 = v137;
                  v101 = 0;
                  v102 = 0;
                  do
                  {
                    if ( (v94 & 1) != 0 )
                    {
                      v100 = v100 * dbl_4743C0[v102];
                      v101 = 1;
                    }
                    ++v102;
                    v94 >>= 1;
                  }
                  while ( v94 != 0 );
                  if ( v101 == 0 )
                    v100 = v137;
                  v43 = v100;
                }
                goto LABEL_111;
              }
LABEL_110:
              v43 = v137;
LABEL_111:
              v44 = (_DWORD *)sub_410A00(v43, (int)&v182, (int)&v181);
              v45 = v181;
              v46 = v182 + v42;
              v184 = v44;
              v47 = v181 - v146;
              v182 = v46;
              if ( v181 - v146 > 0 )
              {
                sub_40F8D0(v44, v181 - v146);
                v45 = v146;
                v182 += v47;
                v46 = v182;
                v181 = v146;
              }
              v177 = v46 + v45 - v146;
              if ( a3[2] + 1 < v177 )
              {
                v148 = 0;
                goto LABEL_262;
              }
              v48 = a3[1];
              v167 = v48;
              if ( v177 >= v48 )
              {
                v148 = 0;
              }
              else
              {
                v49 = v46 - v48;
                if ( v46 - v48 > 0 )
                {
                  v104 = (_DWORD *)sub_410520(v184, v49);
                  v181 += v49;
                  v184 = v104;
                }
                else if ( v46 != v48 )
                {
                  v50 = v49 + v45;
                  v15 = v184;
                  v181 = v50;
                  if ( v50 > 0 )
                  {
                    sub_40F8D0(v184, v167 - v46);
                  }
                  else
                  {
                    if ( v50 < -1 )
                    {
                      v184[4] = 0;
                      v15[5] = 0;
                      *a4 = v167;
                      if ( v176 == 0 )
                      {
                        v31 = 80;
                        goto LABEL_78;
                      }
                      goto LABEL_258;
                    }
                    v181 = 1;
                    v184[4] = 1;
                    v15[5] = 1;
                  }
                }
                v182 = v167;
                if ( v176 != 0 )
                {
                  v51 = v177;
                  v148 = 1;
                  v177 = v167;
                  if ( v51 + 1 < v167 )
                  {
                    v15 = v184;
                    v184[4] = 0;
                    v15[5] = 0;
                    *a4 = v167;
                    goto LABEL_258;
                  }
                }
                else
                {
                  v148 = 1;
                  v177 = v167;
                }
              }
              v52 = sub_410B20(v8, v10, v143, v153, v150);
              v53 = 0;
              v145 = 0;
              v54 = v52;
              v172 = v52;
              v55 = (int)&i[-v155];
              if ( v171 >= 0 )
              {
                v55 = 0;
                v53 = v155 - (_DWORD)i;
              }
              v154 = v55;
              Src = (void *)(v54 + 12);
              v170 = v53;
              v173 = v146 + 1;
              while ( 1 )
              {
                v141 = sub_40FFB0(*(_DWORD *)(v172 + 4));
                memcpy((void *)(v141 + 12), Src, 4 * *(_DWORD *)(v172 + 16) + 8);
                v56 = sub_40FFB0(v184[1]);
                memcpy((void *)(v56 + 12), v184 + 3, 4 * v184[4] + 8);
                v57 = v181;
                v58 = v182;
                v59 = v182 + v145;
                v151 = v181 - v145;
                v138 = sub_4101E0(1);
                if ( v59 < 0 )
                {
                  v60 = v170 - v59;
                  v61 = v154;
                }
                else
                {
                  v60 = v170;
                  v61 = v154 + v59;
                }
                v62 = v58 + v57 - v146;
                v63 = v173 - v151;
                if ( v167 > v62 )
                  v63 = v173 - v151 + v62 - v167;
                v64 = v61 + v63;
                v65 = v60 + v63;
                v66 = v61 + v63 <= v60 + v63;
                v67 = v60 + v63;
                if ( v66 )
                  v67 = v61 + v63;
                if ( v61 <= v67 )
                  v67 = v61;
                if ( v67 > 0 )
                {
                  v64 -= v67;
                  v65 -= v67;
                  v61 -= v67;
                }
                if ( v154 > 0 )
                {
                  v138 = sub_4103A0(v138, v154);
                  v158 = sub_410210(v138, v56);
                  sub_4100A0(v56);
                  v56 = v158;
                }
                if ( v64 - v145 > 0 )
                {
                  v56 = sub_410520(v56, v64 - v145);
                }
                else if ( v64 != v145 )
                {
                  sub_40F8D0(v56, v145 - v64);
                }
                if ( v171 > 0 )
                  v141 = sub_4103A0(v141, v170);
                if ( v65 > 0 )
                  v141 = sub_410520(v141, v65);
                if ( v61 > 0 )
                  v138 = sub_410520(v138, v61);
                v68 = (_DWORD *)sub_4106B0(v56, v141);
                v69 = v68;
                if ( (int)v68[4] <= 1 && v68[5] == 0 )
                  goto LABEL_62;
                v70 = v68[3];
                v68[3] = 0;
                v71 = sub_410660(v68, v138);
                if ( v168 != 0 && v71 <= 0 )
                {
                  v72 = v168 & 1;
                  v145 = v70 ^ v72;
                  if ( v72 == v70 )
                  {
                    v180 = v72 == 0 ? 33 : 17;
                    goto LABEL_62;
                  }
                  if ( v70 != 0 )
                  {
                    v180 = 33;
                    v152 = 1.0;
                    v164 = 0;
                    v162 = 1.0;
                    v175 = 32;
                    v159 = false;
                    goto LABEL_160;
                  }
                  v180 = 17;
                  if ( v177 != v167 )
                  {
                    v73 = v146;
                    v74 = v184;
                    if ( v146 > 31 )
                    {
                      while ( v184[v70 + 5] == 0 )
                      {
                        v73 -= 32;
                        ++v70;
                        if ( v73 <= 31 )
                          goto LABEL_264;
                      }
                    }
                    else
                    {
                      v73 = v146;
LABEL_264:
                      if ( v73 <= 1 )
                        goto LABEL_266;
                      v115 = &v184[v70 + 5];
                      _EBX = *v115;
                      __asm { tzcnt   ecx, ebx }
                      *v115 = (unsigned int)*v115 >> _ECX;
                      if ( v73 - 1 <= _ECX )
                      {
LABEL_266:
                        v182 = v177 - 1;
                        v181 = v146;
                        v184 = (_DWORD *)sub_408E50((int)v74, v146);
                        goto LABEL_62;
                      }
                    }
                  }
                }
                else
                {
                  if ( v71 < 0 )
                  {
                    if ( v70 != 0 )
                      goto LABEL_340;
                    v180 = 33;
                    if ( v151 > 1 || v177 == v167 || (v148 & 1) != 0 )
                      goto LABEL_62;
                    v69 = (_DWORD *)sub_410520(v69, 1);
                    if ( (int)sub_410660(v69, v138) <= 0 )
                      goto LABEL_275;
                    v180 = 17;
                    v148 = 0;
                    goto LABEL_301;
                  }
                  if ( v71 == 0 )
                  {
                    if ( v70 != 0 )
                    {
                      if ( v148 == 0 )
                        goto LABEL_345;
                      v120 = v184;
                      v121 = v184 + 5;
                      while ( &v184[(v181 >> 5) + 5] > v121 )
                      {
                        if ( *v121++ != -1 )
                          goto LABEL_345;
                      }
                      if ( (v181 & 0x1F) != 0 && (*v121 | (-1 << (v181 & 0x1F))) != 0xFFFFFFFF )
                      {
LABEL_345:
                        v180 = 17;
                        goto LABEL_331;
                      }
                      v184[4] = 1;
                      v120[5] = 1;
                      v181 = 1;
                      v182 = v146 + v167 - 1;
                      v118 = v148;
                      v180 = 33;
LABEL_276:
                      v148 = v146 - v118;
                      if ( v146 != v118 )
                      {
                        if ( v146 - v118 <= 0 )
                          sub_40F8D0(v184, v118 - v146);
                        else
                          v184 = (_DWORD *)sub_410520(v184, v148);
                        v24 = v182 - v148;
                        v148 = 0;
                        v182 = v24;
LABEL_64:
                        *a4 = v24;
                        sub_4100A0(v56);
                        sub_4100A0(v141);
                        sub_4100A0(v138);
                        sub_4100A0(v172);
                        sub_4100A0(v69);
                        if ( a3[2] >= v182 )
                          goto LABEL_263;
                        v25 = a3[3] & 3;
                        switch ( v25 )
                        {
                          case 2:
                            if ( v169 == 0 )
                              goto LABEL_262;
                            break;
                          case 3:
                            if ( v169 != 0 )
                              goto LABEL_262;
                            break;
                          case 1:
LABEL_262:
                            v180 = 163;
                            v184[4] = 0;
                            *errno() = 34;
                            *a4 = a3[2] + 1;
LABEL_263:
                            v15 = v184;
LABEL_73:
                            if ( v148 == 0 )
                              goto LABEL_31;
                            if ( v176 == 0 )
                            {
                              v30 = v180 & 0x30;
                              v31 = v180 & 0xFFFFFFF8;
                              if ( (int)v15[4] > 0 )
                                v31 |= 2u;
                              v180 = v31;
                              if ( v30 != 0 )
                              {
LABEL_78:
                                v180 = v31 | 0x40;
                                *errno() = 34;
                              }
LABEL_79:
                              v15 = v184;
LABEL_31:
                              if ( a2 != nullptr )
                                *a2 = v183;
                              if ( v169 != 0 )
                                v180 |= 8u;
LABEL_35:
                              if ( v15 != nullptr )
                              {
                                sub_410D30(a5, v146, v15);
                                sub_4100A0(v184);
                              }
                              return v180;
                            }
LABEL_258:
                            v15[4] = 0;
                            v180 = 80;
                            *errno() = 34;
                            v15 = v184;
                            goto LABEL_31;
                          default:
                            break;
                        }
                        sub_4100A0(v184);
                        v184 = nullptr;
                        v180 = 17;
                        *a4 = a3[2];
                        v26 = *a3;
                        v27 = a5 + 4 * ((*a3 + 31) >> 5);
                        for ( j = a5; v27 > j; *(_DWORD *)(j - 4) = -1 )
                          j += 4;
                        v29 = v26 & 0x1F;
                        if ( v29 != 0 )
                          *(_DWORD *)(v27 - 4) >>= 32 - v29;
                        v15 = nullptr;
                        goto LABEL_73;
                      }
LABEL_63:
                      v24 = v182;
                      goto LABEL_64;
                    }
                    if ( v151 != 1 )
                    {
                      v180 = 33;
LABEL_331:
                      if ( v146 <= v151 || (v148 & 1) != 0 )
                      {
                        v126 = v184;
                        if ( (v184[5] & 1) != 0 )
                        {
                          if ( v70 != 0 )
                          {
                            v131 = (unsigned int)sub_408990(v184);
                            v132 = *(_DWORD *)(v131 + 16);
                            v184 = (_DWORD *)v131;
                            _BitScanReverse(&v131, *(_DWORD *)(v131 + 4 * v132 + 16));
                            if ( (-v181 & 0x1F) != (v131 ^ 0x1F) )
                              ++v181;
                            v180 = 33;
                          }
                          else if ( v151 == 1 )
                          {
LABEL_327:
                            v126[4] = 0;
                            v180 = 80;
                            v182 = v167;
                          }
                          else
                          {
                            v127 = v184 + 5;
                            v128 = &v184[v184[4] + 5];
                            while ( *v127 == 0 )
                            {
                              *v127++ = -1;
                              if ( v128 <= v127 )
                                goto LABEL_340;
                            }
                            --*v127;
LABEL_340:
                            v180 = 17;
                          }
                        }
LABEL_62:
                        if ( v148 != 0 )
                          goto LABEL_63;
                      }
LABEL_275:
                      v118 = v181;
                      goto LABEL_276;
                    }
                    v180 = 1;
                    if ( v177 == v167 )
                    {
                      v180 = 33;
                      if ( v184[4] == 1 )
                      {
                        v130 = 1;
                        if ( v184[5] != 1 )
                          v130 = v176;
                        v176 = v130;
                      }
                      goto LABEL_62;
                    }
LABEL_301:
                    v182 -= v146;
                    v181 = v146;
                    v184 = (_DWORD *)sub_408E50((int)v184, v146);
                    goto LABEL_62;
                  }
                  v105 = sub_410C20(v69, v138);
                  if ( v105 > 2.0 )
                  {
                    v111 = v105 * 0.5;
                    v175 = v70 == 0 ? 32 : 16;
                    v159 = v70 == 0;
                    v162 = v111;
                    if ( v111 >= 2147483647.0 )
                    {
                      v164 = 0;
                      v152 = v111;
                      goto LABEL_255;
                    }
                    v164 = (int)v111;
                    v152 = (double)(int)v111;
                    v112 = v111 - v152;
                    v162 = v112;
                    if ( v168 == 1 )
                    {
                      if ( v70 != 0 )
                        goto LABEL_255;
                    }
                    else
                    {
                      if ( v168 != 2 )
                      {
                        if ( v112 < 0.5 )
                        {
LABEL_255:
                          v145 = 0;
                          goto LABEL_160;
                        }
LABEL_272:
                        ++v164;
                        v175 = 48 - v175;
                        v152 = (double)v164;
                        goto LABEL_255;
                      }
                      if ( v70 == 0 )
                        goto LABEL_255;
                    }
                    if ( v112 <= 0.0 )
                      goto LABEL_255;
                    goto LABEL_272;
                  }
                  if ( v70 != 0 )
                  {
                    v164 = 0;
                    v152 = 1.0;
                    v175 = 32;
                    v162 = 1.0;
                    v145 = 0;
                    v159 = false;
                    goto LABEL_160;
                  }
                  v145 = 0;
                }
                if ( v151 <= 1 && (v148 & 1) != 0 )
                {
                  v148 = 1;
                  v126 = v184;
                  goto LABEL_327;
                }
                v164 = 0;
                v152 = 1.0;
                v175 = 16;
                v162 = 1.0;
                v159 = true;
LABEL_160:
                v166 = v181 + v182;
                if ( (v148 & 1) == 0 && v181 < v146 )
                {
                  v113 = v146 - v181;
                  v114 = (_DWORD *)sub_410520(v184, v146 - v181);
                  v182 -= v113;
                  v184 = v114;
                  v181 = v146;
                }
                v75 = sub_410A00(v152, (int)&v178, (int)&v179);
                if ( v178 < 0 )
                {
                  sub_40F8D0(v75, -v178);
                }
                else if ( v178 != 0 )
                {
                  v75 = sub_410520(v75, v178);
                }
                v76 = v184;
                if ( v159 )
                {
                  v77 = (_DWORD *)sub_4106B0(v184, v75);
                  v184 = v77;
                  if ( v148 == 0 )
                  {
                    v78 = v76[4];
                    if ( v77[4] <= v78 - 1
                      || (_BitScanReverse(&v79, v77[v78 + 4]),
                          _BitScanReverse((unsigned int *)&v78, v76[v78 + 4]),
                          (v78 ^ 0x1F) < (int)(v79 ^ 0x1F)) )
                    {
                      if ( v177 != v167 )
                      {
                        v110 = (_DWORD *)sub_410520(v77, 1);
                        --v182;
                        --v177;
                        v184 = v110;
                        sub_4100A0(v75);
                        sub_4100A0(v76);
LABEL_249:
                        v148 = 0;
                        v145 = sub_40F9E0(v184);
                        goto LABEL_178;
                      }
                      --v181;
                      v148 = v159;
                    }
                  }
                }
                else
                {
                  v106 = (_DWORD *)sub_40AC20(v184, v75);
                  v107 = v106[4];
                  v184 = v106;
                  if ( v76[4] <= v107 - 1
                    || (_BitScanReverse(&v108, v106[v107 + 4]),
                        _BitScanReverse((unsigned int *)&v107, v76[v107 + 4]),
                        (v107 ^ 0x1F) > (int)(v108 ^ 0x1F)) )
                  {
                    if ( v148 != 0 )
                    {
                      v109 = ++v181 == v146;
                      v148 = !v109;
                    }
                    else
                    {
                      sub_40F8D0(v106, 1);
                      ++v182;
                      ++v177;
                      v164 = 0;
                    }
                  }
                }
                sub_4100A0(v75);
                sub_4100A0(v76);
                if ( v145 != 0 )
                  goto LABEL_62;
                if ( v182 + v181 == v166 && v164 != 0 )
                {
                  v80 = v152 * 5.0e-16;
                  if ( -(v152 * 5.0e-16) <= v162 - 0.5 )
                  {
                    if ( v162 - 0.5 > v80 && 1.0 - v80 > v162 )
                    {
LABEL_61:
                      v180 |= v175;
                      goto LABEL_62;
                    }
                  }
                  else if ( v162 > v80 )
                  {
                    goto LABEL_61;
                  }
                }
                if ( v148 == 0 )
                  goto LABEL_249;
LABEL_178:
                sub_4100A0(v56);
                sub_4100A0(v141);
                sub_4100A0(v138);
                sub_4100A0(v69);
              }
            }
            v144 = v9;
            v40 = 1;
            v41 = decimal_point[1];
            while ( v12[v40] == v41 )
            {
              v41 = decimal_point[++v40];
              if ( v41 == 0 )
              {
                v81 = v40;
                goto LABEL_180;
              }
            }
            v9 = v144;
          }
          v143 = v10;
          v14 = nullptr;
          i = nullptr;
          v147 = 0;
          goto LABEL_20;
        }
LABEL_13:
        result = 6;
        v180 = 6;
        if ( a2 == nullptr )
          return result;
        *a2 = a1;
        return v180;
      default:
        v169 = 0;
        goto LABEL_4;
    }
  }
}

