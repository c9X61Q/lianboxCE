// busybox.exe @ 0x434988 size=1452

int __usercall sub_434988@<eax>(_DWORD *a1@<eax>)
{
  int v2; // esi
  int v3; // edi
  int result; // eax
  int v5; // edx
  __int16 v6; // di
  int i; // esi
  __int16 v8; // ax
  int j; // eax
  int v10; // edi
  int v11; // esi
  char v12; // al
  _BYTE *k; // esi
  _DWORD *v14; // ebp
  unsigned int v15; // esi
  int v16; // edi
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // esi
  int v23; // ecx
  int v24; // edx
  int v25; // esi
  int v26; // edx
  int v27; // edx
  int n; // eax
  unsigned int v29; // esi
  unsigned int v30; // ebp
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // ecx
  int v36; // eax
  int v37; // edx
  int ii; // ecx
  int v39; // edx
  int v40; // edi
  char v41; // cl
  unsigned int v42; // eax
  unsigned int v43; // ecx
  int v44; // eax
  _DWORD *v45; // esi
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // edx
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // eax
  char *v53; // eax
  int v54; // edx
  int v55; // esi
  int jj; // eax
  int v57; // ecx
  int v58; // edx
  unsigned int v59; // eax
  int v60; // [esp+0h] [ebp-694h]
  int v61; // [esp+4h] [ebp-690h]
  int v62; // [esp+4h] [ebp-690h]
  int v63; // [esp+8h] [ebp-68Ch]
  signed int v64; // [esp+Ch] [ebp-688h]
  int v65; // [esp+10h] [ebp-684h]
  _DWORD *v66; // [esp+14h] [ebp-680h]
  int v67; // [esp+14h] [ebp-680h]
  int v68; // [esp+18h] [ebp-67Ch]
  int v69; // [esp+18h] [ebp-67Ch]
  unsigned int v70; // [esp+1Ch] [ebp-678h]
  int v71; // [esp+20h] [ebp-674h]
  int m; // [esp+24h] [ebp-670h]
  int v73; // [esp+24h] [ebp-670h]
  int v74; // [esp+28h] [ebp-66Ch]
  _DWORD v75[85]; // [esp+30h] [ebp-664h]
  _BYTE v76[256]; // [esp+184h] [ebp-510h] BYREF
  _DWORD v77[256]; // [esp+284h] [ebp-410h] BYREF
  char v78; // [esp+684h] [ebp-10h] BYREF

  v65 = a1[15];
  v2 = sub_433458((int)a1, 24);
  v3 = sub_433458((int)a1, 24);
  a1[12] = sub_433458((int)a1, 32);
  if ( v2 == 1536581 )
    return (v3 == 3690640) - 2;
  if ( v3 != 2511705 || v2 != 3227993 )
    return -2;
  v5 = sub_433458((int)a1, 1);
  result = -7;
  if ( v5 != 0 )
    return result;
  v70 = sub_433458((int)a1, 24);
  if ( a1[16] < v70 )
    return -5;
  v6 = sub_433458((int)a1, 16);
  v64 = 0;
  for ( i = 0; i <= 255; i += 16 )
  {
    if ( v6 < 0 )
    {
      v8 = sub_433458((int)a1, 16);
      while ( 1 )
      {
        if ( v8 < 0 )
          *((_BYTE *)&v75[21] + v64++) = i;
        v8 *= 2;
        if ( (((_BYTE)i + 1) & 0xF) == 0 )
          break;
        ++i;
      }
      i -= 15;
    }
    v6 *= 2;
  }
  v63 = sub_433458((int)a1, 3);
  if ( (unsigned int)(v63 - 2) > 4 )
    return -5;
  for ( j = 0; j != v63; ++j )
    v76[j] = j;
  v71 = sub_433458((int)a1, 15);
  v10 = 0;
  if ( v71 == 0 )
    return -5;
  while ( v10 < v71 )
  {
    v11 = 0;
    while ( sub_433458((int)a1, 1) != 0 )
    {
      if ( v63 == ++v11 )
        return -5;
    }
    v12 = v76[v11];
    for ( k = &v76[v11]; v76 != k; --k )
      *k = *(k - 1);
    *((_BYTE *)a1 + v10 + 1096) = v12;
    v76[0] = v12;
    ++v10;
  }
  v68 = v64 + 2;
  v14 = a1 + 8465;
  for ( m = 0; m != v63; ++m )
  {
    v15 = sub_433458((int)a1, 5) - 1;
    v16 = 0;
    do
    {
      while ( 1 )
      {
        if ( v15 > 0x13 )
          return -5;
        v17 = sub_433458((int)a1, 2);
        if ( v17 <= 1 )
          break;
        v15 = v15 + (((_BYTE)v17 + 1) & 2) - 1;
      }
      ++*a1;
      *((_BYTE *)v77 + v16++) = v15 + 1;
    }
    while ( v68 > v16 );
    v18 = LOBYTE(v77[0]);
    v61 = LOBYTE(v77[0]);
    v19 = 1;
    do
    {
      v20 = *((unsigned __int8 *)v77 + v19);
      if ( v20 > v18 )
      {
        v18 = *((unsigned __int8 *)v77 + v19);
      }
      else if ( v61 > v20 )
      {
        v61 = *((unsigned __int8 *)v77 + v19);
      }
      ++v19;
    }
    while ( v68 > v19 );
    v66 = v14 + 1;
    v14[300] = v61;
    v14[301] = v18;
    v21 = v61;
    v22 = 0;
    while ( v21 <= v18 )
    {
      v14[v21] = 0;
      v75[v21] = 0;
      v23 = 0;
      do
      {
        if ( *((unsigned __int8 *)v77 + v23) == v21 )
          v66[v22++ + 41] = v23;
        ++v23;
      }
      while ( v68 > v23 );
      ++v21;
    }
    v24 = 0;
    do
      ++v75[*((unsigned __int8 *)v77 + v24++)];
    while ( v68 > v24 );
    v74 = 0;
    v25 = v61;
    v26 = 0;
    while ( v25 < v18 )
    {
      v27 = v75[v25] + v26;
      v14[v25] = (v27 << (v18 - v25)) - 1;
      v26 = 2 * v27;
      v74 += v75[v25++];
      v66[v25 + 20] = v26 - v74;
    }
    v14[v18] = v26 + v75[v18] - 1;
    v14[v18 + 1] = 0x7FFFFFFF;
    v14[v61 + 21] = 0;
    v14 += 301;
  }
  for ( n = 0; n != 256; ++n )
  {
    v77[n] = 0;
    v76[n] = n;
  }
  v29 = 0;
  v30 = 0;
  v67 = 0;
LABEL_58:
  if ( v67 >= v71 )
    return -5;
  v31 = *((unsigned __int8 *)a1 + ++v67 + 1095);
  if ( v31 >= v63 )
    return -5;
  v62 = (int)&a1[301 * v31 + 8466];
  v73 = (int)&a1[301 * v31 + 8486];
  v69 = 49;
  while ( 1 )
  {
    while ( 1 )
    {
      v32 = *a1;
      v33 = *(_DWORD *)(v62 + 1200);
      v34 = *a1 - v33;
      if ( v34 >= 0 )
      {
        *a1 = v34;
        v36 = ((1 << v33) - 1) & (a1[1] >> v34);
        goto LABEL_66;
      }
      v35 = a1[5];
      if ( v35 == a1[4] )
        break;
      v37 = a1[1] << 8;
      a1[5] = v35 + 1;
      a1[1] = *(unsigned __int8 *)(a1[6] + v35) | v37;
      *a1 = v32 + 8;
    }
    v36 = sub_433458((int)a1, v33);
LABEL_66:
    for ( ii = *(_DWORD *)(v62 + 1196); ; ++ii )
    {
      v39 = 4 * ii;
      if ( *(_DWORD *)(v62 + 4 * ii - 4) >= v36 )
        break;
    }
    v40 = *(_DWORD *)(v62 + 1200) - ii;
    v41 = *(_BYTE *)(v62 + 1200) - ii;
    if ( v40 < 0 )
      return -5;
    *a1 += v40;
    v42 = (v36 >> v41) - *(_DWORD *)(v73 + v39);
    if ( v42 > 0x101 )
      return -5;
    v43 = *(_DWORD *)(v62 + 4 * v42 + 164);
    if ( v43 > 1 )
      break;
    if ( v29 == 0 )
    {
      v60 = 0;
      v29 = 1;
    }
    v60 += v29 << v43;
    if ( a1[16] > v29 )
      v29 *= 2;
LABEL_91:
    if ( --v69 < 0 )
      goto LABEL_58;
  }
  if ( v29 != 0 )
  {
    if ( v30 + v60 > a1[16] )
      return -5;
    v44 = *((unsigned __int8 *)&v75[21] + v76[0]);
    v77[v44] += v60;
    v45 = (_DWORD *)(v65 + 4 * v30);
    v46 = v60;
    while ( --v46 >= 0 )
      *v45++ = v44;
    v47 = v60 - 1;
    v48 = 0;
    if ( v60 - 1 >= -1 )
      v48 = v60;
    v30 += v48;
    v49 = 0;
    if ( v47 >= -1 )
      v49 = -v60;
    v60 = v49 + v47;
  }
  if ( v64 >= (int)v43 )
  {
    if ( a1[16] <= v30 )
      return -5;
    v50 = *((unsigned __int8 *)&v75[84] + v43 + 3);
    v51 = v43 - 1;
    do
    {
      --v51;
      v76[v51 + 1] = v76[v51];
    }
    while ( v51 != 0 );
    v76[0] = v50;
    v52 = *((unsigned __int8 *)&v75[21] + v50);
    ++v77[v52];
    *(_DWORD *)(v65 + 4 * v30) = v52;
    v29 = 0;
    ++v30;
    goto LABEL_91;
  }
  v53 = (char *)v77;
  v54 = 0;
  do
  {
    v55 = v54;
    v54 += *(_DWORD *)v53;
    *(_DWORD *)v53 = v55;
    v53 += 4;
  }
  while ( &v78 != v53 );
  for ( jj = 0; jj != v30; ++jj )
  {
    v57 = *(unsigned __int8 *)(v65 + 4 * jj);
    v58 = v77[v57];
    *(_DWORD *)(v65 + 4 * v58) |= jj << 8;
    v77[v57] = v58 + 1;
  }
  if ( v30 != 0 )
  {
    if ( v30 > v70 )
    {
      v59 = *(_DWORD *)(v65 + 4 * v70);
      a1[11] = (unsigned __int8)v59;
      a1[8] = v59 >> 8;
      a1[9] = 5;
      goto LABEL_101;
    }
    return -5;
  }
LABEL_101:
  a1[10] = v30;
  return 0;
}

