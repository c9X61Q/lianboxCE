// busybox.exe @ 0x4716fc size=51

int __usercall sub_4716FC@<eax>(const CHAR *lpExistingFileName@<eax>, const CHAR *lpNewFileName@<edx>)
{
  int result; // eax

  result = sub_443B88(lpExistingFileName, lpNewFileName);
  if ( result != 0 )
    sub_418014(result, "can't move '%s' to '%s'", lpExistingFileName, lpNewFileName);
  return result;
}

