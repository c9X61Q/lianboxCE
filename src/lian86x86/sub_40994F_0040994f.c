// lian86.exe @ 0x0040994f  size=86  name=sub_40994F
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_40994F(HANDLE *a1)
{
  CloseHandle(*a1);
  if ( a1[2] != nullptr )
    CloseHandle(a1[2]);
  if ( a1[3] != nullptr )
    CloseHandle(a1[3]);
  if ( a1[4] != nullptr )
    CloseHandle(a1[4]);
  EnterCriticalSection(&stru_418730);
  sub_40E1B2(&dword_418148, a1);
  LeaveCriticalSection(&stru_418730);
}

