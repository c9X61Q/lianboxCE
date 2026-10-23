// gettime.exe @ 0x4108e6 size=49

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_79(_DWORD *this, __crt_cached_ptd_host *a2)
{
  if ( *this != 0 )
    return 1;
  *((_BYTE *)a2 + 28) = 1;
  *((_DWORD *)a2 + 6) = 22;
  _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a2);
  return 0;
}

