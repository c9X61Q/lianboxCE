// lian86.exe @ 0x0040a220  size=31  name=xmalloc
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LPVOID __stdcall xmalloc(int dwBytes)
{
  if ( dwBytes <= 0 )
    return nullptr;
  else
    return HeapAlloc(dword_418778, 8u, dwBytes);
}

