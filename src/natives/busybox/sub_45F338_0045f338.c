// busybox.exe @ 0x45f338 size=503

unsigned int __usercall sub_45F338@<eax>(int a1@<eax>)
{
  int i; // eax
  int v2; // ecx
  int v3; // edx
  _DWORD *v4; // ebx
  _DWORD *v5; // ecx
  unsigned __int64 v6; // rt0
  int v7; // esi
  int v8; // edx
  int j; // ebx
  unsigned __int64 v10; // rax
  char v11; // cl
  int v12; // edi
  int v13; // esi
  unsigned __int64 v14; // rax
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  int v18; // edi
  int v19; // edx
  unsigned int result; // eax
  _DWORD *v21; // [esp+0h] [ebp-7Ch]
  unsigned __int64 v22; // [esp+Ch] [ebp-70h]
  unsigned __int64 *v23; // [esp+14h] [ebp-68h]
  int v24; // [esp+18h] [ebp-64h]
  _DWORD v26[23]; // [esp+20h] [ebp-5Ch] BYREF

  v24 = 0;
  v21 = (_DWORD *)(a1 + 40);
  do
  {
    for ( i = 0; i != 5; ++i )
    {
      v2 = *(_DWORD *)(a1 + 8 * i + 160)
         ^ *(_DWORD *)(a1 + 8 * i + 120)
         ^ *(_DWORD *)(a1 + 8 * i + 80)
         ^ *(_DWORD *)(a1 + 8 * i + 40)
         ^ *(_DWORD *)(a1 + 8 * i);
      v3 = *(_DWORD *)(a1 + 8 * i + 164)
         ^ *(_DWORD *)(a1 + 8 * i + 124)
         ^ *(_DWORD *)(a1 + 8 * i + 84)
         ^ *(_DWORD *)(a1 + 8 * i + 44)
         ^ *(_DWORD *)(a1 + 8 * i + 4);
      v26[2 * i] = v2;
      v26[2 * i + 1] = v3;
      v26[2 * i + 10] = v2;
      v26[2 * i + 11] = v3;
    }
    v4 = v26;
    v5 = (_DWORD *)a1;
    do
    {
      HIDWORD(v6) = v4[2];
      LODWORD(v6) = v4[3];
      v7 = (v6 >> 31) ^ v4[8];
      v8 = v4[9] ^ (*((_QWORD *)v4 + 1) >> 31);
      *v5 ^= v7;
      v5[1] ^= v8;
      v5[10] ^= v7;
      v5[11] ^= v8;
      v5[20] ^= v7;
      v5[21] ^= v8;
      v5[30] ^= v7;
      v5[31] ^= v8;
      v5[40] ^= v7;
      v5[41] ^= v8;
      v4 += 2;
      v5 += 2;
    }
    while ( v21 != v5 );
    v22 = *(_QWORD *)(a1 + 8);
    for ( j = 0; j != 24; ++j )
    {
      v23 = (unsigned __int64 *)(a1 + 8 * (unsigned __int8)byte_47D37C[j]);
      v10 = v22;
      v22 = *v23;
      v11 = byte_47D408[j];
      v12 = v10 << v11 >> 32;
      v13 = (_DWORD)v10 << v11;
      if ( (v11 & 0x20) != 0 )
      {
        v12 = (_DWORD)v10 << v11;
        v13 = 0;
      }
      v14 = v10 >> (-v11 & 0x3F);
      *(_DWORD *)v23 = v13 | v14;
      *((_DWORD *)v23 + 1) = v12 | HIDWORD(v14);
    }
    v15 = 0;
    do
    {
      do
      {
        v16 = *(_DWORD *)(a1 + 4 * v15);
        v17 = *(_DWORD *)(a1 + 4 * v15 + 8);
        *(_DWORD *)(a1 + 4 * v15) = v16 ^ *(_DWORD *)(a1 + 4 * v15 + 16) & ~v17;
        *(_DWORD *)(a1 + 4 * v15 + 8) = v17 ^ *(_DWORD *)(a1 + 4 * v15 + 24) & ~*(_DWORD *)(a1 + 4 * v15 + 16);
        v18 = *(_DWORD *)(a1 + 4 * v15 + 32);
        *(_DWORD *)(a1 + 4 * v15 + 16) ^= v18 & ~*(_DWORD *)(a1 + 4 * v15 + 24);
        *(_DWORD *)(a1 + 4 * v15 + 24) ^= v16 & ~v18;
        *(_DWORD *)(a1 + 4 * v15 + 32) = v17 & ~v16 ^ v18;
        v19 = v15++;
      }
      while ( (v15 & 1) != 0 );
      v15 = v19 + 9;
    }
    while ( (unsigned int)(v19 + 9) <= 0x28 );
    result = (unsigned __int16)word_47D320[v24] | (372775680 << v24) & 0x80000000;
    *(_DWORD *)a1 ^= result;
    *(_DWORD *)(a1 + 4) ^= (856153344 << v24++) & 0x80000000;
  }
  while ( v24 != 24 );
  return result;
}

