// lian86.exe @ 0x00405373  size=66  name=sub_405373
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void sub_405373()
{
  int i; // eax
  int v1; // esi

  EnterCriticalSection(&CriticalSection);
  for ( i = dword_41811C; dword_41811C != 0; i = dword_41811C )
  {
    v1 = i + 8;
    CloseHandle(*(HANDLE *)(i + 8));
    sub_40E1B2(&dword_41811C, v1);
  }
  LeaveCriticalSection(&CriticalSection);
}

