// lian86.exe @ 0x0040a300  size=32  name=xmemcpy
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall xmemcpy(void *Src, void *a2, size_t Size)
{
  memcpy(a2, Src, Size);
  return (int)a2 + Size;
}

