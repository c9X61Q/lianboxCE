// busybox.exe @ 0x43e3a8 size=44

int **__usercall sub_43E3A8@<eax>(int **a1@<eax>, const char *a2@<edx>)
{
  while ( a1 != nullptr && strcmp((const char *)a1[1], a2) != 0 )
    a1 = (int **)*a1;
  return a1;
}

