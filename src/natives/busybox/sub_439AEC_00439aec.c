// busybox.exe @ 0x439aec size=37

int __cdecl sub_439AEC(char *cp, unsigned int *a2)
{
  unsigned int v2; // eax
  int v3; // edx

  v2 = inet_addr(cp);
  v3 = 0;
  if ( v2 != -1 )
  {
    *a2 = v2;
    return 1;
  }
  return v3;
}

