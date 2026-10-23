// lian86.exe @ 0x0040aa5a  size=105  name=sub_40AA5A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40AA5A(LPVOID *lpMem)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi

  if ( lpMem != nullptr )
  {
    sub_40AB16(lpMem);
    sub_40DFC6(lpMem[7]);
    *(_DWORD *)lpMem[9] = 0;
    *((_DWORD *)lpMem[9] + 1) = 0;
    v1 = lpMem[8];
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
    if ( *((_BYTE *)lpMem + 50) != 0 )
      HeapFree(hHeap, 0, lpMem[9]);
    HeapFree(hHeap, 0, lpMem);
  }
}

