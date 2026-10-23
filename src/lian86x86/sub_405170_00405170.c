// lian86.exe @ 0x00405170  size=18  name=sub_405170
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_405170()
{
  return *(_DWORD *)TlsGetValue(dwTlsIndex);
}

