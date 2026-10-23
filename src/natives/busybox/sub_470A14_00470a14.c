// busybox.exe @ 0x470a14 size=37

int __usercall sub_470A14@<eax>(int a1@<ecx>, struct sockaddr *a2@<edx>, int a3@<eax>)
{
  int result; // eax

  result = sub_442DD8(a3, a2, a1);
  if ( result != 0 )
    sub_41823C("bind");
  return result;
}

