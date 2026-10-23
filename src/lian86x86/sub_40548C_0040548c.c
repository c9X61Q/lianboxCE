// lian86.exe @ 0x0040548c  size=160  name=sub_40548C
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40548C(LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter)
{
  int v2; // esi
  HANDLE v3; // ebp
  int v4; // edi
  HANDLE *v5; // ebx
  _DWORD *v6; // eax
  DWORD ThreadId; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  v3 = CreateThread(nullptr, 0x1000u, lpStartAddress, lpParameter, 0, &ThreadId);
  if ( v3 != nullptr )
  {
    EnterCriticalSection(&CriticalSection);
    v4 = dword_41811C;
    while ( v4 != 0 )
    {
      v5 = (HANDLE *)(v4 + 8);
      if ( WaitForSingleObject(*(HANDLE *)(v4 + 8), 0) != 0 )
      {
        v4 = *(_DWORD *)v4;
      }
      else
      {
        CloseHandle(*v5);
        v4 = *(_DWORD *)v4;
        sub_40E1B2(&dword_41811C, v5);
      }
    }
    v2 = dword_417108++;
    v6 = (_DWORD *)sub_40E1F2((int)&dword_41811C, 0x10u);
    *v6 = v3;
    v6[1] = v2;
    LeaveCriticalSection(&CriticalSection);
  }
  return v2;
}

