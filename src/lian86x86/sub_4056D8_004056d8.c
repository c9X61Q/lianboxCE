// lian86.exe @ 0x004056d8  size=33  name=sub_4056D8
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_4056D8(DWORD a1)
{
  if ( dword_418120 == 0 )
  {
    timeBeginPeriod(1u);
    dword_418120 = 1;
  }
  Sleep(a1);
}

