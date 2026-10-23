// gettime.exe @ 0x412cd5 size=58

int __cdecl setvbuf(FILE *Stream, char *Buffer, int Mode, size_t Size)
{
  int v4; // esi
  _BYTE v6[40]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v6, nullptr);
  v4 = _setvbuf_internal(Stream, Buffer, Mode, Size, (struct __crt_cached_ptd_host *)v6);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v6);
  return v4;
}

