// lian86.exe @ 0x0040b89b  size=27  name=sub_40B89B
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void *__stdcall sub_40B89B(int a1, char *Src, unsigned int a3)
{
  return sha1_update((_DWORD *)(a1 + 68), Src, a3);
}

