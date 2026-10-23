// busybox.exe @ 0x457d7c size=37

char __usercall sub_457D7C@<al>(int a1@<eax>)
{
  int v1; // eax
  char v2; // cl

  sub_42DEE4(a1);
  v1 = sub_45E674();
  if ( v1 >= 0 )
  {
    sub_41CC8C(0);
    LOBYTE(v1) = sub_44D8A4(v2);
  }
  return v1;
}

