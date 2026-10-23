// lian86.exe @ 0x00405430  size=92  name=sub_405430
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_405430(int a1)
{
  void *v1; // eax
  _DWORD *i; // esi
  HANDLE *v3; // esi

  v1 = (void *)sub_4053E4(a1);
  TerminateThread(v1, 0);
  EnterCriticalSection(&CriticalSection);
  for ( i = (_DWORD *)dword_41811C; i != nullptr; i = (_DWORD *)*i )
  {
    if ( i[3] == a1 )
    {
      v3 = (HANDLE *)(i + 2);
      CloseHandle(*v3);
      sub_40E1B2(&dword_41811C, v3);
      break;
    }
  }
  LeaveCriticalSection(&CriticalSection);
}

