// gettime.exe @ 0x411fb0 size=91

int __cdecl fgetpos(FILE *Stream, fpos_t *Position)
{
  int result; // eax
  fpos_t v3; // rax
  int v4; // ecx

  if ( Stream != nullptr && Position != nullptr )
  {
    v3 = _ftelli64(Stream);
    *Position = v3;
    v4 = HIDWORD(v3) & v3;
    result = -1;
    if ( v4 != -1 )
      return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  return result;
}

