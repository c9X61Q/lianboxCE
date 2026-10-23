// gettime.exe @ 0x420dc0 size=53

void __cdecl __acrt_lowio_destroy_handle_array(LPCRITICAL_SECTION lpCriticalSection)
{
  struct _RTL_CRITICAL_SECTION *v1; // edi

  if ( lpCriticalSection != nullptr )
  {
    v1 = lpCriticalSection;
    do
    {
      DeleteCriticalSection(v1);
      v1 = (struct _RTL_CRITICAL_SECTION *)((char *)v1 + 56);
    }
    while ( v1 != (struct _RTL_CRITICAL_SECTION *)&lpCriticalSection[149].RecursionCount );
    _free_base(lpCriticalSection);
  }
}

