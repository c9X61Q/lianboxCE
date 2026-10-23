// lian86.exe @ 0x0040d632  size=155  name=sub_40D632
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40D632(int *a1, int a2, unsigned int a3)
{
  int v3; // edx
  unsigned int v4; // ecx
  int v5; // edi
  unsigned int i; // ebp

  v3 = ((unsigned int)a1[4] >> 3) & 0x3F;
  v4 = a1[4] + 8 * a3;
  a1[4] = v4;
  if ( v4 < 8 * a3 )
    ++a1[5];
  a1[5] += a3 >> 29;
  v5 = 64 - v3;
  if ( a3 < 64 - v3 )
  {
    v5 = 0;
  }
  else
  {
    sub_40D6CD((char *)a1 + v3 + 24, a2, 64 - v3);
    sub_40CF18(a1, (int)(a1 + 6));
    for ( i = v5 + 63; i < a3; i += 64 )
    {
      sub_40CF18(a1, i + a2 - 63);
      v5 += 64;
    }
    v3 = 0;
  }
  return sub_40D6CD((char *)a1 + v3 + 24, v5 + a2, a3 - v5);
}

