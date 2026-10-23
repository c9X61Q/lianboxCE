// lian86.exe @ 0x0040e660  size=90  name=mutex_enter
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

LPVOID __cdecl mutex_enter()
{
  LPVOID Value; // eax
  LPVOID result; // eax
  LPVOID v2; // eax

  if ( dwTlsIndex == -1 )
  {
    sub_40E4D0();
    Value = TlsGetValue(dwTlsIndex);
    return (LPVOID)sub_412722(sub_40E620, (int)Value);
  }
  else
  {
    result = TlsGetValue(dwTlsIndex);
    if ( result == nullptr )
    {
      sub_40ED40();
      v2 = TlsGetValue(dwTlsIndex);
      return (LPVOID)sub_412722(sub_40E620, (int)v2);
    }
  }
  return result;
}

