// gettime.exe @ 0x40e11e size=57

void __cdecl __noreturn CallUnexpected()
{
  if ( *(_DWORD *)(__vcrt_getptd() + 28) == 0 )
    unexpected();
  abort();
}

