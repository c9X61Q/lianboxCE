// busybox.exe @ 0x443a9c size=166

int __cdecl sub_443A9C(char *Str)
{
  char *v1; // eax
  char *v3; // ebx
  char *v4; // esi
  char **i; // ecx
  const char *v6; // edi
  int v7; // [esp+8h] [ebp-18h]
  char **v8; // [esp+Ch] [ebp-14h]

  v1 = strchr(Str, 61);
  if ( v1 == nullptr )
    return sub_46A888(Str);
  v3 = v1;
  if ( v1[1] != 0 )
    return putenv(Str);
  v4 = (char *)sub_4708BC("%s0", Str);
  v7 = putenv(v4);
  for ( i = environ; ; i = v8 + 1 )
  {
    v6 = *i;
    if ( *i == nullptr )
      break;
    v8 = i;
    if ( strcmp(v6, v4) == 0 )
    {
      v6[v3 - Str + 1] = 0;
      break;
    }
  }
  free(v4);
  return v7;
}

