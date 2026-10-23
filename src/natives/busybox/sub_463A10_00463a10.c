// busybox.exe @ 0x463a10 size=68

const char *__usercall sub_463A10@<eax>(const char **a1@<eax>, const char *Control@<edx>)
{
  const char *Str; // esi
  char *v4; // eax

  Str = *a1;
  if ( *a1 != nullptr )
  {
    if ( *Control == 0 )
    {
      v4 = (char *)&Str[strlen(*a1)];
LABEL_6:
      *v4 = 0;
      *a1 = v4 + 1;
      return Str;
    }
    v4 = strpbrk(Str, Control);
    if ( v4 != nullptr )
      goto LABEL_6;
    *a1 = nullptr;
  }
  return Str;
}

