// lian86.exe @ 0x0040e221  size=28  name=sub_40E221
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__cdecl sub_40E221(_DWORD *a1, int a2)
{
  _DWORD *result; // eax

  for ( result = a1; result != nullptr; result = (_DWORD *)*result )
  {
    if ( result == (_DWORD *)(a2 - 8) )
      return (_DWORD *)a2;
  }
  return result;
}

