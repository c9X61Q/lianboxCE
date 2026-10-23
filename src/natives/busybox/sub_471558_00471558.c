// busybox.exe @ 0x471558 size=47

int __usercall sub_471558@<eax>(int a1@<ecx>, int a2@<edx>, char *lpFileName@<eax>)
{
  int result; // eax

  result = sub_443508(lpFileName, a2, a1);
  if ( result < 0 )
    sub_418014(result, "can't open '%s'", lpFileName);
  return result;
}

