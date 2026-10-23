// lian86.exe @ 0x0040dbac  size=83  name=sub_40DBAC
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

char *__stdcall sub_40DBAC(int a1, int a2, int a3)
{
  char *v3; // edi

  v3 = (char *)HeapAlloc(hHeap, 8u, 0x38u);
  *((_DWORD *)v3 + 4) = 0;
  *(_DWORD *)v3 = a1;
  *((_DWORD *)v3 + 5) = a3;
  *((_DWORD *)v3 + 1) = a2;
  *((_DWORD *)v3 + 2) = a2;
  *((_DWORD *)v3 + 3) = HeapAlloc(hHeap, 8u, 4 * a2);
  InitializeCriticalSection((LPCRITICAL_SECTION)(v3 + 32));
  return v3;
}

