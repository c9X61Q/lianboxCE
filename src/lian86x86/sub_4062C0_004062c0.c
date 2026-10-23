// lian86.exe @ 0x004062c0  size=70  name=sub_4062C0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_4062C0(int a1, int a2)
{
  unsigned int v2; // ebx
  _WORD *v3; // edx
  _WORD *v4; // edi
  int i; // ecx

  v2 = a1 < 0 ? 0 : a1;
  v3 = (_WORD *)sub_40E900(v2, a2);
  if ( v2 != 0 )
  {
    memset32(v3, 2097184, v2 >> 1);
    v4 = &v3[2 * (v2 >> 1)];
    for ( i = v2 & 1; i != 0; --i )
      *v4++ = 32;
    v3[v2] = 0;
    return 0;
  }
  else
  {
    *v3 = 0;
    return 0;
  }
}

