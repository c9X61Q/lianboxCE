// busybox.exe @ 0x45d208 size=1997

unsigned int __usercall sub_45D208@<eax>(int a1@<eax>)
{
  int v1; // edi
  int v2; // esi
  int i; // edx
  unsigned int v4; // ecx
  unsigned int v5; // ebp
  unsigned int v6; // ebx
  unsigned int j; // esi
  int v8; // eax
  unsigned int k; // edx
  int v10; // eax
  unsigned int n; // edx
  unsigned int ii; // eax
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int jj; // esi
  int v16; // ebx
  int v17; // ecx
  unsigned int v18; // esi
  int v19; // ecx
  int v20; // ebx
  unsigned int v21; // ebx
  int v22; // ecx
  int v23; // ecx
  int kk; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // esi
  int nn; // edx
  int v29; // ebx
  int v30; // ecx
  int v31; // edx
  int mm; // eax
  int v33; // ebp
  char v34; // bl
  int i2; // eax
  int i4; // ecx
  int i1; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // ebx
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // eax
  int v47; // ecx
  int v48; // edx
  int v49; // edx
  int v50; // eax
  int v51; // ebx
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int i3; // edx
  int v56; // eax
  char v57; // bl
  int i5; // eax
  char v59; // cl
  int v60; // edx
  char v61; // bp
  int v62; // ecx
  int v63; // ebp
  int v64; // eax
  int i6; // edx
  unsigned int v66; // ebx
  int v67; // edx
  int i7; // ebx
  _DWORD *v69; // eax
  int v70; // ebx
  int v71; // ebx
  int i8; // esi
  int v73; // eax
  int v74; // edx
  _DWORD *v75; // eax
  int i9; // ebx
  unsigned int i10; // eax
  char v78; // cl
  _BYTE *v79; // edx
  int v80; // ecx
  unsigned int v81; // ebx
  int i11; // ebp
  int v83; // esi
  unsigned __int8 *i12; // esi
  unsigned int result; // eax
  int v86; // ebx
  int v87; // ebp
  int v88; // ebx
  int v89; // [esp+0h] [ebp-74h]
  unsigned int v90; // [esp+0h] [ebp-74h]
  int v91; // [esp+4h] [ebp-70h]
  unsigned int v92; // [esp+8h] [ebp-6Ch]
  unsigned int v93; // [esp+8h] [ebp-6Ch]
  int v94; // [esp+8h] [ebp-6Ch]
  int v95; // [esp+8h] [ebp-6Ch]
  unsigned int v96; // [esp+Ch] [ebp-68h]
  unsigned int m; // [esp+Ch] [ebp-68h]
  int v98; // [esp+10h] [ebp-64h]
  int v99; // [esp+14h] [ebp-60h]
  int v100; // [esp+18h] [ebp-5Ch]
  int v101; // [esp+1Ch] [ebp-58h]
  int v102; // [esp+20h] [ebp-54h]
  int v103; // [esp+24h] [ebp-50h]
  int v104; // [esp+24h] [ebp-50h]
  int v105; // [esp+28h] [ebp-4Ch]
  int v106; // [esp+2Ch] [ebp-48h]
  int v107; // [esp+30h] [ebp-44h]
  int v108; // [esp+34h] [ebp-40h]
  int v109; // [esp+40h] [ebp-34h]
  _BYTE v110[6]; // [esp+46h] [ebp-2Eh]
  _DWORD v111[10]; // [esp+4Ch] [ebp-28h]

  v1 = a1;
  v102 = *(_DWORD *)(a1 + 36);
  v100 = *(_DWORD *)(a1 + 96);
  v89 = v100 + 2;
  v101 = a1;
  v2 = a1 + 1548;
  do
  {
    for ( i = a1; v100 + 3 + a1 != ++i; *(_BYTE *)(i + 37647) = 15 )
      ;
    a1 += 258;
  }
  while ( v2 != a1 );
  v91 = (*(_DWORD *)(v1 + 92) > 2399)
      + (*(_DWORD *)(v1 + 92) > 1199)
      + (*(_DWORD *)(v1 + 92) > 199)
      + (*(_DWORD *)(v1 + 92) > 599)
      + 2;
  v96 = *(_DWORD *)(v1 + 92);
  v4 = v91;
  v5 = 0;
  do
  {
    v6 = v5;
    for ( j = 0; j < v96 / v4 && v89 > v6; j += *(_DWORD *)(v1 + 4 * v6 + 608) )
      ++v6;
    v92 = v6 - 1;
    if ( v6 - 1 > v5 && v91 != v4 && v4 != 1 && (((_BYTE)v91 - (_BYTE)v4) & 1) != 0 )
    {
      j -= *(_DWORD *)(v1 + 4 * v6 + 608);
      v92 = v6 - 2;
    }
    v8 = v1 + 258 * v4;
    for ( k = 0; v89 > k; ++k )
    {
      if ( k > v92 || k < v5 )
        *(_BYTE *)(v8 + 37390) = 15;
      else
        *(_BYTE *)(v8 + 37390) = 0;
      ++v8;
    }
    v5 = v92 + 1;
    v96 -= j;
    --v4;
  }
  while ( v4 != 0 );
  v105 = v1 + 258 * v91;
  for ( m = 4; m != 0; --m )
  {
    v10 = v1;
    do
    {
      for ( n = 0; v89 > n; ++n )
        *(_DWORD *)(v10 + 4 * n + 45388) = 0;
      v10 += 1032;
    }
    while ( v1 + 1032 * v91 != v10 );
    v93 = *(_DWORD *)(v1 + 92);
    v98 = 0;
    for ( ii = 0; v93 > ii; ii += v23 )
    {
      v13 = ii + 49;
      if ( v93 <= ii + 49 )
        v13 = v93 - 1;
      v14 = 0;
      do
        v111[v14++] = 0;
      while ( v91 != v14 );
      for ( jj = ii; v13 >= jj; ++jj )
      {
        v16 = v1 + *(unsigned __int16 *)(v102 + 2 * jj);
        v17 = 0;
        do
        {
          v111[v17++] += *(unsigned __int8 *)(v16 + 37648);
          v16 += 258;
        }
        while ( v91 != v17 );
      }
      v18 = v111[0];
      v19 = 0;
      v20 = 1;
      do
      {
        if ( v111[v20] < v18 )
        {
          v18 = v111[v20];
          v19 = v20;
        }
        ++v20;
      }
      while ( v91 != v20 );
      *(_BYTE *)(v1 + v98++ + 1644) = v19;
      v21 = ii;
      v22 = 258 * v19;
      while ( v21 <= v13 )
        ++*(_DWORD *)(v1 + 4 * (v22 + *(unsigned __int16 *)(v102 + 2 * v21++)) + 45388);
      v23 = 0;
      if ( ii <= v13 + 1 )
        v23 = v13 - ii + 1;
    }
    v107 = v1 + 45388;
    v106 = v1;
    do
    {
      for ( kk = 0; v89 > kk; *(_DWORD *)(v1 + 4 * kk + 52620) = v26 )
      {
        v25 = *(_DWORD *)(v107 + 4 * kk);
        v26 = 256;
        if ( v25 != 0 )
          v26 = v25 << 8;
        ++kk;
      }
      while ( 1 )
      {
        *(_DWORD *)(v1 + 51580) = 0;
        *(_DWORD *)(v1 + 52620) = 0;
        *(_DWORD *)(v1 + 54684) = -2;
        for ( mm = 1; v89 >= mm; ++mm )
        {
          *(_DWORD *)(v1 + 4 * mm + 54684) = -1;
          *(_DWORD *)(v1 + 4 * mm + 51580) = mm;
          v27 = *(_DWORD *)(v1 + 4 * mm + 52620);
          for ( nn = mm; ; nn = v29 )
          {
            v29 = nn >> 1;
            v30 = *(_DWORD *)(v1 + 4 * (nn >> 1) + 51580);
            v31 = nn + 12892;
            if ( v27 >= *(_DWORD *)(v1 + 4 * v30 + 52620) )
              break;
            *(_DWORD *)(v1 + 4 * v31 + 12) = v30;
          }
          *(_DWORD *)(v1 + 4 * v31 + 12) = mm;
        }
        v33 = 0;
        if ( v100 >= -2 )
          v33 = v100 + 2;
        v94 = v100 + 2;
        while ( v33 > 1 )
        {
          v108 = *(_DWORD *)(v1 + 51584);
          v103 = *(_DWORD *)(v1 + 4 * v33 + 51580);
          *(_DWORD *)(v1 + 51584) = v103;
          v99 = v33 - 1;
          for ( i1 = 1; ; i1 = v38 )
          {
            v38 = 2 * i1;
            if ( v99 < 2 * i1 )
              break;
            if ( v99 > 2 * i1
              && *(_DWORD *)(v1 + 4 * *(_DWORD *)(v1 + 8 * i1 + 51584) + 52620) < *(_DWORD *)(v1
                                                                                            + 4
                                                                                            * *(_DWORD *)(v1 + 8 * i1 + 51580)
                                                                                            + 52620) )
            {
              ++v38;
            }
            v39 = *(_DWORD *)(v1 + 4 * v38 + 51580);
            if ( *(_DWORD *)(v1 + 4 * (v103 + 13152) + 12) < *(_DWORD *)(v1 + 4 * v39 + 52620) )
              break;
            *(_DWORD *)(v1 + 4 * i1 + 51580) = v39;
          }
          *(_DWORD *)(v1 + 4 * i1 + 51580) = v103;
          v104 = *(_DWORD *)(v1 + 51584);
          v40 = *(_DWORD *)(v1 + 4 * v99 + 51580);
          *(_DWORD *)(v1 + 51584) = v40;
          v41 = 1;
          v109 = v33 - 2;
          while ( 1 )
          {
            v42 = 2 * v41;
            if ( 2 * v41 > v109 )
              break;
            if ( 2 * v41 < v109
              && *(_DWORD *)(v1 + 4 * *(_DWORD *)(v1 + 8 * v41 + 51584) + 52620) < *(_DWORD *)(v1
                                                                                             + 4
                                                                                             * *(_DWORD *)(v1 + 8 * v41 + 51580)
                                                                                             + 52620) )
            {
              ++v42;
            }
            v43 = *(_DWORD *)(v1 + 4 * v42 + 51580);
            if ( *(_DWORD *)(v1 + 4 * (v40 + 13152) + 12) < *(_DWORD *)(v1 + 4 * v43 + 52620) )
              break;
            *(_DWORD *)(v1 + 4 * v41 + 51580) = v43;
            v41 = v42;
          }
          *(_DWORD *)(v1 + 4 * v41 + 51580) = v40;
          ++v94;
          v44 = v1 + 4 * v104;
          *(_DWORD *)(v44 + 54684) = v94;
          v45 = v1 + 4 * v108;
          *(_DWORD *)(v45 + 54684) = v94;
          v46 = *(_DWORD *)(v45 + 52620);
          v47 = *(_DWORD *)(v44 + 52620);
          v48 = (unsigned __int8)v47;
          if ( (unsigned __int8)v47 < (unsigned int)(unsigned __int8)v46 )
            v48 = (unsigned __int8)v46;
          LOBYTE(v46) = 0;
          LOBYTE(v47) = 0;
          v49 = (v47 + v46) | (v48 + 1);
          *(_DWORD *)(v1 + 4 * v94 + 52620) = v49;
          *(_DWORD *)(v1 + 4 * v94 + 54684) = -1;
          v50 = v33 - 1;
          *(_DWORD *)(v1 + 4 * v99 + 51580) = v94;
          while ( 1 )
          {
            v51 = v50 >> 1;
            v52 = *(_DWORD *)(v1 + 4 * (v50 >> 1) + 51580);
            v53 = v50 + 12892;
            if ( v49 >= *(_DWORD *)(v1 + 4 * v52 + 52620) )
              break;
            *(_DWORD *)(v1 + 4 * v53 + 12) = v52;
            v50 = v51;
          }
          *(_DWORD *)(v1 + 4 * v53 + 12) = v94;
          --v33;
        }
        v34 = 0;
        for ( i2 = 1; v89 >= i2; ++i2 )
        {
          v54 = i2;
          for ( i3 = 0; ; ++i3 )
          {
            v54 = *(_DWORD *)(v1 + 4 * v54 + 54684);
            if ( v54 < 0 )
              break;
          }
          if ( i3 > 17 )
            v34 = 1;
          *(_BYTE *)(v106 + i2 + 37647) = i3;
        }
        if ( v34 == 0 )
          break;
        for ( i4 = 1; v89 >= i4; ++i4 )
          *(_DWORD *)(v1 + 4 * i4 + 52620) = ((*(int *)(v1 + 4 * i4 + 52620) >> 8) / 2 + 1) << 8;
      }
      v106 += 258;
      v107 += 1032;
    }
    while ( v105 != v106 );
  }
  v56 = 0;
  do
  {
    v110[v56] = v56;
    ++v56;
  }
  while ( v91 != v56 );
  v57 = v110[0];
  for ( i5 = v1; v1 + v98 != i5; ++i5 )
  {
    v59 = *(_BYTE *)(i5 + 1644);
    v60 = 0;
    while ( v57 != v59 )
    {
      v61 = v110[++v60];
      v110[v60] = v57;
      v57 = v61;
    }
    *(_BYTE *)(i5 + 19646) = v60;
  }
  v95 = v1 + 39196;
  v62 = v1;
  do
  {
    v63 = 0;
    v64 = 32;
    for ( i6 = 0; i6 < v89; ++i6 )
    {
      v66 = *(unsigned __int8 *)(v62 + i6 + 37648);
      if ( v63 < v66 )
        v63 = *(unsigned __int8 *)(v62 + i6 + 37648);
      if ( v64 > v66 )
        v64 = *(unsigned __int8 *)(v62 + i6 + 37648);
    }
    v67 = 0;
    while ( v63 >= v64 )
    {
      for ( i7 = 0; v89 > i7; ++i7 )
      {
        if ( *(unsigned __int8 *)(v62 + 37648 + i7) == v64 )
          *(_DWORD *)(v95 + 4 * i7) = v67++;
      }
      v67 *= 2;
      ++v64;
    }
    v95 += 1032;
    v62 += 258;
  }
  while ( v105 != v62 );
  v69 = (_DWORD *)(v1 + 100);
  v70 = 0;
  do
  {
    v70 = 2 * v70 + ((v69[3] | v69[2] | v69[1] | *v69) != 0);
    v69 += 4;
  }
  while ( (_DWORD *)(v1 + 356) != v69 );
  sub_418DE0((_DWORD *)v1, v70);
  v71 = v70 << 16;
  for ( i8 = 0; i8 != 256; i8 += 16 )
  {
    if ( v71 < 0 )
    {
      v73 = 0;
      v74 = 0;
      do
        v74 = *(unsigned __int8 *)(v1 + i8 + v73++ + 100) + 2 * v74;
      while ( v73 != 16 );
      sub_418DE0((_DWORD *)v1, v74);
    }
    v71 *= 2;
  }
  v75 = sub_418D98((_DWORD *)v1, 3, v91);
  sub_418D98(v75, 15, v98);
  for ( i9 = 0; i9 != v98; ++i9 )
  {
    for ( i10 = 0; *(unsigned __int8 *)(v1 + i9 + 19646) > i10; ++i10 )
    {
      if ( *(int *)(v1 + 72) > 7 )
      {
        v78 = *(_BYTE *)(v1 + 71);
        v79 = *(_BYTE **)(v1 + 60);
        *(_DWORD *)(v1 + 60) = v79 + 1;
        *v79 = v78;
        *(_DWORD *)(v1 + 68) <<= 8;
        *(_DWORD *)(v1 + 72) -= 8;
      }
      v80 = *(_DWORD *)(v1 + 72);
      *(_DWORD *)(v1 + 68) |= 0x80000000 >> v80;
      *(_DWORD *)(v1 + 72) = v80 + 1;
    }
    sub_418E20(v1);
  }
  do
  {
    v81 = *(unsigned __int8 *)(v101 + 37648);
    sub_418D98((_DWORD *)v1, 5, v81);
    v83 = v101;
    for ( i11 = 0; i11 < v89; ++i11 )
    {
      while ( *(unsigned __int8 *)(v83 + 37648) > v81 )
      {
        sub_418D98((_DWORD *)v1, 2, 2);
        ++v81;
      }
      while ( *(unsigned __int8 *)(v83 + 37648) < v81 )
      {
        sub_418D98((_DWORD *)v1, 2, 3);
        --v81;
      }
      sub_418E20(v1);
      ++v83;
    }
    v101 += 258;
  }
  while ( v105 != v101 );
  for ( i12 = (unsigned __int8 *)(v1 + 1644); ; ++i12 )
  {
    result = *(_DWORD *)(v1 + 92);
    if ( result <= m )
      break;
    v90 = m + 49;
    if ( result <= m + 49 )
      v90 = result - 1;
    v86 = *i12;
    v87 = 258 * v86 + 37648;
    v88 = 1032 * v86 + 39196;
    while ( m <= v90 )
    {
      sub_418D98(
        (_DWORD *)v1,
        *(unsigned __int8 *)(v1 + *(unsigned __int16 *)(v102 + 2 * m) + v87),
        *(_DWORD *)(v1 + 4 * *(unsigned __int16 *)(v102 + 2 * m) + v88));
      ++m;
    }
  }
  return result;
}

