// gettime.exe @ 0x41cc9b size=11

int __cdecl sub_41CC9B(int a1, FILE *Stream, __crt_cached_ptd_host *a3)
{
  return common_flush_and_write_nolock<char>(a1, Stream, a3);
}

