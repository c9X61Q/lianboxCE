// lian86.exe @ 0x00410b20  size=101  name=sub_410B20
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

unsigned int __cdecl sub_410B20(unsigned int *a1, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // eax
  unsigned __int8 v5; // bl

  v3 = 0;
  v4 = *a1;
  if ( a3 != 0 )
  {
    do
    {
      if ( v4 >= 4 )
        break;
      v5 = *(_BYTE *)(v3 + a2);
      if ( v5 == (v4 < 2 ? 0 : 255) )
        ++v4;
      else
        v4 = v5 != 0 ? 0 : 4 - v4;
      ++v3;
    }
    while ( v3 < a3 );
    *a1 = v4;
    return v3;
  }
  else
  {
    *a1 = v4;
    return 0;
  }
}

