// lian86.exe @ 0x00412722  size=268  name=sub_412722
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

_DWORD *__stdcall sub_412722(LPVOID lpMem, int a2)
{
  LPVOID Value; // ebx
  _DWORD *result; // eax
  int v4; // eax
  HANDLE v5; // eax
  HANDLE CurrentThread; // [esp-1Ch] [ebp-24h]
  HANDLE CurrentProcess; // [esp-18h] [ebp-20h]

  if ( dword_4186E0 == 0 )
  {
    dword_418700 = TlsAlloc();
    InitializeCriticalSection(&stru_4186E8);
    dword_4186E0 = 1;
  }
  Value = TlsGetValue(dword_418700);
  if ( Value == nullptr )
  {
    result = HeapAlloc(hHeap, 8u, 0x14u);
    Value = result;
    if ( result == nullptr )
      return result;
    EnterCriticalSection(&stru_4186E8);
    v4 = dword_4186E4;
    if ( dword_4186E4 != 0 )
      *(_DWORD *)dword_4186E4 = Value;
    *((_DWORD *)Value + 1) = v4;
    dword_4186E4 = (int)Value;
    LeaveCriticalSection(&stru_4186E8);
    CurrentProcess = GetCurrentProcess();
    CurrentThread = GetCurrentThread();
    v5 = GetCurrentProcess();
    DuplicateHandle(v5, CurrentThread, CurrentProcess, (LPHANDLE)Value + 4, 0x100000u, false, 0);
    RegisterWaitForSingleObject((PHANDLE)Value + 3, *((HANDLE *)Value + 4), Callback, Value, 0xFFFFFFFF, 8u);
    TlsSetValue(dword_418700, Value);
  }
  result = HeapAlloc(hHeap, 0, 0xCu);
  if ( result != nullptr )
  {
    result[1] = lpMem;
    result[2] = a2;
    *result = *((_DWORD *)Value + 2);
    *((_DWORD *)Value + 2) = result;
  }
  return result;
}

