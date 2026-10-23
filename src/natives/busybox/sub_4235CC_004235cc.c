// busybox.exe @ 0x4235cc size=39

int __usercall sub_4235CC@<eax>(FILE *Stream@<eax>, const char *a2@<edx>)
{
  int result; // eax

  result = ferror(Stream);
  if ( result != 0 )
    sub_41784C("%s: I/O error", a2);
  return result;
}

