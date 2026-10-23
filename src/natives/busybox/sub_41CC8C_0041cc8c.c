// busybox.exe @ 0x41cc8c size=201

int __usercall sub_41CC8C@<eax>(char a1@<al>)
{
  int v2; // esi
  int v3; // ebp
  char *v4; // ebx
  int v5; // eax
  int v6; // eax
  int v8; // [esp+8h] [ebp-20h]

  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    sub_45EA54();
    v4 = (char *)dword_485FF0;
    v5 = sub_44B820();
    if ( v5 != -1 )
    {
      if ( v4[68] == 0 )
      {
        v4[2] >>= 1;
        v8 = v5;
        v6 = sub_42B5DC(v5, 0);
        v2 = 0;
        if ( v8 != 0 )
          v3 = v6;
      }
      goto LABEL_14;
    }
    if ( v2 > 49 || (a1 & 1) == 0 )
      return v3;
    if ( sub_4631E0() == 0 )
      break;
LABEL_10:
    ++v2;
LABEL_14:
    sub_44D988();
    if ( byte_473328 != 0 )
    {
      byte_473328 &= 0xF3u;
      return v3;
    }
  }
  if ( v4[65] != 0 )
  {
    sub_448168();
    goto LABEL_10;
  }
  if ( v4[66] != 0 )
  {
    off_4730E8(2);
    sub_446194();
  }
  return v3;
}

