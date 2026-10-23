// busybox.exe @ 0x411d24 size=130

unsigned int __usercall sub_411D24@<eax>(int a1@<eax>, int a2@<edx>)
{
  unsigned int result; // eax
  int i; // edi
  int v6; // esi
  int j; // ecx
  unsigned __int32 v8; // edx
  bool v9; // sf
  unsigned int v10; // [esp+0h] [ebp-24h]
  _QWORD v11[2]; // [esp+4h] [ebp-20h] BYREF

  result = 0;
  memset(v11, 0, sizeof(v11));
  for ( i = 0; i != 16; ++i )
  {
    v6 = *(unsigned __int8 *)(a2 + i) | 0x800000;
    do
    {
      if ( (v6 & 0x80) != 0 )
        result = sub_4715B0();
      LOBYTE(result) = *(_BYTE *)(a1 + 15);
      result = ((int)(result << 31) >> 31) & 0xE1000000;
      for ( j = 0; j != 4; ++j )
      {
        v8 = _byteswap_ulong(*(_DWORD *)(a1 + 4 * j));
        v10 = result;
        result = v8 << 31;
        *(_DWORD *)(a1 + 4 * j) = _byteswap_ulong(v10 ^ (v8 >> 1));
      }
      v9 = (v6 & 0x40000000) != 0;
      v6 *= 2;
    }
    while ( !v9 );
  }
  *(_OWORD *)a1 = *(_OWORD *)v11;
  return result;
}

