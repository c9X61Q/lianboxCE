// busybox.exe @ 0x411ae0 size=6

// attributes: thunk
HANDLE __stdcall CreateToolhelp32Snapshot(DWORD dwFlags, DWORD th32ProcessID)
{
  return __imp_CreateToolhelp32Snapshot(dwFlags, th32ProcessID);
}

