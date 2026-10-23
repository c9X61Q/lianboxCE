// gettime.exe @ 0x412e03 size=115

int __cdecl ungetc(int Character, FILE *Stream)
{
  int v3; // [esp+10h] [ebp-1Ch]

  if ( Stream != nullptr )
  {
    _lock_file(Stream);
    v3 = _ungetc_nolock(Character, Stream);
    _unlock_file(Stream);
    return v3;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
}

