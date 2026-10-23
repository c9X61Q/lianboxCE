// busybox.exe @ 0x4480bc size=43

int __usercall sub_4480BC@<eax>(unsigned __int8 a1@<al>)
{
  int v1; // edx

  v1 = -1;
  if ( a1 != 126 )
  {
    v1 = 0;
    if ( a1 != 0 && (unsigned __int8)(a1 - 48) > 9u )
    {
      v1 = a1;
      if ( (unsigned __int8)((a1 | 0x20) - 97) > 0x19u )
        return a1 + 256;
    }
  }
  return v1;
}

