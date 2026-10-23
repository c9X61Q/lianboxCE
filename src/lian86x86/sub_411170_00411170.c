// lian86.exe @ 0x00411170  size=704  name=sub_411170
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned int __cdecl sub_411170(int a1, char *a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int i; // edi
  char v6; // cl
  unsigned int v7; // ebp
  unsigned int v8; // edx
  char *v9; // esi
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // esi
  unsigned int v17; // eax
  char v18; // cl

  v4 = ~a1;
  for ( i = a3; i != 0; --i )
  {
    if ( ((unsigned __int8)a2 & 3) == 0 )
      break;
    v6 = *a2++;
    v4 = dword_4141D0[(unsigned __int8)(v4 ^ v6)] ^ (v4 >> 8);
  }
  if ( i >= 0x20 )
  {
    v7 = i >> 5;
    do
    {
      v8 = *((_DWORD *)a2 + 1)
         ^ dword_414DD0[(unsigned __int8)(*a2 ^ v4)]
         ^ dword_4141D0[(*(_DWORD *)a2 ^ v4) >> 24]
         ^ dword_4149D0[(unsigned __int8)((unsigned __int16)(*(_WORD *)a2 ^ v4) >> 8)]
         ^ dword_4145D0[(unsigned __int8)((*(_DWORD *)a2 ^ v4) >> 16)];
      v9 = a2 + 8;
      v10 = *((_DWORD *)a2 + 2)
          ^ dword_414DD0[(unsigned __int8)v8]
          ^ dword_4141D0[HIBYTE(v8)]
          ^ dword_4149D0[BYTE1(v8)]
          ^ dword_4145D0[BYTE2(v8)];
      v11 = *((_DWORD *)v9 + 1)
          ^ dword_414DD0[(unsigned __int8)v10]
          ^ dword_4141D0[HIBYTE(v10)]
          ^ dword_4149D0[BYTE1(v10)]
          ^ dword_4145D0[BYTE2(v10)];
      v12 = *((_DWORD *)v9 + 2)
          ^ dword_414DD0[(unsigned __int8)v11]
          ^ dword_4141D0[HIBYTE(v11)]
          ^ dword_4149D0[(unsigned __int8)((unsigned __int16)(*((_WORD *)v9 + 2)
                                                            ^ LOWORD(dword_414DD0[(unsigned __int8)v10])
                                                            ^ LOWORD(dword_4141D0[HIBYTE(v10)])
                                                            ^ LOWORD(dword_4149D0[BYTE1(v10)])
                                                            ^ LOWORD(dword_4145D0[BYTE2(v10)])) >> 8)]
          ^ dword_4145D0[BYTE2(v11)];
      v13 = *((_DWORD *)v9 + 3)
          ^ dword_414DD0[(unsigned __int8)v12]
          ^ dword_4141D0[HIBYTE(v12)]
          ^ dword_4149D0[BYTE1(v12)]
          ^ dword_4145D0[BYTE2(v12)];
      i -= 32;
      v14 = *((_DWORD *)v9 + 4)
          ^ dword_414DD0[(unsigned __int8)v13]
          ^ dword_4141D0[HIBYTE(v13)]
          ^ dword_4149D0[(unsigned __int8)((unsigned __int16)(*((_WORD *)v9 + 6)
                                                            ^ LOWORD(dword_414DD0[(unsigned __int8)v12])
                                                            ^ LOWORD(dword_4141D0[HIBYTE(v12)])
                                                            ^ LOWORD(dword_4149D0[BYTE1(v12)])
                                                            ^ LOWORD(dword_4145D0[BYTE2(v12)])) >> 8)]
          ^ dword_4145D0[BYTE2(v13)];
      v15 = *((_DWORD *)v9 + 5)
          ^ dword_414DD0[(unsigned __int8)v14]
          ^ dword_4141D0[HIBYTE(v14)]
          ^ dword_4149D0[BYTE1(v14)]
          ^ dword_4145D0[BYTE2(v14)];
      a2 = v9 + 24;
      v4 = dword_414DD0[(unsigned __int8)v15]
         ^ dword_4141D0[HIBYTE(v15)]
         ^ dword_4149D0[BYTE1(v15)]
         ^ dword_4145D0[BYTE2(v15)];
      --v7;
    }
    while ( v7 != 0 );
  }
  if ( i >= 4 )
  {
    v16 = i >> 2;
    do
    {
      v17 = *(_DWORD *)a2 ^ v4;
      i -= 4;
      a2 += 4;
      v4 = dword_414DD0[(unsigned __int8)v17]
         ^ dword_4141D0[HIBYTE(v17)]
         ^ dword_4149D0[BYTE1(v17)]
         ^ dword_4145D0[BYTE2(v17)];
      --v16;
    }
    while ( v16 != 0 );
  }
  for ( ; i != 0; --i )
  {
    v18 = *a2++;
    v4 = dword_4141D0[(unsigned __int8)(v4 ^ v18)] ^ (v4 >> 8);
  }
  return ~v4;
}

