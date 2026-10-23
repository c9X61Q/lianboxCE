// lian86.exe @ 0x00410ca0  size=771  name=crc32
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned int __cdecl crc32(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int i; // eax
  int v6; // ecx
  unsigned int v7; // ebp
  unsigned int v8; // edx
  unsigned __int8 *v9; // esi
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // ebx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // esi
  unsigned int v17; // eax
  int v18; // ecx

  v4 = a3;
  for ( i = ~(HIBYTE(a1) + ((a1 >> 8) & 0xFF00) + (((a1 << 16) + (a1 & 0xFF00)) << 8)); v4 != 0; --v4 )
  {
    if ( ((unsigned __int8)a2 & 3) == 0 )
      break;
    v6 = *a2++;
    i = dword_4151D0[v6 ^ HIBYTE(i)] ^ (i << 8);
  }
  if ( v4 >= 0x20 )
  {
    v7 = v4 >> 5;
    do
    {
      v8 = *((_DWORD *)a2 + 1)
         ^ dword_4151D0[(unsigned __int8)(*a2 ^ i)]
         ^ dword_415DD0[(*(_DWORD *)a2 ^ i) >> 24]
         ^ dword_4155D0[(unsigned __int8)((unsigned __int16)(*(_WORD *)a2 ^ i) >> 8)]
         ^ dword_4159D0[(unsigned __int8)((*(_DWORD *)a2 ^ i) >> 16)];
      v9 = a2 + 8;
      v10 = *((_DWORD *)a2 + 2)
          ^ dword_4151D0[(unsigned __int8)v8]
          ^ dword_415DD0[HIBYTE(v8)]
          ^ dword_4155D0[BYTE1(v8)]
          ^ dword_4159D0[BYTE2(v8)];
      v11 = *((_DWORD *)v9 + 1)
          ^ dword_4151D0[(unsigned __int8)v10]
          ^ dword_415DD0[HIBYTE(v10)]
          ^ dword_4155D0[BYTE1(v10)]
          ^ dword_4159D0[BYTE2(v10)];
      v12 = *((_DWORD *)v9 + 2)
          ^ dword_4151D0[(unsigned __int8)v11]
          ^ dword_415DD0[HIBYTE(v11)]
          ^ dword_4155D0[(unsigned __int8)((unsigned __int16)(*((_WORD *)v9 + 2)
                                                            ^ LOWORD(dword_4151D0[(unsigned __int8)v10])
                                                            ^ LOWORD(dword_415DD0[HIBYTE(v10)])
                                                            ^ LOWORD(dword_4155D0[BYTE1(v10)])
                                                            ^ LOWORD(dword_4159D0[BYTE2(v10)])) >> 8)]
          ^ dword_4159D0[BYTE2(v11)];
      v13 = *((_DWORD *)v9 + 3)
          ^ dword_4151D0[(unsigned __int8)v12]
          ^ dword_415DD0[HIBYTE(v12)]
          ^ dword_4155D0[BYTE1(v12)]
          ^ dword_4159D0[BYTE2(v12)];
      v4 -= 32;
      v14 = *((_DWORD *)v9 + 4)
          ^ dword_4151D0[(unsigned __int8)v13]
          ^ dword_415DD0[HIBYTE(v13)]
          ^ dword_4155D0[(unsigned __int8)((unsigned __int16)(*((_WORD *)v9 + 6)
                                                            ^ LOWORD(dword_4151D0[(unsigned __int8)v12])
                                                            ^ LOWORD(dword_415DD0[HIBYTE(v12)])
                                                            ^ LOWORD(dword_4155D0[BYTE1(v12)])
                                                            ^ LOWORD(dword_4159D0[BYTE2(v12)])) >> 8)]
          ^ dword_4159D0[BYTE2(v13)];
      v15 = *((_DWORD *)v9 + 5)
          ^ dword_4151D0[(unsigned __int8)v14]
          ^ dword_415DD0[HIBYTE(v14)]
          ^ dword_4155D0[BYTE1(v14)]
          ^ dword_4159D0[BYTE2(v14)];
      a2 = v9 + 24;
      i = dword_4151D0[(unsigned __int8)v15]
        ^ dword_415DD0[HIBYTE(v15)]
        ^ dword_4155D0[BYTE1(v15)]
        ^ dword_4159D0[BYTE2(v15)];
      --v7;
    }
    while ( v7 != 0 );
  }
  if ( v4 >= 4 )
  {
    v16 = v4 >> 2;
    do
    {
      v17 = *(_DWORD *)a2 ^ i;
      v4 -= 4;
      a2 += 4;
      i = dword_4151D0[(unsigned __int8)v17]
        ^ dword_415DD0[HIBYTE(v17)]
        ^ dword_4155D0[BYTE1(v17)]
        ^ dword_4159D0[BYTE2(v17)];
      --v16;
    }
    while ( v16 != 0 );
  }
  for ( ; v4 != 0; --v4 )
  {
    v18 = *a2++;
    i = dword_4151D0[v18 ^ HIBYTE(i)] ^ (i << 8);
  }
  return ((~i >> 8) & 0xFF00) + (((~i << 16) + (~(_WORD)i & 0xFF00)) << 8) + (~i >> 24);
}

