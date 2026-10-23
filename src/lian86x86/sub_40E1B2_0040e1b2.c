// lian86.exe @ 0x0040e1b2  size=64  name=sub_40E1B2
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __cdecl sub_40E1B2(_DWORD *a1, int a2)
{
  _DWORD **v2; // edx
  int v3; // eax

  v2 = (_DWORD **)(a2 - 8);
  v3 = *(_DWORD *)(a2 - 8);
  if ( *a1 == a2 - 8 )
  {
    *a1 = v3;
    if ( *v2 != nullptr )
      (*v2)[1] = 0;
  }
  else
  {
    *v2[1] = v3;
    if ( *v2 != nullptr )
      (*v2)[1] = v2[1];
  }
  return HeapFree(hHeap, 0, v2);
}

