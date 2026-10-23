// busybox.exe @ 0x411efc size=3196

unsigned __int8 *__usercall sub_411EFC@<eax>(
        unsigned __int8 *a1@<eax>,
        char *a2@<edx>,
        unsigned int *a3@<ecx>,
        _DWORD *a4)
{
  char v6; // al
  bool v7; // zf
  char *v8; // eax
  unsigned int v9; // esi
  const char *Str; // edi
  size_t MaxCount; // eax
  size_t v12; // eax
  unsigned int v13; // esi
  const char *v14; // edi
  size_t v15; // eax
  size_t v16; // eax
  int v17; // eax
  unsigned __int8 *v18; // ecx
  int v19; // eax
  int v20; // eax
  unsigned __int8 *v21; // ecx
  int v22; // eax
  int v23; // eax
  unsigned __int8 *v24; // ecx
  unsigned int v25; // eax
  int v26; // eax
  unsigned __int8 *v27; // ecx
  unsigned int v28; // eax
  unsigned __int8 *v29; // ecx
  int v30; // eax
  unsigned int v31; // eax
  int v32; // eax
  unsigned __int8 *v33; // ecx
  int v34; // eax
  unsigned int v35; // eax
  int v36; // eax
  unsigned __int8 *v37; // ecx
  unsigned int v38; // eax
  size_t v39; // eax
  size_t v40; // eax
  int v41; // eax
  bool v42; // zf
  int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  unsigned __int8 *v46; // edx
  int v47; // eax
  unsigned __int8 *v48; // ecx
  unsigned int v49; // eax
  int v50; // eax
  unsigned __int8 *v51; // ecx
  unsigned int v52; // eax
  unsigned __int8 *k; // edx
  int v54; // eax
  unsigned int v55; // edi
  int v56; // ecx
  bool v57; // cc
  int v58; // eax
  int v59; // eax
  int v60; // eax
  unsigned __int8 *v61; // ecx
  unsigned int v62; // eax
  unsigned __int8 *v63; // ecx
  unsigned int v64; // eax
  int v65; // ecx
  unsigned int v66; // eax
  unsigned __int8 v67; // di
  unsigned int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // et2
  unsigned int v71; // eax
  int v72; // ecx
  int v73; // ecx
  int v74; // edi
  int i; // eax
  BOOL v76; // esi
  unsigned int v77; // eax
  BOOL v78; // ecx
  unsigned int v79; // eax
  int v80; // ecx
  unsigned int v81; // edi
  unsigned int v82; // esi
  int v83; // esi
  int v84; // edi
  int v85; // edx
  int j; // ecx
  BOOL v87; // eax
  unsigned int v88; // ecx
  unsigned int v89; // edx
  BOOL v91; // [esp+Ch] [ebp-4Ch]
  unsigned int v92; // [esp+Ch] [ebp-4Ch]
  BOOL v93; // [esp+10h] [ebp-48h]
  int v94; // [esp+14h] [ebp-44h]
  int v95; // [esp+14h] [ebp-44h]
  int v96; // [esp+14h] [ebp-44h]
  int v97; // [esp+18h] [ebp-40h]
  unsigned __int8 v98; // [esp+18h] [ebp-40h]
  int v99; // [esp+1Ch] [ebp-3Ch]
  char v100; // [esp+1Ch] [ebp-3Ch]
  int v102; // [esp+20h] [ebp-38h]
  int v103; // [esp+20h] [ebp-38h]
  char v104; // [esp+24h] [ebp-34h]
  int v105; // [esp+24h] [ebp-34h]
  int v106; // [esp+28h] [ebp-30h]
  int v107; // [esp+2Ch] [ebp-2Ch]
  int v108; // [esp+30h] [ebp-28h]
  unsigned int v109; // [esp+34h] [ebp-24h]
  char v110; // [esp+38h] [ebp-20h]
  int v111; // [esp+3Ch] [ebp-1Ch]
  __time32_t v112[5]; // [esp+44h] [ebp-14h] BYREF

  v109 = 0;
  v111 = 0;
  v108 = 0;
  v97 = 0;
  v94 = 0;
  v99 = 0;
  v91 = false;
  v93 = false;
  v107 = 0;
  v106 = -1;
  v110 = 0;
LABEL_2:
  v104 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_3:
      v6 = *a2;
      if ( *a2 == 0 )
      {
        if ( ((unsigned __int8)v110 & (unsigned __int8)v104) != 0 )
          a3[2] += 12;
        if ( v106 != -1 )
        {
          v72 = 100 * (v106 - 19);
          if ( v107 != 0 )
            a3[5] = v72 + (int)a3[5] % 100;
          else
            a3[5] = v72;
        }
        if ( v91 )
        {
          if ( !v93 )
          {
            if ( ((unsigned __int8)v94 ^ 1 | (unsigned __int8)v97 ^ 1) != 0 && v99 != 0 )
            {
              v102 = a3[5] + 1900;
              v73 = a3[5] & 3;
              v74 = v102 % 100;
              v105 = v102 % 400;
              v103 = a3[7];
              for ( i = 0; ; ++i )
              {
                v76 = false;
                if ( v73 == 0 )
                {
                  v76 = v99;
                  if ( v74 == 0 )
                    v76 = v105 == 0;
                }
                if ( (unsigned __int16)word_47D460[13 * v76 + i] > v103 )
                  break;
              }
              v77 = i - 1;
              if ( (unsigned __int8)v94 == 1 || (a3[4] = v77, (unsigned __int8)v97 != 1) )
              {
                if ( v73 != 0 )
                {
                  v78 = false;
                }
                else
                {
                  v78 = v99;
                  if ( v74 == 0 )
                    v78 = v105 == 0;
                }
                a3[3] = v103 - (unsigned __int16)word_47D460[13 * v78 + v77] + 1;
              }
            }
            sub_421D70();
          }
          if ( v99 == 0 )
          {
            v79 = a3[5];
            v80 = v79 + 1900;
            if ( (v79 & 3) != 0 )
            {
              v91 = false;
            }
            else if ( v80 % 100 == 0 )
            {
              v91 = v80 % 400 == 0;
            }
            a3[7] = (unsigned __int16)word_47D460[13 * v91 + a3[4]] + a3[3] - 1;
          }
        }
        if ( (v108 | v111) != 0 && v93 )
        {
          v92 = a3[6];
          v81 = a3[3];
          v82 = a3[4];
          a3[3] = 1;
          a3[4] = 0;
          sub_421D70();
          if ( v97 != 0 )
            a3[3] = v81;
          if ( v94 != 0 )
            a3[4] = v82;
          if ( v99 == 0 )
            a3[7] = v92 + 7 * (v109 - 1) + (int)(7 - (a3[6] - (v108 ^ 1))) % 7 - (v108 ^ 1);
          v100 = v94 ^ 1;
          v98 = v97 ^ 1;
          if ( (v98 | (unsigned __int8)v94 ^ 1) != 0 )
          {
            v95 = a3[5] + 1900;
            v83 = a3[5] & 3;
            v84 = v95 % 100;
            v85 = v95 % 400;
            v96 = a3[7];
            for ( j = 0; ; ++j )
            {
              v87 = false;
              if ( v83 == 0 )
              {
                v87 = v93;
                if ( v84 == 0 )
                  v87 = v85 == 0;
              }
              if ( (unsigned __int16)word_47D460[13 * v87 + j] > v96 )
                break;
            }
            v88 = j - 1;
            if ( v100 == 0 || (a3[4] = v88, v98 != 0) )
            {
              if ( v83 != 0 )
              {
                v93 = false;
              }
              else if ( v84 == 0 )
              {
                v93 = v85 == 0;
              }
              a3[3] = v96 - (unsigned __int16)word_47D460[13 * v93 + v88] + 1;
            }
          }
          a3[6] = v92;
        }
        return a1;
      }
      ++a2;
      if ( (unsigned __int8)(v6 - 9) > 4u && v6 != 32 )
        break;
      while ( (unsigned __int8)(*a1 - 9) <= 4u || *a1 == 32 )
        ++a1;
    }
    if ( v6 != 37 )
      break;
    while ( 2 )
    {
      switch ( *a2++ )
      {
        case '%':
          v7 = *a1 == 37;
          goto LABEL_17;
        case 'A':
        case 'a':
          v9 = 0;
          while ( 1 )
          {
            if ( *a4 != 1 )
            {
              Str = &aSunday[10 * v9];
              MaxCount = strlen(Str);
              if ( strnicmp(Str, (const char *)a1, MaxCount) == 0 )
                break;
              Str = (const char *)(4 * v9 + 4708064);
              v12 = strlen(Str);
              if ( strnicmp(Str, (const char *)a1, v12) == 0 )
                break;
            }
            if ( ++v9 == 7 )
              return nullptr;
          }
          a1 += strlen(Str);
          *a4 = 2;
          a3[6] = v9;
LABEL_152:
          v93 = true;
          goto LABEL_3;
        case 'B':
        case 'b':
        case 'h':
          v13 = 0;
          while ( 1 )
          {
            v14 = &aJanuary[10 * v13];
            v15 = strlen(v14);
            if ( strnicmp(v14, (const char *)a1, v15) == 0 )
              break;
            v14 = (const char *)(4 * v13 + 4708000);
            v16 = strlen(v14);
            if ( strnicmp(v14, (const char *)a1, v16) == 0 )
              break;
            if ( ++v13 == 12 )
              return nullptr;
          }
          a1 += strlen(v14);
          *a4 = 2;
          a3[4] = v13;
LABEL_238:
          v91 = true;
          goto LABEL_3;
        case 'C':
          while ( 1 )
          {
            v17 = *a1;
            if ( (_BYTE)v17 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v17 - 48) > 9u )
            return nullptr;
          v18 = a1 + 1;
          v19 = v17 - 48;
          if ( (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v18 = a1 + 2;
            v19 = 10 * v19 + a1[1] - 48;
          }
          v106 = v19;
          a1 = v18;
          goto LABEL_238;
        case 'D':
        case 'F':
        case 'c':
        case 'x':
          a1 = (unsigned __int8 *)sub_411EFC(a4);
          if ( a1 == nullptr )
            return nullptr;
          goto LABEL_238;
        case 'E':
          v8 = strchr("cCyYxX", (unsigned __int8)*a2);
          goto LABEL_14;
        case 'G':
          if ( (unsigned __int8)(*a1 - 48) > 9u )
            return nullptr;
          do
            ++a1;
          while ( (unsigned __int8)(*a1 - 48) <= 9u );
          goto LABEL_3;
        case 'H':
        case 'k':
          while ( 1 )
          {
            v23 = *a1;
            if ( (_BYTE)v23 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v23 - 48) > 9u )
            return nullptr;
          v24 = a1 + 1;
          v25 = v23 - 48;
          if ( 10 * v25 <= 0x17 && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v24 = a1 + 2;
            v25 = 10 * v25 + a1[1] - 48;
            if ( v25 > 0x17 )
              return nullptr;
          }
          a3[2] = v25;
          a1 = v24;
          goto LABEL_2;
        case 'I':
        case 'l':
          while ( 1 )
          {
            v26 = *a1;
            if ( (_BYTE)v26 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v26 - 48) > 9u )
            return nullptr;
          v27 = a1 + 1;
          v28 = v26 - 48;
          if ( 10 * v28 <= 0xC && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v27 = a1 + 2;
            v28 = 10 * v28 + a1[1] - 48;
          }
          if ( v28 - 1 > 0xB )
            return nullptr;
          a3[2] = v28 % 0xC;
          a1 = v27;
          v104 = 1;
          goto LABEL_3;
        case 'M':
          while ( 1 )
          {
            v36 = *a1;
            if ( (_BYTE)v36 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v36 - 48) > 9u )
            return nullptr;
          v37 = a1 + 1;
          v38 = v36 - 48;
          if ( 10 * v38 <= 0x3B && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v37 = a1 + 2;
            v38 = 10 * v38 + a1[1] - 48;
            if ( v38 > 0x3B )
              return nullptr;
          }
          a3[1] = v38;
          goto LABEL_113;
        case 'O':
          v8 = strchr("deHImMqSUWVwy", (unsigned __int8)*a2);
LABEL_14:
          if ( v8 != nullptr )
            continue;
          return nullptr;
        case 'R':
        case 'T':
        case 'X':
        case 'r':
          a1 = (unsigned __int8 *)sub_411EFC(a4);
          v42 = a1 == nullptr;
          goto LABEL_101;
        case 'S':
          while ( 1 )
          {
            v43 = *a1;
            if ( (_BYTE)v43 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v43 - 48) > 9u )
            return nullptr;
          v37 = a1 + 1;
          v44 = v43 - 48;
          if ( 10 * v44 <= 0x3D && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v37 = a1 + 2;
            v44 = 10 * v44 + a1[1] - 48;
            if ( v44 > 0x3D )
              return nullptr;
          }
          *a3 = v44;
LABEL_113:
          a1 = v37;
          goto LABEL_3;
        case 'U':
          while ( 1 )
          {
            v47 = *a1;
            if ( (_BYTE)v47 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v47 - 48) > 9u )
            return nullptr;
          v48 = a1 + 1;
          v49 = v47 - 48;
          if ( 10 * v49 <= 0x35 && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v48 = a1 + 2;
            v49 = 10 * v49 + a1[1] - 48;
            if ( v49 > 0x35 )
              return nullptr;
          }
          v109 = v49;
          a1 = v48;
          v108 = 1;
          goto LABEL_3;
        case 'V':
          for ( k = a1; ; ++k )
          {
            v54 = *k;
            if ( (_BYTE)v54 != 32 )
              break;
          }
          if ( (unsigned __int8)(v54 - 48) > 9u )
            return nullptr;
          a1 = k + 1;
          v55 = 10 * (v54 - 48);
          if ( v55 > 0x35 )
            goto LABEL_3;
          v56 = k[1];
          if ( (unsigned __int8)(v56 - 48) > 9u )
            goto LABEL_3;
          a1 = k + 2;
          v57 = v55 + v56 - 48 <= 0x35;
          goto LABEL_176;
        case 'W':
          while ( 1 )
          {
            v50 = *a1;
            if ( (_BYTE)v50 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v50 - 48) > 9u )
            return nullptr;
          v51 = a1 + 1;
          v52 = v50 - 48;
          if ( 10 * v52 <= 0x35 && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v51 = a1 + 2;
            v52 = 10 * v52 + a1[1] - 48;
            if ( v52 > 0x35 )
              return nullptr;
          }
          v109 = v52;
          a1 = v51;
          v111 = 1;
          goto LABEL_3;
        case 'Y':
          while ( *a1 == 32 )
            ++a1;
          if ( (unsigned __int8)(*a1 - 48) > 9u )
            return nullptr;
          v63 = a1 + 4;
          v64 = 0;
          do
            v64 = 10 * v64 + *a1++ - 48;
          while ( v63 != a1 && 10 * v64 <= 0x270F && (unsigned __int8)(*a1 - 48) <= 9u );
          if ( v64 > 0x270F )
            return nullptr;
          a3[5] = v64 - 1900;
          v91 = true;
          v107 = 0;
          goto LABEL_3;
        case 'Z':
          goto LABEL_3;
        case 'd':
        case 'e':
          while ( 1 )
          {
            v20 = *a1;
            if ( (_BYTE)v20 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v20 - 48) > 9u )
            return nullptr;
          v21 = a1 + 1;
          v22 = v20 - 48;
          if ( (unsigned int)(10 * v22) <= 0x1F && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v21 = a1 + 2;
            v22 = 10 * v22 + a1[1] - 48;
          }
          if ( (unsigned int)(v22 - 1) > 0x1E )
            return nullptr;
          a3[3] = v22;
          a1 = v21;
          v97 = 1;
          goto LABEL_238;
        case 'g':
          while ( *a1 == 32 )
            ++a1;
          if ( (unsigned __int8)(*a1 - 48) > 9u )
            return nullptr;
          v46 = a1 + 1;
          if ( (unsigned __int8)(a1[1] - 48) <= 9u )
            v46 = a1 + 2;
          a1 = v46;
          goto LABEL_3;
        case 'j':
          while ( *a1 == 32 )
            ++a1;
          if ( (unsigned __int8)(*a1 - 48) > 9u )
            return nullptr;
          v29 = a1 + 3;
          v30 = 0;
          do
            v30 = 10 * v30 + *a1++ - 48;
          while ( a1 != v29 && (unsigned int)(10 * v30) <= 0x16E && (unsigned __int8)(*a1 - 48) <= 9u );
          v31 = v30 - 1;
          if ( v31 > 0x16D )
            return nullptr;
          a3[7] = v31;
          v99 = 1;
          goto LABEL_3;
        case 'm':
          while ( 1 )
          {
            v32 = *a1;
            if ( (_BYTE)v32 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v32 - 48) > 9u )
            return nullptr;
          v33 = a1 + 1;
          v34 = v32 - 48;
          if ( (unsigned int)(10 * v34) <= 0xC && (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v33 = a1 + 2;
            v34 = 10 * v34 + a1[1] - 48;
          }
          v35 = v34 - 1;
          if ( v35 > 0xB )
            return nullptr;
          a3[4] = v35;
          a1 = v33;
          goto LABEL_99;
        case 'n':
        case 't':
          while ( (unsigned __int8)(*a1 - 9) <= 4u || *a1 == 32 )
            ++a1;
          goto LABEL_3;
        case 'p':
          v39 = strlen("AM");
          if ( strnicmp("AM", (const char *)a1, v39) == 0 )
          {
            a1 += strlen("AM");
            goto LABEL_3;
          }
          v40 = strlen("PM");
          if ( strnicmp("PM", (const char *)a1, v40) != 0 )
            return nullptr;
          a1 += strlen("PM");
          v110 = 1;
          goto LABEL_3;
        case 'q':
          while ( 1 )
          {
            v41 = *a1;
            if ( (_BYTE)v41 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v41 - 49) > 3u )
            return nullptr;
          ++a1;
          a3[4] = 3 * (v41 - 48) - 3;
          a3[3] = 1;
          v97 = 1;
LABEL_99:
          v94 = 1;
          goto LABEL_238;
        case 's':
          v112[0] = 0;
          if ( (unsigned __int8)(*a1 - 48) > 9u )
            return nullptr;
          do
          {
            v112[0] *= 10;
            v112[0] = v112[0] + *a1++ - 48;
          }
          while ( (unsigned __int8)(*a1 - 48) <= 9u );
          v42 = sub_43E8F8(v112, (int)a3) == 0;
LABEL_101:
          if ( !v42 )
            goto LABEL_3;
          return nullptr;
        case 'u':
          while ( 1 )
          {
            v45 = *a1;
            if ( (_BYTE)v45 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v45 - 49) > 6u )
            return nullptr;
          ++a1;
          a3[6] = (v45 - 48) % 7u;
          goto LABEL_152;
        case 'w':
          while ( 1 )
          {
            v58 = *a1;
            if ( (_BYTE)v58 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v58 - 48) > 9u )
            return nullptr;
          v59 = v58 - 48;
          if ( v59 > 6 )
            return nullptr;
          ++a1;
          a3[6] = v59;
          goto LABEL_152;
        case 'y':
          while ( 1 )
          {
            v60 = *a1;
            if ( (_BYTE)v60 != 32 )
              break;
            ++a1;
          }
          if ( (unsigned __int8)(v60 - 48) > 9u )
            return nullptr;
          v61 = a1 + 1;
          v62 = v60 - 48;
          if ( (unsigned __int8)(a1[1] - 48) <= 9u )
          {
            v61 = a1 + 2;
            v62 = 10 * v62 + a1[1] - 48;
          }
          v89 = v62 + 100;
          if ( v62 > 0x44 )
            v89 = v62;
          a3[5] = v89;
          a1 = v61;
          v91 = true;
          v107 = 1;
          goto LABEL_3;
        case 'z':
          while ( *a1 == 32 )
            ++a1;
          if ( ((*a1 - 43) & 0xFD) != 0 )
            return nullptr;
          ++a1;
          v65 = 0;
          v66 = 0;
          break;
        default:
          return nullptr;
      }
      break;
    }
    do
    {
      v67 = *a1;
      if ( (unsigned __int8)(*a1 - 48) > 9u )
      {
        if ( v65 == 2 )
        {
          v71 = 100 * v66;
          goto LABEL_175;
        }
        return nullptr;
      }
      ++a1;
      v66 = 10 * v66 + v67 - 48;
      ++v65;
    }
    while ( v65 != 4 );
    v70 = v66 % 0x64;
    v68 = v66 / 0x64;
    v69 = v70;
    if ( v70 <= 0x3B )
    {
      v71 = 100 * v68 + 50 * v69 / 0x1E;
LABEL_175:
      v57 = v71 <= 0x4B0;
LABEL_176:
      if ( v57 )
        continue;
    }
    return nullptr;
  }
  v7 = v6 == (char)*a1;
LABEL_17:
  if ( v7 )
  {
    ++a1;
    goto LABEL_3;
  }
  return nullptr;
}

