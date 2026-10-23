// busybox.exe @ 0x429010 size=76

int __usercall sub_429010@<eax>(int a1@<eax>)
{
  if ( a1 > 0 )
    sub_46F088("\x1B[%uA", a1);
  sub_418130(13);
  sub_452A28();
  sub_452A78();
  sub_46F088("\x1B[J");
  return sub_43B090();
}

