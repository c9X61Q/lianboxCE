// busybox.exe @ 0x470d20 size=34

int __usercall sub_470D20@<eax>(int a1@<eax>, int a2@<edx>, const char *a3@<ecx>)
{
  int result; // eax

  result = sub_44305C(a1, a2);
  if ( result != 0 )
    sub_41823C(a3);
  return result;
}

