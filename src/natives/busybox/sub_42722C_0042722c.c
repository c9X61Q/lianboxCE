// busybox.exe @ 0x42722c size=541

int sub_42722C()
{
  u_short v0; // ax
  int v1; // eax
  u_long v2; // eax
  void *v3; // edx
  int v4; // ebx
  u_long v5; // edi
  u_long v6; // eax
  void *v7; // ecx
  u_long v8; // esi
  u_long v9; // ebx
  void *Buf1; // [esp+0h] [ebp-138h]
  void *Buf1a; // [esp+0h] [ebp-138h]
  u_long v13; // [esp+Ch] [ebp-12Ch]
  u_short v14[3]; // [esp+10h] [ebp-128h] BYREF
  char v15; // [esp+16h] [ebp-122h]
  char v16; // [esp+17h] [ebp-121h]
  u_long netlong; // [esp+18h] [ebp-120h]
  char v18; // [esp+28h] [ebp-110h]

  sub_4715C8(9, v14);
  if ( memcmp(v14, &unk_480370, 9u) != 0 )
    sub_418210("bad magic number");
  *(_QWORD *)&MultiByteStr = 1;
  ((void (*)(void))sub_42E564)();
  if ( htons(v14[0]) <= 0x93Fu )
    goto LABEL_31;
  v0 = htons(v14[2]);
  if ( v0 > 0x1010u )
  {
LABEL_5:
    v1 = 16;
    goto LABEL_36;
  }
  if ( v0 <= 0x93Fu )
    goto LABEL_31;
  switch ( v15 )
  {
    case 0:
      v1 = 14;
      goto LABEL_36;
    case 1:
      if ( v16 == 0 )
      {
        v16 = 3;
        goto LABEL_18;
      }
      break;
    case 2:
      if ( v16 == 0 )
      {
        v16 = 1;
        goto LABEL_18;
      }
      break;
    case 3:
      if ( v16 == 0 )
      {
        v16 = 9;
        goto LABEL_18;
      }
      break;
    default:
      v1 = -1;
      goto LABEL_36;
  }
  if ( (unsigned __int8)(v16 - 1) > 8u )
  {
    v1 = 15;
    goto LABEL_36;
  }
LABEL_18:
  v2 = ntohl(netlong);
  Buf1 = v3;
  netlong = v2;
  if ( (v2 & 0x800) != 0 )
    goto LABEL_5;
  v4 = v2 & 0xFC000;
  if ( (v2 & 0xFC000) != 0 )
  {
    v1 = -13;
    goto LABEL_36;
  }
  if ( v18 != 0 )
    sub_42E564(v3);
  v5 = MultiByteStr;
  if ( (netlong & 0x1000) != 0 )
    v5 = *(&MultiByteStr + 1);
  if ( sub_456700() != v5 )
  {
    v1 = 2;
LABEL_36:
    sub_41784C("header_error %d", v1);
  }
  if ( (netlong & 0x40) != 0 )
  {
    *(_QWORD *)&MultiByteStr = 1;
    sub_42E564(Buf1);
    v6 = ntohl(v13);
    Buf1a = v7;
    v8 = v6;
    while ( v4 != v8 )
    {
      sub_42E564(Buf1a);
      ++v4;
    }
    v9 = MultiByteStr;
    if ( (netlong & 0x1000) != 0 )
      v9 = *(&MultiByteStr + 1);
    if ( sub_456700() != v9 )
    {
LABEL_31:
      v1 = 3;
      goto LABEL_36;
    }
  }
  return sub_4408D4();
}

