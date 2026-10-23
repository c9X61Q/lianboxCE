// gettime.exe @ 0x41216c size=52

int __cdecl fputc(int Character, FILE *Stream)
{
  int v2; // esi
  _BYTE v4[40]; // [esp+4h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v4, nullptr);
  v2 = _fputc_internal(Character, Stream, (struct __crt_cached_ptd_host *)v4);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v4);
  return v2;
}

