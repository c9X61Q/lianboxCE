// busybox.exe @ 0x42014c size=1855

int __usercall sub_42014C@<eax>(int a1@<eax>, int *a2@<edx>, _DWORD *a3@<ecx>)
{
  int i; // esi
  _DWORD *v5; // edi
  __int16 v6; // ax
  __int16 v7; // bx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int k; // edx
  int v14; // ebx
  int v15; // ecx
  int v16; // ebx
  int v17; // edx
  int v18; // ecx
  int v19; // esi
  int n; // ebp
  int v21; // edx
  signed int v22; // eax
  signed int ii; // ecx
  int v24; // edi
  int v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // ecx
  unsigned int v29; // esi
  _DWORD *jj; // edx
  int v31; // ecx
  _DWORD *v32; // ecx
  _DWORD *v33; // eax
  _DWORD *v34; // edx
  int kk; // ecx
  int mm; // edx
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  int v40; // esi
  int v41; // ebx
  unsigned int v42; // eax
  _DWORD *v43; // esi
  int *v44; // ecx
  int v45; // eax
  char *v46; // eax
  int v47; // edi
  int v48; // ebx
  int v49; // edx
  int v50; // eax
  int *v51; // eax
  int nn; // eax
  _DWORD *v53; // eax
  int v54; // edx
  int *v55; // ebx
  _DWORD *v56; // edx
  int v57; // ebx
  int v58; // edi
  int *v61; // [esp+14h] [ebp-74h]
  int m; // [esp+14h] [ebp-74h]
  int v63; // [esp+14h] [ebp-74h]
  unsigned int v64; // [esp+18h] [ebp-70h]
  int v65; // [esp+18h] [ebp-70h]
  int v66; // [esp+18h] [ebp-70h]
  int v67; // [esp+18h] [ebp-70h]
  int j; // [esp+1Ch] [ebp-6Ch]
  int v69; // [esp+1Ch] [ebp-6Ch]
  int v70; // [esp+1Ch] [ebp-6Ch]
  int v71; // [esp+20h] [ebp-68h]
  int v72; // [esp+20h] [ebp-68h]
  int v73; // [esp+24h] [ebp-64h]
  int v74; // [esp+24h] [ebp-64h]
  int v75; // [esp+24h] [ebp-64h]
  int v76; // [esp+28h] [ebp-60h]
  int v77; // [esp+28h] [ebp-60h]
  unsigned int v78; // [esp+2Ch] [ebp-5Ch]
  int v79; // [esp+30h] [ebp-58h]
  int v80; // [esp+38h] [ebp-50h]
  int v81; // [esp+3Ch] [ebp-4Ch]
  char *v83; // [esp+48h] [ebp-40h]
  _DWORD *Block; // [esp+4Ch] [ebp-3Ch]
  int v85; // [esp+50h] [ebp-38h]
  int *v86; // [esp+50h] [ebp-38h]
  unsigned int v87; // [esp+54h] [ebp-34h]
  char *v88; // [esp+58h] [ebp-30h]
  int *v89; // [esp+5Ch] [ebp-2Ch]
  _DWORD v90[2]; // [esp+60h] [ebp-28h]
  int v91; // [esp+68h] [ebp-20h]
  int v92; // [esp+6Ch] [ebp-1Ch]
  _DWORD v93[6]; // [esp+70h] [ebp-18h]

  v61 = a2;
  for ( i = 0; ; i = 1 )
  {
    v5 = (_DWORD *)sub_470E78();
    *(&v91 + i) = (int)v5;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 12) = 0;
    fseek(*(FILE **)a1, 0, 0);
    *v61 = 0;
    *v5 = 0;
    v5[1] = 0;
    v64 = 100;
    do
    {
      for ( j = 0; ; j = 127 * j + (v6 & 0x1FF) )
      {
        v6 = sub_457EF8();
        v7 = v6;
        if ( (v6 & 0x200) != 0 )
          break;
      }
      v8 = (*v61)++;
      if ( v8 == v64 )
      {
        v64 = (3 * v64) >> 1;
        *(&v91 + i) = sub_471600(v61, 16 * (v64 + 3));
      }
      v9 = *(&v91 + i);
      *(_DWORD *)(v9 + 16 * *v61 + 8) = j & 0x7FFFFFFF;
      v10 = 16 * *v61;
      v11 = *(_DWORD *)(a1 + 12);
      *(_DWORD *)(v9 + v10) = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v9 + v10 + 4) = v11;
    }
    while ( (v7 & 0x400) == 0 );
    if ( ++*(_QWORD *)(v9 + 16 * *v61) - *(_QWORD *)(v9 + 16 * *v61 - 16) == 1 )
      --*v61;
    v12 = sub_470E78();
    a3[i] = v12;
    v65 = *v61;
    for ( k = 0; v65 >= k; ++k )
    {
      v14 = *(_DWORD *)(v9 + 16 * k + 4);
      *(_DWORD *)(v12 + 8 * k) = *(_DWORD *)(v9 + 16 * k);
      *(_DWORD *)(v12 + 8 * k + 4) = v14;
    }
    a1 += 16;
    ++v61;
    if ( i == 1 )
      break;
  }
  v15 = *a2;
  v71 = v91;
  v16 = v92;
  for ( m = 0; v15 > m && a2[1] > m && *(_DWORD *)(v91 + 16 * m + 24) == *(_DWORD *)(v92 + 16 * m + 24); ++m )
    ;
  v17 = v91 + 16 * v15;
  v69 = 0;
  v18 = v15 - m;
  while ( v18 > v69 )
  {
    if ( a2[1] - m <= v69 )
      break;
    v19 = *(_DWORD *)(v17 + 8);
    v17 -= 16;
    if ( v19 != *(_DWORD *)(v92 + 16 * (a2[1] - v69) + 8) )
      break;
    ++v69;
  }
  for ( n = 0; ; n = 1 )
  {
    v21 = 16 * m + *(&v91 + n);
    v93[n] = v21;
    v22 = a2[n] - m - v69;
    v90[n] = v22;
    for ( ii = 0; v22 >= ii; ++ii )
      *(_DWORD *)(v21 + 16 * ii) = ii;
    qsort((void *)(v21 + 16), v22, 0x10u, CompareFunction);
    if ( n == 1 )
      break;
  }
  v73 = v90[1];
  v24 = v93[1];
  v66 = v90[0];
  v76 = v93[0];
  v25 = 1;
  v26 = 1;
  while ( v66 >= v26 )
  {
    if ( v73 < v25 )
    {
      do
      {
        ++v26;
        *(_DWORD *)(v76 + 16 * v26 - 8) = 0;
      }
      while ( v66 >= v26 );
      break;
    }
    v28 = v76 + 16 * v26;
    v29 = *(_DWORD *)(v24 + 16 * v25 + 8);
    if ( *(_DWORD *)(v28 + 8) >= v29 )
    {
      if ( *(_DWORD *)(v28 + 8) == v29 )
      {
        ++v26;
        *(_DWORD *)(v28 + 8) = v25;
      }
      else
      {
        ++v25;
      }
    }
    else
    {
      ++v26;
      *(_DWORD *)(v28 + 8) = 0;
    }
  }
  *(_DWORD *)(16 * v73 + v24 + 24) = 0;
  v27 = 0;
  while ( 1 )
  {
    ++v27;
    v32 = (_DWORD *)(v16 + 4 * v27);
    if ( v73 < v27 )
      break;
    *v32 = -*(_DWORD *)(v24 + 16 * v27);
    for ( jj = (_DWORD *)(v24 + 16 * v27 - 16); ; *(_DWORD *)(v16 + 4 * v27) = jj[4] )
    {
      v31 = jj[10];
      jj += 4;
      if ( v31 != jj[2] )
        break;
      ++v27;
    }
  }
  *v32 = -1;
  v83 = (char *)sub_471600(v32, 4 * v73 + 8);
  v33 = (_DWORD *)sub_470E78();
  v34 = (_DWORD *)(v76 + 16);
  for ( kk = 1; v66 >= kk; ++kk )
  {
    v33[*v34] = v34[2];
    v34 += 4;
  }
  for ( mm = 1; v66 >= mm; ++mm )
    *(_DWORD *)(v71 + 4 * mm) = v33[mm];
  free(v33);
  Block = (_DWORD *)sub_471600(v37, 4 * v66 + 8);
  v72 = sub_470E78();
  v38 = *a2;
  v74 = a2[1] - *a2;
  v39 = 0;
  v40 = *a2 - v69;
  while ( v38 >= v39 )
  {
    v41 = v39;
    if ( m < v39 )
    {
      v41 = 0;
      if ( v40 < v39 )
        v41 = v39 + v74;
    }
    *(_DWORD *)(v72 + 4 * v39++) = v41;
  }
  v42 = sub_43CAD8();
  v78 = -1;
  if ( (dword_486008 & 4) == 0 )
  {
    v78 = v42;
    if ( v42 < 0x100 )
      v78 = 256;
  }
  v43 = (_DWORD *)sub_4728CC();
  v44 = (int *)sub_4728CC();
  v70 = 1;
  v79 = 1;
  v75 = 0;
  v81 = 100;
