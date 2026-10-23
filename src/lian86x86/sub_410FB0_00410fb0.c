// lian86.exe @ 0x00410fb0  size=440  name=sub_410FB0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned int __cdecl sub_410FB0(unsigned int a1, int a2, __int64 a3)
{
  __int64 v3; // kr00_8
  int v5; // ecx
  int i; // eax
  int j; // esi
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  int k; // edx
  int m; // esi
  unsigned int v12; // eax
  _DWORD *v13; // ecx
  int n; // edx
  unsigned int v15; // ebx
  int ii; // esi
  unsigned int v17; // eax
  _DWORD *v18; // ecx
  int jj; // edx
  unsigned int v20; // ecx
  _DWORD *kk; // eax
  int mm; // esi
  unsigned int v23; // eax
  _DWORD *v24; // ecx
  int nn; // edx
  unsigned int v26; // ecx
  _DWORD *i1; // eax
  unsigned int v28; // ebp
  int v29; // edi
  _DWORD v30[32]; // [esp+8h] [ebp-100h] BYREF
  _DWORD v31[32]; // [esp+88h] [ebp-80h] BYREF

  v3 = a3;
  if ( a3 <= 0 )
    return a1;
  v5 = 1;
  v30[0] = -306674912;
  for ( i = 1; i < 32; ++i )
  {
    v30[i] = v5;
    v5 *= 2;
  }
  for ( j = 0; j < 32; ++j )
  {
    v8 = v30[j];
    v9 = v30;
    for ( k = 0; v8 != 0; v8 >>= 1 )
    {
      if ( (v8 & 1) != 0 )
        k ^= *v9;
      ++v9;
    }
    v31[j] = k;
  }
  for ( m = 0; m < 32; ++m )
  {
    v12 = v31[m];
    v13 = v31;
    for ( n = 0; v12 != 0; v12 >>= 1 )
    {
      if ( (v12 & 1) != 0 )
        n ^= *v13;
      ++v13;
    }
    v30[m] = n;
  }
  v15 = a1;
  do
  {
    for ( ii = 0; ii < 32; ++ii )
    {
      v17 = v30[ii];
      v18 = v30;
      for ( jj = 0; v17 != 0; v17 >>= 1 )
      {
        if ( (v17 & 1) != 0 )
          jj ^= *v18;
        ++v18;
      }
      v31[ii] = jj;
    }
    if ( (v3 & 1) != 0 )
    {
      v20 = 0;
      for ( kk = v31; v15 != 0; v15 >>= 1 )
      {
        if ( (v15 & 1) != 0 )
          v20 ^= *kk;
        ++kk;
      }
      v15 = v20;
    }
    if ( v3 >> 1 == 0 )
      break;
    for ( mm = 0; mm < 32; ++mm )
    {
      v23 = v31[mm];
      v24 = v31;
      for ( nn = 0; v23 != 0; v23 >>= 1 )
      {
        if ( (v23 & 1) != 0 )
          nn ^= *v24;
        ++v24;
      }
      v30[mm] = nn;
    }
    if ( (v3 & 2) != 0 )
    {
      v26 = 0;
      for ( i1 = v30; v15 != 0; v15 >>= 1 )
      {
        if ( (v15 & 1) != 0 )
          v26 ^= *i1;
        ++i1;
      }
      v15 = v26;
    }
    v28 = (unsigned __int64)(v3 >> 1) >> 1;
    v29 = SHIDWORD(v3) >> 2;
    v3 = __PAIR64__(SHIDWORD(v3) >> 2, v28);
  }
  while ( __PAIR64__(v29, v28) != 0 );
  return a2 ^ v15;
}

