// gettime.exe @ 0x418e89 size=171

char __cdecl __acrt_stdio_begin_temporary_buffering_nolock(FILE *Stream)
{
  void **v1; // edi

  if ( !__acrt_should_use_temporary_buffer(Stream) )
    return 0;
  if ( Stream == __acrt_iob_func(1u) )
  {
    v1 = &dword_438A40;
  }
  else
  {
    if ( Stream != __acrt_iob_func(2u) )
      return 0;
    v1 = &dword_438A44;
  }
  ++dword_4388BC;
  if ( (Stream->_flag & 0x4C0) != 0 )
    return 0;
  _InterlockedOr(&Stream->_flag, 0x282u);
  if ( *v1 == nullptr )
  {
    *v1 = _malloc_base(0x1000u);
    _free_base(nullptr);
  }
  if ( *v1 != nullptr )
  {
    Stream->_cnt = (int)*v1;
    Stream->_ptr = (char *)*v1;
    Stream->_base = (char *)4096;
    Stream->_bufsiz = 4096;
  }
  else
  {
    Stream->_base = (char *)2;
    Stream->_cnt = (int)&Stream->_charbuf;
    Stream->_ptr = (char *)&Stream->_charbuf;
    Stream->_bufsiz = 2;
  }
  return 1;
}

