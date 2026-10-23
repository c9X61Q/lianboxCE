// busybox.exe @ 0x43ce94 size=348

int __cdecl sub_43CE94(DWORD dwProcessId)
{
  HANDLE hProcess; // eax
  void *v3; // esi
  BOOL ExitCodeProcess; // eax
  int v5; // ebx
  DWORD (__stdcall *lpStartAddress)(LPVOID); // ebx
  HANDLE CurrentProcess; // eax
  HANDLE RemoteThread; // eax
  DWORD ExitCode; // [esp+1Ch] [ebp-18h] BYREF
  BOOL Wow64Process[2]; // [esp+20h] [ebp-14h] BYREF

  hProcess = OpenProcess(0x10043Au, false, dwProcessId);
  if ( hProcess == nullptr )
    return -1;
  v3 = hProcess;
  ExitCodeProcess = GetExitCodeProcess(hProcess, &ExitCode);
  v5 = ExitCodeProcess;
  if ( ExitCodeProcess )
  {
    v5 = 0;
    if ( ExitCode == 259 )
    {
      lpStartAddress = (DWORD (__stdcall *)(LPVOID))sub_435244("kernel32", "ExitProcess", dword_473510);
      if ( lpStartAddress != nullptr )
      {
        if ( ::Wow64Process != -1
          || (CurrentProcess = GetCurrentProcess(), IsWow64Process(CurrentProcess, &::Wow64Process)) )
        {
          if ( ::Wow64Process != -2 && IsWow64Process(v3, Wow64Process) && Wow64Process[0] == ::Wow64Process )
          {
            RemoteThread = CreateRemoteThread(v3, nullptr, 0, lpStartAddress, (LPVOID)0x8F, 0, (LPDWORD)Wow64Process);
            if ( RemoteThread != nullptr )
              CloseHandle(RemoteThread);
            v5 = 0;
            goto LABEL_17;
          }
        }
        else
        {
          ::Wow64Process = -2;
        }
      }
      SetLastError(5u);
      v5 = -1;
    }
  }
LABEL_17:
  CloseHandle(v3);
  return v5;
}

