// resizecmdwindow.exe @ 0x1400044c0 size=3825

int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v5; // esi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  _QWORD *v15; // rax
  SHORT v16; // r13
  void *v17; // rcx
  SHORT v18; // r12
  void *v19; // rcx
  __int16 v20; // di
  void *v21; // rcx
  __int16 v22; // bx
  void *v23; // rcx
  SHORT v24; // r15
  void *v25; // rcx
  SHORT v26; // r14
  void *v27; // rcx
  char v28; // bl
  void *v29; // rcx
  DWORD LastError; // eax
  HANDLE StdHandle; // rbx
  void *v32; // rcx
  void *v33; // rcx
  void *v35[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+40h] [rbp-C0h]
  COORD dwSize; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v43; // [rsp+68h] [rbp-98h] BYREF
  __int128 v44; // [rsp+78h] [rbp-88h]
  __int128 v45; // [rsp+88h] [rbp-78h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  __int128 v51; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int128 v54; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-8h]
  __int64 v56; // [rsp+100h] [rbp+0h]
  __int128 v57; // [rsp+108h] [rbp+8h] BYREF
  __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int128 v60; // [rsp+128h] [rbp+28h] BYREF
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  __int128 v63; // [rsp+148h] [rbp+48h] BYREF
  __int64 v64; // [rsp+158h] [rbp+58h]
  __int64 v65; // [rsp+160h] [rbp+60h]
  __int128 v66; // [rsp+168h] [rbp+68h] BYREF
  __int64 v67; // [rsp+178h] [rbp+78h]
  __int64 v68; // [rsp+180h] [rbp+80h]
  __int128 v69; // [rsp+188h] [rbp+88h] BYREF
  __int64 v70; // [rsp+198h] [rbp+98h]
  __int64 v71; // [rsp+1A0h] [rbp+A0h]
  __int128 v72; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  __int64 v74; // [rsp+1C0h] [rbp+C0h]
  __int128 v75; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v76; // [rsp+1D8h] [rbp+D8h]
  __int64 v77; // [rsp+1E0h] [rbp+E0h]
  __int128 v78; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v79; // [rsp+1F8h] [rbp+F8h]
  __int64 v80; // [rsp+200h] [rbp+100h]
  __int128 v81; // [rsp+208h] [rbp+108h] BYREF
  __int64 v82; // [rsp+218h] [rbp+118h]
  __int64 v83; // [rsp+220h] [rbp+120h]
  __int128 v84; // [rsp+228h] [rbp+128h] BYREF
  __int64 v85; // [rsp+238h] [rbp+138h]
  __int64 v86; // [rsp+240h] [rbp+140h]
  __int128 v87; // [rsp+248h] [rbp+148h] BYREF
  __int64 v88; // [rsp+258h] [rbp+158h]
  __int64 v89; // [rsp+260h] [rbp+160h]
  __int128 v90; // [rsp+268h] [rbp+168h] BYREF
  __int64 v91; // [rsp+278h] [rbp+178h]
  __int64 v92; // [rsp+280h] [rbp+180h]
  __int128 v93; // [rsp+288h] [rbp+188h] BYREF
  __int64 v94; // [rsp+298h] [rbp+198h]
  __int64 v95; // [rsp+2A0h] [rbp+1A0h]
  __int128 v96; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v97; // [rsp+2B8h] [rbp+1B8h]
  __int64 v98; // [rsp+2C0h] [rbp+1C0h]
  __int128 v99; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v100; // [rsp+2D8h] [rbp+1D8h]
  __int64 v101; // [rsp+2E0h] [rbp+1E0h]
  __int128 v102; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v103; // [rsp+2F8h] [rbp+1F8h]
  __int64 v104; // [rsp+300h] [rbp+200h]
  __int128 v105; // [rsp+308h] [rbp+208h] BYREF
  __int64 v106; // [rsp+318h] [rbp+218h]
  __int64 v107; // [rsp+320h] [rbp+220h]
  __int128 v108; // [rsp+328h] [rbp+228h] BYREF
  __int64 v109; // [rsp+338h] [rbp+238h]
  __int64 v110; // [rsp+340h] [rbp+240h]
  __int128 v111; // [rsp+348h] [rbp+248h] BYREF
  __int64 v112; // [rsp+358h] [rbp+258h]
  __int64 v113; // [rsp+360h] [rbp+260h]
  __int128 v114; // [rsp+368h] [rbp+268h] BYREF
  __int64 v115; // [rsp+378h] [rbp+278h]
  __int64 v116; // [rsp+380h] [rbp+280h]
  __int128 v117; // [rsp+388h] [rbp+288h] BYREF
  __int64 v118; // [rsp+398h] [rbp+298h]
  __int64 v119; // [rsp+3A0h] [rbp+2A0h]
  __int128 v120; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v121; // [rsp+3B8h] [rbp+2B8h]
  __int64 v122; // [rsp+3C0h] [rbp+2C0h]
  __int128 v123; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v124; // [rsp+3D8h] [rbp+2D8h]
  __int64 v125; // [rsp+3E0h] [rbp+2E0h]
  __int128 *v126; // [rsp+3E8h] [rbp+2E8h]
  __int128 *v127; // [rsp+3F8h] [rbp+2F8h]
  void **v128; // [rsp+400h] [rbp+300h]
  __int128 *v129; // [rsp+408h] [rbp+308h]
  __int128 *v130; // [rsp+410h] [rbp+310h]
  __int128 *v131; // [rsp+418h] [rbp+318h]
  __int128 *v132; // [rsp+420h] [rbp+320h]
  __int128 *v133; // [rsp+428h] [rbp+328h]
  __int128 *v134; // [rsp+430h] [rbp+330h]
  __int128 *v135; // [rsp+438h] [rbp+338h]
  __int128 *v136; // [rsp+440h] [rbp+340h]
  __int128 *v137; // [rsp+448h] [rbp+348h]
  __int128 *v138; // [rsp+450h] [rbp+350h]
  __int128 *v139; // [rsp+458h] [rbp+358h]
  __int128 *v140; // [rsp+460h] [rbp+360h]
  __int128 *v141; // [rsp+468h] [rbp+368h]
  __int128 *v142; // [rsp+470h] [rbp+370h]
  __int128 *v143; // [rsp+478h] [rbp+378h]
  __int128 *v144; // [rsp+480h] [rbp+380h]
  __int128 *v145; // [rsp+488h] [rbp+388h]
  __int128 *v146; // [rsp+490h] [rbp+390h]
  SHELLEXECUTEINFOW *p_pExecInfo; // [rsp+498h] [rbp+398h]
  __int128 *v148; // [rsp+4A0h] [rbp+3A0h]
  __int128 *v149; // [rsp+4A8h] [rbp+3A8h]
  __int128 *v150; // [rsp+4B0h] [rbp+3B0h]
  __int128 *v151; // [rsp+4B8h] [rbp+3B8h]
  _QWORD *v152; // [rsp+4C0h] [rbp+3C0h]
  __int128 *v153; // [rsp+4C8h] [rbp+3C8h]
  __int128 *v154; // [rsp+4D0h] [rbp+3D0h]
  _QWORD v155[9]; // [rsp+4D8h] [rbp+3D8h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+520h] [rbp+420h] BYREF
  SMALL_RECT ConsoleWindow; // [rsp+590h] [rbp+490h] BYREF
  void *v158[28]; // [rsp+5A0h] [rbp+4A0h] BYREF
  struct _CONSOLE_SCREEN_BUFFER_INFOEX ConsoleScreenBufferInfoEx; // [rsp+680h] [rbp+580h] BYREF
  WCHAR Filename[264]; // [rsp+6E0h] [rbp+5E0h] BYREF

  memset(v158, 0, sizeof(v158));
  v51 = 0;
  v5 = 0;
  v52 = 0;
  v53 = 0;
  sub_1400077F0(&v51, "A tool to open cmd with specified settings", 42);
  sub_1400017B0((__int64)v158, (__int64)&v51);
  __wind
  {
    v42 = 720;
    v127 = &v117;
    v126 = &v120;
    v128 = v35;
    v41 = 1024;
    v129 = &v111;
    v130 = &v114;
    v131 = &v48;
    v40 = 40;
    v133 = &v102;
    v134 = &v105;
    v135 = &v108;
    v39 = 40;
    v136 = &v93;
    v137 = &v96;
    v138 = &v99;
    v38 = 0;
    v139 = &v84;
    v140 = &v87;
    v141 = &v90;
    dwSize = 0;
    v142 = &v75;
    v143 = &v78;
    v144 = &v81;
    v145 = &v69;
    v146 = &v72;
    v151 = &v123;
    p_pExecInfo = &pExecInfo;
    v148 = &v63;
    v149 = &v45;
    v150 = &v66;
    v152 = v155;
    v153 = &v54;
    v154 = &v57;
    v132 = &v60;
    v117 = 0;
    v118 = 0;
    v119 = 0;
    sub_1400077F0(&v117, "set cmd window's buffer size's y.\ndefault is 720", 48);
    __wind
    {
      v120 = 0;
      v121 = 0;
      v122 = 0;
      sub_1400077F0(&v120, "--buffery", 9);
      __wind
      {
        *(_OWORD *)v35 = 0;
        v36 = 0u;
        sub_1400077F0(v35, "-h", 2);
        __wind
        {
          v111 = 0;
          v112 = 0;
          v113 = 0;
          sub_1400077F0(&v111, "set cmd window's buffer size's x.\ndefault is 1024", 49);
          __wind
          {
            v114 = 0;
            v115 = 0;
            v116 = 0;
            sub_1400077F0(&v114, "--bufferx", 9);
            __wind
            {
              v48 = 0;
              v49 = 0;
              v50 = 0;
              sub_1400077F0(&v48, "-w", 2);
              __wind
              {
                v102 = 0;
                v103 = 0;
                v104 = 0;
                sub_1400077F0(&v102, "set cmd window's bottom position.\ndefault is 40", 47);
                __wind
                {
                  v105 = 0;
                  v106 = 0;
                  v107 = 0;
                  sub_1400077F0(&v105, "--bottom", 8);
                  __wind
                  {
                    v108 = 0;
                    v109 = 0;
                    v110 = 0;
                    sub_1400077F0(&v108, "-b", 2);
                    __wind
                    {
                      v93 = 0;
                      v94 = 0;
                      v95 = 0;
                      sub_1400077F0(&v93, "set cmd window's right position.\ndefault is 40", 46);
                      __wind
                      {
                        v96 = 0;
                        v97 = 0;
                        v98 = 0;
                        sub_1400077F0(&v96, "--right", 7);
                        __wind
                        {
                          v99 = 0;
                          v100 = 0;
                          v101 = 0;
                          sub_1400077F0(&v99, "-r", 2);
                          __wind
                          {
                            v84 = 0;
                            v85 = 0;
                            v86 = 0;
                            sub_1400077F0(&v84, "set cmd window's top position.\ndefault is 0", 43);
                            __wind
                            {
                              v87 = 0;
                              v88 = 0;
                              v89 = 0;
                              sub_1400077F0(&v87, "--top", 5);
                              __wind
                              {
                                v90 = 0;
                                v91 = 0;
                                v92 = 0;
                                sub_1400077F0(&v90, "-t", 2);
                                __wind
                                {
                                  v75 = 0;
                                  v76 = 0;
                                  v77 = 0;
                                  sub_1400077F0(&v75, "set cmd window's left position.\ndefault is 0", 44);
                                  __wind
                                  {
                                    v78 = 0;
                                    v79 = 0;
                                    v80 = 0;
                                    sub_1400077F0(&v78, "--left", 6);
                                    __wind
                                    {
                                      v81 = 0;
                                      v82 = 0;
                                      v83 = 0;
                                      sub_1400077F0(&v81, "-l", 2);
                                      __wind
                                      {
                                        v69 = 0;
                                        v70 = 0;
                                        v71 = 0;
                                        sub_1400077F0(&v69, "run bat file as admin or not.", 29);
                                        __wind
                                        {
                                          v72 = 0;
                                          v73 = 0;
                                          v74 = 0;
                                          sub_1400077F0(&v72, "--admin", 7);
                                          __wind
                                          {
                                            v123 = 0;
                                            v124 = 0;
                                            v125 = 0;
                                            sub_1400077F0(&v123, "-a", 2);
                                            __wind
                                            {
                                              *(_QWORD *)&pExecInfo.cbSize = ___7___Func_impl_no_alloc_V_lambda_2___1__main__YAHHQEAPEBD_Z_X__V_std__6B_;
                                              pExecInfo.hInstApp = (HINSTANCE)&pExecInfo;
                                              v63 = 0;
                                              v64 = 0;
                                              v65 = 0;
                                              __wind
                                              {
                                                sub_1400077F0(&v63, "show version info", 17);
                                                v45 = 0;
                                                v46 = 0;
                                                v47 = 0;
                                                __wind
                                                {
                                                  sub_1400077F0(&v45, "--version", 9);
                                                  v66 = 0;
                                                  v67 = 0;
                                                  v68 = 0;
                                                  __wind
                                                  {
                                                    sub_1400077F0(&v66, "-v", 2);
                                                    v155[0] = ___7___Func_impl_no_alloc_V_lambda_1___1__main__YAHHQEAPEBD_Z_X__V_std__6B_;
                                                    v155[1] = v158;
                                                    v155[7] = v155;
                                                    v54 = 0;
                                                    v55 = 0;
                                                    v56 = 0;
                                                    __wind
                                                    {
                                                      __wind
                                                      {
                                                        sub_1400077F0(&v54, "show this help message", 22);
                                                        v57 = 0;
                                                        v58 = 0;
                                                        v59 = 0;
                                                        __wind
                                                        {
                                                          sub_1400077F0(&v57, "--help", 6);
                                                          v60 = 0;
                                                          v61 = 0;
                                                          v62 = 0;
                                                          __wind
                                                          {
                                                            sub_1400077F0(&v60, "-?", 2);
                                                            v43 = 0;
                                                            v44 = 0u;
                                                            __wind
                                                            {
                                                              sub_1400077F0(&v43, "opencmd", 7);
                                                              if ( v158[7] >= (void *)0x10 )
                                                              {
                                                                v6 = v158[4];
                                                                if ( (unsigned __int64)v158[7] + 1 >= 0x1000 )
                                                                {
                                                                  v6 = *((void **)v158[4] - 1);
                                                                  if ( (unsigned __int64)((char *)v158[4]
                                                                                        - (char *)v6
                                                                                        - 8) > 0x1F )
                                                                    invalid_parameter_noinfo_noreturn();
                                                                }
                                                                j_j_free(v6);
                                                              }
                                                              *(_OWORD *)&v158[4] = v43;
                                                              *(_OWORD *)&v158[6] = v44;
                                                            }
                                                            __unwind
                                                            {
                                                              sub_140005EB0(v132);
                                                            }
                                                          }
                                                          __unwind
                                                          {
                                                            sub_140005EB0(v154);
                                                          }
                                                        }
                                                        __unwind
                                                        {
                                                          sub_140005EB0(v153);
                                                        }
                                                      }
                                                      __unwind
                                                      {
                                                        sub_1400014E0((__int64)v152, (__int64)&v60);
                                                      }
                                                      v7 = sub_1400028F0(
                                                             (__int64)v158,
                                                             (_QWORD **)&v60,
                                                             (__int64)&v57,
                                                             &v54,
                                                             (__int64)v155);
                                                    }
                                                    __unwind
                                                    {
                                                      sub_140005EB0(v150);
                                                    }
                                                  }
                                                  __unwind
                                                  {
                                                    sub_140005EB0(v149);
                                                  }
                                                }
                                                __unwind
                                                {
                                                  sub_140005EB0(v148);
                                                }
                                              }
                                              __unwind
                                              {
                                                sub_1400014E0((__int64)p_pExecInfo, (__int64)&v66);
                                              }
                                              v8 = sub_1400028F0(
                                                     v7,
                                                     (_QWORD **)&v66,
                                                     (__int64)&v45,
                                                     &v63,
                                                     (__int64)&pExecInfo);
                                            }
                                            __unwind
                                            {
                                              sub_140005EB0(v151);
                                            }
                                          }
                                          __unwind
                                          {
                                            sub_140005EB0(v146);
                                          }
                                        }
                                        __unwind
                                        {
                                          sub_140005EB0(v145);
                                        }
                                        v9 = sub_140002B30(v8, (_QWORD **)&v123, (__int64)&v72, &v69);
                                      }
                                      __unwind
                                      {
                                        sub_140005EB0(v144);
                                      }
                                    }
                                    __unwind
                                    {
                                      sub_140005EB0(v143);
                                    }
                                  }
                                  __unwind
                                  {
                                    sub_140005EB0(v142);
                                  }
                                  v10 = sub_140007180(
                                          v9,
                                          (unsigned int)&v81,
                                          (unsigned int)&v78,
                                          (unsigned int)&v75,
                                          (__int64)&dwSize);
                                }
                                __unwind
                                {
                                  sub_140005EB0(v141);
                                }
                              }
                              __unwind
                              {
                                sub_140005EB0(v140);
                              }
                            }
                            __unwind
                            {
                              sub_140005EB0(v139);
                            }
                            v11 = sub_140007180(
                                    v10,
                                    (unsigned int)&v90,
                                    (unsigned int)&v87,
                                    (unsigned int)&v84,
                                    (__int64)&v38);
                          }
                          __unwind
                          {
                            sub_140005EB0(v138);
                          }
                        }
                        __unwind
                        {
                          sub_140005EB0(v137);
                        }
                      }
                      __unwind
                      {
                        sub_140005EB0(v136);
                      }
                      v12 = sub_140007180(
                              v11,
                              (unsigned int)&v99,
                              (unsigned int)&v96,
                              (unsigned int)&v93,
                              (__int64)&v39);
                    }
                    __unwind
                    {
                      sub_140005EB0(v135);
                    }
                  }
                  __unwind
                  {
                    sub_140005EB0(v134);
                  }
                }
                __unwind
                {
                  sub_140005EB0(v133);
                }
                v13 = sub_140007180(v12, (unsigned int)&v108, (unsigned int)&v105, (unsigned int)&v102, (__int64)&v40);
              }
              __unwind
              {
                sub_140005EB0(v131);
              }
            }
            __unwind
            {
              sub_140005EB0(v130);
            }
          }
          __unwind
          {
            sub_140005EB0(v129);
          }
          v14 = sub_140007180(v13, (unsigned int)&v48, (unsigned int)&v114, (unsigned int)&v111, (__int64)&v41);
        }
        __unwind
        {
          sub_140005EB0(v128);
        }
      }
      __unwind
      {
        sub_140005EB0(v126);
      }
    }
    __unwind
    {
      sub_140005EB0(v127);
    }
    v15 = (_QWORD *)sub_140007180(v14, (unsigned int)v35, (unsigned int)&v120, (unsigned int)&v117, (__int64)&v42);
    sub_140002D40(v15, argc, (void **)argv);
    *(_OWORD *)v35 = 0;
    v36 = 0;
    sub_1400077F0(v35, "--left", 6);
    __eh34_enter_wind_state(0, 30);
    v16 = sub_140006E60(v158, v35);
    if ( __eh34_unwind(30) )
    {
unwind_state_30:
      sub_140005EB0(v35);
      __eh34_continue_unwinding(30, 0);
    }
    __eh34_exit_wind_state(30, 0);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v17 = v35[0];
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v17 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v17 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v17);
    }
    *(_OWORD *)v35 = 0;
    v36 = 0;
    sub_1400077F0(v35, "--top", 5);
    __eh34_enter_wind_state(0, 30);
    v18 = sub_140006E60(v158, v35);
    if ( __eh34_unwind(30) )
      goto unwind_state_30;
    __eh34_exit_wind_state(30, 0);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v19 = v35[0];
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v19 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v19 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v19);
    }
    *(_OWORD *)v35 = 0;
    v36 = 0;
    sub_1400077F0(v35, "--right", 7);
    __eh34_enter_wind_state(0, 30);
    v20 = sub_140006E60(v158, v35);
    if ( __eh34_unwind(30) )
      goto unwind_state_30;
    __eh34_exit_wind_state(30, 0);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v21 = v35[0];
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v21 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v21 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v21);
    }
    *(_OWORD *)v35 = 0;
    v36 = 0;
    sub_1400077F0(v35, "--bottom", 8);
    __eh34_enter_wind_state(0, 30);
    v22 = sub_140006E60(v158, v35);
    if ( __eh34_unwind(30) )
      goto unwind_state_30;
    __eh34_exit_wind_state(30, 0);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v23 = v35[0];
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v23 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v23 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v23);
    }
    *(_OWORD *)v35 = 0;
    v36 = 0;
    sub_1400077F0(v35, "--bufferx", 9);
    __eh34_enter_wind_state(0, 30);
    v24 = sub_140006E60(v158, v35);
    if ( __eh34_unwind(30) )
      goto unwind_state_30;
    __eh34_exit_wind_state(30, 0);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v25 = v35[0];
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v25 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v25 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v25);
    }
    *(_OWORD *)v35 = 0;
    v36 = 0;
    sub_1400077F0(v35, "--buffery", 9);
    __eh34_enter_wind_state(0, 30);
    v26 = sub_140006E60(v158, v35);
    if ( __eh34_unwind(30) )
      goto unwind_state_30;
    __eh34_exit_wind_state(30, 0);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v27 = v35[0];
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v27 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v27 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v27);
    }
    ConsoleWindow.Left = v16;
    ConsoleWindow.Top = v18;
    ConsoleWindow.Right = v20 - 1;
    ConsoleWindow.Bottom = v22 - 1;
    *(_OWORD *)v35 = 0;
    v36 = 0;
    sub_1400077F0(v35, "--admin", 7);
    __eh34_enter_wind_state(0, 30);
    v28 = sub_140006B50(v158, v35);
    if ( __eh34_unwind(30) )
      goto unwind_state_30;
    __eh34_exit_wind_state(30, 0);
    if ( *((_QWORD *)&v36 + 1) >= 0x10u )
    {
      v29 = v35[0];
      if ( (unsigned __int64)(*((_QWORD *)&v36 + 1) + 1LL) >= 0x1000 )
      {
        v29 = *((void **)v35[0] - 1);
        if ( (unsigned __int64)((char *)v35[0] - (char *)v29 - 8) > 0x1F )
          invalid_parameter_noinfo_noreturn();
      }
      j_j_free(v29);
    }
    if ( v28 != 0 )
    {
      CreateEventW(nullptr, false, false, L"{29544E05-024F-4BC1-A272-452DBC8E17A4}");
      if ( GetLastError() != 0 )
        goto LABEL_66;
      memset(Filename, 0, 0x208u);
      GetModuleFileNameW(nullptr, Filename, 0x104u);
      pExecInfo.cbSize = 112;
      *(_OWORD *)&pExecInfo.fMask = 0;
      memset(&pExecInfo.lpParameters, 0, 80);
      pExecInfo.lpVerb = L"runas";
      pExecInfo.lpFile = Filename;
      pExecInfo.nShow = 1;
      if ( !ShellExecuteExW(&pExecInfo) )
      {
        LastError = GetLastError();
        if ( LastError == 1223 || LastError == 2 )
        {
LABEL_66:
          sub_140001010("uac filed");
          goto LABEL_69;
        }
      }
      Sleep(0x64u);
    }
    dwSize.X = v24;
    dwSize.Y = v26;
    StdHandle = GetStdHandle(0xFFFFFFF5);
    if ( SetConsoleWindowInfo(StdHandle, true, &ConsoleWindow) )
    {
      GetConsoleScreenBufferInfoEx(StdHandle, &ConsoleScreenBufferInfoEx);
      if ( SetConsoleScreenBufferSize(StdHandle, dwSize) )
      {
LABEL_70:
        sub_140005550(&v158[25]);
        sub_140005550(&v158[22]);
        sub_140004410((__int64)&v158[14]);
        sub_1400056A0(&v158[11]);
        sub_140005770(&v158[8]);
        if ( v158[7] >= (void *)0x10 )
        {
          v32 = v158[4];
          if ( (unsigned __int64)v158[7] + 1 >= 0x1000 )
          {
            v32 = *((void **)v158[4] - 1);
            if ( (unsigned __int64)((char *)v158[4] - (char *)v32 - 8) > 0x1F )
LABEL_77:
              invalid_parameter_noinfo_noreturn();
          }
          j_j_free(v32);
        }
        *(__m128i *)&v158[6] = _mm_load_si128((const __m128i *)&xmmword_14000BDC0);
        LOBYTE(v158[4]) = 0;
        if ( v158[3] >= (void *)0x10 )
        {
          v33 = v158[0];
          if ( (unsigned __int64)v158[3] + 1 >= 0x1000 )
          {
            v33 = *((void **)v158[0] - 1);
            if ( (unsigned __int64)((char *)v158[0] - (char *)v33 - 8) > 0x1F )
              goto LABEL_77;
          }
          j_j_free(v33);
        }
        return v5;
      }
      sub_140001010("resize buffer failed");
    }
    else
    {
      sub_140001010("resize failed");
    }
LABEL_69:
    v5 = -1;
    goto LABEL_70;
  }
  __unwind
  {
    sub_1400053C0(v158);
  }
}

