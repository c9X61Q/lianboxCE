// busybox.exe @ 0x441c90 size=134

const char *__usercall sub_441C90@<eax>(const char *Str@<eax>)
{
  char *v2; // eax
  int v3; // ebx
  const char *v4; // edi

  v2 = strrchr(Str, 46);
  v3 = (int)v2;
  if ( v2 != nullptr )
  {
    v4 = v2 + 1;
    if ( strcmp(v2 + 1, "gz") == 0 || *(_BYTE *)(v3 + 1) == 90 && *(_BYTE *)(v3 + 2) == 0 )
    {
      *(_BYTE *)v3 = 0;
      return Str;
    }
    else
    {
      v3 = 0;
      if ( strcmp(v4, "tgz") == 0 )
      {
        v3 = sub_47188C();
        *((_WORD *)strrchr((const char *)v3, 46) + 1) = 29281;
      }
    }
  }
  return (const char *)v3;
}

