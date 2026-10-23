// busybox.exe @ 0x413f18 size=184

unsigned int __userpurge sub_413F18@<eax>(int a1@<eax>, _OWORD *a2@<edx>, int a3@<ecx>, unsigned int a4, _OWORD *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int result; // eax
  _QWORD v10[4]; // [esp+4h] [ebp-20h] BYREF

  *(_OWORD *)v10 = *a2;
  sub_411D24((int)v10, a1);
  if ( a4 != 0 )
  {
    v6 = a4 >> 4;
    v7 = a3;
    while ( v6 != 0 )
    {
      --v6;
      sub_4715B0();
      sub_411D24((int)v10, a1);
      v7 += 16;
    }
    if ( (a4 & 0xF) != 0 )
    {
      sub_471598();
      sub_411D24((int)v10, a1);
    }
  }
  HIDWORD(v10[0]) ^= 0x68000000u;
  HIDWORD(v10[1]) ^= _byteswap_ulong(8 * a4);
  result = sub_411D24((int)v10, a1);
  *a5 = *(_OWORD *)v10;
  return result;
}

