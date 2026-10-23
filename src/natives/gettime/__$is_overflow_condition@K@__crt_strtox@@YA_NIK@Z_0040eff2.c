// gettime.exe @ 0x40eff2 size=52

bool __cdecl __crt_strtox::is_overflow_condition<unsigned long>(char a1, unsigned int a2)
{
  if ( (a1 & 4) == 0 )
  {
    if ( (a1 & 1) == 0 )
      return false;
    if ( (a1 & 2) == 0 )
      return a2 > 0x7FFFFFFF;
    if ( a2 <= 0x80000000 )
      return false;
  }
  return true;
}

