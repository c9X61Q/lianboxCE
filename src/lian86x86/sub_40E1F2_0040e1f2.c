// lian86.exe @ 0x0040e1f2  size=47  name=sub_40E1F2
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__cdecl sub_40E1F2(int a1, SIZE_T dwBytes)
{
  _DWORD *v2; // eax

  v2 = HeapAlloc(hHeap, 8u, dwBytes);
  if ( v2 != nullptr )
  {
    if ( *(_DWORD *)a1 != 0 )
    {
      *(_DWORD *)(*(_DWORD *)a1 + 4) = v2;
      *v2 = *(_DWORD *)a1;
    }
    *(_DWORD *)a1 = v2;
  }
  return v2 + 2;
}

