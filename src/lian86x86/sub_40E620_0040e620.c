// lian86.exe @ 0x0040e620  size=55  name=sub_40E620
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_40E620(LPVOID *a1)
{
  HeapFree(dword_418788, 0, *a1);
  return HeapFree(dword_418788, 0, a1);
}

