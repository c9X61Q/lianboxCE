// busybox.exe @ 0x468114 size=126

int __cdecl sub_468114(char *Str)
{
  int v1; // esi
  char v2; // al
  char v3; // al
  size_t v4; // eax
  const char *v5; // edi
  size_t v6; // eax

  v1 = 0;
  if ( strlen(Str) > 4 && (*Str == 92 || *Str == 47) )
  {
    v2 = Str[1];
    if ( v2 == 47 || (v1 = 0, v2 == 92) )
    {
      v3 = Str[2];
      if ( v3 == 92 || v3 == 47 )
      {
        return 0;
      }
      else
      {
        v4 = strcspn(Str + 2, "/\\");
        v1 = 0;
        if ( v4 != 0 )
        {
          v5 = &Str[v4 + 3];
          v6 = strcspn(v5, "/\\");
          if ( v6 != 0 )
            return &v5[v6] - Str;
        }
      }
    }
  }
  return v1;
}

