// busybox.exe @ 0x402940 size=487

int __cdecl sub_402940(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned __int64 v3; // rax
  int v4; // eax
  int v5; // edx
  unsigned int v7; // ecx
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  unsigned __int64 v10; // rtt
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // edi
  unsigned __int64 v14; // rax
  int v15; // esi
  unsigned __int64 v16; // rax
  int v17; // [esp+Ch] [ebp-30h]
  unsigned int v18; // [esp+Ch] [ebp-30h]
  unsigned int v19; // [esp+10h] [ebp-2Ch]

  v3 = a1;
  if ( HIDWORD(a2) == 0 )
  {
    if ( (unsigned int)a2 <= HIDWORD(a1) )
    {
      v7 = a2;
      if ( (_DWORD)a2 == 0 )
        v7 = 1 / 0u;
      v4 = __PAIR64__(HIDWORD(a1) % v7, a1) / v7;
      v5 = __PAIR64__(HIDWORD(a1) % v7, a1) % v7;
    }
    else
    {
      v4 = a1 / (unsigned int)a2;
      v5 = a1 % (unsigned int)a2;
    }
    v17 = v4;
    if ( a3 != nullptr )
    {
      *a3 = v5;
      a3[1] = 0;
    }
    return v17;
  }
  if ( HIDWORD(a2) <= HIDWORD(a1) )
  {
    _BitScanReverse(&v8, HIDWORD(a2));
    v9 = v8 ^ 0x1F;
    if ( v9 != 0 )
    {
      v18 = (HIDWORD(a2) << v9) | ((unsigned int)a2 >> (32 - v9));
      LODWORD(v10) = (HIDWORD(a1) << v9) | ((unsigned int)a1 >> (32 - v9));
      HIDWORD(v10) = HIDWORD(a1) >> (32 - v9);
      v11 = v10 % v18;
      v12 = v10 / v18;
      v13 = v12;
      v14 = (unsigned int)((_DWORD)a2 << v9) * (unsigned __int64)(unsigned int)v12;
      v19 = HIDWORD(v14);
      v15 = ((_DWORD)a2 << v9) * v12;
      if ( __PAIR64__(v11, (_DWORD)a1 << v9) < v14 )
      {
        v16 = v14 - __PAIR64__(v18, (_DWORD)a2 << v9);
        v19 = HIDWORD(v16);
        v13 = v12 - 1;
        v15 = v16;
      }
      v17 = v13;
      if ( a3 != nullptr )
      {
        a3[1] = (unsigned int)((__PAIR64__(v11, (_DWORD)a1 << v9) - __PAIR64__(v19, v15)) >> 32) >> v9;
        *a3 = ((__PAIR64__(v11, (_DWORD)a1 << v9) - __PAIR64__(v19, v15)) >> 32 << (32 - (unsigned __int8)v9))
            | ((unsigned int)(((_DWORD)a1 << v9) - v15) >> v9);
      }
    }
    else
    {
      if ( HIDWORD(a2) < HIDWORD(a1) || (v17 = 0, (unsigned int)a2 <= (unsigned int)a1) )
      {
        v17 = 1;
        v3 = a1 - a2;
      }
      if ( a3 != nullptr )
        *(_QWORD *)a3 = v3;
    }
    return v17;
  }
  if ( a3 == nullptr )
    return 0;
  *(_QWORD *)a3 = a1;
  return 0;
}

