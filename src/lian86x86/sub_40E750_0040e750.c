// lian86.exe @ 0x0040e750  size=34  name=sub_40E750
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int sub_40E750()
{
  _DWORD *Value; // edx

  Value = TlsGetValue(dwTlsIndex);
  return Value[2] + *Value;
}

