// gettime.exe @ 0x42727d size=31

BOOL sub_42727D()
{
  char *v0; // ecx

  v0 = (char *)hConsoleOutput;
  if ( hConsoleOutput == (HANDLE)-2 )
  {
    __dcrt_lowio_initialize_console_output();
    v0 = (char *)hConsoleOutput;
  }
  return v0 + 1 != nullptr;
}

