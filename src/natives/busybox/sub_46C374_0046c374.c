// busybox.exe @ 0x46c374 size=133

int __cdecl sub_46C374(int a1, char *a2, int a3)
{
  int result; // eax

  if ( *a2 >= 0 )
  {
    result = 1;
  }
  else if ( (*a2 & 0xE0) == 0xC0 )
  {
    result = 2;
  }
  else if ( (*a2 & 0xF0) == 0xE0 )
  {
    result = 3;
  }
  else if ( (*a2 & 0xF8) == 0xF0 )
  {
    result = 4;
  }
  else if ( (*a2 & 0xFC) == 0xF8 )
  {
    result = 5;
  }
  else
  {
    if ( (*a2 & 0xFE) != 0xFC )
    {
      *_errno() = 42;
      return -1;
    }
    result = 6;
  }
  if ( a3 >= result )
    return result;
  *_errno() = 22;
  return -1;
}

