// busybox.exe @ 0x411ad0 size=6

// attributes: thunk
BOOL __stdcall Process32Next(HANDLE hSnapshot, LPPROCESSENTRY32 lppe)
{
  return __imp_Process32Next(hSnapshot, lppe);
}

