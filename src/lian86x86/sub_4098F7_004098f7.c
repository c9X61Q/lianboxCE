// lian86.exe @ 0x004098f7  size=71  name=sub_4098F7
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall sub_4098F7(HANDLE *TotalBytesAvail)
{
  HANDLE *v1; // esi

  v1 = TotalBytesAvail;
  if ( WaitForSingleObject(*TotalBytesAvail, 0) != 0 )
    return true;
  if ( v1[3] == nullptr )
    return false;
  TotalBytesAvail = nullptr;
  PeekNamedPipe(v1[3], nullptr, 0, nullptr, (LPDWORD)&TotalBytesAvail, nullptr);
  return TotalBytesAvail != nullptr;
}

