// lian86.exe @ 0x0040eff0  size=5917  name=sub_40EFF0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40EFF0(unsigned __int8 **a1, int a2)
{
  unsigned __int8 **v2; // ecx
  unsigned __int8 *v3; // edi
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int8 *v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // eax
  unsigned int i; // esi
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // et2
  unsigned int v15; // ecx
  unsigned __int8 *v16; // eax
  int v17; // eax
  _DWORD *v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  size_t v26; // ecx
  _DWORD *v27; // edx
  int v28; // eax
  unsigned int v29; // edx
  size_t v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // eax
  bool v36; // zf
  int v37; // eax
  unsigned int v38; // edi
  int v39; // edx
  unsigned __int8 **v40; // ecx
  unsigned __int8 *v41; // ebx
  unsigned __int8 *v42; // ebp
  int v43; // eax
  int result; // eax
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // eax
  unsigned int v49; // edx
  unsigned int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // ecx
  unsigned __int8 *v55; // eax
  int v56; // eax
  int v57; // eax
  unsigned __int8 *v58; // eax
  int v59; // ecx
  int v60; // eax
  char v61; // al
  unsigned int v62; // edx
  int v63; // ecx
  int v64; // eax
  int v65; // ecx
  size_t v66; // eax
  int v67; // eax
  int v68; // eax
  unsigned int v69; // edx
  int v70; // eax
  int v71; // eax
  bool v72; // cc
  int v73; // eax
  __int16 v74; // cx
  unsigned int v75; // eax
  char *v76; // eax
  unsigned __int8 *v77; // ecx
  int v78; // edx
  int v79; // ecx
  int v80; // ecx
  unsigned int v81; // edx
  unsigned int v82; // eax
  unsigned int v83; // edi
  int v84; // eax
  unsigned int v85; // edx
  char v86; // cl
  unsigned int v87; // eax
  unsigned int v88; // edi
  int v89; // eax
  unsigned int v90; // edx
  char v91; // cl
  unsigned int v92; // eax
  unsigned int v93; // ecx
  __int16 v94; // dx
  unsigned int v95; // eax
  int v96; // ecx
  int v97; // eax
  int v98; // ecx
  unsigned int v99; // eax
  int v100; // eax
  __int16 v101; // dx
  char v102; // cl
  int v103; // ecx
  unsigned int v104; // ecx
  int v105; // eax
  int v106; // eax
  int v107; // ecx
  unsigned int v108; // eax
  int v109; // eax
  __int16 v110; // dx
  char v111; // cl
  int v112; // ecx
  unsigned int v113; // ecx
  int v114; // eax
  int v115; // eax
  unsigned int v116; // ecx
  unsigned int v117; // ecx
  unsigned int v118; // eax
  int v119; // eax
  unsigned int v120; // eax
  char *v121; // ebx
  _BYTE *v122; // edi
  int v123; // ebx
  _BYTE *v124; // ebx
  unsigned __int8 v125; // al
  int v126; // eax
  unsigned int v127; // eax
  unsigned __int8 *v128; // eax
  int v129; // ecx
  int v130; // eax
  unsigned int v131; // eax
  unsigned __int8 *v132; // ebp
  unsigned __int8 *v133; // eax
  unsigned __int8 **v134; // edi
  int v135; // edx
  int v136; // esi
  int v137; // [esp-18h] [ebp-54h]
  int v138; // [esp-18h] [ebp-54h]
  char *v139; // [esp-14h] [ebp-50h]
  int v140; // [esp-14h] [ebp-50h]
  unsigned int v141; // [esp-10h] [ebp-4Ch]
  unsigned int j; // [esp+4h] [ebp-38h]
  unsigned __int8 *Src; // [esp+8h] [ebp-34h]
  unsigned int v144; // [esp+Ch] [ebp-30h]
  unsigned int v145; // [esp+10h] [ebp-2Ch] BYREF
  unsigned __int8 *v146; // [esp+14h] [ebp-28h]
  void *v147; // [esp+18h] [ebp-24h]
  unsigned int v148; // [esp+1Ch] [ebp-20h]
  int v149; // [esp+20h] [ebp-1Ch]
  unsigned int v150; // [esp+24h] [ebp-18h]
  unsigned int v151; // [esp+28h] [ebp-14h]
  int v152; // [esp+2Ch] [ebp-10h]
  unsigned int v153; // [esp+30h] [ebp-Ch]
  _DWORD *v154; // [esp+34h] [ebp-8h]
  unsigned int v155; // [esp+38h] [ebp-4h]

  v2 = a1;
  if ( a1 == nullptr )
    return -2;
  if ( a1[8] == nullptr )
    return -2;
  if ( a1[9] == nullptr )
    return -2;
  v3 = a1[7];
  v146 = v3;
  if ( v3 == nullptr )
    return -2;
  if ( *(unsigned __int8 ***)v3 != a1 )
    return -2;
  v4 = *((_DWORD *)v3 + 1);
  if ( v4 < 16180 || v4 > 16211 || a1[3] == nullptr || *a1 == nullptr && a1[1] != nullptr )
    return -2;
  if ( v4 == 16191 )
    *((_DWORD *)v3 + 1) = 16192;
  v5 = *((_DWORD *)v3 + 15);
  v147 = a1[3];
  v144 = (unsigned int)a1[4];
  v148 = v144;
  v6 = *a1;
  v149 = 0;
  v7 = (unsigned int)a1[1];
  v8 = *((_DWORD *)v3 + 1) - 16180;
  Src = v6;
  j = v5;
  v153 = v7;
  i = *((_DWORD *)v3 + 16);
  v154 = v3 + 88;
  while ( 1 )
  {
    switch ( v8 )
    {
      case 0u:
        v10 = *((_DWORD *)v3 + 3);
        if ( v10 == 0 )
        {
          *((_DWORD *)v3 + 1) = 16192;
          goto LABEL_193;
        }
        if ( i < 0x10 )
        {
          do
          {
            if ( v7 == 0 )
              goto LABEL_114;
            v11 = *v6++ << i;
            v5 += v11;
            Src = v6;
            i += 8;
            j = v5;
            --v7;
          }
          while ( i < 0x10 );
          v10 = *((_DWORD *)v3 + 3);
          v2 = a1;
        }
        if ( (v10 & 2) != 0 && v5 == 35615 )
        {
          if ( *((_DWORD *)v3 + 10) == 0 )
            *((_DWORD *)v3 + 10) = 15;
          *((_DWORD *)v3 + 7) = sub_410C80(0, 0);
          LOWORD(v145) = -29921;
          v12 = sub_410C80(*((_DWORD *)v3 + 7), &v145);
          v5 = 0;
          *((_DWORD *)v3 + 7) = v12;
          j = 0;
          i = 0;
          *((_DWORD *)v3 + 1) = 16181;
          goto LABEL_192;
        }
        v13 = *((_DWORD *)v3 + 9);
        *((_DWORD *)v3 + 5) = 0;
        if ( v13 != 0 )
          *(_DWORD *)(v13 + 48) = -1;
        if ( (v3[12] & 1) == 0 )
          goto LABEL_39;
        v14 = (((unsigned __int8)v5 << 8) + (v5 >> 8)) % 0x1F;
        v5 = j;
        if ( v14 != 0 )
        {
          v2 = a1;
LABEL_39:
          v2[6] = "incorrect header check";
          *((_DWORD *)v3 + 1) = 16209;
          goto LABEL_193;
        }
        if ( (j & 0xF) == 8 )
        {
          v5 = j >> 4;
          i -= 4;
          j = v5;
          v15 = (v5 & 0xF) + 8;
          if ( *((_DWORD *)v3 + 10) == 0 )
            *((_DWORD *)v3 + 10) = v15;
          if ( v15 > 0xF || v15 > *((_DWORD *)v3 + 10) )
          {
            v2 = a1;
            a1[6] = "invalid window size";
            *((_DWORD *)v3 + 1) = 16209;
          }
          else
          {
            *((_DWORD *)v3 + 6) = 1 << v15;
            v16 = (unsigned __int8 *)sub_411490(0, 0, 0);
            v2 = a1;
            *((_DWORD *)v3 + 7) = v16;
            a1[12] = v16;
            *((_DWORD *)v3 + 1) = ~BYTE1(j) & 2 | 0x3F3D;
            v5 = 0;
            j = 0;
            i = 0;
          }
        }
        else
        {
          v2 = a1;
          a1[6] = "unknown compression method";
          *((_DWORD *)v3 + 1) = 16209;
        }
        goto LABEL_193;
      case 1u:
        if ( i < 0x10 )
        {
          do
          {
            if ( v7 == 0 )
              goto LABEL_114;
            v17 = *v6++ << i;
            v5 += v17;
            Src = v6;
            i += 8;
            j = v5;
            --v7;
          }
          while ( i < 0x10 );
          v2 = a1;
        }
        *((_DWORD *)v3 + 5) = v5;
        if ( (_BYTE)v5 != 8 )
        {
          v2[6] = "unknown compression method";
          *((_DWORD *)v3 + 1) = 16209;
          goto LABEL_193;
        }
        if ( (v5 & 0xE000) != 0 )
        {
          v2[6] = "unknown header flags set";
          *((_DWORD *)v3 + 1) = 16209;
          goto LABEL_193;
        }
        v18 = *((_DWORD **)v3 + 9);
        if ( v18 != nullptr )
          *v18 = (v5 & 0x100) != 0;
        if ( (*((_DWORD *)v3 + 5) & 0x200) != 0 && (v3[12] & 4) != 0 )
        {
          LOWORD(v145) = v5;
          *((_DWORD *)v3 + 7) = sub_410C80(*((_DWORD *)v3 + 7), &v145);
        }
        v5 = 0;
        *((_DWORD *)v3 + 1) = 16182;
        j = 0;
        for ( i = 0; i < 0x20; i += 8 )
        {
LABEL_55:
          if ( v7 == 0 )
            goto LABEL_114;
          v19 = *v6++ << i;
          v5 += v19;
          Src = v6;
          j = v5;
          --v7;
        }
LABEL_57:
        v20 = *((_DWORD *)v3 + 9);
        if ( v20 != 0 )
          *(_DWORD *)(v20 + 4) = v5;
        if ( (*((_DWORD *)v3 + 5) & 0x200) != 0 && (v3[12] & 4) != 0 )
        {
          v145 = v5;
          *((_DWORD *)v3 + 7) = sub_410C80(*((_DWORD *)v3 + 7), &v145);
        }
        v5 = 0;
        *((_DWORD *)v3 + 1) = 16183;
        j = 0;
        for ( i = 0; i < 0x10; i += 8 )
        {
LABEL_64:
          if ( v7 == 0 )
            goto LABEL_114;
          v21 = *v6++ << i;
          v5 += v21;
          Src = v6;
          j = v5;
          --v7;
        }
LABEL_66:
        v22 = *((_DWORD *)v3 + 9);
        if ( v22 != 0 )
        {
          *(_DWORD *)(v22 + 8) = (unsigned __int8)v5;
          *(_DWORD *)(*((_DWORD *)v3 + 9) + 12) = v5 >> 8;
        }
        if ( (*((_DWORD *)v3 + 5) & 0x200) != 0 && (v3[12] & 4) != 0 )
        {
          LOWORD(v145) = v5;
          *((_DWORD *)v3 + 7) = sub_410C80(*((_DWORD *)v3 + 7), &v145);
        }
        v5 = 0;
        *((_DWORD *)v3 + 1) = 16184;
        j = 0;
        i = 0;
LABEL_72:
        if ( (*((_DWORD *)v3 + 5) & 0x400) != 0 )
        {
          if ( i < 0x10 )
          {
            while ( v7 != 0 )
            {
              v23 = *v6++ << i;
              v5 += v23;
              Src = v6;
              i += 8;
              j = v5;
              --v7;
              if ( i >= 0x10 )
                goto LABEL_76;
            }
            goto LABEL_114;
          }
LABEL_76:
          v24 = *((_DWORD *)v3 + 9);
          *((_DWORD *)v3 + 17) = v5;
          if ( v24 != 0 )
            *(_DWORD *)(v24 + 20) = v5;
          if ( (*((_DWORD *)v3 + 5) & 0x200) != 0 && (v3[12] & 4) != 0 )
          {
            LOWORD(v145) = v5;
            *((_DWORD *)v3 + 7) = sub_410C80(*((_DWORD *)v3 + 7), &v145);
          }
          i = 0;
          j = 0;
        }
        else
        {
          v25 = *((_DWORD *)v3 + 9);
          if ( v25 != 0 )
            *(_DWORD *)(v25 + 16) = 0;
        }
        *((_DWORD *)v3 + 1) = 16185;
LABEL_85:
        if ( (*((_DWORD *)v3 + 5) & 0x400) != 0 )
        {
          v26 = *((_DWORD *)v3 + 17);
          v150 = v26;
          if ( v26 > v7 )
          {
            v26 = v7;
            v150 = v7;
          }
          if ( v26 != 0 )
          {
            v27 = *((_DWORD **)v3 + 9);
            if ( v27 != nullptr )
            {
              v155 = v27[4];
              if ( v155 != 0 )
              {
                v28 = v27[5] - *((_DWORD *)v3 + 17);
                v29 = v27[6];
                v152 = v28;
                if ( v26 + v28 <= v29 )
                  v30 = v26;
                else
                  v30 = v29 - v152;
                memcpy((void *)(v155 + v152), v6, v30);
              }
            }
            if ( (*((_DWORD *)v3 + 5) & 0x200) != 0 && (v3[12] & 4) != 0 )
              *((_DWORD *)v3 + 7) = sub_410C80(*((_DWORD *)v3 + 7), v6);
            v6 += v150;
            v7 -= v150;
            Src = v6;
            *((_DWORD *)v3 + 17) -= v150;
          }
          if ( *((_DWORD *)v3 + 17) != 0 )
            goto LABEL_114;
        }
        *((_DWORD *)v3 + 17) = 0;
        *((_DWORD *)v3 + 1) = 16186;
LABEL_101:
        if ( (*((_DWORD *)v3 + 5) & 0x800) != 0 )
        {
          if ( v7 == 0 )
            goto LABEL_114;
          v31 = 0;
          do
          {
            v32 = v6[v31++];
            v150 = v32;
            v33 = *((_DWORD *)v3 + 9);
            if ( v33 != 0 && *(_DWORD *)(v33 + 28) != 0 )
            {
              v34 = *((_DWORD *)v3 + 17);
              if ( v34 < *(_DWORD *)(v33 + 32) )
              {
                *(_BYTE *)(*(_DWORD *)(v33 + 28) + v34) = v150;
                ++*((_DWORD *)v3 + 17);
                v6 = Src;
              }
            }
            v35 = v150;
          }
          while ( v150 != 0 && v31 < v7 );
          v36 = (*((_DWORD *)v3 + 5) & 0x200) == 0;
          v155 = v31;
          if ( !v36 && (v3[12] & 4) != 0 )
          {
            v37 = sub_410C80(*((_DWORD *)v3 + 7), v6);
            v31 = v155;
            *((_DWORD *)v3 + 7) = v37;
            v35 = v150;
          }
          v6 += v31;
          v7 -= v31;
          Src = v6;
          if ( v35 != 0 )
            goto LABEL_114;
        }
        else
        {
          v45 = *((_DWORD *)v3 + 9);
          if ( v45 != 0 )
            *(_DWORD *)(v45 + 28) = 0;
        }
        *((_DWORD *)v3 + 17) = 0;
        *((_DWORD *)v3 + 1) = 16187;
LABEL_128:
        if ( (*((_DWORD *)v3 + 5) & 0x1000) != 0 )
        {
          if ( v7 == 0 )
            goto LABEL_114;
          v46 = 0;
          do
          {
            v47 = v6[v46++];
            v150 = v47;
            v48 = *((_DWORD *)v3 + 9);
            if ( v48 != 0 && *(_DWORD *)(v48 + 36) != 0 )
            {
              v49 = *((_DWORD *)v3 + 17);
              if ( v49 < *(_DWORD *)(v48 + 40) )
              {
                *(_BYTE *)(*(_DWORD *)(v48 + 36) + v49) = v150;
                ++*((_DWORD *)v3 + 17);
                v6 = Src;
              }
            }
            v50 = v150;
          }
          while ( v150 != 0 && v46 < v7 );
          v36 = (*((_DWORD *)v3 + 5) & 0x200) == 0;
          v155 = v46;
          if ( !v36 && (v3[12] & 4) != 0 )
          {
            v51 = sub_410C80(*((_DWORD *)v3 + 7), v6);
            v46 = v155;
            *((_DWORD *)v3 + 7) = v51;
            v50 = v150;
          }
          v6 += v46;
          v7 -= v46;
          Src = v6;
          if ( v50 != 0 )
            goto LABEL_114;
        }
        else
        {
          v52 = *((_DWORD *)v3 + 9);
          if ( v52 != 0 )
            *(_DWORD *)(v52 + 36) = 0;
        }
        v5 = j;
        *((_DWORD *)v3 + 1) = 16188;
LABEL_145:
        if ( (*((_DWORD *)v3 + 5) & 0x200) != 0 )
        {
          if ( i < 0x10 )
          {
            while ( v7 != 0 )
            {
              v53 = *v6++ << i;
              v5 += v53;
              Src = v6;
              i += 8;
              j = v5;
              --v7;
              if ( i >= 0x10 )
                goto LABEL_149;
            }
            goto LABEL_114;
          }
LABEL_149:
          if ( (v3[12] & 4) != 0 && v5 != *((unsigned __int16 *)v3 + 14) )
          {
            v2 = a1;
            a1[6] = "header crc mismatch";
            *((_DWORD *)v3 + 1) = 16209;
            goto LABEL_193;
          }
          i = 0;
          j = 0;
        }
        v54 = *((_DWORD *)v3 + 9);
        if ( v54 != 0 )
        {
          *(_DWORD *)(v54 + 44) = (*((int *)v3 + 5) >> 9) & 1;
          *(_DWORD *)(*((_DWORD *)v3 + 9) + 48) = 1;
        }
        v55 = (unsigned __int8 *)sub_410C80(0, 0);
        v2 = a1;
        v5 = j;
        *((_DWORD *)v3 + 7) = v55;
        a1[12] = v55;
        *((_DWORD *)v3 + 1) = 16191;
        goto LABEL_193;
      case 2u:
        if ( i < 0x20 )
          goto LABEL_55;
        goto LABEL_57;
      case 3u:
        if ( i < 0x10 )
          goto LABEL_64;
        goto LABEL_66;
      case 4u:
        goto LABEL_72;
      case 5u:
        goto LABEL_85;
      case 6u:
        goto LABEL_101;
      case 7u:
        goto LABEL_128;
      case 8u:
        goto LABEL_145;
      case 9u:
        for ( ; i < 0x20; --v7 )
        {
          if ( v7 == 0 )
            goto LABEL_114;
          v56 = *v6++ << i;
          v5 += v56;
          Src = v6;
          i += 8;
          j = v5;
        }
        v2 = a1;
        v57 = HIBYTE(v5) + (((v5 << 16) + (v5 & 0xFF00)) << 8) + ((v5 >> 8) & 0xFF00);
        v5 = 0;
        *((_DWORD *)v3 + 7) = v57;
        j = 0;
        i = 0;
        a1[12] = (unsigned __int8 *)v57;
        *((_DWORD *)v3 + 1) = 16190;
LABEL_160:
        if ( *((_DWORD *)v3 + 4) == 0 )
        {
          v2[3] = (unsigned __int8 *)v147;
          v2[4] = (unsigned __int8 *)v144;
          *v2 = v6;
          v2[1] = (unsigned __int8 *)v7;
          *((_DWORD *)v3 + 16) = i;
          *((_DWORD *)v3 + 15) = v5;
          return 2;
        }
        v58 = (unsigned __int8 *)sub_411490(0, 0, 0);
        v5 = j;
        *((_DWORD *)v3 + 7) = v58;
        a1[12] = v58;
        *((_DWORD *)v3 + 1) = 16191;
LABEL_162:
        if ( a2 == 5 || a2 == 6 )
        {
          v38 = j;
          v39 = a2;
          goto LABEL_116;
        }
LABEL_164:
        if ( *((_DWORD *)v3 + 2) != 0 )
        {
          *((_DWORD *)v3 + 1) = 16206;
          v59 = i & 7;
          v5 >>= v59;
          i -= v59;
          j = v5;
          goto LABEL_192;
        }
        if ( i >= 3 )
        {
LABEL_169:
          v61 = v5;
          v62 = v5 >> 1;
          *((_DWORD *)v3 + 2) = v61 & 1;
          switch ( v62 & 3 )
          {
            case 0u:
              *((_DWORD *)v3 + 1) = 16193;
              goto LABEL_171;
            case 1u:
              *((_DWORD *)v3 + 20) = "`\a";
              *((_DWORD *)v3 + 22) = 9;
              *((_DWORD *)v3 + 21) = &unk_413F40;
              *((_DWORD *)v3 + 23) = 5;
              *((_DWORD *)v3 + 1) = 16199;
              if ( a2 != 6 )
              {
LABEL_171:
                v2 = a1;
                v5 = v62 >> 2;
                i -= 3;
                j = v5;
                goto LABEL_193;
              }
              i -= 3;
              j = v62 >> 2;
              break;
            case 2u:
              v2 = a1;
              v5 = v62 >> 2;
              i -= 3;
              *((_DWORD *)v3 + 1) = 16196;
              j = v5;
              goto LABEL_193;
            case 3u:
              v2 = a1;
              v5 = v62 >> 2;
              i -= 3;
              j = v5;
              a1[6] = "invalid block type";
              *((_DWORD *)v3 + 1) = 16209;
              goto LABEL_193;
          }
        }
        else
        {
          while ( v7 != 0 )
          {
            v60 = *v6++ << i;
            v5 += v60;
            Src = v6;
            i += 8;
            j = v5;
            --v7;
            if ( i >= 3 )
              goto LABEL_169;
          }
        }
        goto LABEL_114;
      case 0xAu:
        goto LABEL_160;
      case 0xBu:
        goto LABEL_162;
      case 0xCu:
        goto LABEL_164;
      case 0xDu:
        v63 = i & 7;
        v5 >>= v63;
        i -= v63;
        for ( j = v5; i < 0x20; --v7 )
        {
          if ( v7 == 0 )
            goto LABEL_114;
          v64 = *v6++ << i;
          v5 += v64;
          Src = v6;
          i += 8;
          j = v5;
        }
        v65 = (unsigned __int16)v5;
        if ( (unsigned __int16)v5 != ~v5 >> 16 )
        {
          v2 = a1;
          a1[6] = "invalid stored block lengths";
          *((_DWORD *)v3 + 1) = 16209;
          goto LABEL_193;
        }
        v5 = 0;
        *((_DWORD *)v3 + 17) = v65;
        i = 0;
        j = 0;
        *((_DWORD *)v3 + 1) = 16194;
        if ( a2 == 6 )
        {
          v38 = 0;
          goto LABEL_115;
        }
        v2 = a1;
LABEL_183:
        *((_DWORD *)v3 + 1) = 16195;
LABEL_184:
        v66 = *((_DWORD *)v3 + 17);
        v150 = v66;
        if ( v66 == 0 )
        {
          *((_DWORD *)v3 + 1) = 16191;
          goto LABEL_193;
        }
        if ( v66 > v7 )
        {
          v66 = v7;
          v150 = v7;
        }
        if ( v66 > v144 )
        {
          v66 = v144;
          v150 = v144;
        }
        if ( v66 != 0 )
        {
          memcpy(v147, v6, v66);
          v144 -= v150;
          v6 += v150;
          v147 = (char *)v147 + v150;
          v7 -= v150;
          *((_DWORD *)v3 + 17) -= v150;
          Src = v6;
LABEL_191:
          v5 = j;
          goto LABEL_192;
        }
        goto LABEL_114;
      case 0xEu:
        goto LABEL_183;
      case 0xFu:
        goto LABEL_184;
      case 0x10u:
        if ( i < 0xE )
        {
          do
          {
            if ( v7 == 0 )
              goto LABEL_114;
            v67 = *v6++ << i;
            v5 += v67;
            Src = v6;
            i += 8;
            j = v5;
            --v7;
          }
          while ( i < 0xE );
          v2 = a1;
        }
        i -= 14;
        v68 = v5 & 0x1F;
        v69 = v5 >> 5;
        *((_DWORD *)v3 + 25) = v68 + 257;
        v70 = v69 & 0x1F;
        v69 >>= 5;
        *((_DWORD *)v3 + 26) = v70 + 1;
        v71 = v69 & 0xF;
        v5 = v69 >> 4;
        j = v5;
        v72 = *((_DWORD *)v3 + 25) <= 0x11Eu;
        *((_DWORD *)v3 + 24) = v71 + 4;
        if ( !v72 || *((_DWORD *)v3 + 26) > 0x1Eu )
        {
          v2[6] = "too many length or distance symbols";
          *((_DWORD *)v3 + 1) = 16209;
          goto LABEL_193;
        }
        *((_DWORD *)v3 + 27) = 0;
        *((_DWORD *)v3 + 1) = 16197;
LABEL_203:
        if ( *((_DWORD *)v3 + 27) < *((_DWORD *)v3 + 24) )
        {
          while ( i >= 3 )
          {
LABEL_207:
            v74 = v5 & 7;
            v5 >>= 3;
            i -= 3;
            j = v5;
            *(_WORD *)&v3[2 * (unsigned __int16)word_413FC0[(*((_DWORD *)v3 + 27))++] + 116] = v74;
            if ( *((_DWORD *)v3 + 27) >= *((_DWORD *)v3 + 24) )
              goto LABEL_208;
          }
          while ( v7 != 0 )
          {
            v73 = *v6++ << i;
            v5 += v73;
            Src = v6;
            i += 8;
            j = v5;
            --v7;
            if ( i >= 3 )
              goto LABEL_207;
          }
          goto LABEL_114;
        }
LABEL_208:
        while ( *((_DWORD *)v3 + 27) < 0x13u )
          *(_WORD *)&v3[2 * (unsigned __int16)word_413FC0[(*((_DWORD *)v3 + 27))++] + 116] = 0;
        *((_DWORD *)v3 + 22) = 7;
        *((_DWORD *)v3 + 20) = v3 + 1332;
        *((_DWORD *)v3 + 28) = v3 + 1332;
        v149 = sub_4117C0(0, v3 + 116, 19, v3 + 112, v3 + 88, v3 + 756);
        if ( v149 != 0 )
        {
          v2 = a1;
          v5 = j;
          a1[6] = "invalid code lengths set";
          *((_DWORD *)v3 + 1) = 16209;
          goto LABEL_193;
        }
        *((_DWORD *)v3 + 27) = 0;
        *((_DWORD *)v3 + 1) = 16198;
LABEL_214:
        v75 = *((_DWORD *)v3 + 25) + *((_DWORD *)v3 + 26);
        v150 = *((_DWORD *)v3 + 27);
        if ( v150 >= v75 )
        {
LABEL_246:
          if ( *((_DWORD *)v3 + 1) == 16209 )
            goto LABEL_191;
          if ( *((_WORD *)v3 + 314) == 0 )
          {
            v2 = a1;
            v5 = j;
            a1[6] = "invalid code -- missing end-of-block";
            *((_DWORD *)v3 + 1) = 16209;
            goto LABEL_193;
          }
          *((_DWORD *)v3 + 22) = 9;
          *((_DWORD *)v3 + 20) = v3 + 1332;
          *((_DWORD *)v3 + 28) = v3 + 1332;
          v149 = sub_4117C0(1, v3 + 116, *((_DWORD *)v3 + 25), v3 + 112, v3 + 88, v3 + 756);
          if ( v149 != 0 )
          {
            v2 = a1;
            v5 = j;
            a1[6] = "invalid literal/lengths set";
            *((_DWORD *)v3 + 1) = 16209;
          }
          else
          {
            *((_DWORD *)v3 + 21) = *((_DWORD *)v3 + 28);
            *((_DWORD *)v3 + 23) = 6;
            v149 = sub_4117C0(2, &v3[2 * *((_DWORD *)v3 + 25) + 116], *((_DWORD *)v3 + 26), v3 + 112, v3 + 92, v3 + 756);
            if ( v149 != 0 )
            {
              v2 = a1;
              v5 = j;
              a1[6] = "invalid distances set";
              *((_DWORD *)v3 + 1) = 16209;
            }
            else
            {
              v39 = a2;
              *((_DWORD *)v3 + 1) = 16199;
              if ( a2 == 6 )
              {
                v38 = j;
                goto LABEL_116;
              }
              v5 = j;
              v2 = a1;
LABEL_256:
              *((_DWORD *)v3 + 1) = 16200;
LABEL_257:
              if ( v7 < 6 || v144 < 0x102 )
              {
                v96 = *((_DWORD *)v3 + 22);
                v155 = *((_DWORD *)v3 + 20);
                v97 = 1 << v96;
                v98 = *((_DWORD *)v3 + 20);
                *((_DWORD *)v3 + 1778) = 0;
                v99 = *(_DWORD *)(v98 + 4 * (v5 & (v97 - 1)));
                if ( BYTE1(v99) > i )
                {
                  while ( v7 != 0 )
                  {
                    v100 = *v6++ << i;
                    v5 += v100;
                    i += 8;
                    j = v5;
                    --v7;
                    Src = v6;
                    v99 = *(_DWORD *)(*((_DWORD *)v3 + 20) + 4 * (v5 & ((1 << *((_DWORD *)v3 + 22)) - 1)));
                    if ( BYTE1(v99) <= i )
                      goto LABEL_264;
                  }
                  goto LABEL_114;
                }
LABEL_264:
                if ( (_BYTE)v99 != 0 && (v99 & 0xF0) == 0 )
                {
                  v101 = v99;
                  v151 = v99 >> 8;
                  v152 = v99;
                  v99 = *(_DWORD *)(v155 + 4 * (HIWORD(v99) + ((j & ((1 << (BYTE1(v99) + v99)) - 1)) >> SBYTE1(v99))));
                  if ( (unsigned __int8)v151 + (unsigned int)BYTE1(v99) > i )
                  {
                    while ( v7 != 0 )
                    {
                      v102 = i;
                      i += 8;
                      --v7;
                      j += *Src++ << v102;
                      v99 = *(_DWORD *)(*((_DWORD *)v146 + 20)
                                      + 4 * (HIWORD(v152) + ((j & ((1 << (HIBYTE(v101) + v101)) - 1)) >> SHIBYTE(v101))));
                      if ( HIBYTE(v101) + (unsigned int)BYTE1(v99) <= i )
                        goto LABEL_269;
                    }
                    goto LABEL_114;
                  }
LABEL_269:
                  v3 = v146;
                  v6 = Src;
                  v103 = HIBYTE(v101);
                  v5 = j >> SHIBYTE(v101);
                  i -= v103;
                  *((_DWORD *)v146 + 1778) = v103;
                }
                *((_DWORD *)v3 + 1778) += BYTE1(v99);
                i -= BYTE1(v99);
                v5 >>= SBYTE1(v99);
                j = v5;
                *((_DWORD *)v3 + 17) = HIWORD(v99);
                if ( (_BYTE)v99 == 0 )
                {
                  *((_DWORD *)v3 + 1) = 16205;
                  goto LABEL_192;
                }
                if ( (v99 & 0x20) != 0 )
                {
                  *((_DWORD *)v3 + 1778) = -1;
                  *((_DWORD *)v3 + 1) = 16191;
                  goto LABEL_192;
                }
                if ( (v99 & 0x40) != 0 )
                {
                  v2 = a1;
                  a1[6] = "invalid literal/length code";
                  *((_DWORD *)v3 + 1) = 16209;
                }
                else
                {
                  *((_DWORD *)v3 + 1) = 16201;
                  *((_DWORD *)v3 + 19) = v99 & 0xF;
LABEL_277:
                  v104 = *((_DWORD *)v3 + 19);
                  if ( v104 != 0 )
                  {
                    if ( i < v104 )
                    {
                      while ( v7 != 0 )
                      {
                        v105 = *v6++ << i;
                        v104 = *((_DWORD *)v3 + 19);
                        v5 += v105;
                        i += 8;
                        j = v5;
                        --v7;
                        Src = v6;
                        if ( i >= v104 )
                          goto LABEL_281;
                      }
                      goto LABEL_114;
                    }
LABEL_281:
                    i -= v104;
                    v106 = v5 & ((1 << v104) - 1);
                    v5 >>= v104;
                    *((_DWORD *)v3 + 17) += v106;
                    *((_DWORD *)v3 + 1778) += v104;
                    j = v5;
                  }
                  *((_DWORD *)v3 + 1779) = *((_DWORD *)v3 + 17);
                  *((_DWORD *)v3 + 1) = 16202;
LABEL_283:
                  v107 = *((_DWORD *)v3 + 23);
                  v155 = *((_DWORD *)v3 + 21);
                  v108 = *(_DWORD *)(*((_DWORD *)v3 + 21) + 4 * (v5 & ((1 << v107) - 1)));
                  if ( BYTE1(v108) > i )
                  {
                    while ( v7 != 0 )
                    {
                      v109 = *v6++ << i;
                      v5 += v109;
                      i += 8;
                      j = v5;
                      --v7;
                      Src = v6;
                      v108 = *(_DWORD *)(*((_DWORD *)v3 + 21) + 4 * (v5 & ((1 << *((_DWORD *)v3 + 23)) - 1)));
                      if ( BYTE1(v108) <= i )
                        goto LABEL_286;
                    }
                    goto LABEL_114;
                  }
LABEL_286:
                  if ( (v108 & 0xF0) == 0 )
                  {
                    v110 = v108;
                    v151 = v108 >> 8;
                    v152 = v108;
                    v108 = *(_DWORD *)(v155
                                     + 4 * (HIWORD(v108) + ((j & ((1 << (BYTE1(v108) + v108)) - 1)) >> SBYTE1(v108))));
                    if ( (unsigned __int8)v151 + (unsigned int)BYTE1(v108) > i )
                    {
                      while ( v7 != 0 )
                      {
                        v111 = i;
                        i += 8;
                        --v7;
                        j += *Src++ << v111;
                        v108 = *(_DWORD *)(*((_DWORD *)v146 + 21)
                                         + 4
                                         * (HIWORD(v152) + ((j & ((1 << (HIBYTE(v110) + v110)) - 1)) >> SHIBYTE(v110))));
                        if ( HIBYTE(v110) + (unsigned int)BYTE1(v108) <= i )
                          goto LABEL_290;
                      }
                      goto LABEL_114;
                    }
LABEL_290:
                    v3 = v146;
                    v112 = HIBYTE(v110);
                    i -= HIBYTE(v110);
                    v5 = j >> SHIBYTE(v110);
                    *((_DWORD *)v146 + 1778) += v112;
                  }
                  v6 = Src;
                  *((_DWORD *)v3 + 1778) += BYTE1(v108);
                  i -= BYTE1(v108);
                  v5 >>= SBYTE1(v108);
                  j = v5;
                  if ( (v108 & 0x40) != 0 )
                  {
                    v2 = a1;
                    a1[6] = "invalid distance code";
                    *((_DWORD *)v3 + 1) = 16209;
                  }
                  else
                  {
                    *((_DWORD *)v3 + 1) = 16203;
                    *((_DWORD *)v3 + 18) = HIWORD(v108);
                    *((_DWORD *)v3 + 19) = v108 & 0xF;
LABEL_294:
                    v113 = *((_DWORD *)v3 + 19);
                    if ( v113 != 0 )
                    {
                      if ( i < v113 )
                      {
                        while ( v7 != 0 )
                        {
                          v114 = *v6++ << i;
                          v113 = *((_DWORD *)v3 + 19);
                          v5 += v114;
                          i += 8;
                          j = v5;
                          --v7;
                          Src = v6;
                          if ( i >= v113 )
                            goto LABEL_298;
                        }
                        goto LABEL_114;
                      }
LABEL_298:
                      i -= v113;
                      v115 = v5 & ((1 << v113) - 1);
                      v5 >>= v113;
                      *((_DWORD *)v3 + 18) += v115;
                      *((_DWORD *)v3 + 1778) += v113;
                      j = v5;
                    }
                    *((_DWORD *)v3 + 1) = 16204;
LABEL_300:
                    if ( v144 == 0 )
                      goto LABEL_114;
                    v116 = *((_DWORD *)v3 + 18);
                    if ( v116 <= v148 - v144 )
                    {
                      v152 = (int)v147 - v116;
                      v120 = *((_DWORD *)v3 + 17);
                      goto LABEL_311;
                    }
                    v117 = v116 - (v148 - v144);
                    if ( v117 <= *((_DWORD *)v3 + 12) || *((_DWORD *)v3 + 1777) == 0 )
                    {
                      v118 = *((_DWORD *)v3 + 13);
                      if ( v117 <= v118 )
                      {
                        v119 = *((_DWORD *)v3 + 13) + *((_DWORD *)v3 + 14) - v117;
                      }
                      else
                      {
                        v117 -= v118;
                        v119 = *((_DWORD *)v3 + 11) + *((_DWORD *)v3 + 14) - v117;
                      }
                      v152 = v119;
                      v120 = *((_DWORD *)v3 + 17);
                      if ( v117 > v120 )
LABEL_311:
                        v117 = v120;
                      if ( v117 > v144 )
                        v117 = v144;
                      v121 = (char *)v152;
                      v144 -= v117;
                      *((_DWORD *)v3 + 17) = v120 - v117;
                      v122 = v147;
                      v123 = v121 - (_BYTE *)v147;
                      do
                      {
                        *v122 = v122[v123];
                        ++v122;
                        --v117;
                      }
                      while ( v117 != 0 );
                      v6 = Src;
                      v147 = v122;
                      v3 = v146;
                      if ( *((_DWORD *)v146 + 17) == 0 )
                        *((_DWORD *)v146 + 1) = 16200;
LABEL_192:
                      v2 = a1;
                      goto LABEL_193;
                    }
                    v2 = a1;
                    a1[6] = "invalid distance too far back";
                    *((_DWORD *)v3 + 1) = 16209;
                  }
                }
              }
              else
              {
                v141 = v148;
                v2[3] = (unsigned __int8 *)v147;
                v2[4] = (unsigned __int8 *)v144;
                *v2 = v6;
                v2[1] = (unsigned __int8 *)v7;
                *((_DWORD *)v3 + 15) = v5;
                *((_DWORD *)v3 + 16) = i;
                sub_411C20(v2, v141);
                v2 = a1;
                v36 = *((_DWORD *)v3 + 1) == 16191;
                v5 = *((_DWORD *)v3 + 15);
                i = *((_DWORD *)v3 + 16);
                v6 = *a1;
                v7 = (unsigned int)a1[1];
                v147 = a1[3];
                v144 = (unsigned int)a1[4];
                Src = v6;
                j = v5;
                if ( v36 )
                  *((_DWORD *)v3 + 1778) = -1;
              }
            }
          }
          goto LABEL_193;
        }
        v38 = j;
        while ( 1 )
        {
          v152 = *(_DWORD *)(*((_DWORD *)v146 + 20) + 4 * (v38 & ((1 << *v154) - 1)));
          v76 = (char *)v152;
          if ( BYTE1(v152) > i )
            break;
LABEL_219:
          if ( HIWORD(v76) >= 0x10u )
          {
            if ( HIWORD(v76) == 16 )
            {
              v155 = BYTE1(v76) + 2;
              if ( i < v155 )
              {
                while ( v7 != 0 )
                {
                  v78 = *v6++ << i;
                  v38 += v78;
                  Src = v6;
                  i += 8;
                  j = v38;
                  --v7;
                  if ( i >= v155 )
                    goto LABEL_225;
                }
                goto LABEL_115;
              }
LABEL_225:
              v3 = v146;
              i -= BYTE1(v76);
              v5 = j >> SBYTE1(v76);
              j >>= SBYTE1(v76);
              if ( v150 == 0 )
                goto LABEL_249;
              v79 = v5 & 3;
              v5 >>= 2;
              v80 = v79 + 3;
              v152 = *(unsigned __int16 *)&v146[2 * v150 + 114];
              i -= 2;
            }
            else
            {
              v81 = j;
              v82 = BYTE1(v76);
              if ( HIWORD(v152) == 17 )
              {
                v83 = v82 + 3;
                v155 = v82;
                if ( i < v82 + 3 )
                {
                  do
                  {
                    if ( v7 == 0 )
                      goto LABEL_114;
                    v84 = *v6++ << i;
                    v81 += v84;
                    Src = v6;
                    i += 8;
                    j = v81;
                    --v7;
                  }
                  while ( i < v83 );
                  LOBYTE(v82) = v155;
                }
                v85 = v81 >> v82;
                v86 = v85;
                v5 = v85 >> 3;
                v80 = (v86 & 7) + 3;
                v87 = -3 - v155;
              }
              else
              {
                v88 = v82 + 7;
                v155 = v82;
                if ( i < v82 + 7 )
                {
                  do
                  {
                    if ( v7 == 0 )
                      goto LABEL_114;
                    v89 = *v6++ << i;
                    v81 += v89;
                    Src = v6;
                    i += 8;
                    j = v81;
                    --v7;
                  }
                  while ( i < v88 );
                  LOBYTE(v82) = v155;
                }
                v90 = v81 >> v82;
                v91 = v90;
                v5 = v90 >> 7;
                v80 = (v91 & 0x7F) + 11;
                v87 = -7 - v155;
              }
              v3 = v146;
              i += v87;
              v152 = 0;
            }
            v92 = *((_DWORD *)v3 + 25) + *((_DWORD *)v3 + 26);
            v151 = v80;
            j = v5;
            if ( v150 + v80 > v92 )
            {
LABEL_249:
              v2 = a1;
              a1[6] = "invalid bit length repeat";
              *((_DWORD *)v3 + 1) = 16209;
              goto LABEL_193;
            }
            v93 = v151;
            if ( v151 != 0 )
            {
              v94 = v152;
              do
              {
                *(_WORD *)&v3[2 * (*((_DWORD *)v3 + 27))++ + 116] = v94;
                --v93;
              }
              while ( v93 != 0 );
            }
            v77 = v146;
            v38 = j;
          }
          else
          {
            i -= BYTE1(v76);
            v38 >>= SBYTE1(v76);
            v77 = v146;
            j = v38;
            *(_WORD *)&v146[2 * v150 + 116] = HIWORD(v76);
            ++*((_DWORD *)v77 + 27);
          }
          v95 = *((_DWORD *)v77 + 25) + *((_DWORD *)v77 + 26);
          v150 = *((_DWORD *)v77 + 27);
          if ( v150 >= v95 )
          {
            v3 = v146;
            goto LABEL_246;
          }
        }
        while ( v7 != 0 )
        {
          v38 += *v6++ << i;
          i += 8;
          --v7;
          j = v38;
          Src = v6;
          v152 = *(_DWORD *)(*((_DWORD *)v146 + 20) + 4 * (v38 & ((1 << *v154) - 1)));
          v76 = (char *)v152;
          if ( BYTE1(v152) <= i )
            goto LABEL_219;
        }
LABEL_115:
        v39 = a2;
LABEL_116:
        v40 = a1;
        v41 = v146;
        a1[3] = (unsigned __int8 *)v147;
        a1[4] = (unsigned __int8 *)v144;
        a1[1] = (unsigned __int8 *)v7;
        v42 = (unsigned __int8 *)v148;
        *a1 = Src;
        v36 = *((_DWORD *)v41 + 11) == 0;
        *((_DWORD *)v41 + 15) = v38;
        *((_DWORD *)v41 + 16) = i;
        if ( v36 )
        {
          if ( v42 == a1[4] )
            goto LABEL_354;
          v43 = *((_DWORD *)v41 + 1);
          if ( v43 >= 16209 || v43 >= 16206 && v39 == 4 )
            goto LABEL_354;
        }
        if ( sub_410B90(a1, a1[3], v42 - a1[4]) == 0 )
        {
          v40 = a1;
LABEL_354:
          v131 = v153 - (_DWORD)v40[1];
          v132 = (unsigned __int8 *)(v42 - v40[4]);
          v40[2] += v131;
          v40[5] = &v40[5][(_DWORD)v132];
          *((_DWORD *)v41 + 8) += v132;
          v36 = (v41[12] & 4) == 0;
          v153 = v131;
          if ( v36 || v132 == nullptr )
          {
            v134 = a1;
          }
          else
          {
            v140 = v40[3] - v132;
            v138 = *((_DWORD *)v41 + 7);
            if ( *((_DWORD *)v41 + 5) != 0 )
              v133 = (unsigned __int8 *)sub_410C80(v138, v140);
            else
              v133 = (unsigned __int8 *)sub_411490(v138, v140, v132);
            v134 = a1;
            *((_DWORD *)v41 + 7) = v133;
            a1[12] = v133;
          }
          v135 = *((_DWORD *)v41 + 1);
          if ( v135 == 16199 || v135 == 16194 )
            v136 = 256;
          else
            v136 = 0;
          v36 = v153 == 0;
          v134[11] = (unsigned __int8 *)(v136
                                       + *((_DWORD *)v41 + 16)
                                       + (v135 != 16191 ? 0 : 0x80)
                                       + (*((_DWORD *)v41 + 2) != 0 ? 0x40 : 0));
          if ( (!v36 || v132 != nullptr) && a2 != 4 )
            return v149;
          result = v149;
          if ( v149 == 0 )
            return -5;
          return result;
        }
        *((_DWORD *)v41 + 1) = 16210;
        return -4;
      case 0x11u:
        goto LABEL_203;
      case 0x12u:
        goto LABEL_214;
      case 0x13u:
        goto LABEL_256;
      case 0x14u:
        goto LABEL_257;
      case 0x15u:
        goto LABEL_277;
      case 0x16u:
        goto LABEL_283;
      case 0x17u:
        goto LABEL_294;
      case 0x18u:
        goto LABEL_300;
      case 0x19u:
        if ( v144 == 0 )
          goto LABEL_114;
        v124 = v147;
        v125 = v3[68];
        v147 = (char *)v147 + 1;
        --v144;
        *v124 = v125;
        v6 = Src;
        *((_DWORD *)v3 + 1) = 16200;
        goto LABEL_193;
      case 0x1Au:
        if ( *((_DWORD *)v3 + 3) == 0 )
          goto LABEL_337;
        if ( i < 0x20 )
        {
          do
          {
            if ( v7 == 0 )
              goto LABEL_114;
            v126 = *v6++ << i;
            v5 += v126;
            Src = v6;
            i += 8;
            j = v5;
            --v7;
          }
          while ( i < 0x20 );
          v2 = a1;
        }
        v127 = v148 - v144;
        v2[5] += v148 - v144;
        *((_DWORD *)v3 + 8) += v127;
        v36 = (v3[12] & 4) == 0;
        v148 = v127;
        if ( !v36 && v127 != 0 )
        {
          v139 = (char *)v147 - v148;
          v137 = *((_DWORD *)v3 + 7);
          if ( *((_DWORD *)v3 + 5) != 0 )
            v128 = (unsigned __int8 *)sub_410C80(v137, v139);
          else
            v128 = (unsigned __int8 *)sub_411490(v137, v139, v127);
          v5 = j;
          *((_DWORD *)v3 + 7) = v128;
          a1[12] = v128;
        }
        v36 = (v3[12] & 4) == 0;
        v148 = v144;
        if ( v36 )
          goto LABEL_336;
        v129 = v5;
        if ( *((_DWORD *)v3 + 5) == 0 )
          v129 = HIBYTE(v5) + ((v5 >> 8) & 0xFF00) + (((v5 << 16) + (v5 & 0xFF00)) << 8);
        if ( v129 == *((_DWORD *)v3 + 7) )
        {
LABEL_336:
          v5 = 0;
          i = 0;
          j = 0;
LABEL_337:
          *((_DWORD *)v3 + 1) = 16207;
LABEL_338:
          if ( *((_DWORD *)v3 + 3) == 0 || *((_DWORD *)v3 + 5) == 0 )
            goto LABEL_347;
          if ( i < 0x20 )
          {
            while ( v7 != 0 )
            {
              v130 = *v6++ << i;
              v5 += v130;
              Src = v6;
              i += 8;
              j = v5;
              --v7;
              if ( i >= 0x20 )
                goto LABEL_343;
            }
LABEL_114:
            v38 = j;
            goto LABEL_115;
          }
LABEL_343:
          if ( v5 == *((_DWORD *)v3 + 8) )
          {
            i = 0;
            j = 0;
LABEL_347:
            *((_DWORD *)v3 + 1) = 16208;
LABEL_348:
            v149 = 1;
            goto LABEL_114;
          }
          v2 = a1;
          a1[6] = "incorrect length check";
          *((_DWORD *)v3 + 1) = 16209;
        }
        else
        {
          v2 = a1;
          a1[6] = "incorrect data check";
          *((_DWORD *)v3 + 1) = 16209;
        }
LABEL_193:
        v8 = *((_DWORD *)v3 + 1) - 16180;
        if ( v8 > 0x1E )
          return -2;
        break;
      case 0x1Bu:
        goto LABEL_338;
      case 0x1Cu:
        goto LABEL_348;
      case 0x1Du:
        v149 = -3;
        goto LABEL_114;
      case 0x1Eu:
        return -4;
      default:
        return -2;
    }
  }
}

