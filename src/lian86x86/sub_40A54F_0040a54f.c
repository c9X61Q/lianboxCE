// lian86.exe @ 0x0040a54f  size=105  name=sub_40A54F
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40A54F(LPVOID *lpMem)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  if ( lpMem != nullptr )
  {
    sub_40A79A(lpMem);
    sub_40DFC6(lpMem[14]);
    HeapFree(hHeap, 0, lpMem[1]);
    HeapFree(hHeap, 0, lpMem[3]);
    v1 = lpMem[13];
    if ( v1 != nullptr )
    {
      do
      {
        v2 = (_DWORD *)*v1;
        HeapFree(hHeap, 0, v1);
        v1 = v2;
      }
      while ( v2 != nullptr );
    }
    *(_DWORD *)lpMem[12] = 0;
    HeapFree(hHeap, 0, lpMem);
  }
}

