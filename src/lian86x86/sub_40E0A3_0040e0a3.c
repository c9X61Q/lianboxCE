// lian86.exe @ 0x0040e0a3  size=20  name=sub_40E0A3
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40E0A3(int a1, void (*a2)(void), _DWORD *a3)
{
  a2();
  *a3 = 4;
  return 1;
}

