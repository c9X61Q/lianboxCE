// lian86.exe @ 0x0040e500  size=30  name=sub_40E500
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL sub_40E500()
{
  HeapDestroy(dword_418788);
  return TlsFree(dwTlsIndex);
}

