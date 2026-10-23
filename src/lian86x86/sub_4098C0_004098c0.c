// lian86.exe @ 0x004098c0  size=55  name=sub_4098C0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_4098C0(int a1)
{
  int v1; // esi

  v1 = 0;
  EnterCriticalSection(&stru_418730);
  if ( sub_40E221(dword_418148, a1) != 0 )
    v1 = a1;
  LeaveCriticalSection(&stru_418730);
  return v1;
}

