// gettime.exe @ 0x4238c7 size=142

bool __cdecl should_round_up(int a1, char *a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // edx

  if ( a5 == 0 )
    return *a2 >= 53;
  v6 = fegetround();
  if ( v6 != 0 )
  {
    if ( v6 == 512 )
    {
      if ( check_trailing(a2, a4) && a3 != 45 )
        return true;
    }
    else if ( v6 == 256 && check_trailing(a2, a4) && a3 == 45 )
    {
      return true;
    }
  }
  else
  {
    if ( *a2 > 53 )
      return true;
    if ( *a2 >= 53 )
    {
      if ( !check_trailing(a2 + 1, a4) )
      {
        if ( v7 != a1 )
          return *(_BYTE *)(v7 - 1) & 1;
        return false;
      }
      return true;
    }
  }
  return false;
}

