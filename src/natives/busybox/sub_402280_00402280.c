// busybox.exe @ 0x402280 size=36

int sub_402280()
{
  int v0; // edx

  v0 = 0;
  if ( MEMORY[0x400000] == 23117 && sub_402040(0x400000) )
    return 0x400000;
  return v0;
}

