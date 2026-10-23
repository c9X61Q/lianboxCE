// gettime.exe @ 0x414a15 size=61

errno_t __cdecl _set_fmode(int Mode)
{
  if ( Mode == 0x4000 || Mode == 0x8000 || Mode == 0x10000 )
  {
    _InterlockedExchange(&dword_438E30, Mode);
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

