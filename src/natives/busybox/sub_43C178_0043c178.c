// busybox.exe @ 0x43c178 size=645

int __cdecl sub_43C178(int a1, int a2)
{
  int v2; // ebx
  const char **v3; // esi
  char *v4; // ebp
  const char *i; // eax
  char v6; // dl
  int v7; // eax
  char v8; // di
  u_long v9; // edx
  unsigned int v10; // ecx
  char *v11; // eax
  signed int v12; // eax
  u_long v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  u_long v17; // eax
  int v18; // edx
  unsigned int v19; // ebp
  const char **v20; // ebx
  char v22; // [esp+Ch] [ebp-1Ch]
  int v23; // [esp+Ch] [ebp-1Ch]
  u_long hostlong; // [esp+10h] [ebp-18h] BYREF
  u_long v25[5]; // [esp+14h] [ebp-14h] BYREF

  v2 = sub_435D60(a2, (int)"^mbnphs", (int)"netmask");
  if ( (v2 & 0x20) != 0 )
    byte_473468 = 0;
  v3 = (const char **)(a2 + 4 * dword_473090);
  if ( (v2 & 0xE) == 0 && ((v2 & 0xFFFFFFDF) == 0 || v3[1] != nullptr) )
    sub_418164();
  v4 = (char *)*v3;
  for ( i = *v3; ; ++i )
  {
    if ( *i == 0 )
      goto LABEL_11;
    if ( *i == 47 )
      break;
  }
  *i = 0;
  if ( i[1] == 0 )
  {
LABEL_11:
    v6 = 0;
    goto LABEL_19;
  }
  v7 = sub_470928(32, 0);
  hostlong = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0x80000000;
  while ( v7 != 0 )
  {
    v9 |= v10;
    v10 >>= 1;
    --v7;
    v8 = 1;
  }
  if ( v8 != 0 )
    hostlong = v9;
  hostlong = htonl(hostlong);
  v6 = 1;
LABEL_19:
  v22 = v6;
  if ( sub_439AEC(v4, v25) == 0 )
    sub_41784C("bad IP address: %s", *v3);
  v11 = (char *)v3[1];
  if ( v11 != nullptr )
  {
    if ( v22 != 0 )
      sub_418210("use prefix or netmask, not both");
    if ( sub_439AEC(v11, &hostlong) == 0 )
      sub_41784C("bad netmask: %s", v3[1]);
  }
  else if ( v22 == 0 )
  {
    v12 = htonl(v25[0]);
    if ( (v12 & 0xC0000000) == 0xC0000000 )
    {
      v13 = ntohl(0xFFFFFF00);
    }
    else if ( v12 >= 0 )
    {
      v13 = ntohl(0xFF000000);
    }
    else
    {
      v13 = ntohl(0xFFFF0000);
    }
    hostlong = v13;
  }
  if ( (v2 & 1) != 0 )
  {
    v14 = inet_ntoa((struct in_addr)hostlong);
    sub_46F088("NETMASK=%s\n", v14);
  }
  if ( (v2 & 2) != 0 )
  {
    v15 = inet_ntoa((struct in_addr)(v25[0] | ~hostlong));
    sub_46F088("BROADCAST=%s\n", v15);
  }
  if ( (v2 & 4) != 0 )
  {
    v16 = inet_ntoa((struct in_addr)(hostlong & v25[0]));
    sub_46F088("NETWORK=%s\n", v16);
  }
  if ( (v2 & 8) != 0 )
  {
    v17 = htonl(hostlong);
    v23 = 32;
    v18 = 0;
    v19 = 0x80000000;
    do
    {
      v18 -= ((v19 & v17) == 0) - 1;
      v19 >>= 1;
      --v23;
    }
    while ( v23 != 0 );
    sub_46F088("PREFIX=%i\n", v18);
  }
  if ( (v2 & 0x10) != 0 )
  {
    v20 = (const char **)sub_4432E4((char *)v25, 4, 2);
    if ( v20 == nullptr )
      sub_417B44("can't find hostname for %s", *v3);
    sub_463510();
    sub_46F088("HOSTNAME=%s\n", *v20);
  }
  return 0;
}

