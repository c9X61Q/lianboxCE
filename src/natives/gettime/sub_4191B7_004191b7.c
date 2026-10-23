// gettime.exe @ 0x4191b7 size=44

int __cdecl sub_4191B7(_DWORD *a1)
{
  if ( a1 != nullptr )
  {
    *a1 = dword_438C50;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}

