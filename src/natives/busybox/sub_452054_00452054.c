// busybox.exe @ 0x452054 size=461

int __userpurge sub_452054@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, int *a3@<ecx>, void *a4, unsigned int a5)
{
  int v5; // edx
  int result; // eax
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int *v11; // ebx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rax
  bool v14; // cf
  int v15; // edx
  int v16; // ecx
  int k; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // [esp+4h] [ebp-38h]
  int i; // [esp+Ch] [ebp-30h]
  _DWORD *Block; // [esp+10h] [ebp-2Ch]
  int v26; // [esp+1Ch] [ebp-20h]
  unsigned int *v27; // [esp+20h] [ebp-1Ch]
  int v28; // [esp+24h] [ebp-18h]
  int j; // [esp+28h] [ebp-14h]

  v20 = *a1 + *a2;
  if ( v20 > a3[1] )
  {
    v5 = sub_451814((int)a3, v20, (int)a3);
    result = -8;
    if ( v5 != 0 )
      return result;
  }
  if ( a4 != nullptr )
  {
    if ( a5 < 4 * v20 )
    {
      Block = (_DWORD *)sub_4728CC(a3);
      v28 = 1;
      goto LABEL_10;
    }
    memset(a4, 0, a5);
    v7 = (int)a4;
  }
  else
  {
    v7 = sub_4728CC(a3);
  }
  Block = (_DWORD *)v7;
  v28 = 0;
LABEL_10:
  v8 = 0;
  v9 = 0;
  for ( i = 0; v20 > i; ++i )
  {
    v10 = *a2 - 1;
    if ( v10 > i )
      v10 = i;
    v26 = *a1 - (i - v10);
    if ( v10 < v26 )
      v26 = v10 + 1;
    v27 = (unsigned int *)(a1[3] + 4 * (i - v10));
    v11 = (unsigned int *)(a2[3] + 4 * v10);
    v12 = v9;
    v9 = v8;
    v8 = 0;
    for ( j = 0; j < v26; ++j )
    {
      v13 = *v11 * (unsigned __int64)*v27;
      v14 = __CFADD__(v13, __PAIR64__(v9, v12));
      v9 = (v13 + __PAIR64__(v9, v12)) >> 32;
      v12 += v13;
      v8 += v14;
      --v11;
      ++v27;
    }
    Block[i] = v12;
  }
  v15 = *a3;
  *a3 = v20;
  a3[2] = a2[2] ^ a1[2];
  v16 = a3[3];
  for ( k = 0; v20 > k; ++k )
    *(_DWORD *)(v16 + 4 * k) = Block[k];
  v18 = v20;
  if ( v20 < 0 )
    v18 = 0;
  v19 = v16 + 4 * v18;
  while ( v15 > v18 )
  {
    v19 += 4;
    *(_DWORD *)(v19 - 4) = 0;
    ++v18;
  }
  sub_45100C(a3);
  if ( a4 == nullptr || (result = 0, v28 != 0) )
  {
    free(Block);
    return 0;
  }
  return result;
}

