// lian86.exe @ 0x0040534f  size=6  name=TlsGetValue
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

// attributes: thunk
LPVOID __stdcall TlsGetValue(DWORD dwTlsIndex)
{
  return __imp_TlsGetValue(dwTlsIndex);
}

