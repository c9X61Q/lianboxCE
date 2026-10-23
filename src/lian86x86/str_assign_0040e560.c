// lian86.exe @ 0x0040e560  size=144  name=str_assign
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall str_assign(LPVOID *a1, int a2)
{
  void *v2; // eax
  int result; // eax
  _DWORD *Value; // [esp+0h] [ebp-8h]
  unsigned int v5; // [esp+4h] [ebp-4h]

  Value = TlsGetValue(dwTlsIndex);
  v5 = Value[2] - a2;
  if ( *a1 != nullptr )
    v2 = HeapReAlloc(dword_418788, 0, *a1, v5 + 10);
  else
    v2 = HeapAlloc(dword_418788, 0, v5 + 10);
  *a1 = v2;
  result = sub_40EA40(*a1, a2 + *Value, v5 >> 1);
  Value[2] = a2;
  return result;
}

