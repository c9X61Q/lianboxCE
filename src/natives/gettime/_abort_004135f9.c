// gettime.exe @ 0x4135f9 size=68

void __cdecl __noreturn abort()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi

  if ( __acrt_get_sigabrt_handler() != 0 )
    raise(22);
  if ( (byte_437190 & 2) != 0 )
  {
    if ( IsProcessorFeaturePresent(0x17u) )
      __fastfail(7u);
    __acrt_call_reportfault(v0, v1, v2, 3, 1073741845, 1);
  }
  _exit(3);
}

