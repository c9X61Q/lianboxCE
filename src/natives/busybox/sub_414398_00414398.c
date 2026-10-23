// busybox.exe @ 0x414398 size=356

size_t __usercall sub_414398@<eax>(const char *a1@<eax>, FILE *a2@<edx>)
{
  char *i; // edx
  char v5; // al
  int v6; // ebx
  size_t v7; // esi
  const char *v8; // ebp
  char *v9; // esi
  size_t v10; // esi

  for ( i = (char *)a1; ; ++i )
  {
    v5 = *i;
    if ( *i == 0 )
    {
      if ( fputs(a1, a2) == -1 )
        return -1;
      else
        return strlen(a1);
    }
    if ( v5 == 27 || v5 < 0 )
      break;
  }
  v7 = strlen(a1);
  if ( dword_47346C >= v7 )
  {
    strcpy(Buffer, a1);
  }
  else
  {
    free(Buffer);
    Buffer = strdup(a1);
    dword_47346C = v7;
  }
  v8 = Buffer;
  v6 = 0;
  while ( *v8 != 0 )
  {
    v9 = strchr(v8, 27);
    if ( v9 == nullptr || sub_460D08(0) != 0 )
    {
      v10 = strlen(v8);
      sub_46ED2C();
      if ( fputs(v8, a2) == -1 )
        return -1;
      v6 += v10;
      return v6;
    }
    if ( v9 != v8 )
    {
      *v9 = 0;
      sub_46ED2C();
      if ( fputs(v8, a2) == -1 )
        return -1;
      v6 += v9 - v8;
    }
    if ( fflush(a2) != -1 )
    {
      v8 = (const char *)sub_44F634();
      if ( v9 == v8 )
      {
        if ( fputc(27, a2) == -1 )
          return -1;
        v8 = v9 + 1;
      }
      v6 += v8 - v9;
      if ( fflush(a2) != -1 )
        continue;
    }
    return -1;
  }
  return v6;
}

