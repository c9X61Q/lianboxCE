// gettime.exe @ 0x412396 size=157

size_t __cdecl fread_s(void *Buffer, size_t BufferSize, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v6; // [esp+10h] [ebp-1Ch]

  if ( ElementSize != 0 && ElementCount != 0 )
  {
    if ( Stream != nullptr )
    {
      _lock_file(Stream);
      v6 = _fread_nolock_s(Buffer, BufferSize, ElementSize, ElementCount, Stream);
      _unlock_file(Stream);
      return v6;
    }
    if ( BufferSize != -1 )
      memset(Buffer, 0, BufferSize);
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
  return 0;
}

