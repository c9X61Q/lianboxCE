// gettime.exe @ 0x42217c size=52

int __cdecl GetPrimaryLen(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // ecx
  int v2; // edx
  unsigned __int16 v4; // ax

  v1 = a1;
  v2 = 0;
  if ( a1 == nullptr )
    return 0;
  while ( 1 )
  {
    v4 = *v1++;
    if ( (v4 < 0x41u || v4 > 0x5Au) && (unsigned __int16)(v4 - 97) > 0x19u )
      break;
    ++v2;
  }
  return v2;
}

