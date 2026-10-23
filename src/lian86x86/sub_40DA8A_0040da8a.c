// lian86.exe @ 0x0040da8a  size=79  name=sub_40DA8A
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40DA8A(int a1, int a2)
{
  int v2; // eax

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    sub_40E1B2(a1 + 16, a2);
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 12);
    if ( *(_DWORD *)(v2 + 4 * a2) != 0 )
      memset(*(void **)(v2 + 4 * a2), 0, *(_DWORD *)a1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
}

