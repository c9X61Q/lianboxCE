// gettime.exe @ 0x41f15a size=144

unsigned int __cdecl filter_wcstomb_flags(unsigned int a1, unsigned int a2)
{
  bool v2; // zf
  bool v3; // zf
  int v4; // eax

  if ( a1 > 0xDEAC )
  {
    if ( a1 > 0xDEB1 )
    {
      if ( a1 == 57010 || a1 == 57011 )
        return 0;
      v4 = a1 - 65000;
      v3 = a1 == 65000;
    }
    else
    {
      if ( a1 == 57009 || a1 == 57005 || a1 == 57006 )
        return 0;
      v4 = a1 - 57007;
      v3 = a1 == 57007;
    }
LABEL_21:
    if ( v3 )
      return 0;
    v2 = v4 == 1;
    goto LABEL_23;
  }
  if ( a1 == 57004 )
    return 0;
  if ( a1 > 0xC433 )
  {
    if ( a1 == 50229 || a1 == 54936 )
      return 0;
    v4 = a1 - 57002;
    v3 = a1 == 57002;
    goto LABEL_21;
  }
  if ( a1 == 50227 || a1 == 42 || a1 == 50220 || a1 == 50221 || a1 == 50222 )
    return 0;
  v2 = a1 == 50225;
LABEL_23:
  if ( !v2 )
    return a2 & 0xFFFFFF7F;
  return 0;
}

