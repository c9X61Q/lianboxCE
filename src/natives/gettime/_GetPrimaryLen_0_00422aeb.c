// gettime.exe @ 0x422aeb size=44

int __cdecl GetPrimaryLen_0(unsigned __int16 *a1)
{
  int i; // edx
  unsigned __int16 v3; // ax

  for ( i = 0; ; ++i )
  {
    v3 = *a1++;
    if ( (v3 < 0x41u || v3 > 0x5Au) && (unsigned __int16)(v3 - 97) > 0x19u )
      break;
  }
  return i;
}

