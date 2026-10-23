// lian86.exe @ 0x0040e3b9  size=76  name=sub_40E3B9
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_40E3B9(int a1)
{
  int v1; // esi
  int v2; // ebx
  int i; // edi
  BOOL result; // eax

  if ( a1 != 0 )
  {
    v1 = a1 - 24;
    if ( *(_DWORD *)(a1 - 24 + 8) != 0 )
    {
      v2 = 0;
      for ( i = a1; v2 < *(_DWORD *)(v1 + 16); ++v2 )
      {
        sub_41242A(i, *(_DWORD *)(v1 + 8));
        i += *(_DWORD *)(v1 + 4);
      }
    }
    **(_DWORD **)(v1 + 12) = 0;
    return HeapFree(hHeap, 0, (LPVOID)v1);
  }
  return result;
}

