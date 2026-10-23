// gettime.exe @ 0x416d5c size=63

// Microsoft VisualC universal runtime
int __cdecl unknown_libname_95(unsigned __int16 *a1)
{
  int v1; // esi
  _BYTE v3[44]; // [esp+4h] [ebp-2Ch] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v3, nullptr);
  v1 = __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<wchar_t>,1>(
         (__crt_cached_ptd_host *)v3,
         a1,
         nullptr,
         10,
         1);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v3);
  return v1;
}

