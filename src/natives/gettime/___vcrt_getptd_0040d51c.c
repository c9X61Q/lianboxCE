// gettime.exe @ 0x40d51c size=14

int __vcrt_getptd()
{
  int result; // eax

  result = __vcrt_getptd_noexit();
  if ( result == 0 )
    abort();
  return result;
}

