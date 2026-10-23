// busybox.exe @ 0x470d60 size=36

int __usercall sub_470D60@<eax>(int *a1@<eax>, const char *a2@<edx>)
{
  int result; // eax

  result = sub_43581C(a1, a2);
  if ( result == 0 )
    sub_41784C("unknown user/group %s", a2);
  return result;
}

