// gettime.exe @ 0x4141ab size=44

int sub_4141AB()
{
  int result; // eax

  result = dword_4389DC;
  if ( dword_4389DC == 0 )
  {
    if ( dword_4389D8 == 0
      || common_initialize_environment_nolock<wchar_t>() != 0
      && initialize_environment_by_cloning_nolock<wchar_t>() != 0 )
    {
      return 0;
    }
    else
    {
      return dword_4389DC;
    }
  }
  return result;
}

