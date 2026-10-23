// lian86.exe @ 0x0040e9e0  size=48  name=sub_40E9E0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40E9E0(int a1)
{
  _DWORD *Value; // [esp+0h] [ebp-4h]

  Value = TlsGetValue(dwTlsIndex);
  Value[2] = a1;
  *(_WORD *)(*Value + a1) = 0;
  return a1;
}

