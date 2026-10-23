// gettime.exe @ 0x411d9a size=101

int __cdecl _fflush_nolock(FILE *Stream)
{
  int v1; // esi
  int v2; // eax
  int v4[10]; // [esp+8h] [ebp-28h] BYREF

  v1 = 0;
  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v4, nullptr);
  if ( Stream != nullptr )
  {
    if ( __acrt_stdio_flush_nolock(Stream, (__crt_cached_ptd_host *)v4) != 0
      || (Stream->_flag & 0x800) != 0 && (v2 = _fileno(Stream), _commit(v2) != 0) )
    {
      v1 = -1;
    }
  }
  else
  {
    v1 = common_flush_all(false);
  }
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v4);
  return v1;
}

