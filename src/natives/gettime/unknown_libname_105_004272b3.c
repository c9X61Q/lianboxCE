// gettime.exe @ 0x4272b3 size=85

// Microsoft VisualC universal runtime
BOOL __cdecl unknown_libname_105(void *lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten)
{
  BOOL v3; // esi

  v3 = WriteConsoleW(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, nullptr);
  if ( !v3 && GetLastError() == 6 )
  {
    unknown_libname_104();
    __dcrt_lowio_initialize_console_output();
    return WriteConsoleW(hConsoleOutput, lpBuffer, nNumberOfCharsToWrite, lpNumberOfCharsWritten, nullptr);
  }
  return v3;
}

