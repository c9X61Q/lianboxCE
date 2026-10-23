// busybox.exe @ 0x45b5d8 size=494

int __usercall sub_45B5D8@<eax>(const char *a1@<eax>, int a2@<ecx>)
{
  const char *v2; // esi
  int v3; // ebx
  int i; // ebp
  u_long v5; // edi
  int v6; // edi
  int v7; // ecx
  u_long *v8; // edi
  u_long v9; // edx
  u_long v10; // eax
  int v11; // ebx
  u_long v12; // ecx
  int v14; // [esp+8h] [ebp-38h]
  u_long v15; // [esp+Ch] [ebp-34h]
  u_long v16; // [esp+10h] [ebp-30h]
  int v17; // [esp+14h] [ebp-2Ch]
  int v18; // [esp+18h] [ebp-28h]
  u_long v19; // [esp+1Ch] [ebp-24h]
  u_long v20[3]; // [esp+20h] [ebp-20h] BYREF
  u_long netlong; // [esp+2Ch] [ebp-14h]

  if ( a1 != nullptr )
  {
    v2 = a1;
    v14 = sub_47154C(a2, 0);
  }
  else
  {
    v14 = 0;
    v2 = "standard output";
  }
  v3 = sub_470E28(1);
  unk_485BE8 = 0;
  v17 = 0;
  for ( i = 0; ; i = 1 )
  {
    sub_4715C8(16, v20);
    v5 = v20[0];
    if ( v5 != htonl(0x8EADE801) )
      sub_41784C("invalid RPM header magic in '%s'", v2);
    netlong = ntohl(netlong);
    v16 = ntohl(v20[2]);
    v6 = 16 * (v16 + 1);
    v18 = v6 + v3;
    unk_485BE8 += v16;
    v15 = sub_471600(v7, 16 * unk_485BE8);
    sub_4715C8(v6 - 16, v15 + 16 * v17);
    v8 = (u_long *)(v15 + 16 * v17);
    v9 = v16;
    while ( v9 != 0 )
    {
      v19 = v9;
      *v8 = ntohl(*v8);
      v8[1] = ntohl(v8[1]);
      v8[3] = ntohl(v8[3]);
      v8[2] = v18 + ntohl(v8[2]);
      if ( i == 0 )
        *v8 -= 743;
      v9 = v19 - 1;
      v8 += 4;
    }
    v17 += v16;
    if ( i == 0 )
    {
      v10 = netlong;
      while ( 1 )
      {
        v11 = v10 & 7;
        v12 = v10++;
        if ( v11 == 0 )
          break;
        LOBYTE(v9) = 1;
      }
      if ( (_BYTE)v9 != 0 )
        netlong = v12;
    }
    v3 = sub_470E28(1);
    if ( i == 1 )
      break;
  }
  *(&MultiByteStr + 1) = v15;
  MultiByteStr = sub_470E78();
  sub_470E28(0);
  sub_432664(v3, (CHAR *)MultiByteStr);
  return v14;
}

