// gettime.exe @ 0x4161a5 size=47

int __cdecl _set_new_mode(int NewMode)
{
  if ( (unsigned int)NewMode < 2 )
    return _InterlockedExchange(&dword_438A10, NewMode);
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return -1;
}

