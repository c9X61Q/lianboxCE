// busybox.exe @ 0x460fcc size=47

int sub_460FCC()
{
  int v0; // edx

  v0 = byte_473328;
  if ( (unsigned int)(byte_473328 - 1) <= 1 )
  {
    if ( --dword_47359C > 0 )
      return 1;
    else
      byte_473328 = 0;
  }
  return v0;
}

