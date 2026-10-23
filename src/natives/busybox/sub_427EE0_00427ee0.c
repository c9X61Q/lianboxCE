// busybox.exe @ 0x427ee0 size=4323

int __cdecl sub_427EE0(int a1, int a2)
{
  void *v2; // ecx
  int v3; // esi
  char *v4; // edi
  char *v5; // ebx
  char **i; // ebx
  int v7; // esi
  _WORD *v8; // edi
  char *v9; // eax
  char *v10; // ebx
  size_t v11; // eax
  void *v12; // ebx
  int v13; // ebx
  char *v14; // edi
  int v15; // esi
  int v16; // ebx
  unsigned __int16 *v17; // ecx
  char *v18; // edx
  unsigned __int16 *v19; // ecx
  const char *v20; // edi
  int v21; // ecx
  char *v22; // eax
  int v23; // edx
  void **v24; // esi
  int v25; // ebx
  const char *v26; // edx
  _DWORD *v27; // eax
  _DWORD *v28; // ebx
  int v29; // eax
  const char *v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ebx
  int v34; // edx
  _WORD *v35; // eax
  __int16 v36; // ax
  void *v37; // edx
  int v38; // ecx
  const char *v39; // edx
  unsigned __int16 v40; // ax
  int v41; // ebx
  int v42; // esi
  int v43; // eax
  const char *v44; // esi
  char *v45; // eax
  int v46; // ebx
  int v47; // edi
  int v48; // esi
  int v49; // edi
  int v50; // eax
  char v51; // cl
  bool v52; // zf
  _WORD *v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // esi
  unsigned __int16 *v57; // edi
  int v58; // ebx
  int v59; // ebx
  int v60; // ecx
  unsigned __int16 *v61; // edi
  int v62; // ebx
  int v63; // ebx
  char v64; // cl
  int v65; // edx
  int v66; // eax
  BOOL v67; // ecx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  const char *v71; // edx
  int v72; // eax
  char *v73; // edx
  const char *v74; // eax
  char *v75; // edx
  char *v76; // edx
  char *v77; // edx
  char *v78; // edx
  const char *v79; // ecx
  FILE *v80; // ebx
  int v81; // edx
  unsigned __int16 *v82; // edx
  const char *v83; // esi
  size_t v84; // eax
  int v85; // ecx
  void *v86; // esp
  void *v87; // ecx
  _DWORD *v88; // edi
  FILE *v89; // esi
  FILE *v90; // ebx
  int v91; // eax
  char *v92; // ebx
  const char *v93; // eax
  char *v94; // edi
  char *v95; // eax
  char *v96; // ebx
  size_t v97; // eax
  char *v98; // eax
  int v99; // ebx
  int v100; // eax
  char *v101; // ecx
  int v102; // edx
  int v103; // eax
  int v104; // eax
  char *v105; // ebx
  size_t v106; // eax
  int v107; // eax
  char *v108; // ebx
  char *ii; // edi
  int v110; // ebx
  int v111; // eax
  int v112; // ecx
  char *Str1; // [esp+0h] [ebp-68h] BYREF
  int v115; // [esp+8h] [ebp-60h]
  char **v116; // [esp+Ch] [ebp-5Ch]
  const char *v117; // [esp+10h] [ebp-58h]
  int v118; // [esp+14h] [ebp-54h] BYREF
  __int16 v119; // [esp+1Ah] [ebp-4Eh]
  int v120; // [esp+1Ch] [ebp-4Ch]
  int n; // [esp+20h] [ebp-48h]
  int v122; // [esp+24h] [ebp-44h]
  char *k; // [esp+28h] [ebp-40h]
  FILE *m; // [esp+2Ch] [ebp-3Ch]
  int v125; // [esp+30h] [ebp-38h]
  int v126; // [esp+34h] [ebp-34h]
  char *Str2; // [esp+38h] [ebp-30h]
  int j; // [esp+3Ch] [ebp-2Ch]
  FILE *Stream; // [esp+40h] [ebp-28h]
  void *Block; // [esp+44h] [ebp-24h]
  char *v131; // [esp+48h] [ebp-20h]
  char *Str; // [esp+4Ch] [ebp-1Ch]
  char *v133; // [esp+50h] [ebp-18h] BYREF
  char *v134; // [esp+54h] [ebp-14h] BYREF
  const char *v135[4]; // [esp+58h] [ebp-10h] BYREF

  dword_486010 = sub_4728CC();
  v116 = &v133;
  v131 = (char *)sub_435D60(a2, "CilPruF:", "configure");
  v3 = dword_473090;
  if ( ((unsigned __int8)v131 & 0x40) != 0 )
  {
    v4 = v133;
    if ( strcmp(v133, "depends") == 0 )
    {
      v131 = (char *)((unsigned int)v131 | 0x80);
    }
    else if ( strcmp(v4, "confnew") == 0 )
    {
      v131 = (char *)((unsigned int)v131 | 0x100);
    }
    else
    {
      if ( strcmp(v4, "confold") != 0 )
        goto LABEL_10;
      v131 = (char *)((unsigned int)v131 | 0x200);
    }
    dword_486008 = (int)v131;
  }
  if ( ((unsigned __int8)v131 & 0x3F) == 0 || ((unsigned __int8)v131 & 0x3F & (((unsigned __int8)v131 & 0x3F) - 1)) != 0 )
LABEL_10:
    sub_418164();
  Block = (void *)(a2 + 4 * v3);
  v120 = (unsigned __int8)v131 & 2;
  if ( ((unsigned __int8)v131 & 2) != 0 )
  {
    for ( i = (char **)Block; *i != nullptr; ++i )
      *i = (char *)sub_4703D0(*i);
  }
  sub_41BA00(v2);
  v5 = (char *)sub_47188C(Str1);
  sub_417C00(v5, -1, 4);
  free(v5);
  if ( sub_443508("/var/lib/dpkg/status", 258, 438) >= 0 )
    sub_470B50();
  Stream = (FILE *)sub_470CF8();
  while ( 1 )
  {
    Str = (char *)sub_470EC8();
    if ( Str == nullptr )
      break;
    v7 = sub_42FA24();
    if ( v7 != -1 )
    {
      v8 = (_WORD *)sub_470E78();
      v9 = strstr(Str, "Status:");
      if ( v9 != nullptr )
      {
        v10 = v9 + 7;
        v11 = strspn(v9 + 7, " \n\t");
        strcspn(&v10[v11], "\n");
        v12 = (void *)sub_4718A8();
        v8[1] = sub_45CD18();
        free(v12);
      }
      *v8 = v7;
      v13 = dword_486010;
      *(_DWORD *)(v13 + 4 * sub_45CE08() + 105560) = v8;
    }
    free(Str);
  }
  fclose(Stream);
  v125 = (unsigned __int8)v131 & 4;
  if ( ((unsigned __int8)v131 & 4) != 0 )
  {
    v15 = *(_DWORD *)Block;
    sub_46F108("    Name           Version");
    sub_46F108("+++-==============-==============");
    v16 = 0;
    while ( 1 )
    {
      v17 = *(unsigned __int16 **)(dword_486010 + 4 * v16 + 105560);
      if ( v17 != nullptr )
      {
        v18 = *(char **)(dword_486010 + 4 * v17[1]);
        v19 = *(unsigned __int16 **)(dword_486010 + 4 * *v17 + 65528);
        v20 = *(const char **)(dword_486010 + 4 * *v19);
        v131 = *(char **)(dword_486010 + 4 * v19[1]);
        if ( v15 == 0 )
          goto LABEL_31;
        Str = v18;
        if ( sub_4312E8(v15, v20, 0) == 0 )
          break;
      }
LABEL_42:
      if ( ++v16 == 0x2000 )
        return 0;
    }
    v18 = Str;
LABEL_31:
    v21 = (unsigned __int8)*v18;
    if ( (_BYTE)v21 != 105 )
      v21 = 114;
    v22 = v18;
    Str = nullptr;
    while ( 1 )
    {
      v23 = (unsigned __int8)*v22;
      if ( (_BYTE)v23 == 0 || (int)Str > 1 )
        break;
      if ( (_BYTE)v23 == 32 )
        ++Str;
      ++v22;
    }
    sub_46F088("%c%c  %-14s %s\n", v21, v23, v20, v131);
    goto LABEL_42;
  }
  v14 = (char *)Block + 4;
  Stream = nullptr;
  while ( 1 )
  {
    Str2 = v14 - 4;
    Block = *((void **)v14 - 1);
    if ( Block == nullptr )
      break;
    Str = (char *)sub_47168C(Stream, 1026);
    v24 = (void **)&Str[4 * (_DWORD)Stream];
    *v24 = (void *)sub_4728CC();
    if ( ((unsigned __int8)v131 & 0x22) != 0 )
    {
      v135[0] = nullptr;
      sub_43E368();
      v25 = sub_43AAF8();
      sub_43AB1C();
      v26 = v135[0];
      Block = *v24;
      v27 = *(_DWORD **)(v25 + 104);
      v27[9] = sub_4218A4;
      v27[3] = v26;
      v27[2] = sub_42FCB8;
      sub_468B54();
      sub_442EA4(*(_DWORD *)(v25 + 4));
      *(_DWORD *)Block = *(_DWORD *)(*(_DWORD *)(v25 + 104) + 96);
      if ( *(_DWORD *)*v24 == 0 )
      {
        v30 = "can't extract control file";
        goto LABEL_72;
      }
      v28 = *v24;
      v28[1] = sub_47188C(Str1);
      v29 = sub_42FA24();
      if ( v29 == -1 )
      {
        sub_41783C("invalid control file in %s", *((const char **)v14 - 1));
        goto LABEL_48;
      }
      *((_WORD *)*v24 + 4) = v29;
      v31 = dword_486010;
      v32 = sub_45CE08();
      v33 = v31 + 4 * v32;
      v34 = *(_DWORD *)(v33 + 105560);
      if ( v34 != 0 && *(_WORD *)(v34 + 2) != 0 )
      {
        Block = (void *)v32;
        sub_45E4C0(1, "install");
        v38 = 2;
        v39 = "reinstreq";
LABEL_68:
        sub_45E4C0(v38, v39);
        goto LABEL_69;
      }
      v35 = (_WORD *)sub_470E78();
      *v35 = *((_DWORD *)*v24 + 2);
      Block = v35;
      v36 = sub_45CD18();
      v37 = Block;
      *((_WORD *)Block + 1) = v36;
      *(_DWORD *)(v33 + 105560) = v37;
    }
    else if ( ((unsigned __int8)v131 & 0x19) != 0 )
    {
      Block = (void *)sub_45CD18();
      sub_45CD18();
      v40 = sub_45CD88(6);
      *((_WORD *)*v24 + 4) = v40;
      v41 = dword_486010;
      j = v40;
      v42 = v40 + 16380;
      if ( *(_DWORD *)(dword_486010 + 4 * v42 + 8) == 0 )
        sub_41784C("package %s is uninstalled or unknown", *(_DWORD *)Str2);
      Block = (void *)sub_45CE08();
      v43 = sub_435514();
      if ( ((unsigned __int8)v131 & 0x10) != 0 )
      {
        v44 = *(const char **)(v41 + 4 * v43);
        if ( strcmp(v44, "not-installed") == 0 || strcmp(v44, "config-files") == 0 )
          sub_41784C("%s is already removed", *(_DWORD *)(v41 + 4 * **(unsigned __int16 **)(v41 + 4 * j + 65528)));
        v38 = 1;
        v39 = "deinstall";
        goto LABEL_68;
      }
      if ( ((unsigned __int8)v131 & 8) != 0 )
      {
        if ( strcmp(*(const char **)(v41 + 4 * v43), "not-installed") == 0 )
          sub_41784C("%s is already purged", *(_DWORD *)(v41 + 4 * **(unsigned __int16 **)(v41 + 4 * v42 + 8)));
        v38 = 1;
        v39 = "purge";
        goto LABEL_68;
      }
    }
LABEL_69:
    Stream = (FILE *)((char *)Stream + 1);
LABEL_48:
    v14 += 4;
  }
  if ( Stream == nullptr )
  {
    v30 = "no package files specified";
    goto LABEL_72;
  }
  v45 = Str;
  *(_DWORD *)&Str[4 * (_DWORD)Stream] = 0;
  if ( (char)v131 >= 0 )
  {
    Str2 = v45;
    v46 = 0;
    while ( *(_DWORD *)Str2 != 0 )
    {
      v47 = *(unsigned __int16 *)(*(_DWORD *)Str2 + 8);
      Block = (void *)sub_47168C(v46, 1026);
      *((_DWORD *)Block + v46++) = v47;
      v48 = 0;
      v49 = dword_486010 + 4 * v47;
      while ( 1 )
      {
        v50 = *(_DWORD *)(v49 + 65528);
        if ( v48 >= *(unsigned __int16 *)(v50 + 4) )
          break;
        j = 4 * v48;
        v51 = **(_BYTE **)(*(_DWORD *)(v50 + 8) + 4 * v48);
        if ( (v51 & 0xF0) == 0x70 )
        {
          j = sub_45CD88(v51 & 0xF);
          v52 = *(_DWORD *)(dword_486010 + 4 * j + 65528) == 0;
          v126 = dword_486010 + 4 * j;
          if ( v52 )
          {
            v53 = (_WORD *)sub_4728CC();
            v54 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v49 + 65528) + 8) + 4 * v48);
            *v53 = *(_WORD *)(v54 + 1);
            v53[1] = *(_DWORD *)(v54 + 4);
            *(_DWORD *)(v126 + 65528) = v53;
          }
          Block = (void *)sub_47168C(v46, 1026);
          *((_DWORD *)Block + v46++) = j;
        }
        ++v48;
      }
      Str2 += 4;
    }
    for ( Str2 = (char *)1; ; ++Str2 )
    {
      v55 = *(_DWORD *)&Str[4 * (_DWORD)Str2 - 4];
      v56 = dword_486010;
      if ( v55 == 0 )
        break;
      v57 = *(unsigned __int16 **)(dword_486010 + 4 * *(unsigned __int16 *)(v55 + 8) + 65528);
      sub_45CE08();
      v58 = sub_435514();
      if ( v58 != sub_45CD18() )
      {
        for ( j = 0; j < v57[2]; ++j )
        {
          v59 = *(_DWORD *)(*((_DWORD *)v57 + 2) + 4 * j);
          if ( (*(_BYTE *)v59 & 0xF0) == 0x90 && *(_DWORD *)(v56 + 4 * sub_45CD88(*(_BYTE *)v59 & 0xF) + 65528) != 0 )
          {
            sub_45CE08();
            v126 = sub_435514();
            if ( v126 == sub_45CD18() )
            {
              v60 = *(_BYTE *)v59 & 0xF;
              v126 = *(unsigned __int16 *)(v59 + 4);
              if ( sub_465670(v60, v126) != 0 )
                sub_41784C(
                  "package %s conflicts with %s",
                  *(_DWORD *)(v56 + 4 * *v57),
                  *(_DWORD *)(v56 + 4 * *(unsigned __int16 *)(v59 + 1)));
            }
          }
        }
      }
    }
    for ( k = nullptr; k != (char *)10007; ++k )
    {
      v61 = *(unsigned __int16 **)(v56 + 4 * (_DWORD)k + 65528);
      if ( v61 != nullptr && *(_DWORD *)(v56 + 4 * sub_45CE08() + 105560) != 0 )
      {
        v62 = sub_435514();
        if ( v62 == sub_45CD18() )
        {
          Str2 = nullptr;
          j = 0;
          for ( m = nullptr; (int)m < v61[2]; m = (FILE *)((char *)m + 1) )
          {
            v63 = *(_DWORD *)(*((_DWORD *)v61 + 2) + 4 * (_DWORD)m);
            v64 = *(_BYTE *)v63;
            if ( (((*(_BYTE *)v63 & 0xF0) - 32) & 0xD0) != 0 )
            {
              if ( j == 0 )
              {
                Str2 = nullptr;
                j = 1;
              }
              v126 = sub_45CD88(v64 & 0xF);
              if ( (*(_BYTE *)v63 & 0xD0) == 0x10 )
              {
                if ( Str2 != nullptr )
                {
                  v65 = *(_BYTE *)v63 >> 4;
                  LOBYTE(v122) = *Str2;
                  if ( v65 != ((unsigned __int8)v122 >> 4) - 1 )
                    sub_41784C(
                      "fatal error, package dependencies corrupt: %d != %d - 1",
                      v65,
                      (unsigned __int8)v122 >> 4);
                }
                if ( *(_DWORD *)(v56 + 4 * v126 + 65528) == 0
                  || (v66 = ((int (*)(void))sub_4485AC)(), v67 = false, v66 == 0) )
                {
                  v126 = -1;
                  v67 = true;
LABEL_116:
                  v119 = *(_WORD *)(v63 + 1);
                  while ( ++v126 <= 10006 )
                  {
                    v68 = *(_DWORD *)(dword_486010 + 4 * v126 + 65528);
                    v122 = v68;
                    if ( v68 != 0 )
                    {
                      v118 = *(unsigned __int16 *)(v68 + 4);
                      for ( n = 0; n < v118; ++n )
                      {
                        v69 = *(_DWORD *)(*(_DWORD *)(v122 + 8) + 4 * n);
                        if ( (*(_BYTE *)v69 & 0xF0) == 0x70 && v119 == *(_WORD *)(v69 + 1) )
                        {
                          v70 = sub_4485AC(v67, *(_BYTE *)v63 >> 4);
                          v67 = v70 == 0;
                          if ( v70 == 0 )
                            goto LABEL_116;
                          goto LABEL_125;
                        }
                      }
                    }
                  }
                }
LABEL_125:
                --j;
                if ( v67 )
                {
                  if ( j == 0 )
                  {
                    if ( Str2 != nullptr )
                    {
                      v71 = "pre-";
                      if ( (*(_BYTE *)v63 & 0xF0) != 0x10 )
                        v71 = (const char *)&unk_477DC8;
                      v117 = "cannot be satisfied";
                      v116 = *(char ***)(v56 + 4 * *(unsigned __int16 *)(Str2 + 1));
                      v115 = (int)v71;
                    }
                    else
                    {
                      v72 = *(_DWORD *)(v56 + 105560);
                      if ( v72 == 0 || *(_WORD *)(v72 + 2) == 0 )
                        goto LABEL_141;
                      Str = (char *)sub_435514();
                      v131 = (char *)sub_435514();
                      if ( v131 != (char *)sub_45CD18()
                        || (v75 = (char *)sub_45CD18(), v74 = "is installed", Str != v75)
                        && (v76 = (char *)sub_45CD18(), v74 = "is marked to be removed", Str != v76)
                        && (v77 = (char *)sub_45CD18(), v74 = "is marked to be purged", Str != v77) )
                      {
                        v73 = (char *)sub_45CD18();
                        v74 = "is in an indeterminate state";
                        if ( Str != v73 )
                        {
                          v78 = (char *)sub_45CD18();
                          v74 = "is marked to be installed";
                          if ( Str != v78 )
LABEL_141:
                            v74 = "is not installed or flagged to be installed";
                        }
                      }
                      v79 = "pre-";
                      if ( (*(_BYTE *)v63 & 0xF0) != 0x10 )
                        v79 = (const char *)&unk_477DC8;
                      v117 = v74;
                      v116 = *(char ***)(v56 + 4 * *(unsigned __int16 *)(v63 + 1));
                      v115 = (int)v79;
                    }
                    sub_41784C(
                      "package %s %sdepends on %s, which %s",
                      *(const char **)(v56 + 4 * *v61),
                      (const char *)v115,
                      (const char *)v116,
                      v117);
                  }
                }
                else
                {
                  m = (FILE *)((char *)m + j);
                  j = 0;
                }
              }
            }
            else
            {
              j = *(unsigned __int16 *)(v63 + 4);
              Str2 = (char *)v63;
            }
          }
        }
      }
    }
    free(Block);
  }
  v80 = nullptr;
  do
  {
    if ( ((unsigned __int8)v131 & 0x10) != 0 )
    {
      sub_45A670();
    }
    else if ( ((unsigned __int8)v131 & 8) != 0 )
    {
      v81 = *(unsigned __int16 *)(*(_DWORD *)&Str[4 * (_DWORD)v80] + 8);
      j = (int)&Str1;
      v82 = *(unsigned __int16 **)(dword_486010 + 4 * v81 + 65528);
      v83 = *(const char **)(dword_486010 + 4 * *v82);
      Block = *(void **)(dword_486010 + 4 * v82[1]);
      Str2 = (char *)sub_45CE08();
      v84 = strlen(v83);
      v86 = alloca(sub_4115D8(4 * ((v84 + 28) >> 2), v85, (char)Str1));
      sub_46F088("Purging %s (%s)...\n", v83, (const char *)Block);
      sub_45C090();
      sub_462790(&v118, "/var/lib/dpkg/info/%s.%s", v83, "list");
      sub_420960(v87);
      while ( sub_45A564() != 0 )
        ;
      sub_431BC0();
      Block = (void *)sub_414174(v83);
      v88 = (_DWORD *)sub_4728CC();
      *v88 = sub_4708BC("/var/lib/dpkg/info/%s.%s", v83, "postrm");
      sub_45A564();
      sub_431BC0();
      sub_45C090();
      sub_45A564();
      sub_431BC0();
      sub_45E4C0(3, "not-installed");
    }
    else if ( ((unsigned __int8)v131 & 0x20) != 0 || v120 != 0 )
    {
      sub_469C34();
    }
    else if ( ((unsigned __int8)v131 & 1) != 0 )
    {
      sub_41ED20(*(_DWORD *)&Str[4 * (_DWORD)v80]);
    }
    v80 = (FILE *)((char *)v80 + 1);
  }
  while ( Stream != v80 );
  if ( v120 != 0 )
  {
    v90 = nullptr;
    do
    {
      sub_41ED20(*(_DWORD *)&Str[4 * (_DWORD)v90]);
      v90 = (FILE *)((char *)v90 + 1);
    }
    while ( Stream != v90 );
  }
  m = (FILE *)sub_470CF8();
  v89 = (FILE *)sub_470D04();
  while ( 1 )
  {
    v93 = (const char *)sub_470EC8();
    v94 = (char *)v93;
    if ( v93 == nullptr )
      break;
    v95 = strstr(v93, "Package:");
    if ( v95 != nullptr )
    {
      v96 = v95 + 8;
      v97 = strspn(v95 + 8, " \n\t");
      strcspn(&v96[v97], "\n");
      v131 = (char *)sub_4718A8();
      v98 = strstr(v94, "Status:");
      Block = v98;
      if ( v98 != nullptr )
      {
        v105 = v98 + 7;
        v106 = strspn(v98 + 7, " \n\t");
        strcspn(&v105[v106], "\n");
        Block = (void *)sub_4718A8();
      }
      j = sub_45CE08();
      v99 = dword_486010;
      v126 = dword_486010 + 4 * j;
      v100 = *(_DWORD *)(v126 + 105560);
      if ( v100 != 0 )
      {
        Str2 = *(char **)(dword_486010 + 4 * *(unsigned __int16 *)(v100 + 2));
        if ( strcmp((const char *)Block, Str2) != 0 )
        {
          Stream = *(FILE **)(v99 + 4 * sub_435514());
          if ( strcmp("installed", (const char *)Stream) == 0 || strcmp("unpacked", (const char *)Stream) == 0 )
          {
            v101 = Str;
            do
            {
              Stream = (FILE *)v101;
              v102 = *(_DWORD *)v101;
              if ( *(_DWORD *)v101 == 0 )
                goto LABEL_182;
              k = v101;
              v103 = *(unsigned __int16 *)(v102 + 8);
              Str2 = (char *)v102;
              v104 = strcmp(v131, *(const char **)(v99 + 4 * **(unsigned __int16 **)(v99 + 4 * v103 + 65528)));
              v101 = k + 4;
            }
            while ( v104 != 0 );
            sub_47030C(v101, *(_DWORD *)Str2);
            sub_45E4C0(2, "ok");
            sub_46EEFC(
              v89,
              "Status: %s\n\n",
              *(const char **)(v99 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v126 + 105560) + 2)));
            if ( Stream->_ptr == nullptr )
LABEL_182:
              sub_41784C(
                "ALERT: cannot find a control file, your status file may be broken, status may be incorrect for %s",
                v131);
            goto LABEL_170;
          }
          if ( strcmp("not-installed", (const char *)Stream) == 0 )
          {
            sub_46EEFC(v89, "Package: %s\n", v131);
            sub_46EEFC(v89, "Status: %s\n", Str2);
            while ( 1 )
            {
              v91 = sub_457CB0(v135, &v134);
              v125 += v91;
              v92 = v134;
              if ( v134 == nullptr )
                break;
              if ( strcmp(v134, "Priority") == 0 || strcmp(v92, "Section") == 0 )
                sub_46EEFC(v89, "%s: %s\n", v92, v135[0]);
            }
LABEL_169:
            sub_46EF20("\n", v89);
LABEL_170:
            free(Block);
            free(v131);
            free(v94);
            continue;
          }
          if ( strcmp("config-files", (const char *)Stream) == 0 )
          {
            while ( 1 )
            {
              v107 = sub_457CB0(v135, &v134);
              v125 += v107;
              v108 = v134;
              if ( v134 == nullptr )
                break;
              if ( strcmp(v134, "Status") == 0 )
                sub_46EEFC(v89, "Status: %s\n", Str2);
              else
                sub_46EEFC(v89, "%s: %s\n", v108, v135[0]);
            }
            goto LABEL_169;
          }
        }
      }
      sub_46EEFC(v89, "%s\n\n", v94);
      goto LABEL_170;
    }
  }
  for ( ii = Str; *(_DWORD *)ii != 0; ii += 4 )
  {
    v110 = dword_486010;
    Str = (char *)sub_45CE08();
    v111 = sub_435514();
    if ( strcmp("reinstreq", *(const char **)(v110 + 4 * v111)) == 0 )
    {
      sub_47030C(v112, **(_DWORD **)ii);
      sub_45E4C0(2, "ok");
      sub_46EEFC(
        v89,
        "Status: %s\n\n",
        *(const char **)(v110 + 4 * *(unsigned __int16 *)(*(_DWORD *)(v110 + 4 * (_DWORD)Str + 105560) + 2)));
    }
  }
  fclose(m);
  fclose(v89);
  if ( sub_443B88("/var/lib/dpkg/status", "/var/lib/dpkg/status.udeb.bak") == -1 )
  {
    if ( *_errno() != 2 )
    {
      v30 = "can't create backup status file";
LABEL_72:
      sub_418210(v30);
    }
    sub_4181F8("no status file found, creating new one");
  }
  sub_4716FC();
  return 0;
}

