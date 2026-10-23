// gettime.exe @ 0x417435 size=44

char __acrt_initialize_ptd()
{
  dword_4371A0 = __acrt_FlsAlloc(destroy_fls);
  if ( dword_4371A0 == -1 )
    return 0;
  if ( unknown_libname_96() == nullptr )
  {
    __acrt_uninitialize_ptd(0);
    return 0;
  }
  return 1;
}

