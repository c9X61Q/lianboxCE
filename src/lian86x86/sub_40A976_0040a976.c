// lian86.exe @ 0x0040a976  size=51  name=sub_40A976
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_40A976(_DWORD *a1, int a2)
{
  int v2; // edx
  _DWORD *result; // eax

  v2 = a2 % a1[9];
  for ( result = *(_DWORD **)(a1[1] + 4 * v2); result != nullptr; result = (_DWORD *)*result )
  {
    if ( result[1] == a2 )
    {
      *a1 = result;
      a1[5] = v2;
      result += 2;
      return result;
    }
    a1[2] = result;
  }
  return result;
}

