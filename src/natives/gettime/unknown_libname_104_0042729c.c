// gettime.exe @ 0x42729c size=23

// Microsoft VisualC universal runtime
HANDLE unknown_libname_104()
{
  HANDLE result; // eax

  result = hConsoleOutput;
  if ( hConsoleOutput != (HANDLE)-1 && hConsoleOutput != (HANDLE)-2 )
    return (HANDLE)CloseHandle(hConsoleOutput);
  return result;
}

