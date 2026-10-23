// lian86.exe @ 0x0040533d  size=6  name=memcpy
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}

