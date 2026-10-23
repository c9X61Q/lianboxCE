// resizecmdwindow.exe @ 0x140002d40 size=3579

_QWORD *__fastcall sub_140002D40(_QWORD *a1, int a2, void **a3)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  const void **v6; // rbx
  const void *v7; // rcx
  _BYTE *v8; // rdx
  size_t v9; // r8
  char *v10; // rax
  __int64 v11; // rsi
  bool v12; // cc
  char *v13; // rdi
  __int64 *v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // r15
  const void **v19; // r13
  size_t *v20; // rbx
  _QWORD *v21; // r15
  _QWORD *v22; // rax
  size_t *v23; // rsi
  const void *v24; // rdx
  const void *v25; // rcx
  unsigned __int64 v26; // r12
  size_t v27; // r14
  _QWORD *v28; // rdx
  const void *v29; // rcx
  const void **v30; // r13
  _QWORD *v31; // rax
  const void **v32; // rsi
  unsigned __int64 v33; // r12
  __int64 v34; // r13
  const void *v35; // rdx
  const void *v36; // rcx
  unsigned __int64 v37; // r15
  size_t v38; // r14
  _QWORD *v39; // rdx
  const void *v40; // rcx
  _QWORD *v41; // rbx
  _OWORD *v42; // r15
  _QWORD *v43; // r14
  unsigned __int64 v44; // rdx
  _QWORD *v45; // rcx
  unsigned __int64 v46; // rdx
  _QWORD *v47; // rcx
  char *v48; // r14
  _QWORD *v49; // rdx
  __int64 v50; // rcx
  unsigned __int8 v51; // al
  int v52; // eax
  void *v53; // rdx
  _QWORD *v54; // rsi
  _OWORD *v55; // rdi
  _QWORD *v56; // rbx
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rcx
  unsigned __int64 v59; // rdx
  _QWORD *v60; // rcx
  char *v61; // rsi
  char *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  char *v70; // rcx
  unsigned __int64 v71; // rdx
  __int64 v72; // rbx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // r8
  char *v77; // rax
  void **v78; // rbx
  void **v79; // r12
  unsigned __int64 v80; // r13
  void **v81; // rdi
  __int64 v82; // r14
  void **v83; // rdi
  _QWORD *v84; // r15
  unsigned __int64 v85; // r8
  __int64 v86; // r9
  _QWORD *v87; // rax
  _QWORD *v88; // rcx
  __int64 v89; // rax
  void **v90; // rbx
  void **v91; // rdi
  void **i; // rdi
  unsigned __int64 v93; // r8
  __int64 v94; // r9
  _QWORD *v95; // r8
  _QWORD *v96; // rcx
  _QWORD *v97; // rdx
  __int64 v98; // rcx
  unsigned __int8 v99; // al
  int v100; // eax
  _QWORD *v101; // r14
  _QWORD *v102; // rbx
  _OWORD *v103; // rsi
  _QWORD *v104; // rdi
  unsigned __int64 v105; // rdx
  _QWORD *v106; // rcx
  unsigned __int64 v107; // rdx
  _QWORD *v108; // rcx
  void **v109; // rax
  _QWORD *v110; // r13
  __int64 v111; // r12
  __int64 v112; // r15
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  void *v121; // rsi
  _QWORD *v122; // r14
  _QWORD *v123; // rbx
  _OWORD *v124; // rsi
  _QWORD *v125; // rdi
  unsigned __int64 v126; // rdx
  _QWORD *v127; // rcx
  unsigned __int64 v128; // rdx
  _QWORD *v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rdx
  __int64 v134; // r8
  __int64 v135; // rdi
  __int64 v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rdx
  const char *v142; // rdi
  __int64 j; // rbx
  __int64 v144; // rax
  __int64 v145; // rdx
  unsigned __int64 v146; // r12
  __int64 v147; // rsi
  __int64 v148; // r14
  char *v149; // r8
  char *v150; // rcx
  char *v151; // rdx
  void *v152; // rcx
  _QWORD *v155; // [rsp+28h] [rbp-51h]
  size_t *v156; // [rsp+30h] [rbp-49h]
  _QWORD v157[2]; // [rsp+38h] [rbp-41h] BYREF
  const void **v158; // [rsp+48h] [rbp-31h] BYREF
  char v159[8]; // [rsp+50h] [rbp-29h] BYREF
  void *v160[2]; // [rsp+58h] [rbp-21h] BYREF
  char *v161; // [rsp+68h] [rbp-11h]
  void *Block[2]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v163; // [rsp+80h] [rbp+7h]

  v4 = a2;
  v5 = a1;
  v6 = (const void **)(a1 + 4);
  v7 = v6;
  if ( (unsigned __int64)v6[3] >= 0x10 )
    v7 = *v6;
  if ( v6[2] == nullptr )
  {
    if ( memcmp(v7, &unk_14000B508, 0) == 0 )
    {
      v8 = *a3;
      v9 = -1;
      do
        ++v9;
      while ( v8[v9] != 0 );
      sub_1400062A0(v6, v8, v9);
    }
    v5 = a1;
  }
  if ( (_DWORD)v4 == 1 )
  {
    sub_140001930(v5);
    exit(0);
  }
  v10 = nullptr;
  *(_OWORD *)v160 = 0;
  v161 = nullptr;
  __wind
  {
    v11 = v4;
    v12 = v4 <= 1;
    v13 = (char *)v160[1];
    if ( !v12 )
    {
      v14 = (__int64 *)(a3 + 1);
      v15 = v11 - 1;
      while ( 1 )
      {
        if ( v13 == v10 )
        {
          sub_140008470(v160, v13, v14);
          v13 = (char *)v160[1];
        }
        else
        {
          v16 = *v14;
          *(_OWORD *)v13 = 0;
          *((_QWORD *)v13 + 2) = 0;
          *((_QWORD *)v13 + 3) = 0;
          v17 = -1;
          do
            ++v17;
          while ( *(_BYTE *)(v16 + v17) != 0 );
          sub_1400077F0(v13, v16, v17);
          v13 = (char *)v160[1] + 32;
          v160[1] = (char *)v160[1] + 32;
        }
        ++v14;
        if ( --v15 == 0 )
          break;
        v10 = v161;
      }
    }
    v18 = a1;
    v19 = (const void **)a1[8];
    v20 = (size_t *)v160[0];
    v156 = (size_t *)v160[0];
    if ( v19 != (const void **)a1[9] )
    {
      v21 = v19 + 6;
      v22 = a1;
      do
      {
        if ( v20 != (size_t *)v13 )
        {
          v23 = v20;
          while ( 1 )
          {
            v24 = v19;
            if ( *(v21 - 3) >= 0x10u )
              v24 = *v19;
            v25 = v23;
            v26 = v23[3];
            if ( v26 >= 0x10 )
              v25 = (const void *)*v23;
            v27 = v23[2];
            if ( v27 == *(v21 - 4) && memcmp(v25, v24, v23[2]) == 0 )
              break;
            v28 = v21 - 2;
            if ( v21[1] >= 0x10u )
              v28 = (_QWORD *)*v28;
            v29 = v23;
            if ( v26 >= 0x10 )
              v29 = (const void *)*v23;
            if ( v27 == *v21 && memcmp(v29, v28, v27) == 0 )
              break;
            v23 += 4;
            if ( v23 == (size_t *)v13 )
              goto LABEL_40;
          }
          if ( v23 != (size_t *)v13 )
          {
            sub_140005800(v19 + 12);
            exit(0);
          }
LABEL_40:
          v22 = a1;
        }
        v19 += 20;
        v21 += 20;
      }
      while ( v19 != (const void **)v22[9] );
      v18 = a1;
    }
    v30 = (const void **)v18[11];
    v158 = v30;
    v157[0] = v18[12];
    if ( v30 != (const void **)v157[0] )
    {
      v31 = v30 + 6;
      v155 = v30 + 6;
      do
      {
        v32 = (const void **)v20;
        if ( v20 != (size_t *)v13 )
        {
          v33 = *(v31 - 3);
          v34 = *(v31 - 4);
          do
          {
            v35 = v158;
            if ( v33 >= 0x10 )
              v35 = *v158;
            v36 = v32;
            v37 = (unsigned __int64)v32[3];
            if ( v37 >= 0x10 )
              v36 = *v32;
            v38 = (size_t)v32[2];
            if ( v38 == v34 )
            {
              if ( memcmp(v36, v35, (size_t)v32[2]) == 0 )
                break;
              v31 = v155;
            }
            v39 = v31 - 2;
            if ( v31[1] >= 0x10u )
              v39 = (_QWORD *)*v39;
            v40 = v32;
            if ( v37 >= 0x10 )
              v40 = *v32;
            if ( v38 == *v31 )
            {
              if ( memcmp(v40, v39, v38) == 0 )
                break;
              v31 = v155;
            }
            v32 += 4;
          }
          while ( v32 != (const void **)v13 );
          v20 = v156;
          v31 = v155;
          v30 = v158;
        }
        if ( v32 != (const void **)v13 )
        {
          if ( v32 + 4 != (const void **)v13 )
          {
            v41 = v32 + 7;
            do
            {
              v42 = v41 - 3;
              v43 = v41 - 7;
              if ( v41 - 7 != v41 - 3 )
              {
                v44 = *(v41 - 4);
                if ( v44 >= 0x10 )
                {
                  v45 = (_QWORD *)*v43;
                  if ( v44 + 1 >= 0x1000 )
                  {
                    if ( (unsigned __int64)v45 - *(v45 - 1) - 8 > 0x1F )
                      goto LABEL_218;
                    v45 = (_QWORD *)*(v45 - 1);
                  }
                  j_j_free(v45);
                }
                *(_OWORD *)v43 = *v42;
                *((_OWORD *)v43 + 1) = v42[1];
                *(v41 - 1) = 0;
                *v41 = 15;
                *(_BYTE *)v42 = 0;
              }
              v41 += 4;
            }
            while ( v41 - 3 != (_QWORD *)v13 );
            v13 = (char *)v160[1];
          }
          v46 = *((_QWORD *)v13 - 1);
          if ( v46 >= 0x10 )
          {
            v47 = *((_QWORD **)v13 - 4);
            if ( v46 + 1 >= 0x1000 )
            {
              if ( (unsigned __int64)v47 - *(v47 - 1) - 8 > 0x1F )
                goto LABEL_218;
              v47 = (_QWORD *)*(v47 - 1);
            }
            j_j_free(v47);
          }
          *((_QWORD *)v13 - 2) = 0;
          *((_QWORD *)v13 - 1) = 15;
          *(v13 - 32) = 0;
          v48 = (char *)v160[1] - 32;
          v160[1] = (char *)v160[1] - 32;
          v49 = v155 + 6;
          if ( v155[9] >= 0x10u )
            v49 = (_QWORD *)*v49;
          if ( v155[8] != 4 )
            goto LABEL_91;
          v50 = 0;
          while ( 1 )
          {
            v51 = *((_BYTE *)v49 + v50++);
            if ( v51 != aBool[v50 - 1] )
              break;
            if ( v50 == 4 )
            {
              v52 = 0;
              goto LABEL_89;
            }
          }
          v52 = v51 < (unsigned __int8)aBool[v50 - 1] ? -1 : 1;
LABEL_89:
          if ( v52 != 0 )
          {
LABEL_91:
            if ( v32 == (const void **)v48 )
            {
              v65 = sub_140006630(std::cerr, "(parse error) option ");
              v66 = unknown_libname_1(v65, v30);
              v67 = sub_140006630(v66, " ");
              v68 = unknown_libname_1(v67, v30 + 4);
              v69 = sub_140006630(v68, " should have value");
              std::ostream::operator<<(v69, sub_140006820);
              exit(-1);
            }
            if ( v155 + 10 != v32 )
            {
              v53 = v32;
              if ( (unsigned __int64)v32[3] >= 0x10 )
                v53 = (void *)*v32;
              sub_1400062A0(v155 + 10, v53, (size_t)v32[2]);
              v48 = (char *)v160[1];
            }
            if ( v32 + 4 != (const void **)v48 )
            {
              v54 = v32 + 7;
              do
              {
                v55 = v54 - 3;
                v56 = v54 - 7;
                if ( v54 - 7 != v54 - 3 )
                {
                  v57 = *(v54 - 4);
                  if ( v57 >= 0x10 )
                  {
                    v58 = (_QWORD *)*v56;
                    if ( v57 + 1 >= 0x1000 )
                    {
                      if ( (unsigned __int64)v58 - *(v58 - 1) - 8 > 0x1F )
                        goto LABEL_218;
                      v58 = (_QWORD *)*(v58 - 1);
                    }
                    j_j_free(v58);
                  }
                  *(_OWORD *)v56 = *v55;
                  *((_OWORD *)v56 + 1) = v55[1];
                  *(v54 - 1) = 0;
                  *v54 = 15;
                  *(_BYTE *)v55 = 0;
                }
                v54 += 4;
              }
              while ( v54 - 3 != (_QWORD *)v48 );
              v48 = (char *)v160[1];
            }
            v59 = *((_QWORD *)v48 - 1);
            if ( v59 >= 0x10 )
            {
              v60 = *((_QWORD **)v48 - 4);
              if ( v59 + 1 >= 0x1000 )
              {
                if ( (unsigned __int64)v60 - *(v60 - 1) - 8 > 0x1F )
                  goto LABEL_218;
                v60 = (_QWORD *)*(v60 - 1);
              }
              j_j_free(v60);
            }
            *((_QWORD *)v48 - 2) = 0;
            *((_QWORD *)v48 - 1) = 15;
            *(v48 - 32) = 0;
            v13 = (char *)v160[1] - 32;
            v160[1] = (char *)v160[1] - 32;
          }
          else
          {
            sub_1400062A0(v155 + 10, "1", 1u);
            v13 = (char *)v160[1];
          }
          v20 = (size_t *)v160[0];
          v31 = v155;
          v156 = (size_t *)v160[0];
        }
        v30 += 20;
        v158 = v30;
        v31 += 20;
        v155 = v31;
      }
      while ( v30 != (const void **)v157[0] );
      v18 = a1;
    }
    v61 = (char *)v20;
    if ( v20 != (size_t *)v13 )
    {
      do
      {
        v62 = v61;
        if ( *((_QWORD *)v61 + 3) >= 0x10u )
          v62 = *(char **)v61;
        if ( *v62 == 45 )
          break;
        v61 += 32;
      }
      while ( v61 != v13 );
    }
    v158 = (const void **)v61;
    if ( v61 != v13 )
    {
      v63 = *((_QWORD *)v61 + 2);
      if ( v63 == 1 )
      {
        v64 = sub_140006630(std::cerr, "(parse error) bare unexcepted '-'");
        std::ostream::operator<<(v64, sub_140006820);
        exit(-1);
      }
      v70 = v61;
      v71 = *((_QWORD *)v61 + 3);
      if ( v71 >= 0x10 )
        v70 = *(char **)v61;
      if ( v70[1] == 45 )
      {
        v72 = sub_1400054A0(&v158);
        v73 = sub_140006630(std::cerr, "(parse error) unrecognized option");
        v74 = unknown_libname_1(v73, v72);
        std::ostream::operator<<(v74, sub_140006820);
        exit(-1);
      }
      *(_OWORD *)Block = 0;
      v163 = 0;
      if ( v63 == 0 )
        sub_140006610();
      v75 = v63 - 1;
      v76 = -1;
      if ( v75 != -1 )
        v76 = v75;
      v77 = v61;
      if ( v71 >= 0x10 )
        v77 = *(char **)v61;
      sub_1400077F0(Block, v77 + 1, v76);
      __wind
      {
        v78 = Block;
        v79 = (void **)Block[0];
        v80 = *((_QWORD *)&v163 + 1);
        if ( *((_QWORD *)&v163 + 1) >= 0x10u )
          v78 = (void **)Block[0];
        v81 = Block;
        if ( *((_QWORD *)&v163 + 1) >= 0x10u )
          v81 = (void **)Block[0];
        v82 = v163;
        v83 = (void **)((char *)v81 + v163);
        v84 = v18 + 14;
        while ( v78 != v83 )
        {
          v159[0] = *(_BYTE *)v78;
          v85 = *(_QWORD *)(*(_QWORD *)sub_140007560(v84, v157, v159) + 24LL);
          v86 = a1[8];
          if ( v85 < (a1[9] - v86) / 160 )
          {
            v87 = (_QWORD *)(v86 + 160 * v85);
            v88 = v87;
            if ( v87[3] >= 0x10u )
              v88 = (_QWORD *)*v87;
            if ( *((_BYTE *)v88 + v87[2] - 1) == v159[0] )
            {
              v89 = sub_140005760(a1 + 8, v85);
              sub_140005800(v89 + 96);
              exit(0);
            }
          }
          v78 = (void **)((char *)v78 + 1);
        }
        v90 = Block;
        if ( v80 >= 0x10 )
          v90 = v79;
        v91 = Block;
        if ( v80 >= 0x10 )
          v91 = v79;
        for ( i = (void **)((char *)v91 + v82); v90 != i; v90 = (void **)((char *)v90 + 1) )
        {
          v159[0] = *(_BYTE *)v90;
          v93 = *(_QWORD *)(*(_QWORD *)sub_140007560(v84, v157, v159) + 24LL);
          v94 = a1[11];
          if ( v93 >= (a1[12] - v94) / 160 )
            goto LABEL_191;
          v95 = (_QWORD *)(v94 + 160 * v93);
          v96 = v95;
          if ( v95[3] >= 0x10u )
            v96 = (_QWORD *)*v95;
          if ( *((_BYTE *)v96 + v95[2] - 1) != v159[0] )
          {
LABEL_191:
            v116 = sub_1400054A0(&v158);
            v117 = sub_140006630(std::cerr, "(parse error) unrecognized short name option '");
            v118 = sub_140006990(v117, (unsigned __int8)v159[0]);
            v119 = sub_140006630(v118, "' in ");
            v120 = unknown_libname_1(v119, v116);
            std::ostream::operator<<(v120, sub_140006820);
            exit(-1);
          }
          v97 = v95 + 12;
          if ( v95[15] >= 0x10u )
            v97 = (_QWORD *)v95[12];
          if ( v95[14] != 4 )
            goto LABEL_190;
          v98 = 0;
          while ( 1 )
          {
            v99 = *((_BYTE *)v97 + v98++);
            if ( v99 != aBool[v98 - 1] )
              break;
            if ( v98 == 4 )
            {
              v100 = 0;
              goto LABEL_164;
            }
          }
          v100 = v99 < (unsigned __int8)aBool[v98 - 1] ? -1 : 1;
LABEL_164:
          if ( v100 != 0 )
          {
LABEL_190:
            v115 = sub_140006630(std::cerr, "(parse error) aggregation short name option must be bool");
            std::ostream::operator<<(v115, sub_140006820);
            exit(-1);
          }
          sub_1400062A0(v95 + 16, "1", 1u);
        }
        v101 = v160[1];
        if ( v61 + 32 != v160[1] )
        {
          v102 = v61 + 56;
          do
          {
            v103 = v102 - 3;
            v104 = v102 - 7;
            if ( v102 - 7 != v102 - 3 )
            {
              v105 = *(v102 - 4);
              if ( v105 >= 0x10 )
              {
                v106 = (_QWORD *)*v104;
                if ( v105 + 1 >= 0x1000 )
                {
                  if ( (unsigned __int64)v106 - *(v106 - 1) - 8 > 0x1F )
                    goto LABEL_192;
                  v106 = (_QWORD *)*(v106 - 1);
                }
                j_j_free(v106);
              }
              *(_OWORD *)v104 = *v103;
              *((_OWORD *)v104 + 1) = v103[1];
              *(v102 - 1) = 0;
              *v102 = 15;
              *(_BYTE *)v103 = 0;
            }
            v102 += 4;
          }
          while ( v102 - 3 != v101 );
          v101 = v160[1];
        }
        v107 = *(v101 - 1);
        if ( v107 >= 0x10 )
        {
          v108 = (_QWORD *)*(v101 - 4);
          if ( v107 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v108 - *(v108 - 1) - 8 > 0x1F )
LABEL_192:
              invalid_parameter_noinfo_noreturn();
            v108 = (_QWORD *)*(v108 - 1);
          }
          j_j_free(v108);
        }
        *(v101 - 2) = 0;
        *(v101 - 1) = 15;
        *((_BYTE *)v101 - 32) = 0;
        v13 = (char *)v160[1] - 32;
        v160[1] = (char *)v160[1] - 32;
      }
      __unwind
      {
        sub_140005EB0(Block);
      }
      if ( v80 >= 0x10 )
      {
        v109 = v79;
        if ( v80 + 1 >= 0x1000 )
        {
          v79 = (void **)*(v79 - 1);
          if ( (unsigned __int64)((char *)v109 - (char *)v79 - 8) > 0x1F )
LABEL_218:
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v79);
        v13 = (char *)v160[1];
      }
      v20 = (size_t *)v160[0];
    }
    v110 = a1;
    v111 = a1[23];
    v112 = a1[22];
    v113 = (v111 - v112) >> 7;
    if ( (v13 - (char *)v20) >> 5 < v113 )
    {
      v114 = sub_140006630(std::cerr, "(parse error) not enough named_arguments");
      std::ostream::operator<<(v114, sub_140006820);
      exit(-1);
    }
    while ( v112 != v111 )
    {
      if ( v20 != (size_t *)v13 )
      {
        while ( 1 )
        {
          v121 = v20 + 4;
          if ( (unsigned __int8)sub_140003B40(v113, v20, v112) != 0 )
            break;
          v20 += 4;
          v13 = (char *)v160[1];
          if ( v121 == v160[1] )
            goto LABEL_215;
        }
        v122 = v160[1];
        if ( v121 != v160[1] )
        {
          v123 = v20 + 7;
          do
          {
            v124 = v123 - 3;
            v125 = v123 - 7;
            if ( v123 - 7 != v123 - 3 )
            {
              v126 = *(v123 - 4);
              if ( v126 >= 0x10 )
              {
                v127 = (_QWORD *)*v125;
                if ( v126 + 1 >= 0x1000 )
                {
                  if ( (unsigned __int64)v127 - *(v127 - 1) - 8 > 0x1F )
                    goto LABEL_218;
                  v127 = (_QWORD *)*(v127 - 1);
                }
                j_j_free(v127);
              }
              *(_OWORD *)v125 = *v124;
              *((_OWORD *)v125 + 1) = v124[1];
              *(v123 - 1) = 0;
              *v123 = 15;
              *(_BYTE *)v124 = 0;
            }
            v123 += 4;
          }
          while ( v123 - 3 != v122 );
          v122 = v160[1];
        }
        v128 = *(v122 - 1);
        if ( v128 >= 0x10 )
        {
          v129 = (_QWORD *)*(v122 - 4);
          if ( v128 + 1 >= 0x1000 )
          {
            if ( (unsigned __int64)v129 - *(v129 - 1) - 8 > 0x1F )
              goto LABEL_218;
            v129 = (_QWORD *)*(v129 - 1);
          }
          j_j_free(v129);
        }
        *(v122 - 2) = 0;
        *(v122 - 1) = 15;
        *((_BYTE *)v122 - 32) = 0;
        v13 = (char *)v160[1] - 32;
        v160[1] = (char *)v160[1] - 32;
LABEL_215:
        v20 = (size_t *)v160[0];
      }
      if ( *(_QWORD *)(v112 + 112) == 0 )
      {
        v130 = sub_140006630(std::cerr, "(parse error) named_argument ");
        v131 = unknown_libname_1(v130, v112);
        v132 = sub_140006630(v131, " should have value");
        std::ostream::operator<<(v132, sub_140006820);
        exit(-1);
      }
      v112 += 128;
    }
    v133 = a1[25];
    v134 = (v13 - (char *)v20) >> 5;
    if ( v134 != (a1[26] - v133) >> 7 )
    {
      v135 = sub_140005540(a1 + 25);
      v136 = sub_1400054B0(v160);
      v137 = sub_140006630(std::cerr, "(parse error) position argument number missmatching, give ");
      v138 = std::ostream::operator<<(v137, v136);
      v139 = sub_140006630(v138, ", but need ");
      v140 = std::ostream::operator<<(v139, v135);
      LOBYTE(v141) = 10;
      sub_140006990(v140, v141);
      sub_140006630(std::cerr, "uncaptured command line arguments:\n");
      v142 = __crt_win32_buffer_debug_info::file_name((__crt_win32_buffer_debug_info *)v160);
      for ( j = sub_1400054A0(v160); (const char *)j != v142; j += 32 )
      {
        v144 = unknown_libname_1(std::cerr, j);
        LOBYTE(v145) = 10;
        sub_140006990(v144, v145);
      }
      std::ostream::operator<<(std::cerr, sub_140007160);
      exit(-1);
    }
    if ( v134 != 0 )
    {
      v146 = 0;
      v147 = 0;
      v148 = 0;
      do
      {
        v149 = (char *)&v20[v148];
        v150 = (char *)(v133 + v147 + 96);
        if ( v150 != (char *)&v20[v148] )
        {
          v151 = (char *)&v20[v148];
          if ( *((_QWORD *)v149 + 3) >= 0x10u )
            v151 = *(char **)v149;
          sub_1400062A0(v150, v151, *((_QWORD *)v149 + 2));
          v133 = a1[25];
          v13 = (char *)v160[1];
          v20 = (size_t *)v160[0];
        }
        ++v146;
        v148 += 4;
        v147 += 128;
      }
      while ( v146 < (v13 - (char *)v20) >> 5 );
    }
  }
  __unwind
  {
    sub_1400054D0(v160);
  }
  if ( v20 != nullptr )
  {
    sub_1400078F0(v20, v13);
    v152 = v160[0];
    if ( ((v161 - (char *)v160[0]) & 0xFFFFFFFFFFFFFFE0uLL) >= 0x1000 )
    {
      v152 = *((void **)v160[0] - 1);
      if ( (unsigned __int64)((char *)v160[0] - (char *)v152 - 8) > 0x1F )
        invalid_parameter_noinfo_noreturn();
    }
    j_j_free(v152);
  }
  return v110;
}

