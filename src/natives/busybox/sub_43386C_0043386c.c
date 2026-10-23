// busybox.exe @ 0x43386c size=108

int __usercall sub_43386C@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int *a4)
{
  int result; // eax

  if ( a1 != 0 )
  {
    result = sub_435A84(a1, a2, a3, a4);
    if ( *a4 < 0 )
      return 0;
  }
  else
  {
    result = sub_435AA8(*a4, a3);
    *a4 = result;
    if ( result < 0 )
    {
      if ( *_errno() == 22 )
        *a4 = sub_435AA8(0, a3);
      return ~*a4 >> 31;
    }
  }
  return result;
}

