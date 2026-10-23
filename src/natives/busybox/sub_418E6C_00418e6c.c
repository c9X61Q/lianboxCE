// busybox.exe @ 0x418e6c size=52

int __usercall sub_418E6C@<eax>(int a1@<eax>)
{
  if ( (dword_486008 & 0x80u) == 0 )
    *(_DWORD *)dword_486010 += a1;
  else
    sub_4367F0();
  sub_457958();
  sub_41ABC8();
  return sub_418EA0();
}

