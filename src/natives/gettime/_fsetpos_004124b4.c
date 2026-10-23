// gettime.exe @ 0x4124b4 size=59

int __cdecl fsetpos(FILE *Stream, const fpos_t *Position)
{
  if ( Stream != nullptr && Position != nullptr )
    return _fseeki64(Stream, *Position, 0);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

