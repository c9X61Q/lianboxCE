// gettime.exe @ 0x417cf1 size=99

int __cdecl _sptype(int a1, int a2)
{
  if ( a2 == 2146435072 )
  {
    if ( a1 == 0 )
      return 1;
  }
  else if ( a2 == -1048576 && a1 == 0 )
  {
    return 2;
  }
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a2) & 0x7FF8) != 0x7FF0 )
    return 0;
  if ( (a2 & 0x7FFFF) != 0 )
    return 4;
  return a1 != 0 ? 4 : 0;
}

