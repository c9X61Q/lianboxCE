// lian86.exe @ 0x004126a4  size=126  name=sub_4126A4
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

BOOL __cdecl sub_4126A4(HANDLE *lpMem)
{
  HANDLE *v1; // ecx
  _DWORD *v2; // ebx
  _DWORD *v3; // esi

  UnregisterWait(lpMem[3]);
  CloseHandle(lpMem[4]);
  EnterCriticalSection(&stru_4186E8);
  if ( *lpMem != nullptr )
    *((_DWORD *)*lpMem + 1) = lpMem[1];
  else
    dword_4186E4 = (int)lpMem[1];
  v1 = (HANDLE *)lpMem[1];
  if ( v1 != nullptr )
    *v1 = *lpMem;
  LeaveCriticalSection(&stru_4186E8);
  v2 = lpMem[2];
  while ( v2 != nullptr )
  {
    v3 = v2;
    v2 = (_DWORD *)*v2;
    ((void (__stdcall *)(_DWORD))v3[1])(v3[2]);
    HeapFree(hHeap, 0, v3);
  }
  return HeapFree(hHeap, 0, lpMem);
}

