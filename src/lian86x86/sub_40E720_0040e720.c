// lian86.exe @ 0x0040e720  size=38  name=sub_40E720
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *sub_40E720()
{
  _DWORD *result; // eax

  result = TlsGetValue(dwTlsIndex);
  result[2] += 2;
  return result;
}

