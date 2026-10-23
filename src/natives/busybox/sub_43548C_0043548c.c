// busybox.exe @ 0x43548c size=31

char *__usercall sub_43548C@<eax>(unsigned int a1@<eax>)
{
  if ( a1 <= 0x16 && aExit[7 * a1] != 0 )
    return &aExit[7 * a1];
  else
    return (char *)sub_417B68();
}

