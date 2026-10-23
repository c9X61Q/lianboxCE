// gettime.exe @ 0x4127d8 size=58

int __cdecl _fseeki64(FILE *Stream, __int64 Offset, int Origin)
{
  int v3; // esi
  _BYTE v5[40]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v5, nullptr);
  v3 = common_fseek(Stream, Offset, SHIDWORD(Offset), Origin, (__crt_cached_ptd_host *)v5);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v5);
  return v3;
}

