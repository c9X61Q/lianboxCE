// gettime.exe @ 0x40d48e size=31

__vcrt_bool __cdecl __vcrt_initialize()
{
  if ( (unsigned __int8)__vcrt_initialize_locks() == 0 )
    return false;
  if ( (unsigned __int8)__vcrt_initialize_ptd() == 0 )
  {
    __vcrt_uninitialize_locks();
    return false;
  }
  return true;
}

