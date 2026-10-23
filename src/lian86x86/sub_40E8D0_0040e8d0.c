// lian86.exe @ 0x0040e8d0  size=33  name=sub_40E8D0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40E8D0(int a1)
{
  return a1 + *(_DWORD *)TlsGetValue(dwTlsIndex);
}

