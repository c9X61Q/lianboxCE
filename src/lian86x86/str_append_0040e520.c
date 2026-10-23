// lian86.exe @ 0x0040e520  size=56  name=str_append
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int str_append()
{
  int v1; // [esp+0h] [ebp-Ch]
  DWORD dwErrCode; // [esp+4h] [ebp-8h]

  dwErrCode = GetLastError();
  v1 = *((_DWORD *)TlsGetValue(dwTlsIndex) + 2);
  SetLastError(dwErrCode);
  return v1;
}

