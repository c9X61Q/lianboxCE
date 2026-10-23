// busybox.exe @ 0x45dd68 size=854

int __usercall sub_45DD68@<eax>(int a1@<eax>)
{
  int i; // eax
  const char *v3; // ebp
  int v4; // ebx
  struct tm *v5; // eax
  unsigned int v6; // esi
  const char *v7; // eax
  const char *v8; // eax
  const char *v9; // edx
  struct tm *v10; // eax
  unsigned int v11; // ecx
  int result; // eax
  int v13; // edx
  char *v14; // [esp+20h] [ebp-68h]
  char *v15; // [esp+20h] [ebp-68h]
  const char *v16; // [esp+24h] [ebp-64h]
  __time32_t Time; // [esp+28h] [ebp-60h] BYREF
  struct tm v18; // [esp+2Ch] [ebp-5Ch] BYREF
  char Buffer[56]; // [esp+50h] [ebp-38h] BYREF

  for ( i = 0; i != 12; ++i )
  {
    if ( (unsigned __int16)word_47FEE0[i] == a1 )
    {
      v3 = (&off_47FE80)[2 * i];
      v16 = (const char *)dword_47FE84[2 * i];
      v14 = *(char **)(dword_486010 + 4 * i + 176);
      goto LABEL_6;
    }
  }
  v14 = nullptr;
  v16 = nullptr;
  v3 = (const char *)&unk_475480;
LABEL_6:
  v4 = dword_486010;
  if ( *(_DWORD *)dword_486010 != 0 )
    sub_41783C("response:%u", a1);
  Time = time(nullptr);
  v5 = sub_4367AC(&Time, &v18);
  sub_444C3C(Buffer, 0x28u, (int)"%a, %d %b %Y %H:%M:%S GMT", v5);
  v6 = sub_462670(*(_DWORD *)(v4 + 104), "HTTP/1.1 %u %s\r\nDate: %s\r\nConnection: close\r\n", a1, v3, Buffer);
  if ( a1 == 200 )
  {
    v7 = *(const char **)(v4 + 40);
    if ( v7 == nullptr )
      goto LABEL_20;
  }
  else
  {
    v7 = "text/html";
  }
  v6 += sub_462670(v6 + *(_DWORD *)(v4 + 104), "Content-type: %s\r\n", v7);
  if ( a1 == 401 )
  {
    v6 += sub_462670(
            v6 + *(_DWORD *)(v4 + 104),
            "WWW-Authenticate: Basic realm=\"%.999s\"\r\n",
            *(const char **)(v4 + 52));
  }
  else if ( a1 == 302 )
  {
    v8 = *(const char **)(v4 + 24);
    v9 = "?";
    if ( v8 == nullptr )
    {
      v8 = (const char *)&unk_475480;
      v9 = (const char *)&unk_475480;
    }
    v6 += sub_4611A0(v6 + *(_DWORD *)(v4 + 104), 8189 - v6, "Location: %s/%s%s\r\n", *(const char **)(v4 + 44), v9, v8);
    if ( v6 > 0x1FFD )
      v6 = 8189;
  }
LABEL_20:
  if ( v14 != nullptr && sub_442D6C(v14, 4) == 0 )
  {
    *(_BYTE *)(*(_DWORD *)(v4 + 104) + v6) = 13;
    *(_BYTE *)(*(_DWORD *)(v4 + 104) + v6 + 1) = 10;
    sub_43269C(v6 + 2, *(char **)(v4 + 104));
    sub_45DA18(v14, 2);
  }
  if ( *(_DWORD *)(v4 + 68) != -1 || *(_DWORD *)(v4 + 64) != -1 )
  {
    v10 = sub_4367AC((__time32_t *)(v4 + 8), &v18);
    sub_444C3C(Buffer, 0x28u, (int)"%a, %d %b %Y %H:%M:%S GMT", v10);
    if ( a1 == 206 )
    {
      v6 += sub_462670(
              v6 + *(_DWORD *)(v4 + 104),
              "Content-Range: bytes %llu-%llu/%llu\r\n",
              *(_QWORD *)(v4 + 72),
              *(_QWORD *)(v4 + 80),
              *(_QWORD *)(v4 + 64));
      *(_QWORD *)(v4 + 64) = *(_QWORD *)(v4 + 80) - *(_QWORD *)(v4 + 72) + 1LL;
    }
    v6 += sub_462670(
            v6 + *(_DWORD *)(v4 + 104),
            "Accept-Ranges: bytes\r\nLast-Modified: %s\r\nETag: %s\r\nContent-Length: %llu\r\n",
            Buffer,
            (const char *)(v4 + 116),
            *(_QWORD *)(v4 + 64));
  }
  if ( *(_BYTE *)(v4 + 5) != 0 )
    v6 += sub_462670(v6 + *(_DWORD *)(v4 + 104), "Content-Encoding: gzip\r\n");
  *(_BYTE *)(*(_DWORD *)(v4 + 104) + v6) = 13;
  v11 = v6 + 2;
  *(_BYTE *)(*(_DWORD *)(v4 + 104) + v6 + 1) = 10;
  if ( v16 != nullptr )
    v11 = sub_462670(
            *(_DWORD *)(v4 + 104) + v11,
            "<HTML><HEAD><TITLE>%u %s</TITLE></HEAD>\n<BODY><H1>%u %s</H1>\n%s\n</BODY></HTML>\n",
            a1,
            v3,
            a1,
            v3,
            v16)
        + v6
        + 2;
  v15 = (char *)v11;
  result = sub_43269C(v11, *(char **)(v4 + 104));
  if ( v15 != (char *)result )
  {
    if ( *(int *)v4 > 1 )
      sub_418224("error", v13);
    sub_43E920();
  }
  return result;
}

