// lian86.exe @ 0x00408e9a  size=26  name=sub_408E9A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __cdecl sub_408E9A(LPVOID lpMem)
{
  BOOL result; // eax

  if ( lpMem != nullptr )
    return HeapFree(hHeap, 0, lpMem);
  return result;
}

