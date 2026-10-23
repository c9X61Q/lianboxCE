// busybox.exe @ 0x4144fc size=68

char __usercall sub_4144FC@<al>(unsigned __int16 a1@<ax>)
{
  char v1; // dl

  v1 = 0;
  if ( (dword_486008 & 0x3000) != 0 )
  {
    v1 = 47;
    if ( (a1 & 0xF000) != 0x4000 )
    {
      v1 = 0;
      if ( (dword_486008 & 0x1000) != 0 )
      {
        if ( (a1 & 0xF000) != 0x8000 )
          return byte_479A44[a1 >> 12];
        v1 = 42;
        if ( (a1 & 0x49) == 0 )
          return byte_479A44[a1 >> 12];
      }
    }
  }
  return v1;
}

