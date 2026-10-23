// lian86.exe @ 0x0040b991  size=54  name=sub_40B991
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40B991(_DWORD *a1, int a2)
{
  a1[6] = 0;
  a1[5] = 0;
  *a1 = 1732584193;
  a1[1] = -271733879;
  a1[2] = -1732584194;
  a1[3] = 271733878;
  a1[4] = -1009589776;
  a1[23] = a2;
  return a2;
}

