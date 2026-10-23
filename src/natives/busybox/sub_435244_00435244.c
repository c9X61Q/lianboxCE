// busybox.exe @ 0x435244 size=102

FARPROC __cdecl sub_435244(LPCSTR lpLibFileName, LPCSTR lpProcName, FARPROC *a3)
{
  HMODULE Library; // eax

  if ( a3[1] == nullptr )
  {
    Library = LoadLibraryExA(lpLibFileName, nullptr, 0x800u);
    if ( Library != nullptr )
      *a3 = GetProcAddress(Library, lpProcName);
    a3[1] = (FARPROC)1;
  }
  if ( *a3 == nullptr )
    *_errno() = 40;
  return *a3;
}

