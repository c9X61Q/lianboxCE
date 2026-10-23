// gettime.exe @ 0x40e956 size=28

// Microsoft VisualC universal runtime
int __thiscall unknown_libname_61(__crt_cached_ptd_host *this)
{
  if ( *(_DWORD *)this == 0 && __crt_cached_ptd_host::force_synchronize_per_thread_data(this) == nullptr )
    abort();
  return *(_DWORD *)this;
}

