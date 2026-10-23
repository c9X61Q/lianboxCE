// busybox.exe @ 0x441d18 size=105

const char *__usercall sub_441D18@<eax>(const char *Str@<eax>)
{
  const char *v1; // ebx
  char *v2; // eax
  char *v3; // esi

  v1 = Str;
  if ( (dword_486008 & 0x20) == 0 )
    return (const char *)sub_4708BC("%s.lzo", Str);
  v2 = strrchr(Str, 46);
  v3 = v2;
  if ( v2 == nullptr || strcmp(v2 + 1, "lzo") != 0 )
    return (const char *)sub_4708BC("%s.out", v1);
  *v3 = 0;
  return v1;
}

