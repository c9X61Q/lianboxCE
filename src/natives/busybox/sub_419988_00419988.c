// busybox.exe @ 0x419988 size=562

int __usercall sub_419988@<eax>(int Str@<eax>)
{
  signed int v2; // eax
  int i; // edx
  __int16 v4; // ax
  int v5; // esi
  int v6; // esi
  int v7; // edi
  __int16 *v8; // ecx
  __int16 v9; // dx
  int j; // eax
  int v11; // edi
  unsigned __int16 v12; // si
  __int16 v13; // dx
  int k; // edx
  __int16 v15; // ax
  int v16; // esi
  int m; // ecx
  __int16 v18; // ax
  int n; // ecx
  __int16 v20; // ax
  int ii; // ecx
  int v22; // esi
  int jj; // ecx
  __int16 v24; // ax
  int kk; // eax
  int mm; // eax
  __int16 v27; // di
  bool v28; // dl
  int nn; // eax
  __int16 v30; // dx

  v2 = strlen((const char *)Str);
  do
  {
    *(_WORD *)(Str + 2 * v2) = *(unsigned __int8 *)(Str + v2);
    --v2;
  }
  while ( v2 >= 0 );
  for ( i = 0; ; i = v5 )
  {
    v4 = *(_WORD *)(Str + 2 * i);
    if ( v4 == 0 )
      break;
    v5 = i + 1;
    if ( v4 == 92 )
    {
      sub_45A250(i + 1, i);
      *(_WORD *)(Str + 2 * v5 - 2) |= 0x100u;
    }
  }
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (__int16 *)(Str + 2 * v7);
    v9 = *v8;
    if ( *v8 == 0 )
      break;
    if ( v9 != 34 && v9 != 39 )
    {
      if ( v6 == 0 )
        goto LABEL_17;
      goto LABEL_16;
    }
    if ( v6 != v9 && v6 != 0 )
    {
LABEL_16:
      HIBYTE(v9) |= 1u;
      *v8 = v9;
LABEL_17:
      ++v7;
    }
    else
    {
      v6 ^= v9;
      sub_45A250(v7 + 1, v7);
    }
  }
  for ( j = 0; ; ++j )
  {
    v11 = 2 * j;
    v12 = *(_WORD *)(Str + 2 * j);
    if ( v12 == 0 )
      break;
    if ( v12 == 38 || v12 == 59 || v12 == 124 )
    {
      if ( j == 0 )
        goto LABEL_30;
      v13 = *(_WORD *)(Str + v11 - 2);
      if ( v12 == 38 )
      {
        if ( (v13 & 0xFFFD) == 0x3C )
          continue;
LABEL_30:
        sub_45A250(j + (*(_WORD *)(Str + v11 + 2) == v12) + 1, 0);
        j = -1;
        continue;
      }
      if ( v13 != 62 || v12 != 124 )
        goto LABEL_30;
    }
  }
  for ( k = 0; ; k = v16 )
  {
    v15 = *(_WORD *)(Str + 2 * k);
    if ( v15 == 0 )
      break;
    v16 = k + 1;
    if ( v15 == 96 )
    {
      for ( m = k + 1; ; ++m )
      {
        v18 = *(_WORD *)(Str + 2 * m);
        if ( v18 == 0 )
          break;
        if ( v18 == 96 )
        {
          sub_45A250(m, k);
          goto LABEL_40;
        }
      }
      sub_45A250(k + 1, 0);
      break;
    }
LABEL_40:
    ;
  }
  for ( n = 0; ; ++n )
  {
    v20 = *(_WORD *)(Str + 2 * n);
    if ( v20 == 0 )
      break;
    if ( v20 == 123 || v20 == 40 )
    {
      sub_45A250(n + 1, 0);
      n = -1;
    }
  }
  for ( ii = 0; *(_WORD *)(Str + 2 * ii) == 32; ++ii )
    ;
  sub_45A250(ii, 0);
  v22 = 0;
  for ( jj = 0; ; ++jj )
  {
    v24 = *(_WORD *)(Str + 2 * jj);
    if ( v24 == 0 )
      break;
    if ( (v24 & 0xFFFD) == 0x3C || v24 == 32 )
    {
      if ( v22 != 0 || v24 != 32 || *(_BYTE *)Str != 99 || *(_BYTE *)(Str + 2) != 100 || jj != 2 )
      {
        v22 = 2;
        break;
      }
      v22 = 1;
    }
  }
  for ( kk = 0; *(_WORD *)(Str + 2 * kk) != 0; ++kk )
    ;
  for ( mm = kk - 1; mm != -1; --mm )
  {
    v27 = *(_WORD *)(Str + 2 * mm);
    v28 = true;
    if ( (unsigned __int16)(v27 - 32) <= 0x1Eu )
      v28 = ((0x50000041u >> (v27 - 32)) & 1) == 0;
    if ( !v28 || v27 == 124 )
    {
      sub_45A250(mm + 1, 0);
      break;
    }
  }
  for ( nn = 0; ; ++nn )
  {
    v30 = *(_WORD *)(Str + 2 * nn);
    *(_BYTE *)(Str + nn) = v30;
    if ( (_BYTE)v30 == 0 )
      break;
  }
  return v22;
}

