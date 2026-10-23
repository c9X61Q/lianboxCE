// gettime.exe @ 0x410e03 size=49

char __acrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_4388B0;
  if ( dword_4388B0 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_438748 + 24 * dword_4388B0);
    do
    {
      DeleteCriticalSection(v1);
      --dword_4388B0;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

