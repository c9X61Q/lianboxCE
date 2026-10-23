// lian86.exe @ 0x0040db18  size=148  name=sub_40DB18
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40DB18(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  void (__stdcall *v4)(int); // eax

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( a2 == -1 )
  {
    v2 = sub_40E1F2(a1 + 16, *(_DWORD *)a1 + 8);
  }
  else
  {
    if ( a2 >= *(_DWORD *)(a1 + 8) )
    {
      v3 = a2 + *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 8) = v3;
      *(_DWORD *)(a1 + 12) = HeapReAlloc(hHeap, 8u, *(LPVOID *)(a1 + 12), 4 * v3);
    }
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * a2) != 0 )
    {
      v4 = *(void (__stdcall **)(int))(a1 + 20);
      if ( v4 != nullptr )
        v4(a2);
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * a2) = HeapAlloc(hHeap, 8u, *(_DWORD *)a1);
    }
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * a2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  return v2;
}

