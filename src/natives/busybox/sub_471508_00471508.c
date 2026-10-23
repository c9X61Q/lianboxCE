// busybox.exe @ 0x471508 size=39

int __usercall sub_471508@<eax>(char *a1@<eax>)
{
  int result; // eax

  result = sub_44537C(a1);
  if ( result < 0 )
    sub_418014(result, "can't create temp file '%s'", a1);
  return result;
}

