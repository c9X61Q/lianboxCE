// gettime.exe @ 0x411935 size=70

errno_t __cdecl _get_stream_buffer_pointers(FILE *Stream, char ***Base, char ***Pointer, int **Count)
{
  if ( Stream != nullptr )
  {
    if ( Base != nullptr )
      *Base = (char **)&Stream->_cnt;
    if ( Pointer != nullptr )
      *Pointer = &Stream->_ptr;
    if ( Count != nullptr )
      *Count = (int *)&Stream->_base;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

