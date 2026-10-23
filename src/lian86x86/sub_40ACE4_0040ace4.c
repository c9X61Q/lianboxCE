// lian86.exe @ 0x0040ace4  size=81  name=sub_40ACE4
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40ACE4(int a1, int *a2, int a3)
{
  int result; // eax
  _DWORD *i; // edi
  _DWORD *v5; // eax

  result = 0;
  if ( a1 != 0 && a2 != nullptr )
  {
    if ( a3 != 0 )
      sub_40AB16((int)a2);
    for ( i = *(_DWORD **)a1; i != nullptr; i = (_DWORD *)*i )
    {
      v5 = sub_40AB74(a2);
      sub_412154(v5, *(_DWORD *)(a1 + 40) - 8, *(_DWORD *)(a1 + 24), i + 2);
    }
    return 1;
  }
  return result;
}

