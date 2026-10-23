// gettime.exe @ 0x40d626 size=27

char __vcrt_uninitialize_ptd()
{
  if ( dwTlsIndex != -1 )
  {
    __vcrt_FlsFree(dwTlsIndex);
    dwTlsIndex = -1;
  }
  return 1;
}

