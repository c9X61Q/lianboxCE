// busybox.exe @ 0x419c44 size=839

int __usercall sub_419C44@<eax>(int *a1@<eax>)
{
  int v2; // ecx
  int v3; // esi
  int v4; // ebx
  int i; // eax
  int v6; // edx
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // ebp
  unsigned __int16 v11; // bp
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  _WORD *v16; // ecx
  _WORD *v17; // ebp
  unsigned __int8 v18; // al
  __int16 v19; // ax
  int v20; // eax
  int j; // edx
  int k; // ebp
  int v23; // edx
  unsigned __int16 *v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ebp
  int v30; // ebp
  int v32; // eax
  int m; // ecx
  int v34; // edx
  int v35; // ecx
  int v36; // ecx
  unsigned __int16 *v37; // ecx
  int v38; // esi
  int v39; // [esp+0h] [ebp-2Ch]
  int v40; // [esp+4h] [ebp-28h]
  int v41; // [esp+8h] [ebp-24h]
  int v42; // [esp+8h] [ebp-24h]
  int v43; // [esp+8h] [ebp-24h]
  int v44; // [esp+Ch] [ebp-20h]
  int v45; // [esp+10h] [ebp-1Ch]
  int v46; // [esp+14h] [ebp-18h]
  int v47; // [esp+18h] [ebp-14h]

  v39 = *a1;
  v2 = a1[1];
  v3 = a1[4];
  v4 = dword_486010;
  *(_DWORD *)(dword_486010 + 1148) = 0;
  *(_DWORD *)(v4 + 1152) = 573;
  v40 = -1;
  for ( i = 0; i < v3; ++i )
  {
    if ( *(_WORD *)(v39 + 4 * i) != 0 )
    {
      v6 = *(_DWORD *)(v4 + 1148) + 1;
      *(_DWORD *)(v4 + 1148) = v6;
      *(_WORD *)(v4 + 2 * v6) = i;
      *(_BYTE *)(v4 + i + 5268) = 0;
      v40 = i;
    }
    else
    {
      *(_WORD *)(v39 + 4 * i + 2) = 0;
    }
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v4 + 1148);
    if ( v9 > 1 )
      break;
    v7 = 0;
    if ( v40 <= 1 )
      v7 = (unsigned __int16)++v40;
    v8 = v9 + 1;
    *(_DWORD *)(v4 + 1148) = v8;
    *(_WORD *)(v4 + 2 * v8) = v7;
    *(_WORD *)(v39 + 4 * v7) = 1;
    *(_BYTE *)(v4 + v7 + 5268) = 0;
    --*(_DWORD *)(v4 + 10960);
    if ( v2 != 0 )
      *(_DWORD *)(v4 + 10964) -= *(unsigned __int16 *)(v2 + 4 * v7 + 2);
  }
  a1[6] = v40;
  v10 = v9 >> 1;
  do
  {
    sub_44DAE8();
    --v10;
  }
  while ( v10 != 0 );
  do
  {
    v11 = *(_WORD *)(v4 + 2);
    v12 = *(_DWORD *)(v4 + 1148);
    *(_DWORD *)(v4 + 1148) = v12 - 1;
    *(_WORD *)(v4 + 2) = *(_WORD *)(v4 + 2 * v12);
    sub_44DAE8();
    v13 = *(unsigned __int16 *)(v4 + 2);
    v14 = *(_DWORD *)(v4 + 1152);
    v15 = v4 + 2 * v14;
    *(_WORD *)(v15 - 2) = v11;
    *(_DWORD *)(v4 + 1152) = v14 - 2;
    *(_WORD *)(v15 - 4) = v13;
    v41 = v11;
    v16 = (_WORD *)(v39 + 4 * v11);
    v17 = (_WORD *)(v39 + 4 * v13);
    *(_WORD *)(v39 + 4 * v3) = *v17 + *v16;
    v18 = *(_BYTE *)(v4 + v13 + 5268);
    if ( v18 < *(_BYTE *)(v4 + v41 + 5268) )
      v18 = *(_BYTE *)(v4 + v41 + 5268);
    *(_BYTE *)(v4 + v3 + 5268) = v18 + 1;
    v19 = v3;
    v17[1] = v3;
    v16[1] = v3++;
    *(_WORD *)(v4 + 2) = v19;
    sub_44DAE8();
  }
  while ( *(int *)(v4 + 1148) > 1 );
  v42 = *(_DWORD *)(v4 + 1152);
  *(_DWORD *)(v4 + 1152) = v42 - 1;
  v20 = *(unsigned __int16 *)(v4 + 2);
  *(_WORD *)(v4 + 2 * (v42 - 1)) = v20;
  for ( j = 0; j != 16; ++j )
    *(_DWORD *)(v4 + 4 * j + 5204) = 0;
  v44 = *a1;
  *(_WORD *)(*a1 + 4 * v20 + 2) = 0;
  v45 = 0;
  for ( k = v42; k <= 572; ++k )
  {
    v23 = *(unsigned __int16 *)(v4 + 2 * k);
    v46 = 4 * v23;
    v24 = (unsigned __int16 *)(4 * v23 + v44);
    v25 = *(unsigned __int16 *)(v44 + 4 * v24[1] + 2) + 1;
    if ( v25 > a1[5] )
    {
      ++v45;
      v25 = a1[5];
    }
    v24[1] = v25;
    if ( v23 <= a1[6] )
    {
      ++*(_DWORD *)(v4 + 4 * v25 + 5204);
      v47 = a1[3];
      v26 = 0;
      if ( v23 >= v47 )
        v26 = *(unsigned __int8 *)(a1[2] + v23 - v47);
      v27 = *v24;
      *(_DWORD *)(v4 + 10960) += v27 * (v26 + v25);
      v28 = a1[1];
      if ( v28 != 0 )
        *(_DWORD *)(v4 + 10964) += v27 * (*(unsigned __int16 *)(v28 + v46 + 2) + v26);
    }
  }
  v29 = 0;
  if ( v42 <= 573 )
    v29 = 573 - v42;
  v30 = v42 + v29;
  if ( v45 != 0 )
  {
    v32 = a1[5];
    do
    {
      for ( m = v32 - 1; ; --m )
      {
        v34 = *(_DWORD *)(v4 + 4 * m + 5204);
        if ( v34 != 0 )
          break;
      }
      v35 = v4 + 4 * m;
      *(_DWORD *)(v35 + 5204) = v34 - 1;
      *(_DWORD *)(v35 + 5208) += 2;
      --*(_DWORD *)(v4 + 4 * v32 + 5204);
      v45 -= 2;
    }
    while ( v45 > 0 );
    while ( v32 != 0 )
    {
      v43 = *(_DWORD *)(v4 + 4 * v32 + 5204);
      while ( v43 != 0 )
      {
        --v30;
        v36 = *(unsigned __int16 *)(v4 + 2 * v30);
        if ( v36 <= a1[6] )
        {
          v37 = (unsigned __int16 *)(v44 + 4 * v36);
          v38 = v37[1];
          if ( v32 != v38 )
          {
            *(_DWORD *)(v4 + 10960) += (v32 - v38) * *v37;
            v37[1] = v32;
          }
          --v43;
        }
      }
      --v32;
    }
  }
  return sub_432C70();
}

