// gettime.exe @ 0x4108cb size=27

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_78(_DWORD *this)
{
  if ( *this != 0 )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}

