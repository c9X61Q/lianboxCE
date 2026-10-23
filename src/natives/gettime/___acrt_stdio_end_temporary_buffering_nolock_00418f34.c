// gettime.exe @ 0x418f34 size=62

unsigned int __cdecl __acrt_stdio_end_temporary_buffering_nolock(char a1, FILE *Stream, __crt_cached_ptd_host *a3)
{
  unsigned int result; // eax

  if ( a1 != 0 )
  {
    result = (unsigned int)Stream->_flag >> 9;
    if ( (Stream->_flag & 0x200) != 0 )
    {
      __acrt_stdio_flush_nolock(Stream, a3);
      _InterlockedAnd(&Stream->_flag, 0xFFFFFD7F);
      Stream->_bufsiz = 0;
      Stream->_cnt = 0;
      Stream->_ptr = nullptr;
      return 0;
    }
  }
  return result;
}

