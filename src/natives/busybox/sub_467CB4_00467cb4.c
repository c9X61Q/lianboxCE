// busybox.exe @ 0x467cb4 size=302

int __usercall sub_467CB4@<eax>(int a1@<ebx>)
{
  int v1; // edi
  unsigned __int16 v2; // ax
  int v3; // ebp
  unsigned __int16 v4; // bx
  int v5; // ecx
  const char *v6; // esi
  int v7; // edx
  char *v8; // eax
  unsigned __int16 v9; // ax
  int v10; // ecx
  unsigned __int16 v11; // bx
  char *v12; // eax
  char v14; // [esp+9h] [ebp-23h] BYREF
  char Buffer[34]; // [esp+Ah] [ebp-22h] BYREF

  v1 = 0;
  while ( sub_446AFC("S") != 0 )
    v1 = 1;
  ++*(_DWORD *)(dword_485FF0 + 56);
  v2 = sub_444EA4(a1, 0);
  v3 = v2;
  v4 = v2;
  sub_444EA4(v2, v2);
  sub_43B8DC();
  v6 = *(const char **)dword_47310C;
  if ( *(_DWORD *)dword_47310C != 0 )
  {
    if ( (unsigned __int8)(*v6 - 48) > 9u )
      v4 ^= 0x1FFu;
    v9 = sub_417E48(*(const char **)dword_47310C, v4, v5);
    v11 = v9;
    if ( v9 > 0x1FFu )
      sub_415B40(v10, "illegal mode: %s", v6);
    if ( (unsigned __int8)(*v6 - 48) > 9u )
      v11 = v9 ^ 0x1FF;
    sub_444EA4(v11, v11);
    v12 = (char *)sub_4708BC("BB_UMASK=0%o", v11);
    sub_45ECA8(v12, 0x101u);
  }
  else if ( v1 != 0 )
  {
    v7 = 2;
    v8 = &v14;
    do
    {
      *v8 = 44;
      v8[1] = byte_483A20[v7];
      v8[2] = 61;
      if ( (v4 & 0x100) != 0 )
      {
        v8 += 3;
      }
      else
      {
        v8[3] = 114;
        v8 += 4;
      }
      if ( (v4 & 0x80u) == 0 )
        *v8++ = 119;
      if ( (v4 & 0x40) == 0 )
        *v8++ = 120;
      v4 *= 8;
      --v7;
    }
    while ( v7 != -1 );
    *v8 = 0;
    sub_46F108(Buffer);
  }
  else
  {
    sub_4480E8("%04o\n", v3);
  }
  return 0;
}

