// lian86.exe @ 0x0040a8bb  size=45  name=sub_40A8BB
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_40A8BB(_DWORD *a1)
{
  int v1; // eax
  int v2; // esi
  _DWORD *i; // edx

  v1 = a1[5];
  if ( v1 >= a1[9] )
    return 0;
  v2 = a1[1];
  for ( i = (_DWORD *)(v2 + 4 * v1); *i == 0; ++i )
  {
    if ( ++v1 >= a1[9] )
      return 0;
  }
  a1[5] = v1;
  return *(_DWORD *)(v2 + 4 * v1);
}

