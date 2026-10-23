// busybox.exe @ 0x437e28 size=408

_BYTE *__usercall sub_437E28@<eax>(const char *a1@<eax>, unsigned int a2@<edx>)
{
  char v3; // al
  int (*v4)(); // esi
  int (*v5)(); // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  _BYTE *v9; // esi
  void *Block; // [esp+0h] [ebp-F4h]
  int FileHandle; // [esp+10h] [ebp-E4h]
  CHAR *i; // [esp+14h] [ebp-E0h]

  FileHandle = sub_447A6C();
  if ( FileHandle < 0 )
    return nullptr;
  v3 = dword_485AD0[3];
  switch ( v3 )
  {
    case 's':
      sub_4424FC();
      v4 = (int (*)())sub_442530;
      v5 = (int (*)())sub_442554;
      v6 = 16;
      break;
    case '1':
      sub_45EEC8();
      v4 = sub_45EF04;
      v5 = (int (*)())sub_442554;
      v6 = 20;
      break;
    case '2':
      sub_45F0AC();
      v4 = sub_45EF04;
      v5 = (int (*)())sub_442554;
      v6 = 32;
      break;
    case '5':
      sub_45F530();
      v4 = sub_45F564;
      v5 = sub_45F62C;
      v6 = 64;
      break;
    case '3':
      sub_45F288();
      if ( a2 - 1 > 0x31E || (a2 & 0x1F) != 0 )
        sub_41784C("bad -a%u", a2);
      v6 = a2 >> 3;
      v4 = sub_45F2A4;
      v5 = sub_45F2DC;
      break;
    default:
      sub_470D44(Block);
  }
  for ( i = (CHAR *)sub_470E78(); ; ((void (__fastcall *)(int, CHAR *))v5)(v7, i) )
  {
    v7 = sub_45C560(4096, i);
    if ( v7 <= 0 )
      break;
  }
  if ( v7 != 0 )
  {
    sub_417FE4(v8, "can't read '%s'", a1);
    v9 = nullptr;
  }
  else
  {
    ((void (__fastcall *)(_DWORD, CHAR *))v4)(0, i);
    v9 = (_BYTE *)sub_4728CC();
    sub_418AC0(v9, (unsigned __int8 *)i, v6);
  }
  free(i);
  if ( FileHandle != 0 )
    sub_442EA4(FileHandle);
  return v9;
}

