// busybox.exe @ 0x41f808 size=72

size_t __usercall sub_41F808@<eax>(const char *a1@<eax>, const char *Str@<edx>)
{
  size_t v4; // eax
  int i; // edi
  size_t v6; // ebp
  char *v7; // eax

  v4 = strlen(Str);
  if ( v4 == 0 )
    return strlen(a1) + 1;
  v6 = v4;
  for ( i = 0; ; ++i )
  {
    v7 = strstr(a1, Str);
    if ( v7 == nullptr )
      break;
    a1 = &v7[v6];
  }
  return i;
}

