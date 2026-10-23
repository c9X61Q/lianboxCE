// busybox.exe @ 0x413848 size=102

int __cdecl sub_413848(char *Str)
{
  int v1; // edx
  int result; // eax
  char *v3; // edi
  const char *Source; // esi

  v1 = sub_437D40(Str);
  result = 0;
  if ( v1 == 0 )
  {
    v3 = &Str[strlen(Str)];
    *v3 = 46;
    Source = "sh";
    while ( 1 )
    {
      strcpy(v3 + 1, Source);
      result = sub_42F668();
      if ( result != 0 )
        break;
      Source += 4;
      if ( Source == "0123456789abcdef" )
      {
        *v3 = 0;
        return result;
      }
    }
    return 1;
  }
  return result;
}

