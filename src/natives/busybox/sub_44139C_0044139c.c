// busybox.exe @ 0x44139c size=941

_DWORD *__usercall sub_44139C@<eax>(_DWORD *a1@<eax>)
{
  int *v1; // ebp
  int v2; // edx
  int v3; // eax
  int i; // ecx
  int v5; // edx
  unsigned __int8 *v6; // ebx
  int v7; // ecx
  int j; // edx
  unsigned int v9; // edx
  int *v10; // ebx
  int v11; // ecx
  int k; // eax
  unsigned int v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // edx
  int *v16; // ebx
  int v17; // esi
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  _DWORD *result; // eax
  int v22; // eax
  _DWORD *v23; // ebx
  int n; // edx
  _DWORD *v25; // esi
  int v26; // ecx
  signed int v27; // edx
  int v28; // eax
  _DWORD *v29; // esi
  int v30; // ebx
  _DWORD *v31; // ecx
  unsigned int v32; // eax
  int v33; // edx
  _DWORD *v34; // esi
  int v35; // ebx
  unsigned int v36; // edx
  unsigned int v37; // eax
  char ii; // cl
  int v39; // eax
  int v40; // ebx
  unsigned int v41; // edx
  int v42; // edi
  _DWORD *v43; // [esp+0h] [ebp-23Ch]
  unsigned __int8 *v44; // [esp+4h] [ebp-238h]
  int v45; // [esp+8h] [ebp-234h]
  int v46; // [esp+Ch] [ebp-230h]
  int v47; // [esp+10h] [ebp-22Ch]
  int v48; // [esp+14h] [ebp-228h]
  int m; // [esp+18h] [ebp-224h]
  _DWORD *v50; // [esp+1Ch] [ebp-220h]
  int v51; // [esp+20h] [ebp-21Ch]
  int *v52; // [esp+24h] [ebp-218h]
  int v53; // [esp+28h] [ebp-214h]
  _BYTE v54[256]; // [esp+2Ch] [ebp-210h]
  _BYTE v55[272]; // [esp+12Ch] [ebp-110h] BYREF

  v43 = a1;
  v46 = a1[7];
  v44 = (unsigned __int8 *)a1[8];
  v1 = (int *)a1[4];
  v45 = a1[13];
  v48 = a1[5];
  memset(v1, 0, 0x40004u);
  v2 = *v44 << 8;
  v3 = v45 - 1;
  for ( i = v45 - 1; i >= 0; --i )
  {
    *(_WORD *)(v48 + 2 * i) = 0;
    v2 = (v44[i] << 8) | (v2 >> 8);
    ++v1[v2];
  }
  v47 = v48 + 2 * v45;
  v5 = 0;
  v6 = &v44[v45];
  do
  {
    v6[v5] = v44[v5];
    *(_WORD *)(v47 + 2 * v5++) = 0;
  }
  while ( v5 != 34 );
  v7 = *v1;
  for ( j = 1; j != 65537; ++j )
  {
    v7 += v1[j];
    v1[j] = v7;
  }
  v9 = *v44 << 8;
  while ( v3 >= 0 )
  {
    v9 = (v44[v3] << 8) | (v9 >> 8);
    v10 = &v1[v9];
    v11 = *v10 - 1;
    *v10 = v11;
    *(_DWORD *)(v46 + 4 * v11) = v3--;
  }
  for ( k = 0; k != 256; ++k )
  {
    v54[k] = 0;
    v55[k] = k;
  }
  v51 = 5;
  v13 = 364;
  do
  {
    v13 = (171 * v13) >> 9;
    v14 = v13;
    v52 = (int *)&v55[-v13];
    do
    {
      LOBYTE(v47) = v55[v14];
      v50 = (_DWORD *)(v1[256 * (unsigned __int8)v47 + 256] - v1[256 * (unsigned __int8)v47]);
      v15 = v14;
      do
      {
        LOBYTE(m) = *((_BYTE *)v52 + v15);
        v53 = (unsigned __int8)m << 8;
        if ( v1[256 * (unsigned __int8)m + 256] - v1[256 * (unsigned __int8)m] <= (unsigned int)v50 )
          break;
        v55[v15] = m;
        v15 -= v13;
      }
      while ( v13 <= v15 );
      v55[v15] = v47;
      ++v14;
    }
    while ( v14 != 256 );
    --v51;
  }
  while ( v51 != 0 );
  for ( m = 0; ; ++m )
  {
    v47 = (unsigned __int8)v55[m];
    v16 = &v1[256 * v47];
    v17 = 0;
    v18 = v47;
    do
    {
      if ( v18 != v17 )
      {
        v19 = *v16;
        if ( (*v16 & 0x200000) == 0 )
        {
          v20 = (v16[1] & 0xFFDFFFFF) - 1;
          if ( v19 < v20 )
          {
            sub_440FB8(v43, v19, v20);
            result = v43;
            if ( (int)v43[6] < 0 )
              return result;
          }
        }
        *v16 |= 0x200000u;
      }
      ++v17;
      ++v16;
    }
    while ( v17 != 256 );
    v22 = v47;
    v51 = (int)&v1[v47];
    v23 = (_DWORD *)v51;
    for ( n = 0; n != 256; ++n )
    {
      v25 = v43;
      v43[n + 14187] = *v23 & 0xFFDFFFFF;
      v25[n + 14443] = (v23[1] & 0xFFDFFFFF) - 1;
      v23 += 256;
    }
    v26 = v47 << 10;
    v52 = &v1[256 * v47];
    v27 = *v52 & 0xFFDFFFFF;
    v50 = &v43[v22];
    while ( v50[14187] > v27 )
    {
      v53 = *(_DWORD *)(v46 + 4 * v27);
      v28 = v53 - 1;
      if ( v53 - 1 < 0 )
        v28 += v45;
      if ( v54[v44[v28]] == 0 )
      {
        v29 = &v43[v44[v28]];
        v30 = v29[14187];
        v29[14187] = v30 + 1;
        *(_DWORD *)(v46 + 4 * v30) = v28;
      }
      ++v27;
    }
    v31 = (int *)((char *)v1 + v26 + 1024);
    v32 = *v31 & 0xFFDFFFFF;
    while ( v50[14443] < (signed int)--v32 )
    {
      v53 = *(_DWORD *)(v46 + 4 * v32);
      v33 = v53 - 1;
      if ( v53 - 1 < 0 )
        v33 += v45;
      if ( v54[v44[v33]] == 0 )
      {
        v34 = &v43[v44[v33]];
        v35 = v34[14443];
        v34[14443] = v35 - 1;
        *(_DWORD *)(v46 + 4 * v35) = v33;
      }
    }
    for ( result = nullptr; result != (_DWORD *)256; result = (_DWORD *)((char *)result + 1) )
    {
      *(_DWORD *)v51 |= 0x200000u;
      v51 += 1024;
    }
    if ( m == 255 )
      break;
    v54[v47] = 1;
    v36 = *v52 & 0xFFDFFFFF;
    v37 = (*v31 & 0xFFDFFFFF) - v36;
    for ( ii = 0; v37 >> ii > 0xFFFE; ++ii )
      ;
    v39 = v37 - 1;
    v40 = v46 + 4 * v36;
    while ( v39 >= 0 )
    {
      v41 = *(_DWORD *)(v40 + 4 * v39);
      v42 = v48;
      *(_WORD *)(v48 + 2 * v41) = v39 >> ii;
      if ( v41 <= 0x21 )
        *(_WORD *)(v42 + 2 * (v45 + v41)) = v39 >> ii;
      --v39;
    }
  }
  return result;
}

