// busybox.exe @ 0x452ce4 size=576

void *__usercall sub_452CE4@<eax>(const char *a1@<eax>, int a2@<edx>, const char *a3@<ecx>)
{
  char *v3; // ebp
  void *v4; // ebx
  int v5; // eax
  unsigned int v6; // esi
  size_t v7; // eax
  char v8; // al
  int v9; // edx
  bool v10; // al
  char v11; // al
  const char *v12; // eax
  char v14; // [esp+17h] [ebp-82Dh]
  unsigned int v15; // [esp+18h] [ebp-82Ch]
  const char *v16; // [esp+1Ch] [ebp-828h]
  FILE *Stream; // [esp+24h] [ebp-820h]
  unsigned int v21; // [esp+30h] [ebp-814h]
  char Str[2064]; // [esp+34h] [ebp-810h] BYREF

  v3 = nullptr;
  v16 = (const char *)&unk_476048;
  v4 = nullptr;
  do
  {
    sub_46F088("[Querying %s:%d '%s%s']\n", a1, a2, v16, a3);
    v5 = sub_42091C();
    sub_428FC4(v5, (int)"%s%s\r\n", v16, a3);
    Stream = (FILE *)sub_470C8C();
    v6 = 0;
    v14 = 0;
    while ( fgets(Str, 2047, Stream) != nullptr )
    {
      v7 = strcspn(Str, "\r\n");
      Str[v7] = 10;
      Str[v7 + 1] = 0;
      v21 = v7 + 1;
      v15 = v7 + 1 + v6;
      v3 = (char *)sub_471600(v7 + 1, v15 + 1);
      qmemcpy(&v3[v6], Str, v21);
      v3[v15] = 0;
      v8 = v14 & (v4 != nullptr);
      if ( v8 != 0 )
        goto LABEL_13;
      sub_467754();
      sub_463510();
      if ( v14 == 0 )
      {
        v9 = sub_43C594((int)Str, (int)"domain:");
        v10 = true;
        if ( v9 == 0 )
          v10 = sub_43C594((int)Str, (int)"domain name:") != 0;
        v8 = v10;
LABEL_13:
        v14 = v8;
        goto LABEL_14;
      }
      if ( v4 == nullptr
        && (sub_43C594((int)Str, (int)"whois server:") != 0
         || (v4 = (void *)sub_43C594((int)Str, (int)"whois:")) != nullptr) )
      {
        sub_460FB8();
        v4 = (void *)sub_47188C();
      }
LABEL_14:
      if ( v15 > 0x7FFF )
        break;
      v6 = v15;
    }
    fclose(Stream);
    if ( v14 != 0 )
      break;
    v11 = *v16;
    v16 = "domain ";
  }
  while ( v11 == 0 );
  if ( v4 == nullptr )
    goto LABEL_22;
  if ( strcmp((const char *)v4, a1) == 0 )
  {
    free(v4);
    v4 = nullptr;
    goto LABEL_22;
  }
  if ( (dword_486008 & 1) != 0 )
  {
LABEL_22:
    v12 = v3;
    if ( v3 == nullptr )
      v12 = (const char *)&unk_476048;
    sub_46F088("[%s]\n%s", a1, v12);
  }
  free(v3);
  return v4;
}

