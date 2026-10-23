// resizecmdwindow.exe @ 0x140001a60 size=3722

void __fastcall sub_140001A60(_QWORD *a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r14
  _QWORD *v7; // rsi
  _QWORD *v8; // r15
  _QWORD *v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r10
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // r8
  _QWORD *v25; // rdx
  __int64 v26; // rax
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rdx
  void *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  _QWORD *v43; // rsi
  _QWORD *v44; // r15
  _QWORD *v45; // rbx
  __int64 v46; // rdi
  __int64 v47; // r8
  _QWORD *v48; // rdx
  __int64 v49; // rax
  _QWORD *v50; // rdx
  _QWORD *v51; // rax
  _QWORD *v52; // rdx
  void *v53; // rcx
  _QWORD *v54; // rdi
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  unsigned __int8 v57; // al
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rdx
  void *v69; // rcx
  void *v70; // rcx
  void *v71; // rcx
  void *v72; // rcx
  _QWORD *v73; // rdi
  _QWORD *v74; // r14
  _QWORD *v75; // rcx
  unsigned __int64 v76; // rsi
  unsigned __int64 v77; // rdx
  _QWORD *v78; // rbx
  _QWORD *v79; // rdx
  _QWORD *v80; // rax
  _QWORD *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rdx
  __int64 v85; // rax
  void *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  _QWORD *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  void *v95; // rcx
  void *v96; // rcx
  void *v97; // rcx
  void *v98; // rcx
  _QWORD *v99; // r15
  _QWORD *v100; // r12
  _QWORD *v101; // rcx
  _QWORD *v102; // rsi
  unsigned __int64 v103; // rdx
  _QWORD *v104; // r14
  _QWORD *v105; // rdx
  size_t v106; // rbx
  unsigned __int64 v107; // rdi
  size_t v108; // rcx
  void *v109; // rax
  _QWORD *v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rax
  _QWORD *v113; // rdx
  __int64 v114; // rax
  void *v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // rcx
  _QWORD *v120; // rax
  _QWORD *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rdx
  void *v124; // rcx
  void *v125; // rcx
  void *v126; // rcx
  void *v127; // rcx
  _QWORD v128[2]; // [rsp+30h] [rbp-49h] BYREF
  size_t v129; // [rsp+40h] [rbp-39h]
  unsigned __int64 v130; // [rsp+48h] [rbp-31h]
  _QWORD v131[2]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v132; // [rsp+60h] [rbp-19h]
  unsigned __int64 v133; // [rsp+68h] [rbp-11h]
  _QWORD v134[2]; // [rsp+70h] [rbp-9h] BYREF
  __int64 v135; // [rsp+80h] [rbp+7h]
  unsigned __int64 v136; // [rsp+88h] [rbp+Fh]
  _QWORD v137[2]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v138; // [rsp+A0h] [rbp+27h]
  unsigned __int64 v139; // [rsp+A8h] [rbp+2Fh]

  sub_140001930(a1);
  v2 = sub_140006630(std::cout, "\n");
  v3 = a1;
  if ( a1[3] >= 0x10u )
    v3 = (_QWORD *)*a1;
  v4 = sub_140007E60(v2, v3, a1[2]);
  sub_140006630(v4, "\n\n");
  sub_140006630(std::cout, "Options:\n");
  v5 = 0;
  v6 = 0;
  v7 = (_QWORD *)a1[8];
  v8 = (_QWORD *)a1[9];
  v9 = v7;
  if ( v7 != v8 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = v9[2];
      v14 = v9[6] + 4LL;
      if ( v13 == 0 )
      {
        v14 = v9[6];
        v10 = v6;
      }
      v6 = v12;
      if ( v13 == 0 )
        v6 = v11;
      if ( v10 < v14 )
        v6 = v14;
      v9 += 20;
      v10 = v6;
      v11 = v6;
      v12 = v6;
    }
    while ( v9 != v8 );
  }
  v15 = a1[12];
  v16 = a1[11];
  if ( v16 != v15 )
  {
    v17 = v6;
    v18 = v6;
    do
    {
      v19 = *(_QWORD *)(v16 + 16);
      v20 = *(_QWORD *)(v16 + 48) + 4LL;
      if ( v19 == 0 )
        v20 = *(_QWORD *)(v16 + 48);
      v21 = v6;
      v6 = v18;
      if ( v19 == 0 )
        v6 = v17;
      if ( v21 < v20 )
        v6 = v20;
      v17 = v6;
      v16 += 160;
      v18 = v6;
    }
    while ( v16 != v15 );
  }
  if ( v6 < 0x19 )
    v6 = 25;
  if ( v7 != v8 )
  {
    v22 = v7 + 6;
    do
    {
      sub_140006630(std::cout, "  ");
      v23 = 0;
      v24 = *(v22 - 4);
      if ( v24 != 0 )
      {
        v25 = v7;
        if ( *(v22 - 3) >= 0x10u )
          v25 = (_QWORD *)*v7;
        v26 = sub_140007E60(std::cout, v25, v24);
        sub_140006630(v26, ", ");
        v23 = 4;
      }
      v27 = v22 - 2;
      if ( v22[1] >= 0x10u )
        v27 = (_QWORD *)*v27;
      sub_140007E60(std::cout, v27, *v22);
      v28 = (_QWORD *)sub_140005F10(v131, v6 - (*v22 + v23));
      __eh34_enter_wind_state(-1, 0);
      v29 = v28;
      if ( v28[3] >= 0x10u )
        v29 = (_QWORD *)*v28;
      sub_140007E60(std::cout, v29, v28[2]);
      if ( __eh34_unwind(0) )
      {
unwind_state_0:
        sub_140005EB0(v131);
        __eh34_propagate_exception_into_caller(0, -1);
      }
      __eh34_exit_wind_state(0, -1);
      if ( v133 >= 0x10 )
      {
        v30 = (void *)v131[0];
        if ( v133 + 1 >= 0x1000 )
        {
          v30 = *(void **)(v131[0] - 8LL);
          if ( (unsigned __int64)(v131[0] - (_QWORD)v30 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v30);
      }
      *(_OWORD *)v128 = 0;
      v129 = 0;
      v130 = 0;
      sub_1400077F0(v128, "\n", 1);
      __eh34_enter_wind_state(-1, 1);
      v31 = sub_140005F10(v131, v6 + 2);
      __eh34_enter_wind_state(1, 2);
      v33 = sub_140006860(v137, v32, v31);
      __eh34_enter_wind_state(2, 3);
      v35 = (_QWORD *)sub_140003D40(v34, v134, v22 + 2, v128, v33);
      __wind
      {
        v36 = v35;
        if ( v35[3] >= 0x10u )
          v36 = (_QWORD *)*v35;
        v37 = sub_140007E60(std::cout, v36, v35[2]);
        LOBYTE(v38) = 10;
        sub_140006990(v37, v38);
      }
      __unwind
      {
        sub_140005EB0(v134);
      }
      if ( v136 < 0x10 )
      {
        if ( __eh34_unwind(3) )
        {
unwind_state_3:
          sub_140005EB0(v137);
          __eh34_continue_unwinding(3, 2);
        }
        __eh34_exit_wind_state(3, 2);
        if ( __eh34_unwind(2) )
        {
unwind_state_2:
          sub_140005EB0(v131);
          __eh34_continue_unwinding(2, 1);
        }
        __eh34_exit_wind_state(2, 1);
        if ( __eh34_unwind(1) )
        {
unwind_state_1:
          sub_140005EB0(v128);
          __eh34_propagate_exception_into_caller(1, -1);
        }
        __eh34_exit_wind_state(1, -1);
      }
      else
      {
        if ( __eh34_unwind(3) )
          goto unwind_state_3;
        __eh34_exit_wind_state(3, 2);
        if ( __eh34_unwind(2) )
          goto unwind_state_2;
        __eh34_exit_wind_state(2, 1);
        if ( __eh34_unwind(1) )
          goto unwind_state_1;
        __eh34_exit_wind_state(1, -1);
        v39 = (void *)v134[0];
        if ( v136 + 1 >= 0x1000 )
        {
          v39 = *(void **)(v134[0] - 8LL);
          if ( (unsigned __int64)(v134[0] - (_QWORD)v39 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v39);
      }
      v135 = 0;
      v136 = 15;
      LOBYTE(v134[0]) = 0;
      if ( v139 >= 0x10 )
      {
        v40 = (void *)v137[0];
        if ( v139 + 1 >= 0x1000 )
        {
          v40 = *(void **)(v137[0] - 8LL);
          if ( (unsigned __int64)(v137[0] - (_QWORD)v40 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v40);
      }
      v138 = 0;
      v139 = 15;
      LOBYTE(v137[0]) = 0;
      if ( v133 >= 0x10 )
      {
        v41 = (void *)v131[0];
        if ( v133 + 1 >= 0x1000 )
        {
          v41 = *(void **)(v131[0] - 8LL);
          if ( (unsigned __int64)(v131[0] - (_QWORD)v41 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v41);
      }
      v132 = 0;
      v133 = 15;
      LOBYTE(v131[0]) = 0;
      if ( v130 >= 0x10 )
      {
        v42 = (void *)v128[0];
        if ( v130 + 1 >= 0x1000 )
        {
          v42 = *(void **)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - (_QWORD)v42 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v42);
      }
      v7 += 20;
      v22 += 20;
    }
    while ( v7 != v8 );
  }
  v43 = (_QWORD *)a1[11];
  v44 = (_QWORD *)a1[12];
  if ( v43 != v44 )
  {
    v45 = v43 + 15;
    do
    {
      sub_140006630(std::cout, "  ");
      v46 = 0;
      v47 = *(v45 - 13);
      if ( v47 != 0 )
      {
        v48 = v43;
        if ( *(v45 - 12) >= 0x10u )
          v48 = (_QWORD *)*v43;
        v49 = sub_140007E60(std::cout, v48, v47);
        sub_140006630(v49, ", ");
        v46 = 4;
      }
      v50 = v45 - 11;
      if ( *(v45 - 8) >= 0x10u )
        v50 = (_QWORD *)*v50;
      sub_140007E60(std::cout, v50, *(v45 - 9));
      v51 = (_QWORD *)sub_140005F10(v131, v6 - (*(v45 - 9) + v46));
      __eh34_enter_wind_state(-1, 0);
      v52 = v51;
      if ( v51[3] >= 0x10u )
        v52 = (_QWORD *)*v51;
      sub_140007E60(std::cout, v52, v51[2]);
      if ( __eh34_unwind(0) )
        goto unwind_state_0;
      __eh34_exit_wind_state(0, -1);
      if ( v133 >= 0x10 )
      {
        v53 = (void *)v131[0];
        if ( v133 + 1 >= 0x1000 )
        {
          v53 = *(void **)(v131[0] - 8LL);
          if ( (unsigned __int64)(v131[0] - (_QWORD)v53 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v53);
      }
      v54 = v45 - 3;
      v55 = v45 - 3;
      if ( *v45 >= 0x10u )
        v55 = (_QWORD *)*v54;
      if ( *(v45 - 1) != 4 )
        goto LABEL_89;
      v56 = 0;
      while ( 1 )
      {
        v57 = *((_BYTE *)v55 + v56++);
        if ( v57 != aBool[v56 - 1] )
          break;
        if ( v56 == 4 )
        {
          v58 = 0;
          goto LABEL_88;
        }
      }
      v58 = v57 < (unsigned __int8)aBool[v56 - 1] ? -1 : 1;
LABEL_88:
      if ( v58 != 0 )
      {
LABEL_89:
        v59 = sub_140006630(std::cout, "(");
        if ( *v45 >= 0x10u )
          v54 = (_QWORD *)*v54;
        v60 = sub_140007E60(v59, v54, *(v45 - 1));
        sub_140006630(v60, ") ");
      }
      *(_OWORD *)v128 = 0;
      v129 = 0;
      v130 = 0;
      sub_1400077F0(v128, "\n", 1);
      __eh34_enter_wind_state(-1, 1);
      v61 = sub_140005F10(v134, v6 + 2);
      __eh34_enter_wind_state(1, 5);
      v63 = sub_140006860(v137, v62, v61);
      __eh34_enter_wind_state(5, 6);
      v65 = (_QWORD *)sub_140003D40(v64, v131, v45 - 7, v128, v63);
      __eh34_enter_wind_state(6, 7);
      v66 = v65;
      if ( v65[3] >= 0x10u )
        v66 = (_QWORD *)*v65;
      v67 = sub_140007E60(std::cout, v66, v65[2]);
      LOBYTE(v68) = 10;
      sub_140006990(v67, v68);
      if ( __eh34_unwind(7) )
      {
unwind_state_7:
        sub_140005EB0(v131);
        __eh34_continue_unwinding(7, 6);
      }
      __eh34_exit_wind_state(7, 6);
      if ( v133 >= 0x10 )
      {
        v69 = (void *)v131[0];
        if ( v133 + 1 >= 0x1000 )
        {
          v69 = *(void **)(v131[0] - 8LL);
          if ( (unsigned __int64)(v131[0] - (_QWORD)v69 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v69);
      }
      v132 = 0;
      v133 = 15;
      LOBYTE(v131[0]) = 0;
      if ( v139 >= 0x10 )
      {
        v70 = (void *)v137[0];
        if ( v139 + 1 >= 0x1000 )
        {
          v70 = *(void **)(v137[0] - 8LL);
          if ( (unsigned __int64)(v137[0] - (_QWORD)v70 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v70);
      }
      v138 = 0;
      v139 = 15;
      LOBYTE(v137[0]) = 0;
      if ( v136 >= 0x10 )
      {
        v71 = (void *)v134[0];
        if ( v136 + 1 >= 0x1000 )
        {
          v71 = *(void **)(v134[0] - 8LL);
          if ( (unsigned __int64)(v134[0] - (_QWORD)v71 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v71);
      }
      v135 = 0;
      v136 = 15;
      LOBYTE(v134[0]) = 0;
      if ( v130 >= 0x10 )
      {
        v72 = (void *)v128[0];
        if ( v130 + 1 >= 0x1000 )
        {
          v72 = *(void **)(v128[0] - 8LL);
          if ( (unsigned __int64)(v128[0] - (_QWORD)v72 - 8LL) > 0x1F )
            invalid_parameter_noinfo_noreturn();
        }
        j_j_free(v72);
      }
      if ( __eh34_unwind(6) )
      {
unwind_state_6:
        sub_140005EB0(v137);
        __eh34_continue_unwinding(6, 5);
      }
      __eh34_exit_wind_state(6, 5);
      if ( __eh34_unwind(5) )
      {
unwind_state_5:
        sub_140005EB0(v134);
        __eh34_continue_unwinding(5, 1);
      }
      __eh34_exit_wind_state(5, 1);
      if ( __eh34_unwind(1) )
        goto unwind_state_1;
      __eh34_exit_wind_state(1, -1);
      v43 += 20;
      v45 += 20;
    }
    while ( v43 != v44 );
  }
  if ( (__int64)(a1[23] - a1[22]) >> 7 != 0 )
  {
    sub_140006630(std::cout, "\nNamed arguments:\n");
    v73 = (_QWORD *)a1[22];
    v74 = (_QWORD *)a1[23];
    v75 = v73;
    if ( v73 != v74 )
    {
      v76 = 0;
      v77 = 0;
      do
      {
        if ( v76 < v75[2] )
          v77 = v75[2];
        v76 = v77;
        v75 += 16;
      }
      while ( v75 != v74 );
      if ( v77 < 0x19 )
        v76 = 25;
      v78 = v73 + 10;
      do
      {
        sub_140006630(std::cout, "  ");
        v79 = v73;
        if ( *(v78 - 7) >= 0x10u )
          v79 = (_QWORD *)*v73;
        sub_140007E60(std::cout, v79, *(v78 - 8));
        v80 = (_QWORD *)sub_140005F10(v131, v76 - *(v78 - 8));
        __eh34_enter_wind_state(-1, 0);
        v81 = v80;
        if ( v80[3] >= 0x10u )
          v81 = (_QWORD *)*v80;
        v82 = sub_140007E60(std::cout, v81, v80[2]);
        v83 = sub_140006630(v82, "(");
        v84 = v78 - 2;
        if ( v78[1] >= 0x10u )
          v84 = (_QWORD *)*v84;
        v85 = sub_140007E60(v83, v84, *v78);
        sub_140006630(v85, ") ");
        if ( __eh34_unwind(0) )
          goto unwind_state_0;
        __eh34_exit_wind_state(0, -1);
        if ( v133 < 0x10 )
        {
          __eh34_enter_wind_state(-1, 1);
        }
        else
        {
          __eh34_enter_wind_state(-1, 1);
          v86 = (void *)v131[0];
          if ( v133 + 1 >= 0x1000 )
          {
            v86 = *(void **)(v131[0] - 8LL);
            if ( (unsigned __int64)(v131[0] - (_QWORD)v86 - 8LL) > 0x1F )
            {
              __eh34_enter_wind_state(1, 5);
              __eh34_enter_wind_state(5, 6);
              invalid_parameter_noinfo_noreturn();
            }
          }
          j_j_free(v86);
        }
        *(_OWORD *)v128 = 0;
        v129 = 0;
        v130 = 0;
        sub_1400077F0(v128, "\n", 1);
        v87 = sub_140005F10(v134, v76 + 2);
        __eh34_enter_wind_state(1, 5);
        v89 = sub_140006860(v137, v88, v87);
        __eh34_enter_wind_state(5, 6);
        v91 = (_QWORD *)sub_140003D40(v90, v131, v78 - 6, v128, v89);
        __eh34_enter_wind_state(6, 7);
        v92 = v91;
        if ( v91[3] >= 0x10u )
          v92 = (_QWORD *)*v91;
        v93 = sub_140007E60(std::cout, v92, v91[2]);
        LOBYTE(v94) = 10;
        sub_140006990(v93, v94);
        if ( __eh34_unwind(7) )
          goto unwind_state_7;
        __eh34_exit_wind_state(7, 6);
        if ( v133 >= 0x10 )
        {
          v95 = (void *)v131[0];
          if ( v133 + 1 >= 0x1000 )
          {
            v95 = *(void **)(v131[0] - 8LL);
            if ( (unsigned __int64)(v131[0] - (_QWORD)v95 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v95);
        }
        v132 = 0;
        v133 = 15;
        LOBYTE(v131[0]) = 0;
        if ( v139 >= 0x10 )
        {
          v96 = (void *)v137[0];
          if ( v139 + 1 >= 0x1000 )
          {
            v96 = *(void **)(v137[0] - 8LL);
            if ( (unsigned __int64)(v137[0] - (_QWORD)v96 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v96);
        }
        v138 = 0;
        v139 = 15;
        LOBYTE(v137[0]) = 0;
        if ( v136 >= 0x10 )
        {
          v97 = (void *)v134[0];
          if ( v136 + 1 >= 0x1000 )
          {
            v97 = *(void **)(v134[0] - 8LL);
            if ( (unsigned __int64)(v134[0] - (_QWORD)v97 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v97);
        }
        v135 = 0;
        v136 = 15;
        LOBYTE(v134[0]) = 0;
        if ( v130 >= 0x10 )
        {
          v98 = (void *)v128[0];
          if ( v130 + 1 >= 0x1000 )
          {
            v98 = *(void **)(v128[0] - 8LL);
            if ( (unsigned __int64)(v128[0] - (_QWORD)v98 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v98);
        }
        if ( __eh34_unwind(6) )
          goto unwind_state_6;
        __eh34_exit_wind_state(6, 5);
        if ( __eh34_unwind(5) )
          goto unwind_state_5;
        __eh34_exit_wind_state(5, 1);
        if ( __eh34_unwind(1) )
          goto unwind_state_1;
        __eh34_exit_wind_state(1, -1);
        v73 += 16;
        v78 += 16;
      }
      while ( v73 != v74 );
    }
  }
  if ( (__int64)(a1[26] - a1[25]) >> 7 != 0 )
  {
    sub_140006630(std::cout, "\nPosition arguments:\n");
    v99 = (_QWORD *)a1[25];
    v100 = (_QWORD *)a1[26];
    v101 = v99;
    if ( v99 != v100 )
    {
      v102 = nullptr;
      v103 = 0;
      do
      {
        if ( v5 < v101[2] )
          v103 = v101[2];
        v5 = v103;
        v101 += 16;
      }
      while ( v101 != v100 );
      if ( v103 < 0x19 )
        v5 = 25;
      v104 = v99 + 10;
      do
      {
        sub_140006630(std::cout, "  ");
        v105 = v99;
        if ( *(v104 - 7) >= 0x10u )
          v105 = (_QWORD *)*v99;
        sub_140007E60(std::cout, v105, *(v104 - 8));
        v106 = v5 - *(v104 - 8);
        *(_OWORD *)v128 = 0;
        v129 = 0;
        v130 = 0;
        if ( v106 > 0x7FFFFFFFFFFFFFFFLL )
          sub_140001230();
        v130 = 15;
        if ( v106 >= 0x10 )
        {
          v107 = v106 | 0xF;
          if ( (v106 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
          {
            if ( v107 < 0x16 )
              v107 = 22;
          }
          else
          {
            v107 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v108 = v107 + 1;
          if ( v107 == -1 )
            v108 = -1;
          if ( v108 < 0x1000 )
          {
            if ( v108 != 0 )
              v102 = operator new(v108);
          }
          else
          {
            if ( v108 + 39 < v108 )
              sub_140001170();
            v109 = operator new(v108 + 39);
            if ( v109 == nullptr )
            {
LABEL_250:
              __eh34_enter_wind_state(-1, 1);
              __eh34_enter_wind_state(1, 5);
              __eh34_enter_wind_state(5, 6);
              invalid_parameter_noinfo_noreturn();
            }
            v102 = (_QWORD *)(((unsigned __int64)v109 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
            *(v102 - 1) = v109;
          }
          v128[0] = v102;
          v129 = v106;
          v130 = v107;
          memset(v102, 32, v106);
          *((_BYTE *)v102 + v106) = 0;
          v102 = nullptr;
        }
        else
        {
          v129 = v106;
          memset(v128, 32, v106);
          *((_BYTE *)v128 + v106) = 0;
        }
        __eh34_enter_wind_state(-1, 1);
        v110 = v128;
        if ( v130 >= 0x10 )
          v110 = (_QWORD *)v128[0];
        v111 = sub_140007E60(std::cout, v110, v129);
        v112 = sub_140006630(v111, "(");
        v113 = v104 - 2;
        if ( v104[1] >= 0x10u )
          v113 = (_QWORD *)*v113;
        v114 = sub_140007E60(v112, v113, *v104);
        sub_140006630(v114, ") ");
        if ( __eh34_unwind(1) )
          goto unwind_state_1;
        __eh34_exit_wind_state(1, -1);
        if ( v130 >= 0x10 )
        {
          v115 = (void *)v128[0];
          if ( v130 + 1 >= 0x1000 )
          {
            v115 = *(void **)(v128[0] - 8LL);
            if ( (unsigned __int64)(v128[0] - (_QWORD)v115 - 8LL) > 0x1F )
              goto LABEL_250;
          }
          j_j_free(v115);
        }
        *(_OWORD *)v128 = 0;
        v129 = 0;
        v130 = 0;
        sub_1400077F0(v128, "\n", 1);
        __eh34_enter_wind_state(-1, 1);
        v116 = sub_140005F10(v134, v5 + 2);
        __eh34_enter_wind_state(1, 5);
        v118 = sub_140006860(v137, v117, v116);
        __eh34_enter_wind_state(5, 6);
        v120 = (_QWORD *)sub_140003D40(v119, v131, v104 - 6, v128, v118);
        __eh34_enter_wind_state(6, 7);
        v121 = v120;
        if ( v120[3] >= 0x10u )
          v121 = (_QWORD *)*v120;
        v122 = sub_140007E60(std::cout, v121, v120[2]);
        LOBYTE(v123) = 10;
        sub_140006990(v122, v123);
        if ( __eh34_unwind(7) )
          goto unwind_state_7;
        __eh34_exit_wind_state(7, 6);
        if ( v133 >= 0x10 )
        {
          v124 = (void *)v131[0];
          if ( v133 + 1 >= 0x1000 )
          {
            v124 = *(void **)(v131[0] - 8LL);
            if ( (unsigned __int64)(v131[0] - (_QWORD)v124 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v124);
        }
        v132 = 0;
        v133 = 15;
        LOBYTE(v131[0]) = 0;
        if ( v139 >= 0x10 )
        {
          v125 = (void *)v137[0];
          if ( v139 + 1 >= 0x1000 )
          {
            v125 = *(void **)(v137[0] - 8LL);
            if ( (unsigned __int64)(v137[0] - (_QWORD)v125 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v125);
        }
        v138 = 0;
        v139 = 15;
        LOBYTE(v137[0]) = 0;
        if ( v136 >= 0x10 )
        {
          v126 = (void *)v134[0];
          if ( v136 + 1 >= 0x1000 )
          {
            v126 = *(void **)(v134[0] - 8LL);
            if ( (unsigned __int64)(v134[0] - (_QWORD)v126 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v126);
        }
        v135 = 0;
        v136 = 15;
        LOBYTE(v134[0]) = 0;
        if ( v130 >= 0x10 )
        {
          v127 = (void *)v128[0];
          if ( v130 + 1 >= 0x1000 )
          {
            v127 = *(void **)(v128[0] - 8LL);
            if ( (unsigned __int64)(v128[0] - (_QWORD)v127 - 8LL) > 0x1F )
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v127);
        }
        if ( __eh34_unwind(6) )
          goto unwind_state_6;
        __eh34_exit_wind_state(6, 5);
        if ( __eh34_unwind(5) )
          goto unwind_state_5;
        __eh34_exit_wind_state(5, 1);
        if ( __eh34_unwind(1) )
          goto unwind_state_1;
        __eh34_exit_wind_state(1, -1);
        v99 += 16;
        v104 += 16;
      }
      while ( v99 != v100 );
    }
  }
}

