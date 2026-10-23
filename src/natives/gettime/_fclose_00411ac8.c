// gettime.exe @ 0x411ac8 size=48

int __cdecl fclose(FILE *Stream)
{
  int v1; // esi
  _BYTE v3[40]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v3, nullptr);
  v1 = _fclose_internal(Stream, (struct __crt_cached_ptd_host *)v3);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v3);
  return v1;
}

