// gettime.exe @ 0x411e5b size=60

int __cdecl _fgetc_nolock(FILE *Stream)
{
  if ( Stream != nullptr )
  {
    if ( (int)--Stream->_base < 0 )
      return __acrt_stdio_refill_and_read_narrow_nolock(Stream);
    else
      return (unsigned __int8)*Stream->_ptr++;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

