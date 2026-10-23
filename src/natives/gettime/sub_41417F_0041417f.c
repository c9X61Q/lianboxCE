// gettime.exe @ 0x41417f size=44

int sub_41417F()
{
  int result; // eax

  result = dword_4389D8;
  if ( dword_4389D8 == 0 )
  {
    if ( dword_4389DC == 0
      || common_initialize_environment_nolock<char>() != 0 && initialize_environment_by_cloning_nolock<char>() != 0 )
    {
      return 0;
    }
    else
    {
      return dword_4389D8;
    }
  }
  return result;
}

