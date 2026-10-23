// lian86.exe @ 0x0040993e  size=17  name=sub_40993E
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_40993E(HANDLE *a1)
{
  return TerminateProcess(*a1, 0xFFFFFFFF);
}

