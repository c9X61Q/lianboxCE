// busybox.exe @ 0x447b9c size=51

char __usercall sub_447B9C@<al>(unsigned __int8 a1@<al>)
{
  unsigned __int8 v1; // dl

  v1 = a1;
  if ( a1 != 125 )
  {
    if ( a1 > 0x7Du )
      return v1;
    if ( a1 == 123 )
    {
LABEL_12:
      v1 = a1 + 1;
      return ++v1;
    }
    if ( a1 == 124 )
      return v1;
    if ( a1 != 93 )
    {
      if ( a1 > 0x5Du )
        return v1;
      if ( a1 == 91 )
        goto LABEL_12;
      if ( a1 <= 0x5Bu )
      {
        if ( a1 != 40 )
        {
          if ( a1 != 41 )
            return v1;
          return --v1;
        }
        return ++v1;
      }
      return v1;
    }
  }
  v1 = a1 - 1;
  return --v1;
}

