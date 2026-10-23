// gettime.exe @ 0x423a4f size=5607

int __cdecl __acrt_fltout(long double a1, int a2, int a3, int *a4, char *a5, rsize_t SizeInBytes)
{
  int v6; // ebx
  int v7; // esi
  int v8; // eax
  int *v9; // ecx
  errno_t v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  double v17; // st7
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // ecx
  unsigned int v21; // edx
  bool v22; // zf
  int v23; // eax
  int *v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // edi
  _DWORD *v28; // ecx
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edx
  int v34; // eax
  int *v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // edi
  _DWORD *v39; // ecx
  unsigned int v40; // eax
  int v41; // eax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  int v44; // edx
  int v45; // eax
  int v46; // eax
  unsigned int v47; // esi
  unsigned int v48; // edx
  unsigned int v49; // ebx
  unsigned int v50; // edi
  int v51; // eax
  unsigned int v52; // ecx
  char v53; // bl
  unsigned int v54; // edi
  int v55; // eax
  int v56; // eax
  unsigned int v57; // esi
  unsigned int v58; // edx
  unsigned int v59; // ebx
  unsigned int v60; // edi
  int v61; // eax
  unsigned int v62; // ecx
  char v63; // bl
  unsigned int v64; // eax
  int v65; // ecx
  int v66; // esi
  int v67; // edi
  unsigned int v68; // edx
  int v69; // edi
  char v70; // al
  unsigned int v71; // ecx
  int k; // esi
  unsigned __int64 v73; // rax
  int v74; // kr08_4
  unsigned __int64 v75; // rax
  int v76; // edi
  unsigned int v77; // ecx
  int m; // edi
  unsigned __int64 v79; // rax
  int v80; // kr0C_4
  unsigned __int64 v81; // rax
  int *v82; // esi
  unsigned int v83; // ecx
  int *v84; // eax
  int v85; // edi
  unsigned int v86; // eax
  int v87; // esi
  unsigned int v88; // edx
  unsigned __int64 v89; // rax
  bool v90; // cf
  unsigned int v91; // ecx
  _DWORD *v92; // eax
  _DWORD *v93; // ecx
  char *v94; // eax
  int v95; // eax
  unsigned int v96; // ecx
  int v97; // edi
  unsigned __int64 v98; // rax
  unsigned int v99; // kr14_4
  unsigned int v100; // kr18_4
  unsigned __int64 v101; // kr40_8
  unsigned int v102; // eax
  int v103; // ecx
  int v104; // esi
  int v105; // edi
  unsigned int v106; // edx
  int v107; // edi
  char v108; // al
  unsigned int v109; // ecx
  int i; // esi
  unsigned __int64 v111; // rax
  int v112; // kr1C_4
  unsigned __int64 v113; // rax
  int v114; // edi
  unsigned int v115; // ecx
  int j; // edi
  unsigned __int64 v117; // rax
  int v118; // kr20_4
  unsigned __int64 v119; // rax
  int *p_Source; // esi
  unsigned int v121; // ecx
  int *v122; // eax
  int v123; // edi
  unsigned int v124; // eax
  int v125; // esi
  unsigned int v126; // edx
  unsigned __int64 v127; // rax
  unsigned int v128; // ecx
  _DWORD *v129; // eax
  _DWORD *v130; // ecx
  char *v131; // eax
  int v132; // eax
  unsigned int v133; // ecx
  int v134; // edi
  unsigned __int64 v135; // rax
  unsigned int v136; // kr28_4
  unsigned int v137; // kr2C_4
  unsigned __int64 v138; // kr48_8
  unsigned int v139; // ecx
  char *v140; // edi
  int v141; // edi
  __int64 v142; // rax
  int v143; // kr30_4
  unsigned int v144; // kr34_4
  unsigned __int64 v145; // rax
  int v146; // eax
  char *v147; // ecx
  unsigned int v148; // eax
  unsigned int v149; // edi
  int v150; // ecx
  __int64 v151; // rax
  int v152; // eax
  unsigned int v153; // edx
  rsize_t v154; // eax
  char v155; // dl
  unsigned int v156; // edi
  int v157; // ecx
  __int64 v158; // rax
  int v159; // kr3C_4
  unsigned __int64 v160; // rax
  char *v161; // edi
  unsigned int v162; // eax
  unsigned int v163; // ecx
  int v164; // eax
  char v165; // dl
  unsigned int v166; // eax
  _BYTE v168[460]; // [esp+18h] [ebp-970h] BYREF
  unsigned int CurrentState; // [esp+1E4h] [ebp-7A4h] BYREF
  fenv_t Env; // [esp+1E8h] [ebp-7A0h] BYREF
  char v171; // [esp+1F0h] [ebp-798h]
  unsigned int NewValue; // [esp+1F4h] [ebp-794h] BYREF
  unsigned int NewValue_4; // [esp+1F8h] [ebp-790h]
  int *v174; // [esp+1FCh] [ebp-78Ch]
  unsigned int v175; // [esp+200h] [ebp-788h]
  unsigned int v176; // [esp+204h] [ebp-784h]
  unsigned int v177; // [esp+208h] [ebp-780h]
  unsigned int v178[2]; // [esp+20Ch] [ebp-77Ch] BYREF
  unsigned int v179; // [esp+218h] [ebp-770h]
  int v180; // [esp+21Ch] [ebp-76Ch]
  unsigned int v181; // [esp+220h] [ebp-768h]
  int *v182; // [esp+224h] [ebp-764h]
  char *v183; // [esp+228h] [ebp-760h]
  char v184; // [esp+22Fh] [ebp-759h]
  unsigned int v185; // [esp+230h] [ebp-758h]
  unsigned int v186; // [esp+234h] [ebp-754h]
  unsigned int v187; // [esp+238h] [ebp-750h]
  unsigned int v188; // [esp+23Ch] [ebp-74Ch]
  char *v189; // [esp+240h] [ebp-748h]
  unsigned int v190; // [esp+244h] [ebp-744h]
  _DWORD v191[115]; // [esp+248h] [ebp-740h] BYREF
  unsigned int v192; // [esp+414h] [ebp-574h]
  int Source; // [esp+418h] [ebp-570h] BYREF
  int v194; // [esp+41Ch] [ebp-56Ch]
  unsigned int v195; // [esp+5E4h] [ebp-3A4h] BYREF
  _DWORD v196[115]; // [esp+5E8h] [ebp-3A0h] BYREF
  unsigned int v197; // [esp+7B4h] [ebp-1D4h] BYREF
  _DWORD Destination[115]; // [esp+7B8h] [ebp-1D0h] BYREF

  v174 = a4;
  v183 = a5;
  fegetenv(&Env);
  v6 = 1;
  if ( (Env._Fe_ctl & 0x1F) == 0x1F )
  {
    v171 = 0;
  }
  else
  {
    feholdexcept(&Env);
    v171 = 1;
  }
  v7 = HIDWORD(a1);
  if ( a1 < 0.0 )
    v8 = 45;
  else
    v8 = 32;
  v9 = v174;
  *v174 = v8;
  v9[2] = (int)v183;
  _controlfp_s(&CurrentState, 0, 0);
  if ( (v7 & 0x7FF00000) == 0 && ((v7 & 0xFFFFF | LODWORD(a1)) == 0 || (CurrentState & 0x1000000) != 0) )
  {
    v174[1] = 0;
    v10 = strcpy_s(v183, SizeInBytes, "0");
    goto LABEL_19;
  }
  v11 = __acrt_fp_classify((int *)&a1);
  if ( v11 == 0 )
    goto LABEL_23;
  v174[1] = 1;
  v12 = v11 - 1;
  if ( v12 == 0 )
  {
    if ( strcpy_s(v183, SizeInBytes, "1#INF") == 0 )
    {
      v6 = 0;
      goto LABEL_297;
    }
    goto LABEL_300;
  }
  v13 = v12 - 1;
  if ( v13 == 0 )
  {
    v10 = strcpy_s(v183, SizeInBytes, "1#QNAN");
LABEL_19:
    if ( v10 == 0 )
      goto LABEL_297;
LABEL_300:
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  v14 = v13 - 1;
  if ( v14 == 0 )
  {
    v10 = strcpy_s(v183, SizeInBytes, "1#SNAN");
    goto LABEL_19;
  }
  if ( v14 == 1 )
  {
    v10 = strcpy_s(v183, SizeInBytes, a1In);
    goto LABEL_19;
  }
LABEL_23:
  HIDWORD(a1) = v7 & 0x7FFFFFFF;
  NewValue_4 = 524319;
  _controlfp_s(&NewValue, 0, 0);
  _controlfp_s(&v178[1], 0x8001Fu, NewValue_4);
  v179 = 0;
  *(double *)v178 = a1;
  v175 = a2 + 1;
  if ( ((v178[1] >> 20) & 0x7FF) != 0 )
  {
    v15 = 0x10000000000000LL;
    v187 = 0;
  }
  else
  {
    v15 = 0;
    v187 = 1;
  }
  v179 = v15 + v178[0];
  v16 = v15 + __PAIR64__(v178[1] & 0xFFFFF, v178[0]);
  v188 = ((v178[1] >> 20) & 0x7FF) + v187;
  v17 = ceil(log10(a1));
  v18 = sub_427DA0(v17);
  v176 = v18;
  if ( v18 == 0x7FFFFFFF || v18 == 0x80000000 )
    v176 = 0;
  Destination[0] = v179;
  Destination[1] = HIDWORD(v16);
  v19 = (HIDWORD(v16) != 0) + 1;
  v187 = v19;
  v197 = v19;
  if ( v188 < 0x433 )
  {
    if ( v188 != 53 )
    {
      Source = 0;
      v194 = 0x100000;
      v192 = 2;
      if ( HIDWORD(v16) != 0 )
      {
        v44 = 0;
        while ( *(int *)((char *)&Source + v44 * 4) == Destination[v44] )
        {
          if ( ++v44 == 2 )
          {
            v22 = !_BitScanReverse((unsigned int *)&v45, HIDWORD(v16));
            v178[1] = 0;
            if ( v22 )
              v46 = 0;
            else
              v46 = v45 + 1;
            v47 = v19 + ((unsigned int)(32 - v46) < 2);
            if ( v47 <= 0x73 )
            {
              v48 = v47 - 1;
              if ( v47 != 0 )
              {
                v49 = v47 - 2;
                while ( 1 )
                {
                  v50 = v48;
                  v51 = v48 >= v19 ? 0 : Destination[v48];
                  v52 = v49-- >= v19 ? 0 : Destination[--v48];
                  Destination[v50] = (4 * v51) | (v52 >> 30);
                  if ( v48 == -1 )
                    break;
                  v19 = v197;
                }
              }
              v197 = v47;
            }
            else
            {
              v192 = 0;
              v197 = 0;
              memcpy_s(Destination, 0x1CCu, &Source, 0);
            }
            v53 = 53 - v188;
            v54 = (1077 - v188) >> 5;
            memset(&Source, 0, 4 * v54);
            *(&Source + v54) = 1 << (v53 & 0x1F);
            goto LABEL_116;
          }
        }
      }
    }
    v178[1] = 0;
    v22 = !_BitScanReverse((unsigned int *)&v55, Destination[HIDWORD(v16) != 0]);
    if ( v22 )
      v56 = 0;
    else
      v56 = v55 + 1;
    v57 = v19 + (v56 == 32);
    if ( v57 <= 0x73 )
    {
      v58 = v57 - 1;
      if ( v57 != 0 )
      {
        v59 = v57 - 2;
        while ( 1 )
        {
          v60 = v58;
          v61 = v58 >= v19 ? 0 : Destination[v58];
          v62 = v59-- >= v19 ? 0 : Destination[--v58];
          Destination[v60] = (2 * v61) | (v62 >> 31);
          if ( v58 == -1 )
            break;
          v19 = v197;
        }
      }
      v197 = v57;
    }
    else
    {
      v192 = 0;
      v197 = 0;
      memcpy_s(Destination, 0x1CCu, &Source, 0);
    }
    v63 = 52 - v188;
    v54 = (1076 - v188) >> 5;
    memset(&Source, 0, 4 * v54);
    *(&Source + v54) = 1 << (v63 & 0x1F);
LABEL_116:
    v192 = v54 + 1;
    v195 = v54 + 1;
    memcpy_s(v196, 0x1CCu, &Source, 4 * (v54 + 1));
    v6 = 1;
  }
  else
  {
    Source = 0;
    v194 = 0x100000;
    v192 = 2;
    if ( HIDWORD(v16) != 0 )
    {
      v20 = 0;
      while ( *(int *)((char *)&Source + v20 * 4) == Destination[v20] )
      {
        if ( ++v20 == 2 )
        {
          v182 = nullptr;
          v185 = 1;
          v186 = 31;
          v21 = v187;
          v178[1] = 0;
          v180 = 0x7FFFFFFF;
          v179 = 0x80000000;
          v22 = !_BitScanReverse((unsigned int *)&v23, Destination[v187 - 1]);
          if ( v22 )
            v187 = 0;
          else
            v187 = v23 + 1;
          v24 = v182;
          if ( (unsigned int)v182 + v21 > 0x73
            || (v25 = (unsigned int)v182 + v21 + (32 - v187 < v185), v189 = (char *)v25, v25 > 0x73) )
          {
            v192 = 0;
            v197 = 0;
            memcpy_s(Destination, 0x1CCu, &Source, 0);
          }
          else
          {
            v26 = v25 - 1;
            v177 = (unsigned int)v182 - 1;
            v188 = v26;
            if ( (int *)v26 != (int *)((char *)v182 - 1) )
            {
              v27 = v26 - (_DWORD)v182;
              v28 = &Destination[v26 - (_DWORD)v182 - 1];
              v181 = (unsigned int)v28;
              while ( 1 )
              {
                v29 = v27 >= v21 ? 0 : v28[1];
                v187 = v29;
                v30 = v27 - 1 >= v21 ? 0 : *v28;
                v31 = v188;
                Destination[v188] = ((v180 & v187) << v185) | ((v179 & v30) >> v186);
                v32 = v31 - 1;
                v28 = (_DWORD *)(v181 - 4);
                v188 = v32;
                --v27;
                v181 -= 4;
                if ( v32 == v177 )
                  break;
                v21 = v197;
              }
              v24 = v182;
            }
            if ( v24 != nullptr )
              memset(Destination, 0, 4 * (_DWORD)v24);
            v197 = (unsigned int)v189;
          }
          Source = 4;
          goto LABEL_55;
        }
      }
    }
    v182 = nullptr;
    v185 = 1;
    v186 = 31;
    v33 = v187;
    v178[1] = 0;
    v180 = 0x7FFFFFFF;
    v179 = 0x80000000;
    v22 = !_BitScanReverse((unsigned int *)&v34, Destination[v187 - 1]);
    if ( v22 )
      v187 = 0;
    else
      v187 = v34 + 1;
    v35 = v182;
    if ( (unsigned int)v182 + v33 > 0x73
      || (v36 = (unsigned int)v182 + v33 + (32 - v187 < v185), v189 = (char *)v36, v36 > 0x73) )
    {
      v192 = 0;
      v197 = 0;
      memcpy_s(Destination, 0x1CCu, &Source, 0);
    }
    else
    {
      v37 = v36 - 1;
      v177 = (unsigned int)v182 - 1;
      v188 = v37;
      if ( (int *)v37 != (int *)((char *)v182 - 1) )
      {
        v38 = v37 - (_DWORD)v182;
        v39 = &Destination[v37 - (_DWORD)v182 - 1];
        v181 = (unsigned int)v39;
        while ( 1 )
        {
          v40 = v38 >= v33 ? 0 : v39[1];
          v187 = v40;
          v41 = v38 - 1 >= v33 ? 0 : *v39;
          v42 = v188;
          Destination[v188] = ((v180 & v187) << v185) | ((v179 & v41) >> v186);
          v43 = v42 - 1;
          v39 = (_DWORD *)(v181 - 4);
          v188 = v43;
          --v38;
          v181 -= 4;
          if ( v43 == v177 )
            break;
          v33 = v197;
        }
        v35 = v182;
      }
      if ( v35 != nullptr )
        memset(Destination, 0, 4 * (_DWORD)v35);
      v197 = (unsigned int)v189;
    }
    Source = 2;
LABEL_55:
    v194 = 0;
    v195 = 1;
    v192 = 1;
    memcpy_s(v196, 0x1CCu, &Source, 4u);
  }
  v187 = 10;
  if ( (v176 & 0x80000000) != 0 )
  {
    v178[1] = -v176;
    v102 = -v176 / 0xA;
    v179 = v102;
    if ( v102 != 0 )
    {
      while ( 1 )
      {
        if ( v102 > 0x26 )
          v102 = 38;
        v103 = (unsigned __int8)byte_42C43E[4 * v102];
        v104 = (unsigned __int8)byte_42C43F[4 * v102];
        v185 = v102;
        v105 = 4 * v103;
        v192 = v103 + v104;
        memset(&Source, 0, 4 * v103);
        memmove((char *)&Source + v105, (char *)&unk_42BB38 + 4 * (unsigned __int16)word_42C43C[2 * v185], 4 * v104);
        v106 = v192;
        v180 = v192;
        if ( v192 <= 1 )
        {
          v107 = Source;
          if ( Source != 0 )
          {
            if ( Source != 1 && v197 != 0 )
            {
              v109 = 0;
              v186 = v197;
              for ( i = 0; i != v186; ++i )
              {
                v111 = (unsigned int)Destination[i] * (unsigned __int64)(unsigned int)v107;
                v112 = Destination[i] * v107;
                Destination[i] = v109 + v112;
                v113 = __PAIR64__(HIDWORD(v111), v109) + (unsigned int)v112;
                v109 = HIDWORD(v113);
              }
              if ( HIDWORD(v113) != 0 )
              {
                if ( v197 >= 0x73 )
                  goto LABEL_199;
                Destination[v197++] = HIDWORD(v113);
              }
            }
          }
          else
          {
            v197 = 0;
            memcpy_s(Destination, 0x1CCu, v168, 0);
          }
          v108 = 1;
          goto LABEL_235;
        }
        if ( v197 > 1 )
        {
          p_Source = &Source;
          if ( v192 >= v197 )
            p_Source = Destination;
          v182 = p_Source;
          if ( v192 >= v197 )
          {
            v121 = v197;
            v122 = &Source;
            v177 = v197;
          }
          else
          {
            v121 = v192;
            v177 = v192;
            v106 = v197;
            v122 = Destination;
            v180 = v197;
          }
          v186 = (unsigned int)v122;
          v123 = 0;
          v124 = 0;
          v190 = 0;
          while ( 1 )
          {
            if ( p_Source[v123] != 0 )
            {
              v189 = nullptr;
              v125 = v123;
              v188 = 0;
              if ( v106 != 0 )
              {
                do
                {
                  if ( v125 == 115 )
                    break;
                  v126 = v188;
                  if ( v125 == v124 )
                  {
                    v191[v125] = 0;
                    v190 = v123 + v126 + 1;
                  }
                  v127 = (unsigned __int64)&v189[(unsigned int)v182[v123]
                                               * (unsigned __int64)*(unsigned int *)(v186 + 4 * v126)];
                  v90 = __CFADD__((_DWORD)v127, v191[v125]);
                  v191[v125] += v127;
                  v124 = v190;
                  v189 = (char *)(v90 + HIDWORD(v127));
                  v106 = v180;
                  ++v125;
                  ++v188;
                }
                while ( v188 != v180 );
                if ( v189 != nullptr )
                {
                  v181 = (unsigned int)&v191[v125];
                  while ( v125 != 115 )
                  {
                    v128 = v125 + 1;
                    v22 = v125 == v124;
                    v129 = (_DWORD *)v181;
                    ++v125;
                    if ( v22 )
                    {
                      *(_DWORD *)v181 = 0;
                      v190 = v128;
                    }
                    v130 = v129;
                    v181 = (unsigned int)(v129 + 1);
                    v131 = v189;
                    v189 = nullptr;
                    v90 = __CFADD__(v131, *v130);
                    *v130 += v131;
                    v124 = v190;
                    v189 += v90;
                    if ( v189 == nullptr )
                      goto LABEL_230;
                  }
LABEL_199:
                  v197 = 0;
                  memcpy_s(Destination, 0x1CCu, v168, 0);
                  v108 = 0;
                  goto LABEL_235;
                }
              }
LABEL_230:
              if ( v125 == 115 )
                goto LABEL_199;
              v121 = v177;
              p_Source = v182;
            }
            else if ( v123 == v124 )
            {
              v191[v123] = 0;
              v124 = v123 + 1;
              v190 = v123 + 1;
            }
            if ( ++v123 == v121 )
            {
              v197 = v124;
              memcpy_s(Destination, 0x1CCu, v191, 4 * v124);
              goto LABEL_234;
            }
          }
        }
        v114 = Destination[0];
        v186 = Destination[0];
        v197 = v192;
        memcpy_s(Destination, 0x1CCu, &Source, 4 * v192);
        if ( v114 != 0 )
        {
          if ( v114 != 1 && v197 != 0 )
          {
            v115 = 0;
            v180 = v197;
            for ( j = 0; j != v180; ++j )
            {
              v117 = (unsigned int)Destination[j] * (unsigned __int64)v186;
              v118 = Destination[j] * v186;
              Destination[j] = v115 + v118;
              v119 = __PAIR64__(HIDWORD(v117), v115) + (unsigned int)v118;
              v115 = HIDWORD(v119);
            }
            if ( HIDWORD(v119) != 0 )
            {
              if ( v197 >= 0x73 )
                goto LABEL_199;
              Destination[v197++] = HIDWORD(v119);
            }
          }
        }
        else
        {
          v197 = 0;
          memcpy_s(Destination, 0x1CCu, v168, 0);
        }
LABEL_234:
        v108 = 1;
LABEL_235:
        if ( v108 == 0 )
          break;
        v102 = v179 - v185;
        v179 -= v185;
        if ( v179 == 0 )
          goto LABEL_237;
      }
      v197 = 0;
    }
    else
    {
LABEL_237:
      if ( v178[1] % 0xA == 0 )
        goto LABEL_250;
      v132 = dword_42C4D4[v178[1] % 0xA];
      v178[1] = v132;
      if ( v132 != 0 )
      {
        if ( v132 == 1 )
          goto LABEL_250;
        v133 = v197;
        if ( v197 == 0 )
          goto LABEL_250;
        v179 = 0;
        v134 = 0;
        do
        {
          v135 = (unsigned int)Destination[v134] * (unsigned __int64)(unsigned int)v132;
          v136 = v179;
          v137 = v135;
          Destination[v134] = v179 + v135;
          v132 = v178[1];
          v138 = __PAIR64__(HIDWORD(v135), v136) + v137;
          ++v134;
          v179 = HIDWORD(v138);
        }
        while ( v134 != v133 );
        if ( HIDWORD(v138) == 0 )
          goto LABEL_250;
        if ( v197 < 0x73 )
        {
          Destination[v197++] = HIDWORD(v138);
          goto LABEL_250;
        }
      }
      v197 = 0;
    }
    memcpy_s(Destination, 0x1CCu, v168, 0);
    goto LABEL_250;
  }
  v64 = v176 / 0xA;
  v186 = v176 / 0xA;
  if ( v176 / 0xA != 0 )
  {
    while ( 1 )
    {
      if ( v64 > 0x26 )
        v64 = 38;
      v65 = (unsigned __int8)byte_42C43E[4 * v64];
      v66 = (unsigned __int8)byte_42C43F[4 * v64];
      v181 = v64;
      v67 = 4 * v65;
      v192 = v65 + v66;
      memset(&Source, 0, 4 * v65);
      memmove((char *)&Source + v67, (char *)&unk_42BB38 + 4 * (unsigned __int16)word_42C43C[2 * v181], 4 * v66);
      v68 = v192;
      v177 = v192;
      if ( v192 <= 1 )
      {
        v69 = Source;
        if ( Source != 0 )
        {
          if ( Source != 1 && v195 != 0 )
          {
            v71 = 0;
            v179 = v195;
            for ( k = 0; k != v179; ++k )
            {
              v73 = (unsigned int)v196[k] * (unsigned __int64)(unsigned int)v69;
              v74 = v196[k] * v69;
              v196[k] = v71 + v74;
              v75 = __PAIR64__(HIDWORD(v73), v71) + (unsigned int)v74;
              v71 = HIDWORD(v75);
            }
            if ( HIDWORD(v75) != 0 )
            {
              if ( v195 >= 0x73 )
              {
                v192 = 0;
                v195 = 0;
                memcpy_s(v196, 0x1CCu, &Source, 0);
                v70 = 0;
                goto LABEL_169;
              }
              v196[v195++] = HIDWORD(v75);
            }
          }
        }
        else
        {
          v190 = 0;
          v195 = 0;
          memcpy_s(v196, 0x1CCu, v191, 0);
        }
        v70 = 1;
        goto LABEL_169;
      }
      if ( v195 > 1 )
      {
        v82 = &Source;
        if ( v192 >= v195 )
          v82 = v196;
        v182 = v82;
        if ( v192 >= v195 )
        {
          v83 = v195;
          v84 = &Source;
          v180 = v195;
        }
        else
        {
          v83 = v192;
          v180 = v192;
          v68 = v195;
          v84 = v196;
          v177 = v195;
        }
        v185 = (unsigned int)v84;
        v85 = 0;
        v86 = 0;
        v190 = 0;
        while ( 1 )
        {
          if ( v82[v85] != 0 )
          {
            v189 = nullptr;
            v87 = v85;
            v188 = 0;
            if ( v68 != 0 )
            {
              do
              {
                if ( v87 == 115 )
                  break;
                v88 = v188;
                if ( v87 == v86 )
                {
                  v191[v87] = 0;
                  v190 = v85 + v88 + 1;
                }
                v89 = (unsigned __int64)&v189[(unsigned int)v182[v85]
                                            * (unsigned __int64)*(unsigned int *)(v185 + 4 * v88)];
                v90 = __CFADD__((_DWORD)v89, v191[v87]);
                v191[v87] += v89;
                v86 = v190;
                v189 = (char *)(v90 + HIDWORD(v89));
                v68 = v177;
                ++v87;
                ++v188;
              }
              while ( v188 != v177 );
              if ( v189 != nullptr )
              {
                v188 = (unsigned int)&v191[v87];
                while ( v87 != 115 )
                {
                  v91 = v87 + 1;
                  v22 = v87 == v86;
                  v92 = (_DWORD *)v188;
                  ++v87;
                  if ( v22 )
                  {
                    *(_DWORD *)v188 = 0;
                    v190 = v91;
                  }
                  v93 = v92;
                  v188 = (unsigned int)(v92 + 1);
                  v94 = v189;
                  v189 = nullptr;
                  v90 = __CFADD__(v94, *v93);
                  *v93 += v94;
                  v86 = v190;
                  v189 += v90;
                  if ( v189 == nullptr )
                    goto LABEL_164;
                }
LABEL_174:
                v195 = 0;
                memcpy_s(v196, 0x1CCu, v168, 0);
LABEL_175:
                v70 = 0;
                goto LABEL_169;
              }
            }
LABEL_164:
            if ( v87 == 115 )
              goto LABEL_174;
            v83 = v180;
            v82 = v182;
          }
          else if ( v85 == v86 )
          {
            v191[v85] = 0;
            v86 = v85 + 1;
            v190 = v85 + 1;
          }
          if ( ++v85 == v83 )
          {
            v195 = v86;
            memcpy_s(v196, 0x1CCu, v191, 4 * v86);
            goto LABEL_168;
          }
        }
      }
      v76 = v196[0];
      v179 = v196[0];
      v195 = v192;
      memcpy_s(v196, 0x1CCu, &Source, 4 * v192);
      if ( v76 != 0 )
      {
        if ( v76 != 1 && v195 != 0 )
        {
          v77 = 0;
          v180 = v195;
          for ( m = 0; m != v180; ++m )
          {
            v79 = (unsigned int)v196[m] * (unsigned __int64)v179;
            v80 = v196[m] * v179;
            v196[m] = v77 + v80;
            v81 = __PAIR64__(HIDWORD(v79), v77) + (unsigned int)v80;
            v77 = HIDWORD(v81);
          }
          if ( HIDWORD(v81) != 0 )
          {
            if ( v195 >= 0x73 )
            {
              v192 = 0;
              v195 = 0;
              memcpy_s(v196, 0x1CCu, &Source, 0);
              goto LABEL_175;
            }
            v196[v195++] = HIDWORD(v81);
          }
        }
      }
      else
      {
        v192 = 0;
        v195 = 0;
        memcpy_s(v196, 0x1CCu, &Source, 0);
      }
LABEL_168:
      v70 = 1;
LABEL_169:
      if ( v70 == 0 )
        break;
      v64 = v186 - v181;
      v186 -= v181;
      if ( v186 == 0 )
        goto LABEL_171;
    }
    v195 = 0;
    goto LABEL_177;
  }
LABEL_171:
  if ( v176 % 0xA != 0 )
  {
    v95 = dword_42C4D4[v176 % 0xA];
    v179 = v95;
    if ( v95 == 0 )
    {
LABEL_173:
      v195 = 0;
LABEL_177:
      memcpy_s(v196, 0x1CCu, v168, 0);
      goto LABEL_250;
    }
    if ( v95 != 1 )
    {
      v96 = v195;
      if ( v195 != 0 )
      {
        v186 = 0;
        v97 = 0;
        do
        {
          v98 = (unsigned int)v196[v97] * (unsigned __int64)(unsigned int)v95;
          v99 = v186;
          v100 = v98;
          v196[v97] = v186 + v98;
          v95 = v179;
          v101 = __PAIR64__(HIDWORD(v98), v99) + v100;
          ++v97;
          v186 = HIDWORD(v101);
        }
        while ( v97 != v96 );
        if ( HIDWORD(v101) != 0 )
        {
          if ( v195 < 0x73 )
          {
            v196[v195++] = HIDWORD(v101);
            goto LABEL_250;
          }
          goto LABEL_173;
        }
      }
    }
  }
LABEL_250:
  v139 = v197;
  v140 = v183;
  v189 = v183;
  if ( v197 != 0 )
  {
    v179 = 0;
    v141 = 0;
    do
    {
      v142 = 10LL * (unsigned int)Destination[v141];
      v143 = 10 * Destination[v141];
      v144 = v179;
      Destination[v141] = v179 + v143;
      v145 = __PAIR64__(HIDWORD(v142), v144) + (unsigned int)v143;
      ++v141;
      v179 = HIDWORD(v145);
    }
    while ( v141 != v139 );
    v140 = v189;
    if ( HIDWORD(v145) != 0 )
    {
      if ( v197 >= 0x73 )
      {
        v197 = 0;
        memcpy_s(Destination, 0x1CCu, v168, 0);
      }
      else
      {
        Destination[v197++] = HIDWORD(v145);
      }
    }
  }
  v146 = __crt_strtox::divide((__crt_strtox *)&v197, (struct __crt_strtox::big_integer *)&v195);
  v147 = v183;
  if ( v146 == 10 )
  {
    v148 = v195;
    v140 = v183 + 1;
    ++v176;
    *v183 = 49;
    v189 = v147 + 1;
    v178[1] = v148;
    if ( v148 != 0 )
    {
      v149 = 0;
      v150 = 0;
      do
      {
        v151 = 10LL * (unsigned int)v196[v150];
        v196[v150++] = v149 + v151;
        v149 = (v151 + (unsigned __int64)v149) >> 32;
      }
      while ( v150 != v178[1] );
      v178[1] = v149;
      v22 = v149 == 0;
      v140 = v189;
      if ( !v22 )
      {
        if ( v195 >= 0x73 )
        {
          v195 = 0;
          memcpy_s(v196, 0x1CCu, v168, 0);
        }
        else
        {
          v196[v195++] = v178[1];
        }
      }
      v147 = v183;
    }
  }
  else if ( v146 != 0 )
  {
    v140 = v183 + 1;
    *v183 = v146 + 48;
    v189 = v147 + 1;
  }
  else
  {
    --v176;
  }
  v152 = v176;
  v174[1] = v176;
  v153 = v175;
  if ( v152 >= 0 && v175 <= 0x7FFFFFFF && a3 == 0 )
    v153 = v152 + v175;
  v154 = SizeInBytes - 1;
  if ( SizeInBytes - 1 >= v153 )
    v154 = v153;
  v155 = 0;
  v186 = (unsigned int)&v147[v154];
  v184 = 0;
  if ( v140 != &v147[v154] )
  {
    do
    {
      v178[1] = v197;
      if ( v197 == 0 )
        break;
      v156 = 0;
      v157 = 0;
      do
      {
        v158 = 1000000000LL * (unsigned int)Destination[v157];
        v159 = 1000000000 * Destination[v157];
        Destination[v157] = v156 + v159;
        v160 = __PAIR64__(HIDWORD(v158), v156) + (unsigned int)v159;
        ++v157;
        v156 = HIDWORD(v160);
      }
      while ( v157 != v178[1] );
      v178[1] = HIDWORD(v160);
      v161 = v189;
      if ( HIDWORD(v160) != 0 )
      {
        if ( v197 >= 0x73 )
        {
          v197 = 0;
          memcpy_s(Destination, 0x1CCu, v168, 0);
        }
        else
        {
          Destination[v197++] = HIDWORD(v160);
        }
      }
      v162 = __crt_strtox::divide((__crt_strtox *)&v197, (struct __crt_strtox::big_integer *)&v195);
      v185 = v162;
      v163 = v186 - (_DWORD)v161;
      v179 = 8;
      do
      {
        v164 = v162 % v187;
        LOBYTE(v164) = v164 + 48;
        v175 = v164;
        v165 = v164;
        v185 /= v187;
        v166 = v179;
        if ( v163 > v179 )
        {
          v161[v179] = v165;
        }
        else if ( v165 != 48 )
        {
          v155 = 1;
          v184 = 1;
          goto LABEL_289;
        }
        v155 = v184;
LABEL_289:
        v179 = v166 - 1;
        v22 = v166 == 0;
        v162 = v185;
      }
      while ( !v22 );
      if ( v163 > 9 )
        v163 = 9;
      v140 = &v161[v163];
      v189 = v140;
    }
    while ( v140 != (char *)v186 );
  }
  *v140 = 0;
  if ( v197 != 0 || v155 != 0 )
    v6 = 0;
  _controlfp_s(&v178[1], NewValue, NewValue_4);
LABEL_297:
  if ( v171 != 0 )
    fesetenv(&Env);
  return v6;
}

