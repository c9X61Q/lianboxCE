// lian86.exe @ 0x0040a1e0  size=31  name=sub_40A1E0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

SIZE_T __stdcall sub_40A1E0(LPCVOID lpMem)
{
  if ( lpMem != nullptr )
    return HeapSize(dword_418778, 0, lpMem);
  else
    return 0;
}

