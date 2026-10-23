// busybox.exe @ 0x46c858 size=41

__time32_t __usercall sub_46C858@<eax>(const char *a1@<eax>, struct tm *Tm@<edx>)
{
  __time32_t result; // eax

  result = mktime(Tm);
  if ( result == -1 )
    sub_41784C("invalid date '%s'", a1);
  return result;
}

