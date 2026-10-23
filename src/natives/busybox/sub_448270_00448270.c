// busybox.exe @ 0x448270 size=799

__int64 sub_448270()
{
  int v0; // ebx
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int i; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int j; // esi
  int v9; // edx
  int v10; // ecx
  int k; // esi
  int m; // eax
  unsigned int n; // eax
  unsigned int v14; // ecx
  int v15; // esi
  int ii; // edx
  int v17; // edx
  int v18; // eax
  unsigned __int8 *v19; // edx
  int v20; // eax

  v0 = dword_486010;
  memset((void *)(dword_486010 - 48), 0, 0x2B08u);
  *(_DWORD *)(v0 + 5120) = v0 + 1156;
  *(_DWORD *)(v0 + 5124) = v0 + 3692;
  *(_DWORD *)(v0 + 5128) = byte_47FB00;
  *(_DWORD *)(v0 + 5132) = 257;
  *(_DWORD *)(v0 + 5136) = 286;
  *(_DWORD *)(v0 + 5140) = 15;
  *(_DWORD *)(v0 + 5148) = v0 + 3448;
  *(_DWORD *)(v0 + 5152) = v0 + 4844;
  *(_DWORD *)(v0 + 5156) = byte_47FAE0;
  *(_DWORD *)(v0 + 5164) = 30;
  *(_DWORD *)(v0 + 5168) = 15;
  *(_DWORD *)(v0 + 5176) = v0 + 4964;
  *(_DWORD *)(v0 + 5184) = &unk_47FACC;
  *(_DWORD *)(v0 + 5192) = 19;
  *(_DWORD *)(v0 + 5196) = 7;
  sub_452990();
  sub_452990();
  *(_DWORD *)(v0 - 48) = -1;
  v1 = 0;
  v2 = 0;
  do
  {
    *(_DWORD *)(v0 + 4 * v1 + 6612) = v2;
    v3 = 1 << byte_47FB00[v1];
    for ( i = 0; i < v3; ++i )
      *(_BYTE *)(v0 + v2 + i + 5841) = v1;
    if ( v3 < 0 )
      v3 = 0;
    v2 += v3;
    ++v1;
  }
  while ( v1 != 28 );
  *(_BYTE *)(v0 + v2 + 5840) = 28;
  v5 = 0;
  v6 = 0;
  do
  {
    *(_DWORD *)(v0 + 4 * v5 + 6728) = v6;
    v7 = 1 << byte_47FAE0[v5];
    for ( j = 0; j < v7; ++j )
      *(_BYTE *)(v0 + v6 + j + 6097) = v5;
    if ( v7 < 0 )
      v7 = 0;
    v6 += v7;
    ++v5;
  }
  while ( v5 != 16 );
  v9 = v6 >> 7;
  do
  {
    *(_DWORD *)(v0 + 4 * v5 + 6728) = v9 << 7;
    v10 = 1 << (byte_47FAE0[v5] - 7);
    for ( k = 0; k < v10; ++k )
      *(_BYTE *)(v0 + v9 + k + 6353) = v5;
    if ( v10 < 0 )
      v10 = 0;
    v9 += v10;
    ++v5;
  }
  while ( v5 != 30 );
  for ( m = 0; m != 144; *(_WORD *)(v0 + 4 * m + 3690) = 8 )
    ++m;
  do
  {
    ++m;
    *(_WORD *)(v0 + 4 * m + 3690) = 9;
  }
  while ( m != 256 );
  do
  {
    ++m;
    *(_WORD *)(v0 + 4 * m + 3690) = 7;
  }
  while ( m != 280 );
  *(_WORD *)(v0 + 4814) = 8;
  *(_WORD *)(v0 + 4818) = 8;
  *(_WORD *)(v0 + 4822) = 8;
  *(_WORD *)(v0 + 4826) = 8;
  *(_WORD *)(v0 + 4830) = 8;
  *(_WORD *)(v0 + 4834) = 8;
  *(_WORD *)(v0 + 4838) = 8;
  *(_WORD *)(v0 + 4842) = 8;
  *(_DWORD *)(v0 + 5232) = 24;
  *(_DWORD *)(v0 + 5236) = 152;
  *(_DWORD *)(v0 + 5240) = 112;
  sub_432C70(v0 + 3692, 287);
  for ( n = 0; n != 30; ++n )
  {
    *(_WORD *)(v0 + 4 * n + 4846) = 5;
    v14 = n;
    v15 = 5;
    for ( ii = 0; ; ii = 2 * v17 )
    {
      v17 = v14 & 1 | ii;
      if ( --v15 == 0 )
        break;
      v14 >>= 1;
    }
    *(_WORD *)(v0 + 4 * n + 4844) = v17;
  }
  sub_43AB68();
  memset((void *)(*(_DWORD *)(v0 - 72) + 0x10000), 0, 0x10000u);
  v18 = sub_42F6B8(*(CHAR **)(v0 - 76), 0x10000);
  *(_DWORD *)(v0 - 24) = v18;
  if ( (unsigned int)(v18 - 1) <= 0xFFFFFFFD )
  {
    sub_42FBB8();
    v19 = *(unsigned __int8 **)(v0 - 76);
    v20 = (*v19 ^ (unsigned __int16)(32 * *(_DWORD *)(v0 - 40))) & 0x7FFF;
    *(_DWORD *)(v0 - 40) = v20;
    *(_DWORD *)(v0 - 40) = (v19[1] ^ (unsigned __int16)(32 * v20)) & 0x7FFF;
  }
  else
  {
    *(_BYTE *)(v0 - 12) = 1;
    *(_DWORD *)(v0 - 24) = 0;
  }
  sub_45292C();
  sub_431150();
  sub_422C38();
  sub_452990();
  sub_452990();
  sub_431150();
  return 0;
}

