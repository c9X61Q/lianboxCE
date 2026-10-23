// busybox.exe @ 0x4270d4 size=343

int sub_4270D4()
{
  char v0; // al
  u_long v1; // edx
  u_long v2; // eax
  int v3; // edx
  u_short hostshort[2]; // [esp+0h] [ebp-130h]
  u_long v6; // [esp+4h] [ebp-12Ch] BYREF
  u_long v7[74]; // [esp+8h] [ebp-128h] BYREF

  memset(v7, 0, 0x11Cu);
  BYTE2(v7[1]) = 1;
  v0 = 5;
  if ( (dword_486008 & 0x80u) != 0 )
  {
    BYTE2(v7[1]) = 2;
    v0 = 1;
  }
  if ( (dword_486008 & 0xE000) != 0 )
    sub_418210("high compression not compiled in");
  HIBYTE(v7[1]) = v0;
  LOWORD(v7[0]) = htons(0x1010u);
  LOWORD(v7[1]) = htons(0x940u);
  HIWORD(v7[0]) = htons(0x2030u);
  v7[2] = htonl(0x3000000u);
  if ( (dword_486008 & 0x20000) == 0 || BYTE2(v7[1]) == 3 )
  {
    v7[2] |= htonl(1u);
    if ( (dword_486008 & 0x10000) != 0 )
      v7[2] |= htonl(2u);
  }
  sub_471D00(9, &unk_480370);
  *(_QWORD *)&MultiByteStr = 1;
  sub_471D00(25, v7);
  sub_412D90((int)v7, 25);
  v7[2] = htonl(v7[2]);
  v1 = MultiByteStr;
  if ( (v7[2] & 0x1000) != 0 )
    v1 = *(&MultiByteStr + 1);
  v2 = htonl(v1);
  *(_DWORD *)hostshort = v3;
  v6 = v2;
  sub_471D00(4, &v6);
  return sub_440630(*(_DWORD *)hostshort);
}

