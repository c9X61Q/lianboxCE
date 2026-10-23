// busybox.exe @ 0x4523f4 size=489

int __userpurge sub_4523F4@<eax>(int *a1@<eax>, int *a2@<edx>, void *a3@<ecx>, unsigned int a4)
{
  int v4; // edx
  int result; // eax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  int v9; // edx
  int v10; // eax
  int v11; // ebx
  int v12; // edx
  unsigned int v13; // ebx
  unsigned __int64 v14; // rax
  bool v15; // cf
  unsigned int v16; // edi
  unsigned int v17; // ecx
  unsigned __int64 v18; // kr08_8
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // edx
  int k; // eax
  int v23; // eax
  int v24; // edx
  int i; // [esp+4h] [ebp-40h]
  int v26; // [esp+8h] [ebp-3Ch]
  _DWORD *Block; // [esp+10h] [ebp-34h]
  int v30; // [esp+18h] [ebp-2Ch]
  int v31; // [esp+1Ch] [ebp-28h]
  unsigned int *v32; // [esp+20h] [ebp-24h]
  unsigned int *v33; // [esp+24h] [ebp-20h]
  int v34; // [esp+28h] [ebp-1Ch]
  int j; // [esp+30h] [ebp-14h]

  v26 = 2 * *a1;
  if ( v26 > a2[1] )
  {
    v4 = sub_451814((int)a2, v26, (int)a3);
    result = -8;
    if ( v4 != 0 )
      return result;
  }
  if ( a3 != nullptr )
  {
    if ( a4 < 4 * v26 )
    {
      Block = (_DWORD *)sub_4728CC(a3);
      v34 = 1;
      goto LABEL_10;
    }
    memset(a3, 0, a4);
    v6 = (int)a3;
  }
  else
  {
    v6 = sub_4728CC(a3);
  }
  Block = (_DWORD *)v6;
  v34 = 0;
LABEL_10:
  v7 = 0;
  v8 = 0;
  for ( i = 0; v26 > i; ++i )
  {
    v9 = *a1;
    v10 = i;
    if ( *a1 <= i )
      v10 = v9 - 1;
    v11 = i - v10;
    v12 = v9 - (i - v10);
    if ( v10 < v12 )
      v12 = v10 + 1;
    v30 = a1[3];
    v32 = (unsigned int *)(v30 + 4 * v11);
    v33 = (unsigned int *)(v30 + 4 * v10);
    v31 = (v10 - v11 + 1) >> 1;
    if ( v31 > v12 )
      v31 = v12;
    v13 = v8;
    v8 = v7;
    v7 = 0;
    for ( j = 0; v31 > j; ++j )
    {
      v14 = *v33 * (unsigned __int64)*v32;
      v15 = __CFADD__(v14, __PAIR64__(v8, v13));
      v16 = (v14 + __PAIR64__(v8, v13)) >> 32;
      v17 = v15 + v7;
      v15 = __CFADD__(v14, __PAIR64__(v16, (unsigned int)v14 + v13));
      v18 = v14 + __PAIR64__(v16, (unsigned int)v14 + v13);
      v8 = (v14 + __PAIR64__(v16, (unsigned int)v14 + v13)) >> 32;
      v13 = v18;
      v7 = v15 + v17;
      ++v32;
      --v33;
    }
    if ( (i & 1) == 0 )
    {
      v19 = *(unsigned int *)(v30 + 4 * (i >> 1)) * (unsigned __int64)*(unsigned int *)(v30 + 4 * (i >> 1));
      v15 = __CFADD__(v19, __PAIR64__(v8, v13));
      v8 = (v19 + __PAIR64__(v8, v13)) >> 32;
      v13 += v19;
      v7 += v15;
    }
    Block[i] = v13;
  }
  v20 = *a2;
  *a2 = v26;
  v21 = a2[3];
  for ( k = 0; v26 > k; ++k )
    *(_DWORD *)(v21 + 4 * k) = Block[k];
  v23 = v26;
  if ( v26 < 0 )
    v23 = 0;
  v24 = v21 + 4 * v23;
  while ( v20 > v23 )
  {
    v24 += 4;
    *(_DWORD *)(v24 - 4) = 0;
    ++v23;
  }
  sub_45100C(a2);
  if ( a3 == nullptr || (result = 0, v34 != 0) )
  {
    free(Block);
    return 0;
  }
  return result;
}

