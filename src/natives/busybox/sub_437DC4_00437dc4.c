// busybox.exe @ 0x437dc4 size=100

int __usercall sub_437DC4@<eax>(_BYTE *a1@<eax>, int a2@<edx>)
{
  const char *Str; // eax
  char *v4; // eax
  char *v5; // ebx
  const char *String2; // esi

  Str = sub_416E24(a1);
  v4 = strrchr(Str, 46);
  if ( v4 == nullptr )
    return 0;
  v5 = v4;
  if ( strlen(v4) > 4 )
    return 0;
  String2 = (const char *)(4 * a2 + 4737820);
  while ( stricmp(v5 + 1, String2) != 0 )
  {
    String2 += 4;
    if ( String2 == "0123456789abcdef" )
      return 0;
  }
  return 1;
}

