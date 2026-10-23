// gettime.exe @ 0x40eeba size=159

int __cdecl common_vsprintf_s<char>(
        int a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __crt_cached_ptd_host *a6,
        int a7)
{
  int v8; // ecx

  if ( a5 == 0 )
  {
    *((_BYTE *)a6 + 28) = 1;
    *((_DWORD *)a6 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
    return -1;
  }
  if ( a3 != nullptr && a4 != 0 )
  {
    v8 = common_vsprintf<__crt_stdio_output::format_validation_base,char>(a1, a2, a3, a4, a5, a6, a7);
    if ( v8 < 0 )
      *(_BYTE *)a3 = 0;
    if ( v8 != -2 )
      return v8;
    *((_BYTE *)a6 + 28) = 1;
    *((_DWORD *)a6 + 6) = 34;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
  }
  else
  {
    *((_BYTE *)a6 + 28) = 1;
    *((_DWORD *)a6 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
  }
  return -1;
}

