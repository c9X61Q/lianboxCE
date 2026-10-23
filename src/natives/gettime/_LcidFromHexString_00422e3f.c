// gettime.exe @ 0x422e3f size=84

int __cdecl LcidFromHexString(unsigned __int16 *a1)
{
  int v1; // esi
  unsigned __int16 v2; // cx
  unsigned __int16 *i; // edx
  int v4; // eax

  v1 = 0;
  v2 = *a1;
  for ( i = a1 + 1; v2 != 0; ++i )
  {
    if ( (unsigned __int16)(v2 - 97) > 5u )
    {
      if ( (unsigned __int16)(v2 - 65) <= 5u )
        v2 -= 7;
    }
    else
    {
      v2 -= 39;
    }
    v4 = v2;
    v2 = *i;
    v1 = v4 + 16 * v1 - 48;
  }
  return v1;
}

