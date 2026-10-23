// lian86.exe @ 0x0040d906  size=62  name=Mem
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall Mem(char *lpMem)
{
  _DWORD *i; // esi
  int (__cdecl *v2)(char *); // ecx
  int result; // eax

  for ( i = (_DWORD *)dword_418670; i != nullptr; i = (_DWORD *)*i )
  {
    v2 = (int (__cdecl *)(char *))i[4];
    if ( v2 != nullptr )
      result = v2(&lpMem[i[2]]);
  }
  if ( lpMem != nullptr )
    return HeapFree(hHeap, 0, lpMem);
  return result;
}

