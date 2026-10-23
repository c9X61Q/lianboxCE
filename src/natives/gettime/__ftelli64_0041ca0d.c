// gettime.exe @ 0x41ca0d size=54

__int64 __cdecl _ftelli64(FILE *Stream)
{
  int v1; // esi
  unsigned int v2; // edx
  unsigned int v3; // edi
  _BYTE v5[40]; // [esp+8h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v5, nullptr);
  v1 = common_ftell<__int64>(Stream, (__crt_cached_ptd_host *)v5);
  v3 = v2;
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v5);
  return __PAIR64__(v3, v1);
}

