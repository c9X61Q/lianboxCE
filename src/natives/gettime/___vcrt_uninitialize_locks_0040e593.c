// gettime.exe @ 0x40e593 size=47

char __vcrt_uninitialize_locks()
{
  int v0; // esi
  struct _RTL_CRITICAL_SECTION *v1; // edi

  v0 = dword_4386F4;
  if ( dword_4386F4 != 0 )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)((char *)&unk_4386C4 + 24 * dword_4386F4);
    do
    {
      DeleteCriticalSection(v1);
      --dword_4386F4;
      --v1;
      --v0;
    }
    while ( v0 != 0 );
  }
  return 1;
}

