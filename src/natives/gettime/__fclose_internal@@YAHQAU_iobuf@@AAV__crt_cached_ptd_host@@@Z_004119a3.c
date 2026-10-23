// gettime.exe @ 0x4119a3 size=151

int __cdecl _fclose_internal(FILE *Stream, struct __crt_cached_ptd_host *a2)
{
  int v3; // [esp+14h] [ebp-1Ch]

  if ( Stream == nullptr )
  {
    *((_BYTE *)a2 + 28) = 1;
    *((_DWORD *)a2 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a2);
    return -1;
  }
  if ( (Stream->_flag & 0x1000) != 0 )
  {
    __acrt_stdio_free_stream(Stream);
    return -1;
  }
  _lock_file(Stream);
  v3 = _fclose_nolock_internal(Stream, a2);
  _unlock_file(Stream);
  return v3;
}

