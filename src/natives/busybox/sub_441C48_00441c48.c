// busybox.exe @ 0x441c48 size=69

const char *__usercall sub_441C48@<eax>(const char *Str@<eax>, const char *a2@<edx>)
{
  char *v4; // eax
  char *v5; // ebx

  v4 = strrchr(Str, 46);
  v5 = v4;
  if ( v4 != nullptr )
  {
    if ( strcmp(v4 + 1, a2) == 0 )
    {
      *v5 = 0;
      return Str;
    }
    else
    {
      return nullptr;
    }
  }
  return v5;
}

