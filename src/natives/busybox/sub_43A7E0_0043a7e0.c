// busybox.exe @ 0x43a7e0 size=791

int sub_43A7E0()
{
  int v0; // esi
  int v1; // ebx
  int v2; // esi
  _DWORD *v3; // eax
  char **i; // ebx
  char *v5; // ebx
  char *v6; // edi
  const char **j; // esi
  char **n; // ebx
  int v9; // eax
  int v10; // ecx
  const char *v11; // edx
  int v12; // eax
  int v13; // ecx
  _BYTE *v14; // eax
  char v16; // al
  const char *v17; // ebx
  const char *k; // eax
  char *m; // ecx
  char v20; // dl
  int v21; // [esp+Ch] [ebp-1B4h] BYREF
  char v22[8]; // [esp+6Ch] [ebp-154h] BYREF
  _BYTE v23[275]; // [esp+ADh] [ebp-113h] BYREF

  v0 = dword_485FEC;
  *(_DWORD *)(dword_485FEC + 224) = "PS1=\\w \\$ ";
  v1 = v0 + 184;
  v2 = v0 + 376;
  do
  {
    v3 = (_DWORD *)sub_4382E4(*(unsigned __int8 **)(v1 + 8));
    *(_DWORD *)v1 = *v3;
    *v3 = v1;
    v1 += 16;
  }
  while ( v2 != v1 );
  for ( i = environ; i != nullptr && *i != nullptr; ++i )
  {
    if ( strnicmp(*i, "PATH=", 5u) == 0 && strncmp(*i, "PATH=", 5u) != 0 )
    {
      for ( j = (const char **)environ; j != nullptr; ++j )
      {
        v5 = (char *)*j;
        if ( *j == nullptr )
          break;
        v6 = strchr(v5, 61);
        if ( v6 != nullptr )
        {
          while ( v5 < v6 )
          {
            v16 = *v5;
            if ( (unsigned __int8)(*v5 - 97) <= 0x19u )
              v16 -= 32;
            *v5++ = v16;
          }
          if ( *(_BYTE *)(dword_485FF0 + 79) == 0 )
          {
            v17 = *j;
            if ( strncmp(*j, "SYSTEMROOT=", 0xBu) != 0 && strncmp(v17, "COMSPEC=", 8u) != 0 )
              sub_418E48(v6 + 1);
          }
          for ( k = *j; k < v6; ++k )
          {
            if ( (unsigned __int8)(*k - 48) > 9u && (unsigned __int8)((*k | 0x20) - 97) > 0x19u && *k != 95 )
              goto LABEL_46;
          }
          if ( k == v6 )
            continue;
LABEL_46:
          for ( m = (char *)sub_47188C(); ; ++m )
          {
            v20 = *m;
            if ( *m == 61 )
              break;
            if ( (unsigned __int8)(v20 - 48) > 9u && (unsigned __int8)((v20 | 0x20) - 97) > 0x19u )
              *m = 95;
          }
          sub_45ECA8();
        }
      }
      sub_4365A0();
      sub_470DC0();
      sub_471754();
      sub_471754();
      sub_471754();
      sub_471754();
      break;
    }
  }
  for ( n = environ; n != nullptr && *n != nullptr; ++n )
  {
    if ( strchr(*n, 61) != nullptr )
      sub_45ECA8();
  }
  sub_45ECA8();
  sub_45ECA8();
  v9 = sub_46C538();
  sub_45EC2C(v10, v9);
  v11 = (const char *)sub_43E9A4();
  if ( v11 != nullptr )
    atoi(v11);
  v12 = sub_46C538();
  sub_45EB78(1, v12);
  if ( sub_43E9A4() == 0 )
  {
    sub_467EC8(v22);
    sub_45EC2C(v13, v23);
  }
  v14 = (_BYTE *)sub_43E9A4();
  if ( v14 != nullptr && *v14 == 47 && sub_444C28(v14, &v21) == 0 )
    sub_444C28(".", v22);
  return sub_45E938();
}

