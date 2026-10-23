// gettime.exe @ 0x41ca43 size=11

unsigned int __cdecl _ftelli64_nolock_internal(FILE *Stream, __crt_cached_ptd_host *a2)
{
  return common_ftell_nolock<__int64>(Stream, a2);
}

