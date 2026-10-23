// busybox.exe @ 0x470e04 size=33

int __usercall sub_470E04@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax

  result = sub_4433D8(a1, a2);
  if ( result != 0 )
    sub_41823C("listen");
  return result;
}

