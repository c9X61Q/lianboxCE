// lian86.exe @ 0x0040ed40  size=85  name=sub_40ED40
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL sub_40ED40()
{
  _DWORD *lpTlsValue; // [esp+0h] [ebp-4h]

  lpTlsValue = HeapAlloc(dword_418788, 0, 0xCu);
  *lpTlsValue = HeapAlloc(dword_418788, 0, 0x10u);
  lpTlsValue[1] = 16;
  lpTlsValue[2] = 0;
  return TlsSetValue(dwTlsIndex, lpTlsValue);
}

