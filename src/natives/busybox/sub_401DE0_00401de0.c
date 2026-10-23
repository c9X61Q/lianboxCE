// busybox.exe @ 0x401de0 size=109

void sub_401DE0()
{
  DWORD *v0; // ebx
  LPVOID Value; // esi

  EnterCriticalSection(&CriticalSection);
  v0 = (DWORD *)Block;
  if ( Block != nullptr )
  {
    do
    {
      Value = TlsGetValue(*v0);
      if ( GetLastError() == 0 && Value != nullptr )
        ((void (__cdecl *)(LPVOID))v0[1])(Value);
      v0 = (DWORD *)v0[2];
    }
    while ( v0 != nullptr );
  }
  LeaveCriticalSection(&CriticalSection);
}

