// busybox.exe @ 0x410ce0 size=79

int __cdecl sub_410CE0(char **a1, char *a2)
{
  char *v3; // edx
  int v4; // eax
  int v5; // ebx

  v3 = *a1;
  do
  {
    v5 = *a2++;
    ++v3;
    if ( v5 == 0 )
    {
      *a1 = v3;
      return 1;
    }
    v4 = *v3;
    if ( (unsigned int)(v4 - 65) < 0x1A )
      v4 += 32;
  }
  while ( v4 == v5 );
  return 0;
}

