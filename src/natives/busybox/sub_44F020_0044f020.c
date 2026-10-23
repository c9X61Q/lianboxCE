// busybox.exe @ 0x44f020 size=89

void __usercall sub_44F020(int a1@<eax>, _DWORD *a2@<edx>)
{
  if ( a1 != 0 )
  {
    if ( (unsigned int)(a1 - 1) <= 1 && ((dword_486008 & 0x40) != 0 || a1 == 2) )
      sub_46F088("Files %s and %s differ\n", *a2, a2[1]);
  }
  else if ( (dword_486008 & 0x100) != 0 )
  {
    sub_46F088("Files %s and %s are identical\n", *a2, a2[1]);
  }
}

