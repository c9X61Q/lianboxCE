// busybox.exe @ 0x46c6ec size=362

void __cdecl __noreturn sub_46C6EC(char a1, int a2)
{
  int v2; // ebx
  __int16 v3; // di
  int v4; // ecx
  char *v5; // esi
  int v6; // ebx
  unsigned __int16 v7; // ax
  int v8; // edi
  const char *v9; // edx
  int v10; // eax
  int v11; // ebx
  FILE *Stream; // eax
  const char *v13; // eax
  CHAR v14[45]; // [esp+16h] [ebp-DAh] BYREF
  _BYTE v15[61]; // [esp+43h] [ebp-ADh] BYREF
  _BYTE v16[16]; // [esp+80h] [ebp-70h] BYREF
  int v17; // [esp+90h] [ebp-60h]
  char *v18; // [esp+E0h] [ebp-10h]

  v18 = &a1;
  v2 = a2;
  v3 = sub_444EA4(a2, 438);
  v5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
  if ( sub_435D44(v2, (int)"^m") == 0 )
    v5 = "`!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`";
  v6 = v2 + 4 * dword_473090;
  if ( *(_DWORD *)(v6 + 4) != 0 )
  {
    v8 = sub_47154C(v4, 0);
    sub_44305C(v8, (int)v16);
    v7 = v17 & 0x1FF;
    v6 += 4;
  }
  else
  {
    v7 = ~v3 & 0x1B6;
  }
  v9 = (const char *)&unk_47A894;
  if ( v5 != "`!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`" )
    v9 = "-base64";
  sub_46F088("begin%s %o %s", v9, v7, *(const char **)v6);
  while ( 1 )
  {
    v10 = sub_432664(45, v14);
    v11 = v10;
    if ( v10 == 0 )
      break;
    if ( v10 < 0 )
      sub_41823C("read error");
    sub_41846C(v15, v14, v10, (int)v5);
    sub_418130(10);
    if ( v5 == "`!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`" )
      sub_418130((unsigned __int8)a0123456789Abcd[v11]);
    Stream = off_4730E8(1);
    fflush(Stream);
    sub_471D00(4 * ((v11 + 2) / 3u), v15);
  }
  v13 = "\n`\nend\n";
  if ( v5 != "`!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`" )
    v13 = "\n====\n";
  sub_46F088(v13);
  sub_42F138(0);
}

