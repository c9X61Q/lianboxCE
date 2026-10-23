// busybox.exe @ 0x471860 size=43

int __usercall sub_471860@<eax>(const CHAR *a1@<eax>, int a2@<edx>)
{
  int result; // eax

  result = sub_444C28(a1, a2);
  if ( result != 0 )
    sub_418014(result, "can't stat '%s'", a1);
  return result;
}

