// lian86.exe @ 0x004020ce  size=130  name=HandlerRoutine
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __stdcall HandlerRoutine(DWORD CtrlType)
{
  mutex_enter();
  if ( CtrlType <= 2 || CtrlType == 5 || CtrlType == 6 )
  {
    if ( sub_4098C0(TotalBytesAvail) != 0 )
    {
      if ( sub_4098F7(TotalBytesAvail) != 0 )
        sub_40993E(TotalBytesAvail);
      sub_40994F(TotalBytesAvail);
    }
    sub_401FBA(0);
  }
  return false;
}

