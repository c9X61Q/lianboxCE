// busybox.exe @ 0x471780 size=37

int __usercall sub_471780@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int result; // eax

  result = sub_4447A8(a1, a2, a3);
  if ( result < 0 )
    sub_41823C("socket");
  return result;
}

