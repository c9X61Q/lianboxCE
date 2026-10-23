// busybox.exe @ 0x439918 size=60

int __usercall sub_439918@<eax>(const char *a1@<eax>, const char *a2@<edx>)
{
  int v4; // esi

  v4 = 0;
  while ( *a1 != 0 )
  {
    if ( strcmp(a1, a2) == 0 )
      return v4;
    a1 += strlen(a1) + 1;
    ++v4;
  }
  return -1;
}

