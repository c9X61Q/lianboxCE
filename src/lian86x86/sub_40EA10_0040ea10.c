// lian86.exe @ 0x0040ea10  size=37  name=sub_40EA10
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40EA10(int a1)
{
  return *(_DWORD *)TlsGetValue(dwTlsIndex) + a1 - 1;
}

