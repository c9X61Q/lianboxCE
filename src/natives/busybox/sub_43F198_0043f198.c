// busybox.exe @ 0x43f198 size=2315

char __usercall sub_43F198@<al>(int a1@<eax>)
{
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // edx
  int v7; // eax
  int v8; // esi
  unsigned int v9; // edi
  unsigned int v10; // edi
  _WORD *v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebp
  unsigned int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  unsigned __int16 *v26; // eax
  unsigned __int16 v27; // dx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // ecx
  int v33; // eax
  unsigned __int16 *v34; // eax
  int v35; // ebp
  unsigned int v36; // edi
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // eax
  int v40; // ecx
  int v41; // edx
  _WORD *v42; // esi
  int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // edi
  unsigned int v46; // eax
  unsigned int v47; // ecx
  int v48; // edx
  int v49; // edx
  int v50; // edx
  int v51; // eax
  unsigned __int16 *v52; // eax
  int v53; // edi
  unsigned __int16 v54; // dx
  unsigned int v55; // ecx
  int v56; // edi
  int v57; // edx
  int v58; // eax
  int v59; // eax
  int v60; // edx
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  int v64; // edx
  _WORD *v65; // ebp
  unsigned int v66; // edx
  unsigned int v67; // ecx
  int v68; // edi
  unsigned int v69; // edx
  unsigned int v70; // ecx
  int v71; // esi
  int v72; // edx
  int v73; // ebp
  unsigned int v74; // ecx
  unsigned int v75; // edx
  unsigned int v76; // esi
  unsigned int v77; // edx
  int v78; // ecx
  int v79; // eax
  int v80; // edi
  __int16 v81; // ax
  unsigned int v82; // edx
  unsigned int v83; // ecx
  int v84; // esi
  int v85; // ecx
  int v86; // ebp
  unsigned int v87; // edi
  unsigned int v88; // ecx
  unsigned int v89; // ecx
  int v90; // esi
  int v91; // edx
  int v92; // ebp
  unsigned int v93; // edx
  unsigned int v94; // ecx
  int v95; // edi
  int v96; // eax
  char result; // al
  int v98; // ecx
  int v99; // esi
  int v100; // edx
  unsigned int v101; // [esp+0h] [ebp-2Ch]
  unsigned __int16 v102; // [esp+0h] [ebp-2Ch]
  int v103; // [esp+0h] [ebp-2Ch]
  int v104; // [esp+0h] [ebp-2Ch]
  unsigned __int16 v105; // [esp+0h] [ebp-2Ch]
  int v106; // [esp+4h] [ebp-28h]
  int v107; // [esp+4h] [ebp-28h]
  int v108; // [esp+4h] [ebp-28h]
  unsigned int v109; // [esp+4h] [ebp-28h]
  unsigned int v110; // [esp+4h] [ebp-28h]
  int v111; // [esp+4h] [ebp-28h]
  int v112; // [esp+8h] [ebp-24h]
  int v113; // [esp+8h] [ebp-24h]
  unsigned int v114; // [esp+8h] [ebp-24h]
  int v115; // [esp+8h] [ebp-24h]
  int v116; // [esp+Ch] [ebp-20h]
  unsigned int v117; // [esp+Ch] [ebp-20h]
  unsigned int v118; // [esp+Ch] [ebp-20h]
  unsigned int v119; // [esp+14h] [ebp-18h]
  int v120; // [esp+14h] [ebp-18h]
  int v121; // [esp+18h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 40) > *(_DWORD *)(a1 + 32) && *(_DWORD *)(a1 + 104) != 0 )
    sub_42356C((int *)(a1 + 24), (unsigned int *)(a1 + 104), *(_DWORD *)(a1 + 84));
  while ( 1 )
  {
    v16 = *(_DWORD *)(a1 + 32);
    v17 = *(_DWORD *)a1;
    if ( v16 >= *(_DWORD *)(a1 + 40) )
      break;
    v2 = *(_DWORD *)(a1 + 16);
    if ( v2 > *(_DWORD *)(a1 + 20) )
      break;
    v3 = *(_DWORD *)(a1 + 116);
    v101 = *(_DWORD *)(a1 + 100);
    if ( v17 <= 0xFFFFFF )
    {
      *(_DWORD *)a1 = v17 << 8;
      v18 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(a1 + 16) = v2 + 1;
      *(_DWORD *)(a1 + 4) = (*(_DWORD *)(a1 + 4) << 8) + *(unsigned __int8 *)(v18 + v2);
    }
    v112 = v16 & v3;
    v106 = a1 + 2 * ((v16 & v3) + 16 * v101);
    v4 = *(unsigned __int16 *)(v106 + 120);
    v5 = v4 * (*(_DWORD *)a1 >> 11);
    v6 = *(_DWORD *)(a1 + 4);
    if ( v5 <= v6 )
    {
      v30 = *(_DWORD *)a1 - v5;
      *(_DWORD *)a1 = v30;
      v31 = v6 - v5;
      *(_DWORD *)(a1 + 4) = v31;
      *(_WORD *)(v106 + 120) = v4 - ((unsigned __int16)v4 >> 5);
      if ( v30 <= 0xFFFFFF )
      {
        *(_DWORD *)a1 = v30 << 8;
        v32 = *(_DWORD *)(a1 + 12);
        v33 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v33 + 1;
        *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v32 + v33) + (v31 << 8);
      }
      v34 = (unsigned __int16 *)(a1 + 2 * v101);
      v35 = v34[252];
      v36 = v35 * (*(_DWORD *)a1 >> 11);
      v37 = *(_DWORD *)(a1 + 4);
      if ( v36 > v37 )
      {
        *(_DWORD *)a1 = v36;
        v34[252] = ((2048 - v35) >> 5) + v35;
        *(_DWORD *)(a1 + 100) = v101 < 7 ? 7 : 10;
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 92);
        *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 84);
        sub_43EFDC((_DWORD *)a1, (unsigned __int16 *)(a1 + 1756), v112);
        v38 = *(_DWORD *)(a1 + 104);
        if ( v38 > 5 )
          v38 = 5;
        v108 = (v38 << 7) + 728;
        v39 = 1;
        do
        {
          if ( *(_DWORD *)a1 <= 0xFFFFFFu )
          {
            *(_DWORD *)a1 <<= 8;
            v40 = *(_DWORD *)(a1 + 12);
            v41 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 16) = v41 + 1;
            *(_DWORD *)(a1 + 4) = (*(_DWORD *)(a1 + 4) << 8) + *(unsigned __int8 *)(v40 + v41);
          }
          v39 *= 2;
          v42 = (_WORD *)(a1 + v39 + v108);
          v43 = (unsigned __int16)*v42;
          v44 = v43 * (*(_DWORD *)a1 >> 11);
          v45 = *(_DWORD *)(a1 + 4);
          if ( v44 <= v45 )
          {
            *(_DWORD *)a1 -= v44;
            *(_DWORD *)(a1 + 4) = v45 - v44;
            *v42 = v43 - ((unsigned __int16)v43 >> 5);
            ++v39;
          }
          else
          {
            *(_DWORD *)a1 = v44;
            *v42 = ((2048 - v43) >> 5) + v43;
          }
        }
        while ( v39 <= 0x3F );
        v46 = v39 - 64;
        if ( v46 > 3 )
        {
          v47 = v46 >> 1;
          v48 = (v46 & 1) + 2;
          if ( v46 > 0xD )
          {
            *(_DWORD *)(a1 + 84) = v48;
            v110 = v47 - 5;
            do
            {
              if ( *(_DWORD *)a1 <= 0xFFFFFFu )
              {
                *(_DWORD *)a1 <<= 8;
                v57 = *(_DWORD *)(a1 + 12);
                v58 = *(_DWORD *)(a1 + 16);
                *(_DWORD *)(a1 + 16) = v58 + 1;
                *(_DWORD *)(a1 + 4) = (*(_DWORD *)(a1 + 4) << 8) + *(unsigned __int8 *)(v57 + v58);
              }
              v59 = *(_DWORD *)a1 >> 1;
              *(_DWORD *)a1 = v59;
              v60 = (*(_DWORD *)(a1 + 4) - v59) >> 31;
              *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) - v59 + (v60 & v59);
              v61 = v60 + 2 * *(_DWORD *)(a1 + 84) + 1;
              *(_DWORD *)(a1 + 84) = v61;
              --v110;
            }
            while ( v110 != 0 );
            *(_DWORD *)(a1 + 84) = 16 * v61;
            v115 = a1 + 1724;
            v62 = 1;
            do
            {
              if ( *(_DWORD *)a1 <= 0xFFFFFFu )
              {
                *(_DWORD *)a1 <<= 8;
                v63 = *(_DWORD *)(a1 + 12);
                v64 = *(_DWORD *)(a1 + 16);
                *(_DWORD *)(a1 + 16) = v64 + 1;
                *(_DWORD *)(a1 + 4) = (*(_DWORD *)(a1 + 4) << 8) + *(unsigned __int8 *)(v63 + v64);
              }
              v62 *= 2;
              v65 = (_WORD *)(v115 + v62);
              v105 = *(_WORD *)(v115 + v62);
              v66 = v105 * (*(_DWORD *)a1 >> 11);
              v67 = *(_DWORD *)(a1 + 4);
              if ( v66 <= v67 )
              {
                v68 = *(_DWORD *)(a1 + 84);
                *(_DWORD *)a1 -= v66;
                *(_DWORD *)(a1 + 4) = v67 - v66;
                *v65 = v105 - (v105 >> 5);
                ++v62;
                *(_DWORD *)(a1 + 84) = (1 << v110) + v68;
              }
              else
              {
                *(_DWORD *)a1 = v66;
                *v65 = v105 + ((2048 - v105) >> 5);
              }
              ++v110;
            }
            while ( v110 != 4 );
          }
          else
          {
            v114 = v47 - 1;
            v49 = v48 << (v47 - 1);
            *(_DWORD *)(a1 + 84) = v49;
            v120 = v49 - v46 + 0x7FFFFFFF;
            v109 = 0;
            v104 = 1;
            do
            {
              if ( *(_DWORD *)a1 <= 0xFFFFFFu )
              {
                *(_DWORD *)a1 <<= 8;
                v50 = *(_DWORD *)(a1 + 12);
                v51 = *(_DWORD *)(a1 + 16);
                *(_DWORD *)(a1 + 16) = v51 + 1;
                *(_DWORD *)(a1 + 4) = (*(_DWORD *)(a1 + 4) << 8) + *(unsigned __int8 *)(v50 + v51);
              }
              v52 = (unsigned __int16 *)(a1 + 1496 + 2 * (v104 + v120));
              v53 = *v52;
              v54 = *v52;
              v55 = v53 * (*(_DWORD *)a1 >> 11);
              v117 = *(_DWORD *)(a1 + 4);
              v104 *= 2;
              if ( v55 <= v117 )
              {
                v56 = *(_DWORD *)(a1 + 84);
                *(_DWORD *)a1 -= v55;
                *(_DWORD *)(a1 + 4) = v117 - v55;
                *v52 = v54 - (v54 >> 5);
                ++v104;
                *(_DWORD *)(a1 + 84) = (1 << v109) + v56;
              }
              else
              {
                *(_DWORD *)a1 = v55;
                *v52 = ((2048 - v53) >> 5) + v53;
              }
              ++v109;
            }
            while ( v114 > v109 );
          }
        }
        else
        {
          *(_DWORD *)(a1 + 84) = v46;
        }
        goto LABEL_99;
      }
      v69 = *(_DWORD *)a1 - v36;
      *(_DWORD *)a1 = v69;
      v70 = v37 - v36;
      *(_DWORD *)(a1 + 4) = v70;
      v34[252] = v35 - ((unsigned __int16)v35 >> 5);
      if ( v69 <= 0xFFFFFF )
      {
        *(_DWORD *)a1 = v69 << 8;
        v71 = *(_DWORD *)(a1 + 12);
        v72 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v72 + 1;
        *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v71 + v72) + (v70 << 8);
      }
      v73 = v34[264];
      v74 = v73 * (*(_DWORD *)a1 >> 11);
      v75 = *(_DWORD *)(a1 + 4);
      if ( v74 <= v75 )
      {
        v76 = *(_DWORD *)a1 - v74;
        *(_DWORD *)a1 = v76;
        v77 = v75 - v74;
        *(_DWORD *)(a1 + 4) = v77;
        v34[264] = v73 - ((unsigned __int16)v73 >> 5);
        if ( v76 <= 0xFFFFFF )
        {
          *(_DWORD *)a1 = v76 << 8;
          v84 = *(_DWORD *)(a1 + 12);
          v85 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 16) = v85 + 1;
          *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v84 + v85) + (v77 << 8);
        }
        v118 = *(_DWORD *)a1;
        v86 = v34[276];
        v87 = v86 * (*(_DWORD *)a1 >> 11);
        v88 = *(_DWORD *)(a1 + 4);
        v111 = *(_DWORD *)(a1 + 88);
        if ( v87 <= v88 )
        {
          *(_DWORD *)a1 = v118 - v87;
          v89 = v88 - v87;
          *(_DWORD *)(a1 + 4) = v89;
          v34[276] = v86 - ((unsigned __int16)v86 >> 5);
          if ( v118 - v87 <= 0xFFFFFF )
          {
            *(_DWORD *)a1 = (v118 - v87) << 8;
            v90 = *(_DWORD *)(a1 + 12);
            v91 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 16) = v91 + 1;
            *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v90 + v91) + (v89 << 8);
          }
          v92 = v34[288];
          v93 = v92 * (*(_DWORD *)a1 >> 11);
          v94 = *(_DWORD *)(a1 + 4);
          v95 = *(_DWORD *)(a1 + 92);
          if ( v93 <= v94 )
          {
            *(_DWORD *)a1 -= v93;
            *(_DWORD *)(a1 + 4) = v94 - v93;
            v34[288] = v92 - ((unsigned __int16)v92 >> 5);
            v96 = *(_DWORD *)(a1 + 96);
            *(_DWORD *)(a1 + 96) = v95;
            v95 = v96;
          }
          else
          {
            *(_DWORD *)a1 = v93;
            v34[288] = v92 + ((2048 - v92) >> 5);
          }
          *(_DWORD *)(a1 + 92) = v111;
          v111 = v95;
        }
        else
        {
          *(_DWORD *)a1 = v87;
          v34[276] = ((2048 - v86) >> 5) + v86;
        }
        *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 84);
        *(_DWORD *)(a1 + 84) = v111;
        goto LABEL_98;
      }
      *(_DWORD *)a1 = v74;
      v34[264] = v73 + ((2048 - v73) >> 5);
      if ( v74 <= 0xFFFFFF )
      {
        *(_DWORD *)a1 = v74 << 8;
        v78 = *(_DWORD *)(a1 + 12);
        v79 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 16) = v79 + 1;
        *(_DWORD *)(a1 + 4) = *(unsigned __int8 *)(v78 + v79) + (v75 << 8);
      }
      v80 = *(unsigned __int16 *)(v106 + 600);
      v81 = *(_WORD *)(v106 + 600);
      v82 = v80 * (*(_DWORD *)a1 >> 11);
      v83 = *(_DWORD *)(a1 + 4);
      if ( v82 <= v83 )
      {
        *(_DWORD *)a1 -= v82;
        *(_DWORD *)(a1 + 4) = v83 - v82;
        *(_WORD *)(v106 + 600) = v80 - ((unsigned __int16)v80 >> 5);
LABEL_98:
        *(_DWORD *)(a1 + 100) = v101 < 7 ? 8 : 11;
        sub_43EFDC((_DWORD *)a1, (unsigned __int16 *)(a1 + 2784), v112);
        goto LABEL_99;
      }
      *(_DWORD *)a1 = v82;
      *(_WORD *)(v106 + 600) = ((2048 - v80) >> 5) + v81;
      *(_DWORD *)(a1 + 100) = v101 < 7 ? 9 : 11;
      *(_DWORD *)(a1 + 104) = 1;
