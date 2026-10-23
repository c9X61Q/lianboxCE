// busybox.exe @ 0x44f5e8 size=76

char *__usercall sub_44F5E8@<eax>(char *Str@<ecx>, int a2@<eax>, int a3@<edx>)
{
  char *v5; // ebx
  char *v6; // ebp
  char *v7; // edi
  int v8; // eax

  v5 = Str;
  v6 = &Str[strlen(Str)];
  v7 = &v5[a2];
  do
  {
    v8 = getchar();
    if ( v8 == -1 )
    {
      if ( v5 == v6 )
        break;
      v8 = 0;
    }
    *v6++ = v8;
    if ( v8 == 0 )
    {
      sub_463214();
      v5 = v6;
      if ( --a3 == 0 )
        break;
    }
  }
  while ( v7 != v6 );
  *v6 = 0;
  return v5;
}

