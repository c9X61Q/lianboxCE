// gettime.exe @ 0x411a3a size=142

int __cdecl _fclose_nolock_internal(FILE *Stream, struct __crt_cached_ptd_host *a2)
{
  int v3; // edi
  int v4; // eax

  if ( Stream != nullptr )
  {
    v3 = -1;
    if ( (Stream->_flag & 0x2000) != 0 )
    {
      v3 = __acrt_stdio_flush_nolock(Stream, (int)a2);
      __acrt_stdio_free_buffer_nolock(Stream);
      v4 = _fileno(Stream);
      if ( sub_41B510(v4, a2) >= 0 )
      {
        if ( Stream->_tmpfname != nullptr )
        {
          _free_base(Stream->_tmpfname);
          Stream->_tmpfname = nullptr;
        }
      }
      else
      {
        v3 = -1;
      }
    }
    __acrt_stdio_free_stream(Stream);
    return v3;
  }
  else
  {
    *((_BYTE *)a2 + 28) = 1;
    *((_DWORD *)a2 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a2);
    return -1;
  }
}

