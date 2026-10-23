// gettime.exe @ 0x41920f size=44

int __cdecl sub_41920F(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_438C4C;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

