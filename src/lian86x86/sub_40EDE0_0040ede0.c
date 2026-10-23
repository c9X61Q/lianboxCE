// lian86.exe @ 0x0040ede0  size=53  name=sub_40EDE0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40EDE0(int a1)
{
  _DWORD *Value; // eax

  Value = TlsGetValue(dwTlsIndex);
  Value[2] = a1;
  return Value[2] + *Value;
}

