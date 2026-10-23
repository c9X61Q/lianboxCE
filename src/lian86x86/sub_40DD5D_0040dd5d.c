// lian86.exe @ 0x0040dd5d  size=110  name=sub_40DD5D
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40DD5D(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  if ( *(_DWORD *)(a1 + 28) != 0 )
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v1 = *(_DWORD **)(a1 + 4);
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
  v3 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 != 0 )
  {
    do
    {
      v4 = (_DWORD *)*v3;
      HeapFree(hHeap, 0, v3);
      v3 = v4;
    }
    while ( v4 != nullptr );
  }
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  if ( *(_DWORD *)(a1 + 28) != 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
}

