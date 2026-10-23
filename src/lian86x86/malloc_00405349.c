// lian86.exe @ 0x00405349  size=6  name=malloc
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
void *__cdecl malloc(size_t Size)
{
  return __imp_malloc(Size);
}

