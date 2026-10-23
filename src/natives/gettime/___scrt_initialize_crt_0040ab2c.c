// gettime.exe @ 0x40ab2c size=57

char __cdecl __scrt_initialize_crt(int a1)
{
  if ( a1 == 0 )
    byte_438350 = 1;
  __isa_available_init();
  if ( !__vcrt_initialize() )
    return 0;
  if ( !__acrt_initialize() )
  {
    __vcrt_uninitialize(false);
    return 0;
  }
  return 1;
}

