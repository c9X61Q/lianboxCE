// lian86.exe @ 0x0040ee20  size=55  name=sub_40EE20
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40EE20(int a1)
{
  DWORD dwErrCode; // [esp+0h] [ebp-8h]

  dwErrCode = GetLastError();
  *((_DWORD *)TlsGetValue(dwTlsIndex) + 2) = a1;
  SetLastError(dwErrCode);
}

