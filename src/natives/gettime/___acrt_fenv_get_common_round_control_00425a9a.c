// gettime.exe @ 0x425a9a size=34

int __cdecl __acrt_fenv_get_common_round_control(unsigned int a1)
{
  int result; // eax

  result = (a1 >> 14) & 0x300;
  if ( result != ((a1 >> 22) & 0x300) )
    return -1;
  return result;
}

