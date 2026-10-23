// busybox.exe @ 0x40eee0 size=2539

int __cdecl sub_40EEE0(unsigned __int8 **a1, int *a2, int *a3, _DWORD *a4, int a5)
{
  char *decimal_point; // edi
  unsigned __int8 *v6; // ebx
  unsigned __int8 v7; // cl
  unsigned __int8 *v8; // eax
  int v9; // edx
  int v10; // ebp
  unsigned __int8 *v11; // ebx
  char v12; // al
  int v13; // edx
  unsigned __int8 v14; // bp
  unsigned __int8 *v15; // esi
  unsigned __int8 *v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // esi
  int v20; // ebx
  int v21; // edi
  int v22; // edx
  int j; // eax
  int v24; // eax
  _DWORD *v25; // edx
  int v26; // ebx
  int v27; // ecx
  unsigned __int8 v28; // dl
  unsigned __int8 v29; // dl
  int v30; // ecx
  bool v31; // zf
  int v32; // eax
  int v33; // edx
  int i; // eax
  int v35; // eax
  int v36; // edx
  unsigned __int8 *v37; // ecx
  unsigned int *v38; // edi
  char v39; // cl
  int v40; // eax
  int v41; // eax
  unsigned int v42; // ebp
  _DWORD *v43; // ebx
  unsigned int v44; // eax
  _DWORD *v45; // edx
  int v46; // eax
  int v47; // edx
  int v48; // edx
  int v49; // edi
  int v50; // edx
  int v51; // edx
  int v52; // ecx
  int v53; // ecx
  unsigned int v54; // esi
  unsigned int v55; // eax
  unsigned int v56; // eax
  int v57; // ebx
  signed int v58; // ebx
  int v59; // edi
  int v60; // esi
  int v61; // eax
  int v62; // ebx
  int v63; // eax
  char v65; // cl
  int v66; // ebx
  int v67; // edx
  int v68; // ebx
  char v69; // dl
  int v70; // eax
  int v71; // ecx
  int v72; // ebx
  int v73; // ecx
  int v74; // esi
  unsigned int v75; // eax
  int v76; // edi
  unsigned __int8 *v77; // ecx
  int v78; // eax
  int v79; // eax
  int v80; // [esp+4h] [ebp-48h]
  int v81; // [esp+14h] [ebp-38h]
  unsigned int v82; // [esp+14h] [ebp-38h]
  int v83; // [esp+18h] [ebp-34h]
  BOOL v84; // [esp+18h] [ebp-34h]
  unsigned int v85; // [esp+18h] [ebp-34h]
  unsigned __int8 *v86; // [esp+1Ch] [ebp-30h]
  char *v87; // [esp+1Ch] [ebp-30h]
  int v88; // [esp+20h] [ebp-2Ch]
  _DWORD *v89; // [esp+24h] [ebp-28h]
  _BYTE *v90; // [esp+24h] [ebp-28h]
  char *v91; // [esp+24h] [ebp-28h]
  _DWORD *v92; // [esp+28h] [ebp-24h]
  int v93; // [esp+28h] [ebp-24h]
  int v94; // [esp+2Ch] [ebp-20h]

  decimal_point = localeconv()->decimal_point;
  if ( byte_485B10 == 0 )
    sub_40FA20();
  *a4 = 0;
  v6 = *a1;
  v7 = (*a1)[2];
  if ( v7 == 48 )
  {
    v8 = v6 + 3;
    v9 = -2 - (_DWORD)v6;
    do
    {
      v10 = (int)&v8[v9];
      v11 = v8;
      v7 = *v8++;
    }
    while ( v7 == 48 );
  }
  else
  {
    v11 = v6 + 2;
    v10 = 0;
  }
  if ( byte_485AE0[v7] != 0 )
  {
    v82 = (unsigned int)v11;
    ++v10;
    v16 = nullptr;
    v84 = false;
    goto LABEL_33;
  }
  v12 = *decimal_point;
  v13 = 0;
  if ( *decimal_point != 0 )
  {
    v83 = v10;
    v14 = v7;
    do
    {
      if ( v12 != v7 )
      {
        v7 = v14;
        v10 = v83;
        goto LABEL_12;
      }
      v12 = decimal_point[++v13];
      v7 = v11[v13];
      v15 = &v11[v13];
    }
    while ( v12 != 0 );
    v10 = v83;
    v16 = &v11[v13];
    if ( byte_485AE0[v7] != 0 )
    {
      if ( v7 == 48 )
      {
        v11 += v13;
        do
          v28 = *++v11;
        while ( v28 == 48 );
        v82 = (unsigned int)v11;
        v10 = 1;
        v65 = byte_485AE0[v28];
        v84 = v65 == 0;
        if ( v65 == 0 )
        {
LABEL_34:
          if ( v28 != *decimal_point )
          {
            v29 = *v11;
            v30 = 4 * (v16 - v11);
            v31 = v16 == nullptr;
            v32 = 0;
            if ( !v31 )
              v32 = v30;
            v88 = v32;
LABEL_38:
            if ( (v29 & 0xDF) != 0x50 )
              goto LABEL_39;
LABEL_55:
            v86 = v11;
            v11 = (unsigned __int8 *)v82;
            goto LABEL_56;
          }
          if ( v16 != nullptr )
          {
            v88 = 4 * (v16 - v11);
            if ( (*v11 & 0xDF) != 0x50 )
            {
LABEL_39:
              *a1 = v11;
              if ( !v84 )
              {
LABEL_40:
                v33 = 0;
                for ( i = (int)&v11[-v82 - 1]; i > 7; ++v33 )
                  i >>= 1;
                v89 = (_DWORD *)sub_40FFB0(v33);
                v92 = v89 + 5;
                if ( decimal_point[1] != 0 )
                {
                  v35 = 0;
                  do
                    ++v35;
                  while ( decimal_point[v35 + 1] != 0 );
                  v94 = v35;
                }
                else
                {
                  v94 = 0;
                }
                if ( (unsigned int)v11 <= v82 )
                {
                  v38 = v89 + 5;
                  v54 = 0;
                  v43 = v89 + 6;
                  v56 = 32;
                }
                else
                {
                  v36 = 0;
                  v37 = v11;
                  v87 = &decimal_point[v94];
                  v38 = v89 + 5;
                  v85 = 0;
                  do
                  {
                    while ( 1 )
                    {
                      v41 = *(v37 - 1);
                      v42 = (unsigned int)(v37 - 1);
                      v43 = v38 + 1;
                      if ( (_BYTE)v41 != *v87 )
                        break;
                      v37 = (unsigned __int8 *)(v42 - v94);
                      if ( v42 - v94 <= v82 )
                        goto LABEL_70;
                    }
                    if ( v36 == 32 )
                    {
                      v44 = v85;
                      v45 = v38 + 2;
                      v85 = 0;
                      *v38++ = v44;
                      v41 = *(v37 - 1);
                      v43 = v45;
                      v39 = 0;
                      v36 = 4;
                    }
                    else
                    {
                      v39 = v36;
                      v36 += 4;
                    }
                    v40 = (byte_485AE0[v41] & 0xF) << v39;
                    v37 = (unsigned __int8 *)v42;
                    v85 |= v40;
                  }
                  while ( v42 > v82 );
LABEL_70:
                  v54 = v85;
                  _BitScanReverse(&v55, v85);
                  v56 = v55 ^ 0x1F;
                }
                *v38 = v54;
                v57 = v43 - v92;
                v89[4] = v57;
                v58 = 32 * v57 - v56;
                v59 = *a2;
                if ( v58 > *a2 )
                {
                  v72 = v58 - v59;
                  v60 = sub_410D90(v89, v72);
                  if ( v60 != 0 )
                  {
                    v60 = 1;
                    if ( ((1 << (v72 - 1)) & v92[(v72 - 1) >> 5]) != 0 )
                    {
                      if ( v72 == 1 || (v60 = 3, sub_410D90(v89, v72 - 1) == 0) )
                        v60 = 2;
                    }
                  }
                  sub_40F8D0(v89, v72);
                  v88 += v72;
                }
                else
                {
                  v60 = 0;
                  if ( v58 < *a2 )
                  {
                    v68 = v59 - v58;
                    v88 -= v68;
                    v89 = (_DWORD *)sub_410520(v89, v68);
                    v92 = v89 + 5;
                  }
                }
                if ( a2[2] < v88 )
                {
LABEL_112:
                  sub_4100A0(v89);
                  goto LABEL_113;
                }
                v61 = a2[1];
                if ( v61 <= v88 )
                {
                  v62 = 1;
                  goto LABEL_77;
                }
                v66 = v61 - v88;
                if ( v59 > v61 - v88 )
                {
                  v73 = v66 - 1;
                  if ( v60 != 0 )
                  {
                    v60 = 1;
                  }
                  else if ( v66 != 1 )
                  {
                    v79 = sub_410D90(v89, v66 - 1);
                    v73 = v66 - 1;
                    v60 = v79;
                  }
                  v80 = v66;
                  if ( ((1 << v73) & v92[v73 >> 5]) != 0 )
                    v60 |= 2u;
                  v59 -= v66;
                  v62 = 2;
                  sub_40F8D0(v89, v80);
                  v88 = a2[1];
LABEL_77:
                  if ( v60 == 0 )
                  {
LABEL_82:
                    *a4 = v89;
                    *a3 = v88;
                    return v62;
                  }
                  v63 = a2[3];
                  if ( v63 == 2 )
                  {
                    a5 = 1 - a5;
                  }
                  else if ( v63 != 3 )
                  {
                    if ( v63 != 1 || (v60 & 2) == 0 || ((*v92 | v60) & 1) == 0 )
                      goto LABEL_81;
LABEL_130:
                    v74 = v89[4];
                    v89 = sub_408990(v89);
                    v75 = (unsigned int)(v89 + 5);
                    if ( v62 == 2 )
                    {
                      v62 = 34;
                      if ( *a2 - 1 == v59 )
                        v62 = (((1 << v59) & *(_DWORD *)(v75 + 4 * (v59 >> 5))) == 0) + 33;
                      goto LABEL_82;
                    }
                    if ( v89[4] <= v74
                      && ((v76 = v59 & 0x1F) == 0
                       || (_BitScanReverse(&v75, *(_DWORD *)(v75 + 4 * v74 - 4)), 32 - v76 <= (int)(v75 ^ 0x1F)))
                      || (sub_40F8D0(v89, 1), ++v88, a2[2] >= v88) )
                    {
                      v62 = 33;
                      goto LABEL_82;
                    }
                    goto LABEL_112;
                  }
                  if ( a5 == 0 )
                  {
LABEL_81:
                    v62 |= 0x10u;
                    goto LABEL_82;
                  }
                  goto LABEL_130;
                }
                v67 = a2[3];
                if ( v67 == 2 )
                {
                  if ( a5 == 0 )
                    goto LABEL_143;
                }
                else if ( v67 == 3 )
                {
                  if ( a5 != 0 )
                    goto LABEL_143;
                }
                else if ( v67 == 1 && v59 == v66 )
                {
                  if ( v59 == 1 )
                  {
LABEL_143:
                    v89[4] = 1;
                    *v92 = 1;
                    goto LABEL_95;
                  }
                  if ( sub_410D90(v89, v59 - 1) != 0 )
                  {
                    v61 = a2[1];
                    goto LABEL_143;
                  }
                }
                sub_4100A0(v89);
LABEL_101:
                *errno() = 34;
                return 80;
              }
              return 0;
            }
            goto LABEL_55;
          }
          v69 = decimal_point[1];
          if ( v69 != 0 )
          {
            v70 = 1;
            while ( v11[v70] == v69 )
            {
              v69 = decimal_point[++v70];
              v71 = v70;
              if ( v69 == 0 )
                goto LABEL_153;
            }
            v29 = *v11;
          }
          else
          {
            v71 = 1;
LABEL_153:
            v77 = &v11[v71];
            v11 = v77;
            v29 = *v77;
            if ( byte_485AE0[*v77] != 0 )
            {
              do
              {
                v78 = *++v11;
                v29 = v78;
              }
              while ( byte_485AE0[v78] != 0 );
              v88 = 4 * (v77 - v11);
              goto LABEL_38;
            }
          }
          v88 = 0;
          goto LABEL_38;
        }
      }
      else
      {
        v84 = false;
        v11 += v13;
        v10 = 1;
        v82 = (unsigned int)v15;
      }
      do
      {
LABEL_33:
        v27 = *++v11;
        v28 = v27;
      }
      while ( byte_485AE0[v27] != 0 );
      goto LABEL_34;
    }
  }
  else
  {
LABEL_12:
    v16 = v11;
  }
  v86 = v16;
  if ( (v7 & 0xDF) != 0x50 )
  {
    v84 = true;
    v17 = 0;
    v88 = 0;
    v81 = 0;
    goto LABEL_15;
  }
  v88 = 0;
  v84 = true;
LABEL_56:
  v46 = v86[1];
  if ( (_BYTE)v46 == 43 )
  {
    v81 = 0;
  }
  else
  {
    if ( (_BYTE)v46 != 45 )
    {
      v81 = 0;
      v90 = v86 + 1;
      goto LABEL_59;
    }
    v81 = 1;
  }
  v46 = v86[2];
  v90 = v86 + 2;
LABEL_59:
  v47 = (unsigned __int8)byte_485AE0[v46];
  v17 = 0;
  v16 = v86;
  if ( (unsigned __int8)(v47 - 1) <= 0x18u )
  {
    v93 = v47 - 16;
    v16 = v90 + 1;
    v48 = (unsigned __int8)byte_485AE0[(unsigned __int8)v90[1]];
    if ( (unsigned __int8)(byte_485AE0[(unsigned __int8)v90[1]] - 1) <= 0x18u )
    {
      v91 = decimal_point;
      v49 = v48;
      v50 = v93;
      do
      {
        v31 = (v50 & 0xF8000000) == 0;
        v51 = 5 * v50;
        if ( !v31 )
          v17 = 1;
        v52 = v16[1];
        v50 = v49 + 2 * v51 - 16;
        ++v16;
        v49 = (unsigned __int8)byte_485AE0[v52];
      }
      while ( (unsigned __int8)(byte_485AE0[v52] - 1) <= 0x18u );
      v93 = v50;
      decimal_point = v91;
    }
    v53 = -v93;
    if ( v81 == 0 )
      v53 = v93;
    v88 += v53;
  }
LABEL_15:
  if ( v10 == 0 )
    v16 = v11 - 1;
  *a1 = v16;
  if ( v84 )
    return 0;
  if ( v17 == 0 )
  {
    v82 = (unsigned int)v11;
    v11 = v86;
    goto LABEL_40;
  }
  v18 = a2[3];
  if ( v81 != 0 )
  {
    if ( v18 == 2 )
    {
      if ( a5 != 0 )
        goto LABEL_101;
    }
    else if ( v18 != 3 || a5 == 0 )
    {
      goto LABEL_101;
    }
    v89 = (_DWORD *)sub_40FFB0(0);
    v89[4] = 1;
    v89[5] = 1;
    v61 = a2[1];
LABEL_95:
    v26 = 98;
    *a4 = v89;
    *a3 = v61;
    *errno() = 34;
    return v26;
  }
  if ( v18 == 2 )
  {
    if ( a5 == 0 )
      goto LABEL_113;
    goto LABEL_23;
  }
  if ( v18 == 3 )
  {
    if ( a5 != 0 )
      goto LABEL_113;
    goto LABEL_23;
  }
  if ( v18 != 1 )
  {
LABEL_23:
    v19 = *a2 & 0x1F;
    v20 = *a2 >> 5;
    v21 = v20 - ((v19 == 0) - 1);
    v22 = 0;
    for ( j = v21 >> 1; j != 0; j >>= 1 )
      ++v22;
    v24 = sub_40FFB0(v22);
    *a4 = v24;
    *(_DWORD *)(v24 + 16) = v21;
    if ( v20 > 0 )
    {
      v25 = (_DWORD *)(v24 + 20);
      do
        *v25++ = -1;
      while ( (_DWORD *)(v24 + 4 * v20 + 20) != v25 );
      v81 = v20;
    }
    if ( v21 > v20 )
      *(_DWORD *)(v24 + 4 * v81 + 20) = 32 >> (32 - v19);
    v26 = 17;
    *a3 = a2[1];
    return v26;
  }
LABEL_113:
  *errno() = 34;
  return 163;
}

