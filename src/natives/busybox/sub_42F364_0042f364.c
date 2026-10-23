// busybox.exe @ 0x42f364 size=195

int __userpurge sub_42F364@<eax>(char *a1@<eax>, _DWORD *a2@<edx>, __time32_t a3)
{
  int v5; // ebx
  signed int i; // eax
  char v7; // al
  char v8; // dl
  char v10; // [esp+4h] [ebp-14h]

  v5 = 1;
  if ( (a2[4] & 0xF000) == 0x4000 && *(&MultiByteStr + 1) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( (int)*(&MultiByteStr + 1) <= i )
      {
        v5 = 0;
        goto LABEL_9;
      }
      if ( *(_DWORD *)(MultiByteStr + 4 * i) == *a2 )
        break;
    }
    v5 = 1;
  }
LABEL_9:
  if ( NumOfElements > a3 )
    return 2 - v5;
  if ( *(&NumOfElements + 1) < a3 )
    return 2;
  v7 = sub_42CC5C((int (****)(void))qword_485BF0, (int)a2);
  v8 = v7;
  if ( (v7 & 1) != 0 && *((_BYTE *)&qword_485BF0 + 4) != 0 )
  {
    v10 = v7;
    sub_46F108(a1);
    v8 = v10;
  }
  if ( (a2[4] & 0xF000) == 0x4000 && *(&NumOfElements + 1) == a3 || v5 == 0 || (v8 & 2) != 0 )
    return 2;
  return v5;
}

