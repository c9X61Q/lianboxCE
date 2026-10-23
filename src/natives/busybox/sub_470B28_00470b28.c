// busybox.exe @ 0x470b28 size=39

int __usercall sub_470B28@<eax>(const char *a1@<eax>)
{
  int result; // eax

  result = sub_442E08(a1);
  if ( result != 0 )
    sub_418014(result, "can't change directory to '%s'", a1);
  return result;
}

