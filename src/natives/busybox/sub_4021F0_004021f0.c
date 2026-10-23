// busybox.exe @ 0x4021f0 size=40

int sub_4021F0()
{
  int result; // eax

  result = 0;
  if ( MEMORY[0x400000] == 23117 )
  {
    result = sub_402040(0x400000);
    if ( result != 0 )
      return *(unsigned __int16 *)(MEMORY[0x40003C] + 4194310);
  }
  return result;
}

