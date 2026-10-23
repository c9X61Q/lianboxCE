// busybox.exe @ 0x469060 size=3025

int __usercall sub_469060@<eax>(int a1@<eax>)
{
  int v1; // esi
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  _DWORD *Block; // ebx
  int v7; // edi
  unsigned __int16 *v8; // esi
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // edi
  unsigned int v13; // edx
  unsigned int v14; // eax
  unsigned __int16 *v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned __int16 *v20; // edx
  unsigned int v21; // esi
  unsigned int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned __int8 v25; // al
  unsigned int v26; // esi
  int v27; // eax
  int v28; // esi
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned __int16 *v33; // edi
  int v34; // eax
  int v35; // edi
  unsigned int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // esi
  unsigned int v39; // ecx
  unsigned __int16 *v40; // esi
  int v41; // edi
  unsigned int v42; // ecx
  unsigned int v43; // eax
  unsigned int v44; // edx
  int v45; // eax
  unsigned int v46; // eax
  int v47; // edi
  unsigned int v48; // ecx
  unsigned int v49; // eax
  unsigned int v50; // esi
  unsigned int v51; // ecx
  int v52; // edi
  unsigned int v53; // esi
  unsigned int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  int v57; // edx
  unsigned int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // esi
  unsigned int v61; // ecx
  int v62; // edx
  unsigned int v63; // esi
  unsigned int v64; // eax
  unsigned int v65; // ecx
  int v66; // edi
  unsigned __int16 *v67; // edx
  unsigned int v68; // esi
  unsigned int v69; // eax
  unsigned int v70; // ecx
  int v71; // eax
  int v72; // eax
  int i; // edi
  unsigned __int16 *v74; // eax
  unsigned int v75; // esi
  unsigned int v76; // edx
  unsigned int v77; // ecx
  int v78; // eax
  int v79; // eax
  int v80; // esi
  int v81; // esi
  int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // edx
  int v85; // ecx
  int v86; // edi
  unsigned __int16 *v87; // edx
  unsigned int v88; // esi
  unsigned int v89; // eax
  unsigned int v90; // ecx
  int v91; // eax
  unsigned int v92; // edi
  unsigned int v93; // eax
  int v94; // eax
  int v96; // [esp+4h] [ebp-74h]
  int v97; // [esp+8h] [ebp-70h]
  int v98; // [esp+Ch] [ebp-6Ch]
  int v99; // [esp+Ch] [ebp-6Ch]
  int v100; // [esp+10h] [ebp-68h]
  int v101; // [esp+10h] [ebp-68h]
  int v102; // [esp+10h] [ebp-68h]
  char v103; // [esp+14h] [ebp-64h]
  int v104; // [esp+18h] [ebp-60h]
  int v105; // [esp+18h] [ebp-60h]
  unsigned __int16 *v106; // [esp+18h] [ebp-60h]
  int v107; // [esp+18h] [ebp-60h]
  int v108; // [esp+18h] [ebp-60h]
  int v109; // [esp+1Ch] [ebp-5Ch]
  int v110; // [esp+20h] [ebp-58h]
  __int64 v111; // [esp+24h] [ebp-54h]
  int v112; // [esp+2Ch] [ebp-4Ch]
  int v113; // [esp+2Ch] [ebp-4Ch]
  int v114; // [esp+2Ch] [ebp-4Ch]
  int v115; // [esp+2Ch] [ebp-4Ch]
  int v116; // [esp+2Ch] [ebp-4Ch]
  unsigned __int16 v117; // [esp+30h] [ebp-48h]
  int v118; // [esp+30h] [ebp-48h]
  int v119; // [esp+30h] [ebp-48h]
  unsigned __int16 v120; // [esp+30h] [ebp-48h]
  int v121; // [esp+30h] [ebp-48h]
  int v122; // [esp+30h] [ebp-48h]
  unsigned int v123; // [esp+34h] [ebp-44h]
  int v125; // [esp+3Ch] [ebp-3Ch]
  _BYTE *v126; // [esp+40h] [ebp-38h]
  int v127; // [esp+44h] [ebp-34h]
  unsigned int v128; // [esp+48h] [ebp-30h]
  int v129; // [esp+4Ch] [ebp-2Ch]
  int v130; // [esp+4Ch] [ebp-2Ch]
  unsigned __int16 v131; // [esp+4Ch] [ebp-2Ch]
  unsigned __int16 *v132; // [esp+50h] [ebp-28h]
  unsigned __int8 v133; // [esp+54h] [ebp-24h]
  unsigned __int16 v134; // [esp+54h] [ebp-24h]
  unsigned __int16 v135; // [esp+54h] [ebp-24h]
  unsigned __int16 *v136; // [esp+54h] [ebp-24h]
  int v137; // [esp+54h] [ebp-24h]
  unsigned __int16 v138; // [esp+54h] [ebp-24h]
  int v139; // [esp+54h] [ebp-24h]
  signed int v140; // [esp+58h] [ebp-20h]
  int v141; // [esp+58h] [ebp-20h]
  unsigned __int8 v142; // [esp+5Fh] [ebp-19h] BYREF
  int v143; // [esp+60h] [ebp-18h]
  unsigned __int64 v144; // [esp+64h] [ebp-14h]

  if ( sub_432664(13, (CHAR *)&v142) != 13 || v142 > 0xE0u )
  {
    sub_4181F8("bad lzma header");
    return -1;
  }
  if ( v143 == 0 )
    v143 = 1;
  v140 = v142 / 9u;
  v103 = v142 % 9u;
  v2 = v140 % 5;
  v123 = v143;
  if ( v144 < (unsigned int)v143 )
    v123 = v144;
  v126 = (_BYTE *)sub_470E78();
  v132 = (unsigned __int16 *)sub_470E78();
  v4 = 0;
  do
    v132[v4++] = 1024;
  while ( (768 << (v103 + v2)) + 1846 > v4 );
  v5 = *(_DWORD *)(a1 + 12);
  Block = (_DWORD *)sub_4728CC(v3);
  *Block = v5;
  sub_453110((int)Block);
  sub_453110((int)Block);
  sub_453110((int)Block);
  sub_453110((int)Block);
  sub_453110((int)Block);
  Block[4] = -1;
  v97 = (1 << (v140 / 5)) - 1;
  v96 = (1 << v2) - 1;
  v109 = 1;
  v125 = 1;
  v127 = 1;
  v129 = 1;
  v141 = 0;
  v110 = 0;
  v128 = 0;
  v133 = 0;
  v111 = 0;
  while ( 1 )
  {
    v7 = v110 + v128;
    if ( v110 + v128 >= v144 )
      goto LABEL_127;
    if ( Block[4] <= 0xFFFFFFu )
      sub_453110((int)Block);
    v112 = v7 & v97;
    v104 = (v7 & v97) + 16 * v141;
    v8 = &v132[v104];
    v117 = v132[v104];
    v9 = Block[4];
    v10 = v117 * (v9 >> 11);
    Block[5] = v10;
    v11 = Block[3];
    if ( v10 > v11 )
    {
      Block[4] = v10;
      *v8 = v117 + ((2048 - v117) >> 5);
      v113 = (int)&v132[768 * ((int)v133 >> (8 - v103)) + 1846 + 768 * ((v7 & v96) << v103)];
      v12 = 1;
      if ( v141 > 6 )
      {
        v14 = v128 - v129;
        if ( (int)(v128 - v129) < 0 )
          v14 += v143;
        v118 = (unsigned __int8)v126[v14];
        v12 = 1;
        while ( 1 )
        {
          if ( Block[4] <= 0xFFFFFFu )
            sub_453110((int)Block);
          v118 *= 2;
          v105 = v118 & 0x100;
          v15 = (unsigned __int16 *)(v113 + 2 * (v105 + v12 + 256));
          v134 = *v15;
          v16 = Block[4];
          v100 = *v15;
          v17 = v100 * (v16 >> 11);
          Block[5] = v17;
          v18 = Block[3];
          if ( v17 <= v18 )
          {
            Block[4] = v16 - v17;
            Block[3] = v18 - v17;
            *v15 = v134 - (v134 >> 5);
            v19 = 1;
          }
          else
          {
            Block[4] = v17;
            *v15 = v134 + ((2048 - v100) >> 5);
            v19 = 0;
          }
          v12 = 2 * v12 + v19;
          if ( v105 != (-v19 & 0x100) )
            break;
          if ( v12 > 255 )
            goto LABEL_38;
        }
      }
      while ( v12 <= 255 )
      {
        if ( Block[4] <= 0xFFFFFFu )
          sub_453110((int)Block);
        v20 = (unsigned __int16 *)(v113 + 2 * v12);
        v135 = *v20;
        v21 = Block[4];
        v119 = *v20;
        v22 = v119 * (v21 >> 11);
        Block[5] = v22;
        v23 = Block[3];
        if ( v22 <= v23 )
        {
          Block[4] = v21 - v22;
          Block[3] = v23 - v22;
          *v20 = v135 - (v135 >> 5);
          v24 = 1;
        }
        else
        {
          Block[4] = v22;
          *v20 = v135 + ((2048 - v119) >> 5);
          v24 = 0;
        }
        v12 = 2 * v12 + v24;
      }
LABEL_38:
      v141 = (unsigned __int8)byte_480460[v141];
      v25 = v12;
      goto LABEL_39;
    }
    v13 = v9 - v10;
    Block[4] = v13;
    Block[3] = v11 - v10;
    *v8 = v117 - (v117 >> 5);
    if ( v13 <= 0xFFFFFF )
      sub_453110((int)Block);
    v136 = &v132[v141 + 192];
    v28 = *v136;
    v29 = Block[4];
    v30 = v28 * (v29 >> 11);
    Block[5] = v30;
    v31 = Block[3];
    if ( v30 > v31 )
    {
      Block[4] = v30;
      if ( v141 <= 6 )
        v141 = 0;
      else
        v141 = 3;
      *v136 = ((2048 - v28) >> 5) + v28;
      v33 = v132 + 818;
      v109 = v125;
      v125 = v127;
      v34 = v129;
      goto LABEL_79;
    }
    v32 = v29 - v30;
    Block[4] = v32;
    Block[3] = v31 - v30;
    *v136 = v28 - ((unsigned __int16)v28 >> 5);
    if ( v32 <= 0xFFFFFF )
      sub_453110((int)Block);
    v35 = v132[v141 + 204];
    v36 = Block[4];
    v37 = v35 * (v36 >> 11);
    Block[5] = v37;
    v38 = Block[3];
    if ( v37 <= v38 )
      break;
    Block[4] = v37;
    v132[v141 + 204] = v35 + ((2048 - v35) >> 5);
    if ( v37 <= 0xFFFFFF )
      sub_453110((int)Block);
    v40 = &v132[v104 + 240];
    v41 = *v40;
    v42 = Block[4];
    v43 = v41 * (v42 >> 11);
    Block[5] = v43;
    v44 = Block[3];
    if ( v43 <= v44 )
    {
      Block[4] = v42 - v43;
      Block[3] = v44 - v43;
      *v40 = v41 - ((unsigned __int16)v41 >> 5);
      v45 = v127;
      v127 = v129;
      v129 = v45;
      goto LABEL_75;
    }
    Block[4] = v43;
    *v40 = v41 + ((2048 - v41) >> 5);
    if ( v141 <= 6 )
      v141 = 9;
    else
      v141 = 11;
    v46 = v128 - v129;
    if ( (int)(v128 - v129) < 0 )
    {
      v46 += v143;
      if ( v123 <= v46 )
        goto LABEL_41;
    }
    v25 = v126[v46];
LABEL_39:
    v133 = v25;
    v26 = v128 + 1;
    v126[v128] = v25;
    if ( v143 == v128 + 1 )
    {
      v27 = sub_467054(a1, v126, v26);
      if ( v27 != v143 )
        goto LABEL_41;
      v110 += v26;
      v111 += (unsigned int)v27;
      v26 = 0;
    }
LABEL_138:
    v128 = v26;
  }
  v39 = v36 - v37;
  Block[4] = v39;
  Block[3] = v38 - v37;
  v132[v141 + 204] = v35 - ((unsigned __int16)v35 >> 5);
  if ( v39 <= 0xFFFFFF )
    sub_453110((int)Block);
  v47 = v132[v141 + 216];
  v48 = Block[4];
  v49 = v47 * (v48 >> 11);
  Block[5] = v49;
  v50 = Block[3];
  if ( v49 <= v50 )
  {
    v51 = v48 - v49;
    Block[4] = v51;
    Block[3] = v50 - v49;
    v132[v141 + 216] = v47 - ((unsigned __int16)v47 >> 5);
    if ( v51 <= 0xFFFFFF )
      sub_453110((int)Block);
    v52 = v132[v141 + 228];
    v53 = Block[4];
    v54 = v52 * (v53 >> 11);
    Block[5] = v54;
    v55 = Block[3];
    if ( v54 <= v55 )
    {
      Block[4] = v53 - v54;
      Block[3] = v55 - v54;
      v132[v141 + 228] = v52 - ((unsigned __int16)v52 >> 5);
      v56 = v127;
      v127 = v109;
      v109 = v125;
    }
    else
    {
      Block[4] = v54;
      v132[v141 + 228] = ((2048 - v52) >> 5) + v52;
      v56 = v127;
      v127 = v125;
    }
    v125 = v56;
  }
  else
  {
    Block[4] = v49;
    v132[v141 + 216] = ((2048 - v47) >> 5) + v47;
  }
LABEL_75:
  if ( v141 <= 6 )
    v141 = 8;
  else
    v141 = 11;
  v33 = v132 + 1332;
  v34 = v129;
  v129 = v127;
LABEL_79:
  v127 = v34;
  if ( Block[4] <= 0xFFFFFFu )
    sub_453110((int)Block);
  v57 = *v33;
  v58 = Block[4];
  v59 = v57 * (v58 >> 11);
  Block[5] = v59;
  v60 = Block[3];
  if ( v59 > v60 )
  {
    Block[4] = v59;
    *v33 = ((2048 - v57) >> 5) + v57;
    v106 = &v33[8 * v112 + 2];
    v114 = 0;
    goto LABEL_87;
  }
  v61 = v58 - v59;
  Block[4] = v61;
  Block[3] = v60 - v59;
  *v33 = v57 - ((unsigned __int16)v57 >> 5);
  if ( v61 <= 0xFFFFFF )
    sub_453110((int)Block);
  v62 = v33[1];
  v63 = Block[4];
  v64 = v62 * (v63 >> 11);
  Block[5] = v64;
  v65 = Block[3];
  if ( v64 <= v65 )
  {
    Block[4] = v63 - v64;
    Block[3] = v65 - v64;
    v33[1] = v62 - ((unsigned __int16)v62 >> 5);
    v106 = v33 + 258;
    v114 = 16;
    v137 = 8;
  }
  else
  {
    Block[4] = v64;
    v33[1] = ((2048 - v62) >> 5) + v62;
    v106 = &v33[8 * v112 + 130];
    v114 = 8;
LABEL_87:
    v137 = 3;
  }
  v98 = v137;
  v66 = 1;
  do
  {
    if ( Block[4] <= 0xFFFFFFu )
      sub_453110((int)Block);
    v67 = &v106[v66];
    v120 = *v67;
    v68 = Block[4];
    v101 = *v67;
    v69 = v101 * (v68 >> 11);
    Block[5] = v69;
    v70 = Block[3];
    if ( v69 <= v70 )
    {
      Block[4] = v68 - v69;
      Block[3] = v70 - v69;
      *v67 = v120 - (v120 >> 5);
      v71 = 1;
    }
    else
    {
      Block[4] = v69;
      *v67 = v120 + ((2048 - v101) >> 5);
      v71 = 0;
    }
    v66 = 2 * v66 + v71;
    --v98;
  }
  while ( v98 != 0 );
  v72 = v66 - (1 << v137) + v114;
  v121 = v72;
  if ( v141 > 3 )
  {
LABEL_129:
    v122 = v121 + 2;
    v26 = v128;
    while ( 1 )
    {
      v92 = v143;
      v93 = v26 - v129;
      if ( (int)(v26 - v129) < 0 )
      {
        v93 += v143;
        if ( v123 <= v93 )
          goto LABEL_41;
      }
      v133 = v126[v93];
      v126[v26] = v133;
      if ( v26 + 1 == v92 )
      {
        v94 = sub_467054(a1, v126, v92);
        if ( v94 != v143 )
          goto LABEL_41;
        v110 += v92;
        v111 += (unsigned int)v94;
        v26 = 0;
      }
      else
      {
        ++v26;
      }
      if ( --v122 == 0 || v26 >= v144 )
        goto LABEL_138;
    }
  }
  if ( v72 > 3 )
    v72 = 3;
  v115 = (v72 << 6) + 432;
  v107 = 7;
  for ( i = 1; --v107 != 0; i = 2 * i + v78 )
  {
    if ( Block[4] <= 0xFFFFFFu )
      sub_453110((int)Block);
    v74 = &v132[i + v115];
    v138 = *v74;
    v75 = Block[4];
    v130 = *v74;
    v76 = v130 * (v75 >> 11);
    Block[5] = v76;
    v77 = Block[3];
    if ( v76 <= v77 )
    {
      Block[4] = v75 - v76;
      Block[3] = v77 - v76;
      *v74 = v138 - (v138 >> 5);
      v78 = 1;
    }
    else
    {
      Block[4] = v76;
      *v74 = v138 + ((2048 - v130) >> 5);
      v78 = 0;
    }
  }
  v79 = i - 64;
  v116 = i - 64;
  if ( i - 64 > 3 )
  {
    v139 = (v79 >> 1) - 1;
    v80 = v79 & 1 | 2;
    if ( v79 > 13 )
    {
      while ( v139 != 4 )
      {
        if ( Block[4] <= 0xFFFFFFu )
          sub_453110((int)Block);
        v83 = Block[4] >> 1;
        Block[4] = v83;
        v84 = Block[3];
        v85 = 0;
        if ( v83 <= v84 )
        {
          Block[3] = v84 - v83;
          v85 = 1;
        }
        v80 = v85 | (2 * v80);
        --v139;
      }
      v81 = 16 * v80;
      v82 = (int)(v132 + 802);
    }
    else
    {
      v81 = v80 << v139;
      v82 = (int)&v132[v81 - v79 + 687];
    }
    v102 = v82;
    v116 = v81;
    v86 = 1;
    v108 = 1;
    do
    {
      if ( Block[4] <= 0xFFFFFFu )
        sub_453110((int)Block);
      v87 = (unsigned __int16 *)(v102 + 2 * v86);
      v131 = *v87;
      v88 = Block[4];
      v99 = *v87;
      v89 = v99 * (v88 >> 11);
      Block[5] = v89;
      v90 = Block[3];
      if ( v89 <= v90 )
      {
        Block[4] = v88 - v89;
        Block[3] = v90 - v89;
        *v87 = v131 - (v131 >> 5);
        v116 |= v108;
        v91 = 1;
      }
      else
      {
        Block[4] = v89;
        *v87 = v131 + ((2048 - v99) >> 5);
        v91 = 0;
      }
      v86 = 2 * v86 + v91;
      v108 *= 2;
      --v139;
    }
    while ( v139 != 0 );
  }
  v129 = v116 + 1;
  if ( v116 + 1 > 0 )
  {
    v141 += 7;
    goto LABEL_129;
  }
  if ( v116 != -1 )
  {
LABEL_41:
    sub_4181F8("corrupted data");
    v1 = -1;
    goto LABEL_139;
  }
LABEL_127:
  if ( sub_467054(a1, v126, v128) != v128 )
    goto LABEL_41;
  v1 = v111 + v128;
LABEL_139:
  free(Block);
  free(v132);
  free(v126);
  return v1;
}

