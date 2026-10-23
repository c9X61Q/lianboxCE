// lian86.exe @ 0x0040ea90  size=44  name=sub_40EA90
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40EA90(int a1)
{
  _DWORD *Value; // edx
  int result; // eax

  Value = TlsGetValue(dwTlsIndex);
  result = Value[2] - 2 * a1;
  Value[2] = result;
  return result;
}

