// busybox.exe @ 0x419230 size=51

int __usercall sub_419230@<eax>(int a1@<eax>, int a2@<edx>)
{
  if ( a1 > 0 )
  {
    if ( a2 != 0 )
      sub_4367F0();
    else
      *(_DWORD *)dword_486010 = a1;
  }
  else
  {
    *(_DWORD *)dword_486010 = 0;
  }
  sub_457958();
  sub_41ABC8();
  return sub_418EA0();
}

