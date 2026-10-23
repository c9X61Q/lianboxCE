// lian86.exe @ 0x0040dfc6  size=156  name=sub_40DFC6
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40DFC6(char *lpMem)
{
  _DWORD *v1; // edi
  _DWORD *v2; // ecx

  v1 = *((_DWORD **)lpMem + 2);
  if ( v1 != nullptr )
  {
    EnterCriticalSection(&stru_418684);
    if ( (int)--*(_DWORD *)(*((_DWORD *)lpMem + 2) + 20) <= 0 )
    {
      *((_DWORD *)lpMem + 2) = 0;
      sub_40DFC6(lpMem);
      if ( *v1 != 0 )
        *(_DWORD *)(*v1 + 4) = v1[1];
      v2 = (_DWORD *)v1[1];
      if ( v2 != nullptr )
        *v2 = *v1;
      if ( (_DWORD *)dword_418680 == v1 )
        dword_418680 = *v1;
      HeapFree(hHeap, 0, v1);
    }
    LeaveCriticalSection(&stru_418684);
  }
  else
  {
    sub_40DD5D((int)lpMem);
    if ( *((_DWORD *)lpMem + 7) != 0 )
      DeleteCriticalSection((LPCRITICAL_SECTION)(lpMem + 32));
    HeapFree(hHeap, 0, lpMem);
  }
}

