// busybox.exe @ 0x4639d0 size=62

const char *__usercall sub_4639D0@<eax>(const char *Str@<eax>, const char *a2@<edx>)
{
  const char *v2; // ebx
  char *i; // esi
  char *v5; // eax

  v2 = Str;
  if ( *a2 == 0 )
    return &Str[strlen(Str)];
  for ( i = nullptr; ; i = v5 )
  {
    v5 = strstr(v2, a2);
    if ( v5 == nullptr )
      break;
    v2 = v5 + 1;
  }
  return i;
}

