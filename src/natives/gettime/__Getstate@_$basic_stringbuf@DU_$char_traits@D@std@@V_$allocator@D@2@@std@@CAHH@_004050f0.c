// gettime.exe @ 0x4050f0 size=86

int __cdecl std::stringbuf::_Getstate(char a1)
{
  int v2; // [esp+0h] [ebp-4h]

  v2 = 0;
  if ( (a1 & 1) == 0 )
    v2 = 4;
  if ( (a1 & 2) == 0 )
    v2 |= 2u;
  if ( (a1 & 8) != 0 )
    v2 |= 8u;
  if ( (a1 & 4) != 0 )
    return v2 | 0x10;
  return v2;
}

