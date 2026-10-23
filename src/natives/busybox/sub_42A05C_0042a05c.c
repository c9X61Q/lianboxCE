// busybox.exe @ 0x42a05c size=26

char *__usercall sub_42A05C@<eax>(int a1@<eax>, char *a2@<edx>)
{
  char *result; // eax

  result = a2;
  if ( a1 != 2 && a1 != 20 )
    return strerror(a1);
  return result;
}

