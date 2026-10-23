// busybox.exe @ 0x437558 size=1492

void __usercall __noreturn sub_437558(int a1@<eax>, int a2, char a3)
{
  int v4; // ebx
  int v5; // eax
  u_long v6; // eax
  u_long v7; // eax
  char *v8; // ecx
  u_long v9; // eax
  char *v10; // edx
  char *v11; // eax
  char *v12; // esi
  const char *v13; // esi
  char *v14; // eax
  char *v15; // edi
  size_t v16; // eax
  int v17; // ecx
  void *v18; // esp
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  char *v22; // edi
  char v23; // dl
  char v24; // dl
  char v25; // dl
  char *i; // esi
  char *v27; // eax
  int v28; // edx
  int v29; // esi
  char *v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int16 v34; // ax
  int v35; // ecx
  int v36; // edx
  int v37; // edx
  const char *v38; // eax
  char *netlong; // [esp+0h] [ebp-9Ch]
  char netlongb; // [esp+0h] [ebp-9Ch]
  u_long netlonga; // [esp+0h] [ebp-9Ch]
  const char *v42; // [esp+10h] [ebp-8Ch] BYREF
  char *v43; // [esp+14h] [ebp-88h]
  char *v44; // [esp+18h] [ebp-84h]
  u_long v45; // [esp+1Ch] [ebp-80h]
  char *v46; // [esp+20h] [ebp-7Ch]
  char *Str; // [esp+24h] [ebp-78h]
  char *v48; // [esp+28h] [ebp-74h] BYREF
  _BYTE v49[40]; // [esp+2Ch] [ebp-70h] BYREF
  int v50; // [esp+54h] [ebp-48h]
  int v51; // [esp+58h] [ebp-44h]
  int v52; // [esp+64h] [ebp-38h]

  v4 = dword_486010;
  *(_DWORD *)(v4 + 104) = sub_470E78();
  if ( *(_DWORD *)v4 != 0 )
    *(_DWORD *)(v4 + 16) = sub_47144C();
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 != 0 )
  {
    if ( *(_DWORD *)(v4 + 16) != 0 )
      dword_485AD0 = *(char **)(v4 + 16);
    if ( v5 > 2 )
      sub_4181F8("connected");
  }
  v45 = 0;
  if ( *(_WORD *)(a1 + 4) == 2 )
  {
    v6 = ntohl(*(_DWORD *)(a1 + 8));
    netlong = &a3;
    v45 = v6;
  }
  if ( *(_WORD *)(a1 + 4) == 23 && *(_DWORD *)(a1 + 12) == 0 && *(_DWORD *)(a1 + 16) == 0 )
  {
    v7 = ntohl(*(_DWORD *)(a1 + 20));
    netlong = v8;
    if ( v7 == 0xFFFF )
    {
      v9 = ntohl(*(_DWORD *)(a1 + 24));
      netlong = v10;
      v45 = v9;
    }
  }
  sub_43983C(netlong);
  if ( sub_434880() == 0 )
    goto LABEL_19;
  v11 = strchr(*(const char **)(v4 + 104), 32);
  v12 = v11;
  if ( v11 == nullptr )
    goto LABEL_19;
  *v11 = 0;
  if ( stricmp(*(const char **)(v4 + 104), "GET") != 0 )
    goto LABEL_19;
  if ( v12[1] != 47 )
    goto LABEL_19;
  v13 = v12 + 1;
  v14 = strchr(v13, 32);
  if ( v14 == nullptr )
    goto LABEL_19;
  v15 = v14 + 1;
  Str = v14;
  if ( strncmp(v14 + 1, "HTTP/1.1 200 OK\r\n", 5u) != 0 )
    goto LABEL_19;
  *Str = 0;
  v16 = strlen(*(const char **)(v4 + 36));
  v18 = alloca(sub_4115D8(4 * ((v15 - v13 + v16 + 17) >> 2), v17, netlongb));
  Str = (char *)&v42;
  strcpy((char *)&v42, v13);
  v19 = strchr(Str, 63);
  if ( v19 != nullptr )
  {
    *(_DWORD *)(v4 + 24) = v19 + 1;
    *v19 = 0;
  }
  else
  {
    *(_DWORD *)(v4 + 24) = 0;
  }
  v20 = (char *)sub_44C994();
  if ( v20 == nullptr )
    goto LABEL_19;
  v46 = Str + 1;
  if ( Str + 1 == v20 )
    goto LABEL_19;
  v21 = Str;
  v22 = Str;
  while ( 1 )
  {
    if ( *v22 != 47 )
      goto LABEL_40;
    if ( *v21 != 47 )
    {
      if ( *v21 != 46 )
        goto LABEL_40;
      if ( v21[1] == 46 )
      {
        v23 = v21[2];
        if ( v23 == 0 || v23 == 47 )
        {
          if ( v22 == Str )
            goto LABEL_19;
          do
            --v22;
          while ( *v22 != 47 );
          ++v21;
        }
      }
      v24 = v21[1];
      if ( v24 != 47 && v24 != 0 )
      {
LABEL_40:
        v44 = v22 + 1;
        v25 = *v21;
        v22[1] = *v21;
        if ( v25 == 0 )
        {
          if ( *v22 != 47 && sub_43C4D8() != 0 )
            *(_DWORD *)(v4 + 44) = Str;
          if ( *(int *)v4 > 1 )
            sub_41783C("url:%s", Str);
          for ( i = Str; ; *i = 47 )
          {
            v27 = strchr(i + 1, 47);
            i = v27;
            if ( v27 == nullptr )
              break;
            *v27 = 0;
            if ( sub_43C4D8() != 0 )
            {
              sub_4493DC();
              sub_43983C(netlonga);
            }
          }
          if ( *v22 == 47 )
            strcpy(v44, *(const char **)(v4 + 36));
          if ( sub_444C28(v46, v49) == 0 && *(_DWORD *)(v4 + 44) == 0 )
          {
            v28 = v51;
            *(_DWORD *)(v4 + 64) = v50;
            *(_DWORD *)(v4 + 68) = v28;
            *(_DWORD *)(v4 + 8) = v52;
          }
          v22[1] = 0;
          LOBYTE(v45) = -1;
          while ( 2 )
          {
            if ( sub_434880() != 0 )
            {
              if ( strnicmp(*(const char **)(v4 + 104), "Authorization:", 0xEu) != 0
                || (v43 = (char *)sub_460FB8(), strnicmp(v43, "Basic", 5u) != 0) )
              {
                if ( strnicmp(*(const char **)(v4 + 104), "Range:", 6u) == 0 )
                {
                  v48 = (char *)sub_460FB8();
                  if ( sub_43C594(v35, "bytes=") != 0 )
                  {
                    v48 += 6;
                    *(_DWORD *)(v4 + 72) = sub_418400(v48, &v48, 10);
                    *(_DWORD *)(v4 + 76) = v36;
                    if ( *v48 != 45
                      || v36 < 0
                      || v48[1] != 0
                      && ((*(_DWORD *)(v4 + 80) = sub_418400(v48 + 1, nullptr, 10),
                           *(_DWORD *)(v4 + 84) = v37,
                           *_errno() != 0)
                       || *(_QWORD *)(v4 + 80) < *(_QWORD *)(v4 + 72)) )
                    {
                      *(_DWORD *)(v4 + 72) = -1;
                      *(_DWORD *)(v4 + 76) = -1;
                    }
                  }
                }
                else if ( strnicmp(*(const char **)(v4 + 104), "Accept-Encoding:", 0x10u) == 0 )
                {
                  if ( strstr(*(const char **)(v4 + 104), "gzip") != nullptr )
                    *(_BYTE *)(v4 + 5) = 1;
                }
                else if ( strnicmp(*(const char **)(v4 + 104), "If-None-Match:", 0xEu) == 0 )
                {
                  free(*(void **)(v4 + 12));
                  sub_460FB8();
                  *(_DWORD *)(v4 + 12) = sub_47188C();
                }
                continue;
              }
              v43 += 5;
              v29 = 0;
              v42 = v43;
              v30 = v43;
              v45 = 0;
LABEL_63:
              v31 = *(unsigned __int8 *)v42;
              if ( (_BYTE)v31 == 0 )
              {
                *v30 = 0;
                LOBYTE(v45) = sub_41C5F4(Str, v43);
                continue;
              }
              if ( (unsigned int)(v31 - 48) > 9 )
              {
                if ( (unsigned int)(v31 - 65) <= 0x19 )
                {
                  v32 = v31 - 65;
                  goto LABEL_76;
                }
                if ( (unsigned int)(v31 - 97) <= 0x19 )
                {
                  v32 = v31 - 71;
                  goto LABEL_76;
                }
                switch ( v31 )
                {
                  case '+':
                    v32 = 62;
                    goto LABEL_76;
                  case '/':
                    v32 = 63;
                    goto LABEL_76;
                  case '=':
                    v32 = 0;
                    goto LABEL_76;
                  default:
                    break;
                }
              }
              else
              {
                v32 = v31 + 4;
LABEL_76:
                v33 = (v45 << 6) | v32;
                v45 = v33;
                if ( ++v29 == 4 )
                {
                  *v30 = BYTE2(v33);
                  LOBYTE(v34) = BYTE1(v45);
                  HIBYTE(v34) = v45;
                  *(_WORD *)(v30 + 1) = v34;
                  v29 = 0;
                  v30 += 3;
                }
              }
              ++v42;
              goto LABEL_63;
            }
            break;
          }
          v38 = sub_416E24(Str);
          if ( stricmp(v38, "httpd.conf") != 0 )
          {
            if ( (v45 & 0x80u) != 0 )
              LOBYTE(v45) = sub_41C5F4(Str, (const char *)&unk_475480);
            if ( (_BYTE)v45 != 0 && *(_DWORD *)(v4 + 44) == 0 )
            {
              if ( *v22 == 47 )
                strcpy(v44, *(const char **)(v4 + 36));
              sub_45DA18();
            }
          }
LABEL_19:
          sub_45E0C0();
        }
        ++v22;
      }
    }
    ++v21;
  }
}

