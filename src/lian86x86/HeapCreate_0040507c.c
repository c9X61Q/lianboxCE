// lian86.exe @ 0x0040507c  size=6  name=HeapCreate
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
HANDLE __stdcall HeapCreate(DWORD flOptions, SIZE_T dwInitialSize, SIZE_T dwMaximumSize)
{
  return __imp_HeapCreate(flOptions, dwInitialSize, dwMaximumSize);
}

