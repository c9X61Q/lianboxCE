// busybox.exe @ 0x470d98 size=39

int __usercall sub_470D98@<eax>(char *a1@<eax>)
{
  int result; // eax

  result = sub_4362FC(a1);
  if ( result == 0 )
    sub_41784C("unknown user %s", a1);
  return result;
}

