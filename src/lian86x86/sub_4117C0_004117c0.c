// lian86.exe @ 0x004117c0  size=1118  name=sub_4117C0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_4117C0(int a1, int a2, unsigned int a3, _DWORD **a4, unsigned int *a5, unsigned __int16 *a6)
{
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int v11; // ebx
  int v12; // edx
  unsigned int i; // ecx
  unsigned int v14; // ecx
  unsigned int j; // ecx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // ebp
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // ecx
  unsigned __int16 v22; // ax
  int v23; // esi
  int v24; // edx
  _DWORD *v25; // ecx
  unsigned int k; // edx
  unsigned int v27; // ebp
  unsigned __int16 *v28; // eax
  bool v29; // zf
  int v30; // esi
  unsigned int v31; // ebx
  unsigned int v32; // edx
  int v33; // eax
  unsigned __int16 *v34; // esi
  int v35; // eax
  unsigned int v36; // eax
  bool v37; // cc
  int v38; // [esp+10h] [ebp-7Ch]
  unsigned __int16 v39; // [esp+10h] [ebp-7Ch]
  unsigned int v40; // [esp+14h] [ebp-78h]
  unsigned int v41; // [esp+18h] [ebp-74h]
  _DWORD *v42; // [esp+1Ch] [ebp-70h]
  unsigned int v43; // [esp+20h] [ebp-6Ch]
  unsigned int v44; // [esp+24h] [ebp-68h]
  unsigned __int16 *v45; // [esp+28h] [ebp-64h]
  unsigned __int16 *v46; // [esp+2Ch] [ebp-60h]
  int v47; // [esp+30h] [ebp-5Ch]
  int v48; // [esp+34h] [ebp-58h]
  int v49; // [esp+38h] [ebp-54h]
  int v50; // [esp+3Ch] [ebp-50h]
  int v51; // [esp+44h] [ebp-48h]
  int v52; // [esp+48h] [ebp-44h]
  _WORD v53[17]; // [esp+4Ch] [ebp-40h] BYREF
  _WORD v54[15]; // [esp+6Eh] [ebp-1Eh]

  v6 = 0;
  memset(v53, 0, 32);
  if ( a3 != 0 )
  {
    do
    {
      v7 = *(unsigned __int16 *)(a2 + 2 * v6++);
      ++v53[v7];
    }
    while ( v6 < a3 );
  }
  v8 = 15;
  v9 = *a5;
  v41 = *a5;
  do
  {
    if ( v53[v8] != 0 )
      break;
    --v8;
  }
  while ( v8 != 0 );
  if ( v9 > v8 )
  {
    v9 = v8;
    v41 = v8;
  }
  if ( v8 == 0 )
  {
    *(*a4)++ = 320;
    *(*a4)++ = 320;
    *a5 = 1;
    return 0;
  }
  v11 = 1;
  v48 = 1;
  if ( v8 > 1 )
  {
    do
    {
      if ( v53[v11] != 0 )
        break;
      ++v11;
    }
    while ( v11 < v8 );
    v48 = v11;
  }
  if ( v9 < v11 )
    v41 = v11;
  v12 = 1;
  for ( i = 1; i <= 0xF; ++i )
  {
    v12 = 2 * v12 - (unsigned __int16)v53[i];
    if ( v12 < 0 )
      return -1;
  }
  if ( v12 > 0 && (a1 == 0 || v8 != 1) )
    return -1;
  v14 = 1;
  v54[0] = 0;
  do
  {
    v54[v14] = v53[v14] + v53[v14 + 16];
    ++v14;
  }
  while ( v14 < 15 );
  for ( j = 0; j < a3; ++j )
  {
    v16 = *(unsigned __int16 *)(a2 + 2 * j);
    if ( (_WORD)v16 != 0 )
    {
      a6[(unsigned __int16)v53[v16 + 16]] = j;
      ++v53[*(unsigned __int16 *)(a2 + 2 * j) + 16];
    }
  }
  if ( a1 != 0 )
  {
    if ( a1 == 1 )
    {
      v46 = (unsigned __int16 *)&unk_416200;
      v45 = (unsigned __int16 *)&unk_416240;
      v44 = 257;
    }
    else
    {
      v46 = (unsigned __int16 *)&unk_416280;
      v45 = (unsigned __int16 *)&unk_4162C0;
      v44 = 0;
    }
  }
  else
  {
    v45 = a6;
    v46 = a6;
    v44 = 20;
  }
  LOBYTE(v17) = 0;
  v43 = 0;
  v40 = 0;
  v50 = -1;
  v18 = 1 << v41;
  v42 = *a4;
  v19 = 1 << v41;
  v47 = 1 << v41;
  v49 = 1 << v41;
  if ( a1 == 1 )
  {
    if ( v19 <= 0x354 )
      goto LABEL_40;
    return 1;
  }
  if ( a1 == 2 && v19 > 0x250 )
    return 1;
  while ( 1 )
  {
LABEL_40:
    BYTE1(v38) = v11 - v17;
    v20 = *a6;
    if ( v20 + 1 >= v44 )
    {
      if ( v20 < v44 )
      {
        LOBYTE(v38) = 96;
        v22 = 0;
      }
      else
      {
        v21 = v20 - v44;
        LOBYTE(v38) = v45[v21];
        v22 = v46[v21];
      }
      HIWORD(v38) = v22;
    }
    else
    {
      LOBYTE(v38) = 0;
      HIWORD(v38) = *a6;
    }
    v23 = 1 << (v11 - v40);
    v24 = v18;
    v51 = v18;
    v25 = &v42[v18 + (v43 >> v40)];
    do
    {
      v25 -= v23;
      *v25 = v38;
      v24 -= v23;
    }
    while ( v24 != 0 );
    for ( k = 1 << (v11 - 1); (k & v43) != 0; k >>= 1 )
      ;
    if ( k != 0 )
    {
      v27 = k + (v43 & (k - 1));
      v43 = v27;
    }
    else
    {
      v27 = 0;
      v43 = 0;
    }
    v28 = a6 + 1;
    v29 = v53[v11]-- == 1;
    ++a6;
    if ( v29 )
    {
      if ( v11 == v8 )
        break;
      v11 = *(unsigned __int16 *)(a2 + 2 * *v28);
      v48 = v11;
    }
    v17 = v40;
    if ( v11 <= v41 )
    {
      v18 = v47;
    }
    else
    {
      v30 = v27 & ((1 << v41) - 1);
      v18 = v47;
      v52 = v30;
      if ( v30 != v50 )
      {
        if ( v40 == 0 )
        {
          v17 = v41;
          v40 = v41;
        }
        v31 = v11 - v17;
        v32 = v31 + v17;
        v42 += v51;
        v33 = 1 << v31;
        if ( v32 < v8 )
        {
          v34 = &v53[v32];
          do
          {
            v35 = v33 - *v34;
            if ( v35 <= 0 )
              break;
            ++v32;
            LOBYTE(v31) = v31 + 1;
            ++v34;
            v33 = 2 * v35;
          }
          while ( v32 < v8 );
          v30 = v52;
        }
        v18 = 1 << v31;
        v36 = (1 << v31) + v49;
        v47 = 1 << v31;
        v49 = v36;
        if ( a1 == 1 )
        {
          v37 = v36 <= 0x354;
        }
        else
        {
          if ( a1 != 2 )
            goto LABEL_70;
          v37 = v36 <= 0x250;
        }
        if ( !v37 )
          return 1;
LABEL_70:
        v50 = v30;
        LOBYTE((*a4)[v30]) = v31;
        v11 = v48;
        BYTE1((*a4)[v30]) = v41;
        LOBYTE(v17) = v40;
        HIWORD((*a4)[v30]) = v42 - *a4;
      }
    }
  }
  if ( v27 != 0 )
  {
    LOBYTE(v39) = 64;
    HIBYTE(v39) = v11 - v40;
    v42[v27] = v39;
  }
  *a4 += v49;
  *a5 = v41;
  return 0;
}

