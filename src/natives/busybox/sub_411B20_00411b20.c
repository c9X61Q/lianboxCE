// busybox.exe @ 0x411b20 size=53

int __usercall sub_411B20@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // eax

  if ( sub_430048() >= 0 )
  {
    v4 = sub_433530();
    sub_442F68(v4, a2);
  }
  return sub_442F68(a1, a2);
}

