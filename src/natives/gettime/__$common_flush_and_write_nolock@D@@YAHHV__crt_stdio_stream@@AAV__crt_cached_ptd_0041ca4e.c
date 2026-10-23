// gettime.exe @ 0x41ca4e size=246

int __cdecl common_flush_and_write_nolock<char>(int a1, FILE *Stream, __crt_cached_ptd_host *a3)
{
  __crt_cached_ptd_host *v3; // eax
  FILE *v4; // eax
  char v6; // al
  bool v7; // zf

  _fileno(Stream);
  if ( (Stream->_flag & 6) == 0 )
  {
    v3 = a3;
    *((_DWORD *)a3 + 6) = 9;
LABEL_3:
    *((_BYTE *)v3 + 28) = 1;
    v4 = Stream;
LABEL_4:
    _InterlockedOr(&v4->_flag, 0x10u);
    return -1;
  }
  if ( (Stream->_flag & 0x1000) != 0 )
  {
    v3 = a3;
    *((_DWORD *)a3 + 6) = 34;
    goto LABEL_3;
  }
  if ( (Stream->_flag & 1) != 0 )
  {
    v6 = stream_is_at_end_of_file_nolock(Stream);
    Stream->_base = nullptr;
    v7 = v6 == 0;
    v4 = Stream;
    if ( v7 )
      goto LABEL_4;
    Stream->_ptr = (char *)Stream->_cnt;
    _InterlockedAnd(&Stream->_flag, 0xFFFFFFFE);
  }
  _InterlockedOr(&Stream->_flag, 2u);
  _InterlockedAnd(&Stream->_flag, 0xFFFFFFF7);
  Stream->_base = nullptr;
  if ( (Stream->_flag & 0x4C0) == 0 && !__acrt_should_use_temporary_buffer(Stream) )
    __acrt_stdio_allocate_buffer_nolock(Stream);
  if ( (unsigned __int8)write_buffer_nolock<char>(a1, Stream, a3) != 0 )
    return (unsigned __int8)a1;
  _InterlockedOr(&Stream->_flag, 0x10u);
  return -1;
}