LABEL_99:
      result = sub_42356C((int *)(a1 + 24), (unsigned int *)(a1 + 104), *(_DWORD *)(a1 + 84));
      if ( result == 0 )
        return result;
    }
    else
    {
      *(_DWORD *)a1 = v5;
      *(_WORD *)(v106 + 120) = ((2048 - v4) >> 5) + v4;
      v7 = v16 - 1;
      if ( v16 == 0 )
        v7 = *(_DWORD *)(a1 + 44) - 1;
      v8 = *(_DWORD *)(a1 + 36);
      v116 = *(_DWORD *)(a1 + 24);
      v9 = 0;
      if ( v8 != 0 )
        v9 = *(unsigned __int8 *)(v116 + v7);
      v121 = a1
           + 1536 * ((v9 >> (8 - *(_BYTE *)(a1 + 108))) + ((v16 & *(_DWORD *)(a1 + 112)) << *(_BYTE *)(a1 + 108)))
           + 3812;
      if ( v101 > 6 )
      {
        v21 = *(_DWORD *)(a1 + 84);
        v22 = v16 - 1 - v21;
        if ( v16 <= v21 )
          v22 += *(_DWORD *)(a1 + 44);
        if ( v8 != 0 )
          v8 = *(unsigned __int8 *)(v116 + v22);
        v107 = 2 * v8;
        v103 = 256;
        v10 = 1;
        do
        {
          v23 = v107;
          v107 *= 2;
          if ( *(_DWORD *)a1 <= 0xFFFFFFu )
          {
            *(_DWORD *)a1 <<= 8;
            v24 = *(_DWORD *)(a1 + 12);
            v25 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 16) = v25 + 1;
            *(_DWORD *)(a1 + 4) = (*(_DWORD *)(a1 + 4) << 8) + *(unsigned __int8 *)(v24 + v25);
          }
          v113 = v103 & v23;
          v26 = (unsigned __int16 *)(v121 + 2 * ((v103 & v23) + v10 + v103));
          v27 = *v26;
          v28 = *v26 * (*(_DWORD *)a1 >> 11);
          v119 = *(_DWORD *)(a1 + 4);
          v10 *= 2;
          if ( v28 <= v119 )
          {
            *(_DWORD *)a1 -= v28;
            *(_DWORD *)(a1 + 4) = v119 - v28;
            *v26 = v27 - (v27 >> 5);
            ++v10;
            v103 = v113;
          }
          else
          {
            *(_DWORD *)a1 = v28;
            *v26 = ((2048 - v27) >> 5) + v27;
            v103 &= ~v113;
          }
        }
        while ( v10 <= 0xFF );
      }
      else
      {
        v10 = 1;
        do
        {
          if ( *(_DWORD *)a1 <= 0xFFFFFFu )
          {
            *(_DWORD *)a1 <<= 8;
            v19 = *(_DWORD *)(a1 + 12);
            v20 = *(_DWORD *)(a1 + 16);
            *(_DWORD *)(a1 + 16) = v20 + 1;
            *(_DWORD *)(a1 + 4) = (*(_DWORD *)(a1 + 4) << 8) + *(unsigned __int8 *)(v19 + v20);
          }
          v10 *= 2;
          v11 = (_WORD *)(v121 + v10);
          v102 = *(_WORD *)(v121 + v10);
          v12 = v102 * (*(_DWORD *)a1 >> 11);
          v13 = *(_DWORD *)(a1 + 4);
          if ( v12 <= v13 )
          {
            *(_DWORD *)a1 -= v12;
            *(_DWORD *)(a1 + 4) = v13 - v12;
            *v11 = v102 - (v102 >> 5);
            ++v10;
          }
          else
          {
            *(_DWORD *)a1 = v12;
            *v11 = v102 + ((2048 - v102) >> 5);
          }
        }
        while ( v10 <= 0xFF );
      }
      *(_DWORD *)(a1 + 32) = v16 + 1;
      *(_BYTE *)(v116 + v16) = v10;
      v14 = *(_DWORD *)(a1 + 32);
      if ( *(_DWORD *)(a1 + 36) < v14 )
        *(_DWORD *)(a1 + 36) = v14;
      v15 = *(_DWORD *)(a1 + 100);
      if ( v15 > 3 )
      {
        if ( v15 > 9 )
          v29 = v15 - 6;
        else
          v29 = v15 - 3;
        *(_DWORD *)(a1 + 100) = v29;
      }
      else
      {
        *(_DWORD *)(a1 + 100) = 0;
      }
    }
  }
  result = 1;
  if ( v17 <= 0xFFFFFF )
  {
    *(_DWORD *)a1 = v17 << 8;
    v98 = *(_DWORD *)(a1 + 4) << 8;
    v99 = *(_DWORD *)(a1 + 12);
    v100 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v100 + 1;
    *(_DWORD *)(a1 + 4) = v98 + *(unsigned __int8 *)(v99 + v100);
  }
  return result;
}

