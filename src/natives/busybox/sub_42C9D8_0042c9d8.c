// busybox.exe @ 0x42c9d8 size=509

char *__usercall sub_42C9D8@<eax>(char *a1@<eax>, int a2@<edx>)
{
  int v2; // ebx
  const char *v3; // esi
  char *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ebp
  int v9; // edx
  char *v10; // eax
  char v12; // [esp+16h] [ebp-22h]
  unsigned __int8 v13; // [esp+17h] [ebp-21h]
  int v14; // [esp+18h] [ebp-20h]
  int v15; // [esp+20h] [ebp-18h]

  v2 = a2;
  v3 = a1 + 1;
  v13 = *a1;
  v12 = *a1 & 0xF;
  v14 = a2 & 0x100;
  v15 = dword_473334 - *(_DWORD *)(dword_485FF4 + 4);
  v4 = strchr(a1 + 1, 61) + 1;
  while ( 1 )
  {
    v5 = ((v13 & 0x10) == 0) + sub_46C8B8(v2, v13, v14) - 1;
    v7 = (v5 >> 21) & 0x400;
    v8 = v7;
    if ( (unsigned __int8)v12 > 5u )
      goto LABEL_11;
    if ( (unsigned __int8)v12 <= 3u )
      break;
    BYTE1(v7) ^= 4u;
    v4 = (char *)sub_463BC0(v15, v13, v7 | v2 & 0xFFFFFFEE);
    if ( (((unsigned __int16)v2 | (unsigned __int16)~(_WORD)v8) & 0x400) != 0 )
      goto LABEL_24;
    v13 &= ~0x10u;
    v12 = 1;
  }
  if ( v12 == 3 )
  {
    v8 = v7 ^ 0x400;
  }
  else if ( (v12 & 1) != 0 )
  {
LABEL_11:
    if ( (v7 & ~v2) != 0 && *(_BYTE *)(dword_485FF0 + 76) != 0 )
      sub_415B40(v6, "%.*s: %s%s", v4 - v3 - 1, v3, "parameter not set", (const char *)(dword_485FF0 + 62));
    if ( v12 == 10 )
    {
      ++v4;
      if ( (v2 & 0x400) != 0 )
        return v4;
      if ( v5 < 0 )
        v5 = 0;
      sub_4213FC(v5, v2);
      goto LABEL_25;
    }
    if ( v12 != 1 )
    {
      v2 |= v7;
      if ( (v2 & 0x400) == 0 )
        dword_473334 = (int)sub_411E88(0, (_BYTE *)dword_473334);
      v10 = (char *)sub_463BC0(v15, v13, v2);
      goto LABEL_23;
    }
LABEL_24:
    if ( (((unsigned __int16)v8 | (unsigned __int16)v2) & 0x400) != 0 )
      return v4;
LABEL_25:
    if ( v14 == 0 )
      goto LABEL_29;
    if ( a1[1] == 64 && *(_DWORD *)dword_485FEC != 0 )
    {
      v14 = 1;
LABEL_29:
      sub_459228(v14);
    }
    return v4;
  }
  v9 = v8;
  BYTE1(v9) = BYTE1(v8) ^ 4;
  v10 = sub_4148CC(v4, v2 | v9 | 0x42);
LABEL_23:
  v4 = v10;
  goto LABEL_24;
}

