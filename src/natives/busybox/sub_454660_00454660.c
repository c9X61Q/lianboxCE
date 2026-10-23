// busybox.exe @ 0x454660 size=7118

int __usercall sub_454660@<eax>(
        int a1@<eax>,
        int a2@<edx>,
        int a3@<ecx>,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        _DWORD *a8,
        int a9)
{
  int v9; // ebx
  char v10; // al
  unsigned int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edi
  char v19; // al
  int v20; // eax
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  int v27; // edx
  int v28; // ecx
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  _DWORD *v33; // ebx
  int v34; // ebp
  int v35; // eax
  char *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  char *v40; // eax
  int v41; // eax
  int v42; // eax
  __int16 v43; // bx
  int v44; // eax
  __int16 v45; // si
  int v46; // edx
  int jj; // eax
  int v48; // ecx
  int v49; // ecx
  int kk; // eax
  int v51; // edx
  size_t *v52; // ebx
  int v53; // edx
  int nn; // eax
  int v55; // ecx
  int v56; // ecx
  int i1; // eax
  int v58; // edx
  int v59; // edx
  char *v60; // edi
  void **i2; // ebx
  int k; // ebx
  int v63; // edi
  int m; // esi
  int v65; // edx
  int j; // ebx
  char *v67; // eax
  char *v68; // eax
  char *v69; // eax
  _DWORD *v70; // eax
  unsigned int v71; // ebx
  int v72; // ecx
  char *v73; // edi
  int ii; // esi
  int v75; // edx
  char *v76; // edi
  int v77; // esi
  unsigned int v78; // ecx
  int v79; // ebx
  char *v80; // edi
  int n; // esi
  int v82; // edx
  int v83; // edx
  int v84; // edx
  void **v85; // ebx
  int v86; // eax
  char v87; // dl
  int v88; // esi
  int v89; // eax
  bool v90; // al
  char v91; // al
  unsigned int v92; // ebx
  char v93; // bl
  _DWORD *v94; // esi
  _DWORD *v95; // ebx
  int v96; // edx
  int v97; // eax
  BOOL v98; // eax
  void **v99; // ebp
  int v100; // ebx
  int v101; // esi
  int v102; // ecx
  int v103; // edi
  int v104; // esi
  unsigned int v105; // eax
  int v106; // eax
  int v107; // ecx
  int v108; // edx
  int v109; // edx
  _DWORD *v110; // esi
  int v111; // edi
  int v112; // eax
  char v113; // dl
  int v114; // ebx
  _DWORD *v115; // edx
  int v116; // edx
  _DWORD *v117; // esi
  void *v118; // edi
  const void *v119; // esi
  int i6; // eax
  int v121; // edi
  int v122; // ecx
  int v123; // edx
  void *v124; // eax
  int *v125; // eax
  void *v126; // eax
  int *v127; // eax
  int v128; // ecx
  int v129; // eax
  size_t v130; // edx
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // ecx
  int i3; // eax
  int v136; // edx
  _DWORD *v137; // eax
  int i4; // edx
  int v139; // ecx
  int i5; // edx
  int v141; // eax
  int v142; // ebx
  size_t Size; // [esp+0h] [ebp-184h]
  unsigned int v145; // [esp+Ch] [ebp-178h]
  void *v146; // [esp+Ch] [ebp-178h]
  _DWORD *v147; // [esp+10h] [ebp-174h]
  void **Block; // [esp+14h] [ebp-170h]
  void *Blocka; // [esp+14h] [ebp-170h]
  void *Blockb; // [esp+14h] [ebp-170h]
  int v151; // [esp+18h] [ebp-16Ch]
  int v152; // [esp+18h] [ebp-16Ch]
  _DWORD *v153; // [esp+18h] [ebp-16Ch]
  int v154; // [esp+1Ch] [ebp-168h]
  int v155; // [esp+20h] [ebp-164h]
  _DWORD *v156; // [esp+20h] [ebp-164h]
  _DWORD *v157; // [esp+20h] [ebp-164h]
  int v158; // [esp+20h] [ebp-164h]
  int v159; // [esp+20h] [ebp-164h]
  int v160; // [esp+20h] [ebp-164h]
  int v161; // [esp+20h] [ebp-164h]
  int *v162; // [esp+20h] [ebp-164h]
  int v163; // [esp+24h] [ebp-160h]
  int v164; // [esp+24h] [ebp-160h]
  int v165; // [esp+24h] [ebp-160h]
  size_t v166; // [esp+24h] [ebp-160h]
  int v167; // [esp+28h] [ebp-15Ch]
  int v169; // [esp+2Ch] [ebp-158h]
  _DWORD *v170; // [esp+30h] [ebp-154h]
  int v171; // [esp+34h] [ebp-150h]
  int v172; // [esp+38h] [ebp-14Ch]
  void *v173; // [esp+3Ch] [ebp-148h]
  _DWORD *v174; // [esp+3Ch] [ebp-148h]
  BOOL v176; // [esp+44h] [ebp-140h]
  int v178; // [esp+4Ch] [ebp-138h]
  int v179; // [esp+50h] [ebp-134h]
  int v180; // [esp+54h] [ebp-130h]
  bool v181; // [esp+58h] [ebp-12Ch]
  int i; // [esp+5Ch] [ebp-128h]
  char *v183; // [esp+5Ch] [ebp-128h]
  int v184; // [esp+60h] [ebp-124h]
  int mm; // [esp+64h] [ebp-120h]
  char *v186; // [esp+64h] [ebp-120h]
  int v187; // [esp+68h] [ebp-11Ch]
  int *v188; // [esp+6Ch] [ebp-118h]
  int v189; // [esp+70h] [ebp-114h]
  int v190; // [esp+74h] [ebp-110h]
  int v191; // [esp+74h] [ebp-110h]
  int v192; // [esp+78h] [ebp-10Ch]
  int *v193; // [esp+7Ch] [ebp-108h]
  char *v194; // [esp+80h] [ebp-104h]
  int v195; // [esp+80h] [ebp-104h]
  unsigned __int8 v196; // [esp+8Bh] [ebp-F9h]
  size_t *v197; // [esp+90h] [ebp-F4h]
  int v198; // [esp+94h] [ebp-F0h] BYREF
  int v199; // [esp+98h] [ebp-ECh] BYREF
  int v200[8]; // [esp+9Ch] [ebp-E8h] BYREF
  size_t v201[8]; // [esp+BCh] [ebp-C8h] BYREF
  void *v202[8]; // [esp+DCh] [ebp-A8h] BYREF
  _DWORD v203[34]; // [esp+FCh] [ebp-88h] BYREF

  v9 = a5;
  v147 = *(_DWORD **)a1;
  memset(v203, 0, 0x78u);
  v203[17] = v147;
  v171 = *(_DWORD *)(a1 + 16);
  if ( v171 != 0 )
  {
    v10 = *(_BYTE *)(a1 + 28);
    if ( (v10 & 8) == 0 || a5 == 0 || (v10 & 1) != 0 )
      v171 = 0;
  }
  v11 = *(_DWORD *)(a1 + 24);
  v187 = 0;
  if ( v11 < a7 )
    v187 = a7 - 1 - v11;
  v154 = 1;
  if ( *(_DWORD *)(a1 + 8) == 0 )
    return v154;
  v12 = v147[9];
  if ( v12 == 0 )
    return v154;
  v13 = v147[10];
  if ( v13 == 0 )
    return v154;
  v14 = v147[11];
  if ( v14 == 0 || v147[12] == 0 )
    return v154;
  if ( *(_DWORD *)(v12 + 8) == 0 && *(_DWORD *)(v13 + 8) == 0 && (*(_DWORD *)(v14 + 8) == 0 || *(char *)(a1 + 28) >= 0) )
  {
    if ( a4 != 0 )
    {
      v154 = 1;
      a4 += a5;
      if ( a4 != 0 )
        return v154;
    }
    v9 = 0;
  }
  v176 = true;
  v167 = a7 - v187;
  if ( a7 == v187 )
    v176 = v147[19] != 0;
  v172 = *(_DWORD *)(a1 + 20);
  v15 = *(_DWORD *)(a1 + 12) & 0x200000;
  v16 = v147[23];
  v17 = v147[2] + 1;
  if ( v17 < v16 )
    v17 = v147[23];
  if ( v17 > a3 + 1 )
    v17 = a3 + 1;
  v203[0] = a2;
  v203[8] = a3;
  v203[7] = a3;
  v18 = v172;
  v203[12] = v172;
  LOBYTE(v203[14]) = v15 != 0;
  HIBYTE(v203[14]) = (v172 | v15) != 0;
  v203[16] = v16;
  v19 = *((_BYTE *)v147 + 88);
  BYTE1(v203[14]) = (v19 & 4) != 0;
  BYTE2(v203[14]) = (v19 & 8) != 0;
  v203[10] = a3;
  v203[9] = a3;
  v154 = sub_456538(BYTE1(v203[14]), v17);
  if ( v154 != 0 )
    goto LABEL_400;
  v203[13] = v147 + 24;
  BYTE2(v203[15]) = (v147[22] & 0x10) != 0;
  v20 = a2;
  if ( HIBYTE(v203[14]) != 0 )
    v20 = v203[1];
  v203[1] = v20;
  v21 = 0;
  if ( HIBYTE(v203[14]) == 0 )
  {
    v18 = (int)v147;
    if ( (int)v147[23] <= 1 )
      v21 = a3;
  }
  v203[3] = v21;
  v203[4] = v21;
  v203[10] = a6;
  v203[9] = a6;
  BYTE1(v203[15]) = *(_BYTE *)(a1 + 28) >> 7;
  v22 = 2 * v147[19];
  v203[18] = a9;
  v203[19] = -1;
  if ( v22 > 0 )
  {
    v18 = (int)malloc(20 * v22);
    v203[25] = v18;
    v203[29] = malloc(4 * v22);
    if ( v203[29] == 0 || v18 == 0 )
      goto LABEL_406;
  }
  v203[24] = v22;
  v203[26] = 1;
  v203[28] = v22;
  if ( (unsigned int)v167 > 1 || (v147[22] & 2) != 0 )
  {
    if ( v203[5] > 0x3FFFFFFEu )
      goto LABEL_406;
    v203[21] = malloc(4 * v203[5] + 4);
    if ( v203[21] == 0 )
      goto LABEL_406;
  }
  else
  {
    v203[21] = 0;
  }
  v198 = a4;
  v203[11] = (a9 & 1) == 0 ? 6 : 4;
  v179 = v9 + a4;
  v192 = -1;
  if ( v9 >= 0 )
  {
    v23 = a4;
    a4 += v9;
    v179 = v23;
    v192 = 1;
  }
  v178 = 8;
  if ( v171 != 0 )
  {
    v24 = 4;
    if ( v147[23] != 1 )
      v24 = (v172 | *(_DWORD *)(a1 + 12) & 0x200000) == 0 ? 4 : 0;
    v178 = (2 * (v9 >= 0)) | (v172 != 0) | v24;
  }
  v193 = nullptr;
  if ( v9 >= 0 )
    v193 = &v198;
  while ( 2 )
  {
    if ( v198 < v179 || v198 > a4 )
      goto LABEL_337;
    if ( v178 != 8 )
    {
      if ( v178 == 7 )
      {
        while ( v198 < a4 )
        {
          if ( *(_BYTE *)(v171 + *(unsigned __int8 *)(v172 + *(unsigned __int8 *)(a2 + v198))) != 0 )
            goto LABEL_90;
          ++v198;
        }
      }
      else
      {
        if ( v178 != 6 )
        {
          if ( v178 <= 3 )
          {
            while ( 1 )
            {
              v29 = v198 - v203[2];
              if ( v203[4] <= (unsigned int)(v198 - v203[2]) )
              {
                v154 = sub_456588(a9, v198);
                if ( v154 != 0 )
                  goto LABEL_400;
                v29 = v198 - v203[2];
              }
              v30 = 0;
              if ( v198 < a3 )
                v30 = *(unsigned __int8 *)(v203[1] + v29);
              v18 = v171;
              if ( *(_BYTE *)(v171 + v30) != 0 )
                goto LABEL_90;
              v31 = v192 + v198;
              v198 = v31;
              if ( v31 > a4 || v31 < v179 )
                goto LABEL_337;
            }
          }
          while ( v198 >= v179 )
          {
            v27 = 0;
            if ( v198 < a3 )
            {
              v18 = a2;
              v27 = *(unsigned __int8 *)(a2 + v198);
            }
            v28 = v27;
            if ( v172 != 0 )
            {
              v18 = v172;
              v28 = *(unsigned __int8 *)(v172 + v27);
            }
            if ( *(_BYTE *)(v171 + v28) != 0 )
              goto LABEL_90;
            --v198;
          }
LABEL_337:
          v154 = 1;
          goto LABEL_400;
        }
        while ( v198 < a4 )
        {
          if ( *(_BYTE *)(v171 + *(unsigned __int8 *)(a2 + v198)) != 0 )
            goto LABEL_90;
          ++v198;
        }
      }
      if ( v198 == a4 )
      {
        v25 = 0;
        if ( a4 < a3 )
          v25 = *(unsigned __int8 *)(a2 + a4);
        v26 = v25;
        if ( v172 != 0 )
          v26 = *(unsigned __int8 *)(v172 + v25);
        if ( *(_BYTE *)(v171 + v26) == 0 )
          goto LABEL_337;
      }
    }
LABEL_90:
    v154 = sub_456588(a9, v198);
    if ( v154 != 0 )
      goto LABEL_400;
    v203[26] = 0;
    v203[23] = 0;
    v203[22] = 0;
    v33 = (_DWORD *)v203[17];
    v145 = v203[6];
    v199 = 0;
    v34 = *(_DWORD *)(v203[17] + 36);
    if ( *(char *)(v34 + 52) < 0 )
    {
      v35 = sub_4564EC(v203[18], v203[6] - 1);
      if ( (v35 & 1) != 0 )
      {
        v34 = v33[10];
        goto LABEL_101;
      }
      if ( v35 != 0 )
      {
        if ( (v35 & 6) == 6 )
        {
          v34 = v33[12];
          goto LABEL_101;
        }
        if ( (v35 & 2) != 0 )
        {
          v34 = v33[11];
          goto LABEL_101;
        }
        if ( (v35 & 4) != 0 )
        {
          v36 = sub_453294(&v199, v33, *(_DWORD *)(v34 + 40), v35);
          Size = v18;
          v34 = (int)v36;
LABEL_101:
          if ( v34 == 0 )
            goto LABEL_406;
        }
      }
    }
    if ( v203[21] != 0 && (*(_DWORD *)(v203[21] + 4 * v145) = v34, v33[19] != 0) )
    {
      v37 = sub_41C4FC(v203, v34 + 4, 0);
      v199 = v37;
      if ( v37 != 0 || (*(_BYTE *)(v34 + 52) & 0x40) != 0 && (v37 = sub_4670EC(Size), v199 = v37, v37 != 0) )
      {
        v145 = v37;
        goto LABEL_277;
      }
      v181 = false;
    }
    else
    {
      v181 = v193 != nullptr;
    }
    if ( (*(_BYTE *)(v34 + 52) & 0x10) != 0 )
    {
      if ( *(char *)(v34 + 52) >= 0 || (v180 = sub_41C274((int)v203, v34, v145)) != 0 )
      {
        if ( !v176 )
          goto LABEL_277;
        v38 = v145;
        v18 = v176;
        LOBYTE(v180) = v176;
      }
      else
      {
        v38 = -1;
      }
    }
    else
    {
      v38 = -1;
      LOBYTE(v180) = 0;
    }
    v189 = v145;
    v145 = v38;
    v188 = v193;
    while ( 1 )
    {
      if ( v203[6] >= v203[10] )
        goto LABEL_275;
      v184 = v203[6] + 1;
      if ( v203[6] + 1 >= v203[5] || v184 >= v203[3] && v203[3] < v203[8] )
      {
        v199 = sub_42E4F4((int)v203, v32);
        if ( v199 != 0 )
          goto LABEL_406;
      }
      v39 = v203[6]++;
      v196 = *(_BYTE *)(v203[1] + v39);
LABEL_132:
      v41 = *(_DWORD *)(v34 + 44);
      if ( v41 != 0 )
      {
        v42 = *(_DWORD *)(v41 + 4 * v196);
        goto LABEL_136;
      }
      v155 = *(_DWORD *)(v34 + 48);
      if ( v155 == 0 )
      {
        v170 = (_DWORD *)v203[17];
        v40 = (char *)malloc(0x2C00u);
        Block = (void **)v40;
        if ( v40 == nullptr )
          goto LABEL_250;
        v194 = v40 + 3072;
        *(_DWORD *)(v34 + 44) = 0;
        *(_DWORD *)(v34 + 48) = 0;
        memset(v200, 0, sizeof(v200));
        v18 = (int)v201;
        v151 = 0;
        for ( i = 0; ; ++i )
        {
          if ( i >= *(_DWORD *)(v34 + 8) )
          {
            if ( v151 <= 0 )
              goto LABEL_130;
            v164 = sub_454160((int *)v201, v151 + 1);
            v200[0] = v164;
            if ( v164 != 0 || v151 > 357913002 || (v174 = malloc(12 * v151)) == nullptr )
            {
LABEL_199:
              free((void *)v201[2]);
              for ( j = 0; j < v151; ++j )
              {
                v18 = (int)Block;
                free(Block[3 * j + 2]);
              }
              free(Block);
LABEL_250:
              v199 = 12;
              goto LABEL_251;
            }
            v183 = (char *)&v174[v151];
            v186 = &v183[4 * v151];
            memset(v202, 0, sizeof(v202));
            v195 = (int)(Block + 768);
            v191 = 0;
            for ( k = 0; k != v151; ++k )
            {
              v201[1] = 0;
              v63 = 3 * k;
              for ( m = 0; m < (int)Block[v63 + 1]; ++m )
              {
                v65 = *(_DWORD *)(v170[3] + 4 * *((_DWORD *)Block[v63 + 2] + m));
                if ( v65 != -1 )
                {
                  v200[0] = sub_4544DC(v201, v170[6] + 12 * v65);
                  if ( v200[0] != 0 )
                    goto LABEL_198;
                }
              }
              v67 = sub_453294(v200, v170, (int)v201, 0);
              v174[k] = v67;
              if ( v67 == nullptr && v200[0] != 0 )
                goto LABEL_198;
              if ( v67[52] >= 0 )
              {
                *(_DWORD *)&v183[4 * k] = v67;
                v18 = (int)&v183[4 * v151];
                *(_DWORD *)&v186[4 * k] = v174[k];
              }
              else
              {
                v68 = sub_453294(v200, v170, (int)v201, 1);
                *(_DWORD *)&v183[4 * k] = v68;
                if ( v68 == nullptr && v200[0] != 0 )
                  goto LABEL_198;
                if ( v68 != (char *)v174[k] && (int)v170[23] > 1 )
                  v191 = 1;
                v69 = sub_453294(v200, v170, (int)v201, 2);
                v18 = (int)&v183[4 * v151];
                *(_DWORD *)&v186[4 * k] = v69;
                if ( v69 == nullptr && v200[0] != 0 )
                  goto LABEL_198;
              }
              sub_418CA0((int)v202, v195);
              v195 += 32;
            }
            if ( v191 != 0 )
            {
              v70 = calloc(4u, 0x200u);
              *(_DWORD *)(v34 + 48) = v70;
              if ( v70 == nullptr )
              {
LABEL_198:
                free(v174);
                goto LABEL_199;
              }
              do
              {
                v78 = *(unsigned int *)((char *)v202 + v164);
                v157 = &v70[8 * v164];
                v79 = 1;
                while ( v78 != 0 )
                {
                  if ( (v78 & 1) != 0 )
                  {
                    v80 = (char *)Block + v164;
                    for ( n = 0; ; ++n )
                    {
                      v82 = v79 & *((_DWORD *)v80 + 768);
                      v80 += 32;
                      if ( v82 != 0 )
                        break;
                    }
                    *v157 = v174[n];
                    v18 = (int)&v174[v151];
                    v157[256] = *(_DWORD *)&v183[4 * n];
                  }
                  v79 *= 2;
                  v78 >>= 1;
                  ++v157;
                }
                v164 += 4;
              }
              while ( v164 != 32 );
            }
            else
            {
              v70 = calloc(4u, 0x100u);
              *(_DWORD *)(v34 + 44) = v70;
              if ( v70 == nullptr )
                goto LABEL_198;
              do
              {
                v71 = *(unsigned int *)((char *)v202 + v164);
                v156 = &v70[8 * v164];
                v72 = 1;
                while ( v71 != 0 )
                {
                  if ( (v71 & 1) != 0 )
                  {
                    v73 = (char *)Block + v164;
                    for ( ii = 0; ; ++ii )
                    {
                      v75 = v72 & *((_DWORD *)v73 + 768);
                      v73 += 32;
                      if ( v75 != 0 )
                        break;
                    }
                    if ( (v72 & *(_DWORD *)((char *)v170 + v164 + 96)) != 0 )
                      v76 = (char *)&v174[v151];
                    else
                      v76 = (char *)v174;
                    v77 = *(_DWORD *)&v76[4 * ii];
                    v18 = (int)v156;
                    *v156 = v77;
                  }
                  v72 *= 2;
                  v71 >>= 1;
                  ++v156;
                }
                v164 += 4;
              }
              while ( v164 != 32 );
            }
            if ( (BYTE1(v202[0]) & 4) != 0 )
            {
              v83 = 0;
              while ( (BYTE1(Block[8 * v83 + 768]) & 4) == 0 )
              {
                if ( ++v83 == v151 )
                  goto LABEL_247;
              }
              v84 = *(_DWORD *)&v186[4 * v83];
              v70[10] = v84;
              if ( v191 != 0 )
                v70[266] = v84;
            }
LABEL_247:
            free(v174);
            free((void *)v201[2]);
            v85 = Block;
            do
            {
              free(v85[2]);
              v85 += 3;
            }
            while ( &Block[3 * v151] != v85 );
            free(Block);
            goto LABEL_132;
          }
          v163 = *v170 + 8 * *(_DWORD *)(*(_DWORD *)(v34 + 12) + 4 * i);
          v173 = (void *)*(unsigned __int8 *)(v163 + 4);
          v43 = (*(_DWORD *)(v163 + 4) >> 8) & 0x3FF;
          if ( v173 == (void *)1 )
          {
            v200[*(_BYTE *)v163 >> 5] |= 1 << *(_BYTE *)v163;
          }
          else if ( v173 == (void *)3 )
          {
            sub_418CA0((int)v200, *(_DWORD *)v163);
          }
          else
          {
            if ( v173 != (void *)5 )
              continue;
            memset(v200, 255, sizeof(v200));
            v18 = (int)v201;
            v44 = v170[32];
            if ( (v44 & 0x40) == 0 )
              v200[0] = -1025;
            if ( (v44 & 0x80u) != 0 )
              v200[0] &= ~1u;
          }
          if ( v43 == 0 )
            goto LABEL_167;
          if ( (v43 & 0x20) != 0 )
          {
            v45 = v200[0];
            memset(v200, 0, sizeof(v200));
            v18 = (int)v201;
            if ( (v45 & 0x400) == 0 )
              continue;
            v200[0] = 1024;
          }
          if ( (v43 & 0x80u) != 0 )
            goto LABEL_185;
          if ( (v43 & 4) == 0 )
            goto LABEL_166;
          if ( v173 == (void *)1 && (*(_BYTE *)(v163 + 6) & 0x10) == 0 )
            goto LABEL_185;
          v46 = 0;
          for ( jj = 0; jj != 8; ++jj )
          {
            v18 = (int)v170;
            v48 = v170[jj + 24] & v200[jj];
            v200[jj] = v48;
            v46 |= v48;
          }
          if ( v46 != 0 )
          {
LABEL_166:
            if ( (v43 & 8) == 0 )
              goto LABEL_167;
            if ( v173 == (void *)1 && (*(_BYTE *)(v163 + 6) & 0x10) != 0 )
              goto LABEL_185;
            v49 = 0;
            for ( kk = 0; kk != 8; ++kk )
            {
              v51 = v200[kk] & ~v170[kk + 24];
              v200[kk] = v51;
              v49 |= v51;
            }
            if ( v49 != 0 )
            {
LABEL_167:
              v52 = (size_t *)(Block + 768);
              for ( mm = 0; mm < v151; ++mm )
              {
                if ( v173 != (void *)1 || ((v52[*(_BYTE *)v163 >> 5] >> *(_BYTE *)v163) & 1) != 0 )
                {
                  v53 = 0;
                  for ( nn = 0; nn != 8; ++nn )
                  {
                    v55 = v52[nn] & v200[nn];
                    v201[nn] = v55;
                    v53 |= v55;
                  }
                  if ( v53 != 0 )
                  {
                    v190 = 0;
                    v56 = 0;
                    for ( i1 = 0; i1 != 8; ++i1 )
                    {
                      v18 = v200[i1];
                      v58 = v52[i1] & ~v18;
                      v202[i1] = (void *)v58;
                      v56 |= v58;
                      v59 = v18 & ~v52[i1];
                      v200[i1] = v59;
                      v190 |= v59;
                    }
                    v197 = (size_t *)&Block[3 * mm];
                    if ( v56 != 0 )
                    {
                      qmemcpy(&v194[32 * v151], v202, 32);
                      qmemcpy(v52, v201, 32);
                      v18 = (int)(v52 + 8);
                      if ( sub_454254((int *)&Block[3 * v151], (int)v197) != 0 )
                        goto LABEL_187;
                      ++v151;
                    }
                    if ( sub_4543C4(v197, *(_DWORD *)(*(_DWORD *)(v34 + 12) + 4 * i)) < 0 )
                      goto LABEL_187;
                    if ( v190 == 0 )
                      break;
                  }
                }
                v52 += 8;
              }
              if ( mm == v151 )
              {
                v60 = &v194[32 * v151];
                qmemcpy(v60, v200, 32);
                v18 = (int)(v60 + 32);
                if ( sub_454210(&Block[3 * v151], *(_DWORD *)(*(_DWORD *)(v34 + 12) + 4 * i)) != 0 )
                {
LABEL_187:
                  for ( i2 = Block; &Block[3 * v151] != i2; i2 += 3 )
                    free(i2[2]);
                  v151 = -1;
LABEL_130:
                  free(Block);
                  if ( v151 == 0 )
                  {
                    *(_DWORD *)(v34 + 44) = calloc(4u, 0x100u);
                    goto LABEL_132;
                  }
                  goto LABEL_250;
                }
                ++v151;
LABEL_185:
                memset(v200, 0, sizeof(v200));
                v18 = (int)v201;
                continue;
              }
            }
          }
        }
      }
      if ( (sub_4564EC(v203[18], v203[6] - 1) & 1) != 0 )
      {
        v42 = *(_DWORD *)(v155 + 4 * v196 + 1024);
      }
      else
      {
        v18 = v155;
        v42 = *(_DWORD *)(v155 + 4 * v196);
      }
LABEL_136:
      v155 = v42;
LABEL_251:
      if ( v203[21] != 0 )
        v155 = sub_442BE8(&v199, v203, v155);
      if ( v155 == 0 )
        break;
LABEL_266:
      if ( v34 != v155 || (v90 = v181, v181 = true, !v90) )
      {
        v184 = v189;
        v181 = false;
      }
      v91 = *(_BYTE *)(v155 + 52);
      if ( (v91 & 0x10) != 0 )
      {
        v92 = v203[6];
        if ( v91 >= 0 || sub_41C274((int)v203, v155, v203[6]) != 0 )
        {
          v145 = v92;
          if ( !v176 )
            goto LABEL_277;
          LOBYTE(v180) = v176;
          v188 = nullptr;
        }
      }
      v189 = v184;
      v34 = v155;
    }
    if ( v199 != 0 )
      goto LABEL_406;
    if ( v203[21] != 0 && (!v176 & (unsigned __int8)v180) == 0 )
    {
      while ( 1 )
      {
        v86 = v203[6];
        v87 = 0;
        do
        {
          v88 = v86++;
          if ( v203[22] < v86 )
          {
            if ( v87 != 0 )
              v203[6] = v88;
            goto LABEL_275;
          }
          v87 = 1;
        }
        while ( *(_DWORD *)(v203[21] + 4 * v86) == 0 );
        v203[6] = v86;
        v89 = sub_442BE8(&v199, v203, 0);
        v155 = v89;
        if ( v199 != 0 )
          break;
        if ( v89 != 0 )
          goto LABEL_266;
      }
      if ( v89 != 0 )
        goto LABEL_266;
    }
LABEL_275:
    if ( v188 != nullptr )
      *v188 += v189;
LABEL_277:
    if ( v145 == -1 )
    {
LABEL_278:
      sub_4423D0(v203);
      v198 += v192;
      continue;
    }
    break;
  }
  if ( v145 == -2 )
    goto LABEL_406;
  v203[19] = v145;
  v93 = ((unsigned int)v167 > 1) & ((*(_BYTE *)(a1 + 28) >> 4) ^ 1);
  if ( v93 == 0 && v147[19] == 0
    || (v203[20] = sub_41C274((int)v203, *(_DWORD *)(v203[21] + 4 * v145), v145), v93 == 0)
    || (v147[22] & 1) == 0 )
  {
    if ( v147[19] == 0 )
      goto LABEL_305;
  }
  if ( v145 > 0x3FFFFFFE )
  {
LABEL_406:
    v154 = 12;
    goto LABEL_400;
  }
  v152 = v203[17];
  Blocka = (void *)v203[20];
  v94 = malloc(4 * v145 + 4);
  v95 = nullptr;
  v18 = 12;
  if ( v94 != nullptr )
  {
    if ( *(_DWORD *)(v152 + 76) != 0 )
    {
      v95 = malloc(4 * v145 + 4);
      if ( v95 != nullptr )
      {
LABEL_289:
        memset(v95, 0, 4 * (v145 + 1));
        v202[0] = v94;
        v202[1] = v95;
        v202[2] = Blocka;
        v202[3] = (void *)v145;
        memset(&v202[4], 0, 0xCu);
        v18 = sub_46094C();
        free(v202[6]);
        if ( v18 == 0 )
        {
          if ( *v94 == 0 && *v95 == 0 )
          {
            while ( --v145 != -1 )
            {
              v96 = *(_DWORD *)(v203[21] + 4 * v145);
              if ( v96 != 0 && (*(_BYTE *)(v96 + 52) & 0x10) != 0 )
              {
                Blocka = (void *)sub_41C274((int)v203, v96, v145);
                goto LABEL_289;
              }
            }
            v18 = 1;
            goto LABEL_302;
          }
          v18 = sub_442B70(v152, (int)v94, (int)v95, v145 + 1);
          free(v95);
          v95 = nullptr;
          if ( v18 == 0 )
          {
LABEL_300:
            free((void *)v203[21]);
            v203[21] = v94;
            v203[20] = Blocka;
            v203[19] = v145;
            v18 = 0;
            v95 = nullptr;
            v94 = nullptr;
          }
        }
      }
    }
    else
    {
      v202[0] = v94;
      v202[1] = nullptr;
      v202[2] = Blocka;
      v202[3] = (void *)v145;
      memset(&v202[4], 0, 0xCu);
      v18 = sub_46094C();
      free(v202[6]);
      if ( v18 == 0 )
      {
        v95 = (_DWORD *)*v94;
        v18 = 1;
        if ( *v94 != 0 )
          goto LABEL_300;
      }
    }
  }
LABEL_302:
  free(v94);
  free(v95);
  if ( v18 != 0 )
  {
    if ( v18 != 1 )
    {
      v154 = v18;
      goto LABEL_400;
    }
    goto LABEL_278;
  }
LABEL_305:
  v97 = 1;
  if ( v167 == 0 )
    goto LABEL_400;
  while ( v97 != v167 )
  {
    a8[2 * v97 + 1] = -1;
    a8[2 * v97++] = -1;
  }
  *a8 = 0;
  a8[1] = v203[19];
  if ( (*(_BYTE *)(a1 + 28) & 0x10) != 0 || v167 == 1 )
  {
LABEL_385:
    v134 = v198;
    for ( i3 = 0; i3 != v167; ++i3 )
    {
      v136 = a8[2 * i3];
      if ( v136 != -1 )
      {
        a8[2 * i3] = v134 + v136;
        a8[2 * i3 + 1] += v134;
      }
    }
    v137 = &a8[2 * v167];
    for ( i4 = 0; i4 < v187; ++i4 )
    {
      *v137 = -1;
      v137[1] = -1;
      v137 += 2;
    }
    v139 = v147[33];
    if ( v139 != 0 )
    {
      for ( i5 = 0; ; ++i5 )
      {
        v141 = i5 + 1;
        if ( i5 + 1 == v167 )
          break;
        v142 = *(_DWORD *)(v139 + 4 * v141 - 4);
        if ( v142 != i5 )
        {
          a8[2 * v141] = a8[2 * v142 + 2];
          a8[2 * v141 + 1] = a8[2 * *(_DWORD *)(v139 + 4 * v141 - 4) + 3];
        }
      }
    }
    goto LABEL_400;
  }
  v98 = false;
  if ( (v147[22] & 1) != 0 )
    v98 = v147[19] > 0;
  v153 = *(_DWORD **)a1;
  v202[0] = nullptr;
  v202[1] = (void *)2;
  v202[2] = nullptr;
  if ( v98 )
  {
    v202[2] = malloc(0x30u);
    if ( v202[2] == nullptr )
      goto LABEL_406;
    v99 = v202;
  }
  else
  {
    v99 = nullptr;
  }
  v100 = v153[18];
  memset(v201, 0, 0xCu);
  Blockb = (void *)(8 * v167);
  v146 = malloc(8 * v167);
  if ( v146 == nullptr )
  {
LABEL_405:
    sub_431D00((int)v99);
    goto LABEL_406;
  }
  qmemcpy(v146, a8, (unsigned int)Blockb);
  v200[0] = 0;
  while ( 2 )
  {
    v106 = v200[0];
    if ( v200[0] <= a8[1] )
    {
      v107 = *v153 + 8 * v100;
      v108 = *(unsigned __int8 *)(v107 + 4);
      if ( v108 == 8 )
      {
        v109 = *(_DWORD *)v107 + 1;
        if ( v167 > v109 )
        {
          v115 = &a8[2 * v109];
          *v115 = v200[0];
          v115[1] = -1;
        }
      }
      else if ( v108 == 9 )
      {
        v116 = *(_DWORD *)v107 + 1;
        if ( v167 > v116 )
        {
          v117 = &a8[2 * v116];
          if ( v200[0] <= *v117 )
          {
            if ( (*(_BYTE *)(v107 + 6) & 8) == 0 || *((_DWORD *)v146 + 2 * v116) == -1 )
            {
              v117[1] = v200[0];
              goto LABEL_331;
            }
            v118 = a8;
            v119 = v146;
          }
          else
          {
            v117[1] = v200[0];
            v118 = v146;
            v119 = a8;
          }
          qmemcpy(v118, v119, (unsigned int)Blockb);
        }
      }
LABEL_331:
      if ( v106 == a8[1] && v100 == v203[20] )
      {
        if ( v99 == nullptr )
        {
          free((void *)v201[2]);
          free(v146);
          goto LABEL_385;
        }
        for ( i6 = 0; v167 != i6; ++i6 )
        {
          if ( (int)a8[2 * i6] >= 0 && a8[2 * i6 + 1] == -1 )
          {
            v100 = sub_44D840((int *)v99, v200, v167, a8, (void **)v201);
            goto LABEL_332;
          }
        }
        break;
      }
LABEL_332:
      v110 = (_DWORD *)v203[17];
      v160 = v100;
      v111 = 8 * v100;
      v112 = 8 * v100 + *(_DWORD *)v203[17];
      v113 = *(_BYTE *)(v112 + 4);
      if ( (v113 & 8) != 0 )
      {
        v158 = *(_DWORD *)(v203[21] + 4 * v200[0]);
        v101 = *(_DWORD *)(v203[17] + 20);
        if ( sub_4543C4(v201, v100) < 0 )
          goto LABEL_404;
        v102 = v101 + 12 * v100;
        v165 = *(_DWORD *)(v102 + 4);
        v100 = -1;
        v103 = 0;
        v159 = v158 + 4;
        while ( v103 < v165 )
        {
          v169 = v102;
          v104 = *(_DWORD *)(*(_DWORD *)(v102 + 8) + 4 * v103);
          v105 = sub_4541D4(v159, v104);
          v102 = v169;
          if ( v105 != 0 )
          {
            if ( v100 != -1 )
            {
              if ( sub_4541D4((int)v201, v100) != 0 )
              {
                v100 = v104;
                break;
              }
              if ( v99 == nullptr )
                break;
              v121 = v200[0];
              v122 = (int)*v99;
              v123 = (int)*v99 + 1;
              *v99 = (void *)v123;
              if ( (void *)v123 == v99[1] )
              {
                v161 = v122;
                v124 = realloc(v99[2], 48 * v123);
                if ( v124 == nullptr )
                  goto LABEL_404;
                v99[1] = (void *)(2 * (_DWORD)v99[1]);
                v99[2] = v124;
                v122 = v161;
              }
              v125 = (int *)((char *)v99[2] + 24 * v122);
              *v125 = v121;
              v125[1] = v104;
              v162 = v125;
              v126 = malloc((size_t)Blockb);
              v162[2] = (int)v126;
              if ( v126 == nullptr )
                goto LABEL_404;
              qmemcpy(v126, a8, (unsigned int)Blockb);
              if ( sub_454254(v162 + 3, (int)v201) != 0 )
                goto LABEL_404;
              break;
            }
            v100 = v104;
          }
          ++v103;
        }
      }
      else
      {
        if ( v113 != 4 )
          goto LABEL_334;
        v127 = &a8[2 * *(_DWORD *)v112 + 2];
        v128 = v127[1];
        v129 = *v127;
        v130 = v128 - v129;
        if ( v99 == nullptr )
        {
          if ( v130 == 0 )
            goto LABEL_371;
LABEL_374:
          v131 = v200[0] + v130;
          goto LABEL_376;
        }
        if ( v128 == -1 || v129 == -1 )
          goto LABEL_407;
        if ( v130 != 0 )
        {
          v166 = v128 - v129;
          if ( memcmp((const void *)(v203[1] + v129), (const void *)(v203[1] + v200[0]), v130) == 0 )
          {
            v130 = v166;
            goto LABEL_374;
          }
LABEL_407:
          v100 = sub_44D840((int *)v99, v200, v167, a8, (void **)v201);
          continue;
        }
LABEL_371:
        if ( sub_4543C4(v201, v100) < 0 )
          goto LABEL_404;
        v100 = **(_DWORD **)(v110[5] + 12 * v100 + 8);
        if ( sub_4541D4(*(_DWORD *)(v203[21] + 4 * v200[0]) + 4, v100) == 0 )
        {
LABEL_334:
          v114 = v200[0];
          if ( !sub_41C314(v203, *v110 + v111, v200[0]) )
          {
LABEL_335:
            if ( v99 == nullptr )
            {
              free((void *)v201[2]);
              free(v146);
              goto LABEL_337;
            }
            goto LABEL_407;
          }
          v131 = v114 + 1;
LABEL_376:
          v100 = *(_DWORD *)(v110[3] + 4 * v160);
          v200[0] = v131;
          if ( v99 != nullptr )
          {
            if ( v131 > v203[19] )
              goto LABEL_407;
            v132 = *(_DWORD *)(v203[21] + 4 * v131);
            if ( v132 == 0 || sub_4541D4(v132 + 4, v100) == 0 )
              goto LABEL_407;
          }
          v201[1] = 0;
        }
      }
      if ( v100 >= 0 )
        continue;
      if ( v100 == -2 )
      {
LABEL_404:
        free((void *)v201[2]);
        free(v146);
        goto LABEL_405;
      }
      goto LABEL_335;
    }
    break;
  }
  free((void *)v201[2]);
  free(v146);
  v133 = sub_431D00((int)v99);
  if ( v133 == 0 )
    goto LABEL_385;
  v154 = v133;
LABEL_400:
  free((void *)v203[21]);
  if ( v147[19] != 0 )
  {
    sub_4423D0(v203);
    free((void *)v203[29]);
    free((void *)v203[25]);
  }
  if ( HIBYTE(v203[14]) != 0 )
    free((void *)v203[1]);
  return v154;
}

