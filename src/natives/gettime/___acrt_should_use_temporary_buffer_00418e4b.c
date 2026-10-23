// gettime.exe @ 0x418e4b size=62

bool __cdecl __acrt_should_use_temporary_buffer(FILE *Stream)
{
  int v1; // eax

  if ( Stream == __acrt_iob_func(2u) )
    return true;
  if ( Stream != __acrt_iob_func(1u) )
    return false;
  v1 = _fileno(Stream);
  return _isatty(v1) != 0;
}

