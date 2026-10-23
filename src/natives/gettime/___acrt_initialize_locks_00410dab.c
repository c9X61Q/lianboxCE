// gettime.exe @ 0x410dab size=65

char __acrt_initialize_locks()
{
  struct _RTL_CRITICAL_SECTION *v0; // edi
  unsigned int v1; // esi

  v0 = &stru_438760;
  v1 = 0;
  while ( __acrt_InitializeCriticalSectionEx(v0, 0xFA0u, 0) != 0 )
  {
    ++dword_4388B0;
    v1 += 24;
    ++v0;
    if ( v1 >= 0x150 )
      return 1;
  }
  __acrt_uninitialize_locks(0);
  return 0;
}

