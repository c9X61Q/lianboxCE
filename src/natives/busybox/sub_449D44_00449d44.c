// busybox.exe @ 0x449d44 size=118

_BYTE *__usercall sub_449D44@<eax>(char *a1@<eax>, const char *Str@<edx>, signed int a3@<ecx>, char a4, char a5)
{
  char *v7; // eax
  signed int v8; // ebx
  char v9; // dl
  char v10; // dl
  signed int v12; // [esp+4h] [ebp-18h]

  v12 = a3;
  if ( a3 == -1 )
    v12 = strlen(Str);
  v7 = a1;
  v8 = 0;
  while ( v8 < v12 )
  {
    if ( Str[v8] == 92 )
    {
      v9 = Str[v8 + 1];
      if ( a5 == 0 )
        goto LABEL_9;
      if ( a4 == v9 )
      {
        v9 = a5;
LABEL_9:
        *v7 = v9;
        if ( v9 == 0 )
          return (_BYTE *)(v7 - a1);
        v8 += 2;
        goto LABEL_14;
      }
      ++v8;
      *v7++ = 92;
    }
    v10 = Str[v8];
    *v7 = v10;
    if ( v10 == 0 )
      return (_BYTE *)(v7 - a1);
    ++v8;
LABEL_14:
    ++v7;
  }
  *v7 = 0;
  return (_BYTE *)(v7 - a1);
}

