// busybox.exe @ 0x451d5c size=449

int __userpurge sub_451D5C@<eax>(int *a1@<eax>, int *a2@<edx>, int a3@<ecx>, char *Block, unsigned int a5)
{
  int v6; // ebp
  int result; // eax
  int i; // eax
  int v9; // ebx
  unsigned int v10; // ecx
  int k; // edi
  int *v12; // edx
  unsigned int v13; // ebx
  int v14; // ecx
  int m; // edx
  int v16; // eax
  int v17; // eax
  int v18; // ebx
  int v19; // edx
  int *v20; // [esp+4h] [ebp-38h]
  int v21; // [esp+4h] [ebp-38h]
  int *v23; // [esp+Ch] [ebp-30h]
  int v24; // [esp+10h] [ebp-2Ch]
  int j; // [esp+14h] [ebp-28h]
  int v26; // [esp+18h] [ebp-24h]
  int v27; // [esp+1Ch] [ebp-20h]
  int v28; // [esp+20h] [ebp-1Ch]

  v6 = *a2;
  result = -9;
  if ( a1[1] >= *a2 )
  {
    if ( Block != nullptr && a5 >= 2 * v6 + 1 )
      memset(Block, 0, a5);
    else
      Block = (char *)sub_4728CC(a3);
    v26 = *a1;
    for ( i = 0; i < v26; ++i )
      *(_DWORD *)&Block[4 * i] = *(_DWORD *)(a1[3] + 4 * i);
    v20 = (int *)Block;
    v24 = 4 * v6;
    for ( j = 0; j < v6; ++j )
    {
      v23 = v20;
      v28 = *v20 * a3;
      v9 = a2[3];
      v10 = 0;
      for ( k = 0; k != v6; ++k )
      {
        v27 = v10 + v28 * *(_DWORD *)(v9 + 4 * k) + *v23;
        v10 = (v10 + (unsigned int)v28 * (unsigned __int64)*(unsigned int *)(v9 + 4 * k) + (unsigned int)*v23) >> 32;
        *v23++ = v27;
      }
      v12 = &v20[v24 / 4u];
      while ( v10 != 0 )
      {
        v13 = v10 + *v12;
        v10 = __CFADD__(v10, *v12);
        *v12++ = v13;
      }
      ++v20;
    }
    v14 = a1[3];
    for ( m = 0; m <= v6; ++m )
      *(_DWORD *)(v14 + 4 * m) = *(_DWORD *)&Block[4 * m + v24];
    v16 = 0;
    if ( v6 >= -1 )
      v16 = v24 + 4;
    v17 = v14 + v16;
    v18 = v6;
    if ( v6 < 0 )
      v18 = -1;
    while ( ++v18 < v26 )
    {
      v17 += 4;
      *(_DWORD *)(v17 - 4) = 0;
    }
    *a1 = v6 + 1;
    sub_45100C(a1);
    if ( sub_451098(a1, a2) == -1 || (v19 = sub_45C3C0(a1, a2), result = -8, v19 == 0) )
      result = 0;
    if ( a5 < 2 * v6 + 1 )
    {
      v21 = result;
      free(Block);
      return v21;
    }
  }
  return result;
}

