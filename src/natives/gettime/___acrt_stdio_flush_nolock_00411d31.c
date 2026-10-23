// gettime.exe @ 0x411d31 size=105

int __cdecl __acrt_stdio_flush_nolock(FILE *Stream, __crt_cached_ptd_host *a2)
{
  int *p_flag; // esi
  int flag; // edx
  int cnt; // ebx
  char *v5; // edi
  int v6; // eax

  p_flag = &Stream->_flag;
  flag = Stream->_flag;
  if ( (flag & 3) == 2 && (flag & 0xC0) != 0 )
  {
    cnt = Stream->_cnt;
    v5 = &Stream->_ptr[-cnt];
    Stream->_ptr = (char *)cnt;
    Stream->_base = nullptr;
    if ( (int)v5 > 0 )
    {
      v6 = _fileno(Stream);
      if ( v5 != (char *)_write_internal(v6, cnt, (int)v5, a2) )
      {
        _InterlockedOr(p_flag, 0x10u);
        return -1;
      }
      if ( (*p_flag & 4) != 0 )
        _InterlockedAnd(p_flag, 0xFFFFFFFD);
    }
  }
  return 0;
}

