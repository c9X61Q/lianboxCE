// gettime.exe @ 0x41f098 size=152

unsigned int __cdecl filter_mbtowcs_flags(unsigned int a1, unsigned int a2)
{
  bool v2; // zf
  bool v4; // zf
  int v5; // eax

  if ( a1 > 0xDEAC )
  {
    if ( a1 <= 0xDEB1 )
    {
      if ( a1 == 57009 || a1 == 57005 || a1 == 57006 )
        return 0;
      v5 = a1 - 57007;
      v4 = a1 == 57007;
      goto LABEL_15;
    }
    if ( a1 == 57010 || a1 == 57011 || a1 == 65000 )
      return 0;
    if ( a1 != 65001 )
      return a2;
  }
  else
  {
    if ( a1 == 57004 )
      return 0;
    if ( a1 <= 0xC433 )
    {
      if ( a1 == 50227 || a1 == 42 || a1 == 50220 || a1 == 50221 || a1 == 50222 )
        return 0;
      v2 = a1 == 50225;
      goto LABEL_10;
    }
    if ( a1 == 50229 )
      return 0;
    if ( a1 != 54936 )
    {
      v5 = a1 - 57002;
      v4 = a1 == 57002;
LABEL_15:
      if ( v4 )
        return 0;
      v2 = v5 == 1;
LABEL_10:
      if ( v2 )
        return 0;
      return a2;
    }
  }
  return a2 & 8;
}

