// busybox.exe @ 0x470fe8 size=173

char *sub_470FE8()
{
  char *Str; // ebx
  int v1; // ebp
  size_t v2; // edi
  char *v3; // eax
  char *Source; // esi
  int v5; // ecx
  int v6; // ecx
  char *v7; // eax

  Str = (char *)sub_47188C();
  v1 = 21;
LABEL_2:
  v2 = strlen(Str) + 1;
  while ( 1 )
  {
    v3 = (char *)sub_471218();
    Source = v3;
    if ( v3 == nullptr )
      break;
    if ( --v1 == 0 )
    {
      free(v3);
LABEL_10:
      free(Str);
      return nullptr;
    }
    if ( *v3 == 47 )
    {
      free(Str);
      Str = Source;
      goto LABEL_2;
    }
    v2 += strlen(v3);
    Str = (char *)sub_471600(v5, v2);
    v7 = (char *)sub_417A68(Str, v6);
    strcpy(v7, Source);
    free(Source);
  }
  if ( *_errno() != 22 && *_errno() != 2 && *_errno() != 40 )
    goto LABEL_10;
  return Str;
}

