// lian86.exe @ 0x00411430  size=58  name=sub_411430
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned int __cdecl sub_411430(_DWORD *a1, char *a2)
{
  _DWORD *v2; // esi
  int i; // edi
  unsigned int result; // eax
  int v5; // edx
  char *j; // ecx

  v2 = a1;
  for ( i = 32; i != 0; --i )
  {
    result = *(_DWORD *)((char *)v2 + a2 - (char *)a1);
    v5 = 0;
    for ( j = a2; result != 0; result >>= 1 )
    {
      if ( (result & 1) != 0 )
        v5 ^= *(_DWORD *)j;
      j += 4;
    }
    *v2++ = v5;
  }
  return result;
}

