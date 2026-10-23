// lian86.exe @ 0x0040dad9  size=63  name=sub_40DAD9
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40DAD9(int a1, int a2)
{
  _DWORD *v2; // esi

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v2 = (_DWORD *)a2;
  if ( a2 >= 0 && a2 < *(_DWORD *)(a1 + 8) )
    v2 = *(_DWORD **)(*(_DWORD *)(a1 + 12) + 4 * a2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  if ( v2 != nullptr )
    return *v2 != 0 ? v2 : nullptr;
  return v2;
}

