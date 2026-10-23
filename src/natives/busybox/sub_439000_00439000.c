// busybox.exe @ 0x439000 size=1066

int __usercall sub_439000@<eax>(int a1@<eax>, unsigned int a2@<edx>, unsigned int a3@<ecx>, int a4, unsigned int *a5)
{
  int v6; // eax
  int v7; // eax
  int result; // eax
  unsigned int i; // edx
  unsigned int j; // esi
  int v11; // edi
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int k; // eax
  int v15; // ecx
  int m; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  int v20; // ebp
  int v21; // eax
  int v22; // esi
  unsigned int v23; // ebx
  unsigned int v24; // eax
  unsigned int v25; // eax
  _DWORD *ii; // edx
  unsigned int v27; // ebp
  unsigned int v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  char v32; // bl
  int v33; // ecx
  unsigned int jj; // edi
  unsigned int kk; // ecx
  int v36; // ebx
  signed int v38; // [esp+0h] [ebp-5E0h]
  unsigned int v39; // [esp+4h] [ebp-5DCh]
  signed int v40; // [esp+8h] [ebp-5D8h]
  unsigned int v41; // [esp+Ch] [ebp-5D4h]
  unsigned int v42; // [esp+10h] [ebp-5D0h]
  unsigned int n; // [esp+14h] [ebp-5CCh]
  int v44; // [esp+18h] [ebp-5C8h]
  unsigned int v45; // [esp+1Ch] [ebp-5C4h]
  unsigned int *v46; // [esp+20h] [ebp-5C0h]
  int *v47; // [esp+24h] [ebp-5BCh]
  int v48; // [esp+28h] [ebp-5B8h]
  int v50; // [esp+34h] [ebp-5ACh]
  int v51; // [esp+3Ch] [ebp-5A4h] BYREF
  _DWORD v52[16]; // [esp+40h] [ebp-5A0h]
  _DWORD v53[17]; // [esp+80h] [ebp-560h] BYREF
  int v54; // [esp+C4h] [ebp-51Ch]
  _DWORD v55[16]; // [esp+C8h] [ebp-518h]
  int v56; // [esp+108h] [ebp-4D8h]
  _DWORD v57[16]; // [esp+10Ch] [ebp-4D4h]
  _DWORD v58[293]; // [esp+14Ch] [ebp-494h] BYREF

  v42 = 16;
  if ( a2 > 0x100 )
    v42 = *(_DWORD *)(a1 + 1024);
  v6 = 0;
  memset(v53, 0, sizeof(v53));
  do
    ++v53[*(_DWORD *)(a1 + 4 * v6++)];
  while ( v6 != a2 );
  if ( v53[0] == v6 )
  {
    v7 = sub_4728CC();
    *(_WORD *)(v7 + 8) = 355;
    *(_WORD *)(v7 + 16) = 355;
    *a5 = 1;
    return v7 + 8;
  }
  else
  {
    for ( i = 1; i != 17; ++i )
    {
      if ( v53[i] != 0 )
        break;
    }
    for ( j = 16; ; --j )
    {
      v11 = v53[j];
      if ( v11 != 0 )
        break;
      if ( j == 0 )
      {
        v11 = 0;
        break;
      }
    }
    v12 = i;
    if ( *a5 >= i )
    {
      v12 = *a5;
      if ( *a5 > j )
        v12 = j;
    }
    *a5 = v12;
    v13 = 1 << i;
    for ( k = i; j > k; ++k )
    {
      v15 = v13 - v53[k];
      if ( v15 < 0 )
        return 1;
      v13 = 2 * v15;
    }
    result = 1;
    v50 = v13 - v11;
    if ( v13 - v11 >= 0 )
    {
      v53[j] = v13;
      v57[0] = 0;
      v40 = 0;
      for ( m = 0; j != ++v40; v57[v40] = m )
        m += v53[v40];
      memset(v58, 255, 0x484u);
      v17 = 0;
      do
      {
        v18 = *(_DWORD *)(a1 + 4 * v17);
        if ( v18 != 0 )
        {
          v19 = v57[v18 - 1];
          v57[v18 - 1] = v19 + 1;
          v58[v19] = v17;
        }
        ++v17;
      }
      while ( a2 != v17 );
      v38 = i;
      v51 = 1;
      v56 = 0;
      v54 = 0;
      v52[0] = 0;
      v47 = &v51;
      v45 = 0;
      LOBYTE(i) = 0;
      v20 = 0;
      v46 = v58;
      v41 = 0;
      v21 = -1;
      while ( v38 <= v40 )
      {
        for ( n = v53[v38]; n != 0; --n )
        {
          while ( 1 )
          {
            v22 = v21 + 1;
            v23 = v55[v21];
            if ( (int)v23 >= v38 )
              break;
            v39 = v38 - v23;
            v24 = 1 << (v38 - v23);
            if ( v24 > n )
            {
              v25 = v24 - n;
              for ( ii = &v53[v38]; ; v25 = v28 - *ii )
              {
                ++v39;
                v27 = *a5;
                if ( *a5 > v40 - v23 )
                  v27 = v40 - v23;
                if ( v27 <= v39 )
                  break;
                v28 = 2 * v25;
                if ( *++ii >= v28 )
                  break;
              }
            }
            if ( v23 + v39 > v42 && v23 < v42 )
              v39 = v42 - v23;
            v45 = 1 << v39;
            v55[v22] = v23 + v39;
            v48 = sub_4728CC();
            v20 = v48 + 8;
            *v47 = v48 + 8;
            v52[v22] = v48 + 8;
            if ( v22 != 0 )
            {
              v57[v22 - 1] = v41;
              v29 = v53[v22 + 16];
              v44 = v48 + 8;
              v30 = v52[v22 - 1] + 8 * ((v41 & ((1 << v23) - 1)) >> v29);
              *(_BYTE *)v30 = v39 + 16;
              *(_BYTE *)(v30 + 1) = v23 - v29;
              *(_DWORD *)(v30 + 4) = v20;
            }
            v47 = (int *)(v48 + 4);
            LOBYTE(i) = v23;
            v21 = v22;
          }
          v31 = *v46;
          v32 = 99;
          if ( *v46 != -1 )
          {
            ++v46;
            if ( v31 >= a3 )
            {
              v33 = v31 - a3;
              v32 = *(_BYTE *)(a4 + v33 + 62);
              v44 = *(unsigned __int16 *)(a4 + 2 * v33);
            }
            else
            {
              v32 = (v31 != 256) + 15;
              v44 = v31;
            }
          }
          for ( jj = v41 >> i; jj < v45; jj += 1 << (v38 - i) )
          {
            *(_BYTE *)(v20 + 8 * jj) = v32;
            *(_BYTE *)(v20 + 8 * jj + 1) = v38 - i;
            *(_DWORD *)(v20 + 8 * jj + 4) = v44;
          }
          for ( kk = 1 << (v38 - 1); ; kk >>= 1 )
          {
            v36 = kk & v41;
            v41 ^= kk;
            if ( v36 == 0 )
              break;
          }
          while ( (v41 & ((1 << i) - 1)) != v57[v21 - 1] )
            i = v55[--v21 - 1];
        }
        ++v38;
      }
      *a5 = v55[0];
      result = v51;
      if ( v40 != 1 && v50 != 0 )
        return v51 | 1;
    }
  }
  return result;
}

