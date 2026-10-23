// gettime.exe @ 0x40d5bc size=55

int __vcrt_getptd_noinit()
{
  DWORD LastError; // esi
  int Value; // edi

  if ( dwTlsIndex == -1 )
    return 0;
  LastError = GetLastError();
  Value = __vcrt_FlsGetValue(dwTlsIndex);
  SetLastError(LastError);
  return Value != -1 ? Value : 0;
}