LABEL_63:
  v89 = &v44[v75];
  if ( v66 >= v79 )
  {
    v45 = Block[v79];
    if ( v45 == 0 )
      goto LABEL_87;
    v46 = &v83[4 * v45];
    v47 = -*(_DWORD *)v46;
    v77 = *v44;
    v88 = v46;
    v87 = 0;
    v85 = 0;
    while ( 1 )
    {
      if ( v43[3 * v77 + 1] < v47 )
      {
        v48 = v75 + 1;
        if ( v47 <= v43[3 * *v89 + 1] )
        {
          v80 = v75 + 1;
          v49 = 0;
LABEL_69:
          v48 = v80;
          while ( 1 )
          {
            v80 = v48;
            v48 = (v48 + v49) >> 1;
            if ( v48 <= v49 )
              break;
            v50 = 3 * v44[v48];
            if ( v47 >= v43[v50 + 1] )
            {
              if ( v47 <= v43[v50 + 1] )
                goto LABEL_75;
              v49 = v48;
              goto LABEL_69;
            }
          }
          ++v48;
        }
LABEL_75:
        if ( v85 + 1 != v48 )
          v77 = v44[v48 - 1];
        if ( v75 < v48 || v47 < v43[3 * v44[v48] + 1] )
        {
          if ( v70 == v81 )
          {
            v86 = v44;
            v81 = 11 * v70 / 10;
            v43 = (_DWORD *)sub_471600(10, 12 * v81);
            v44 = v86;
          }
          v51 = &v43[3 * v70];
          *v51 = v79;
          v51[1] = v47;
          v51[2] = v77;
          v77 = v44[v48];
          v44[v48] = v70;
          if ( v75 < v48 )
          {
            ++v75;
            ++v70;
LABEL_87:
            ++v79;
            goto LABEL_63;
          }
          ++v87;
          v85 = v48;
          ++v70;
        }
      }
      v47 = *((_DWORD *)v88 + 1);
      v88 += 4;
      if ( v87 >= v78 || v47 <= 0 )
        goto LABEL_87;
    }
  }
  for ( nn = 3 * v44[v75]; ; nn = 3 * v53[2] )
  {
    v53 = &v43[nn];
    v54 = v53[1];
    if ( v54 == 0 )
      break;
    *(_DWORD *)(v72 + 4 * (*v53 + m)) = m + v54;
  }
  free(v44);
  free(v43);
  *(_DWORD *)(v72 + 4 * *a2 + 4) = a2[1] + 1;
  free(Block);
  free(v83);
  while ( *a2 >= n )
  {
    v63 = n;
    v55 = (int *)(v72 + 4 * n);
    if ( *v55 != 0 )
    {
      sub_45D1D8(*(_DWORD *)(*a3 + 8 * n - 4), *(_DWORD *)(*a3 + 8 * n - 8));
      v56 = (_DWORD *)(a3[1] + 8 * *v55 - 8);
      sub_45D1D8(v56[1], *v56);
      v67 = *v55;
      while ( *a2 >= n && *(_DWORD *)(v72 + 4 * n) == n + v67 - v63 )
      {
        do
        {
          v57 = sub_457EF8();
          v58 = sub_457EF8();
          if ( (((unsigned __int16)v58 ^ (unsigned __int16)v57) & 0x200) != 0
            || (v57 & 0x200) == 0 && (((unsigned __int16)v58 ^ (unsigned __int16)v57) & 0x1FF) != 0 )
          {
            *(_DWORD *)(v72 + 4 * n) = 0;
          }
        }
        while ( (v58 & v57 & 0x200) == 0 );
        ++n;
      }
    }
    ++n;
  }
  return v72;
}

