// lian86.exe @ 0x0040e4d0  size=41  name=sub_40E4D0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_40E4D0()
{
  dword_418788 = HeapCreate(0, 0x1000u, 0);
  dwTlsIndex = TlsAlloc();
  return sub_40ED40();
}

