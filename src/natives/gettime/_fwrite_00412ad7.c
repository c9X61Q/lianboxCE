// gettime.exe @ 0x412ad7 size=58

size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // esi
  _BYTE v6[40]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v6, nullptr);
  v4 = _fwrite_internal((char)Buffer, ElementSize, ElementCount, Stream, (__crt_cached_ptd_host *)v6);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v6);
  return v4;
}

