// busybox.exe @ 0x4638f8 size=115

const char *__usercall sub_4638F8@<eax>(const char *a1@<eax>)
{
  const char *Str; // ebx
  char *v3; // eax

  for ( Str = a1; ; Str = v3 + 4 )
  {
    while ( 1 )
    {
      while ( *Str == 47 )
        ++Str;
      if ( sub_43C594((int)Str, (int)"../") == 0 )
        break;
      Str += 3;
    }
    v3 = strstr(Str, "/../");
    if ( v3 == nullptr )
      break;
  }
  if ( Str != a1 && byte_4735CC == 0 )
  {
    byte_4735CC = 1;
    sub_41783C("removing leading '%.*s' from member names", Str - a1, a1);
  }
  return Str;
}

