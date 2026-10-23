// busybox.exe @ 0x450734 size=292

const char *__usercall sub_450734@<eax>(char *Str1@<ecx>, int a2@<eax>, int a3@<edx>)
{
  const char *v5; // ebx
  char *v6; // esi
  char *v7; // edi
  int v8; // eax
  const char *v9; // eax

  v5 = Str1;
  v6 = &Str1[strlen(Str1)];
  v7 = (char *)&v5[a2];
  while ( 1 )
  {
    v8 = getchar();
    if ( v8 == -1 )
    {
      if ( v5 == v6 )
        goto LABEL_32;
LABEL_15:
      BYTE1(dword_485C04) = 4;
      LOBYTE(v8) = 0;
      goto LABEL_20;
    }
    if ( BYTE1(dword_485C04) == 2 )
    {
      BYTE1(dword_485C04) = 0;
    }
    else
    {
      if ( BYTE1(dword_485C04) == 1 )
      {
        if ( BYTE2(dword_485C04) == v8 )
        {
          *(_WORD *)((char *)&dword_485C04 + 1) = 0;
          goto LABEL_21;
        }
        goto LABEL_20;
      }
      if ( (unsigned __int8)(v8 - 9) <= 4u || (_BYTE)v8 == 32 )
      {
        if ( v5 == v6 )
          goto LABEL_21;
        goto LABEL_15;
      }
      if ( v8 == 92 )
      {
        BYTE1(dword_485C04) = 2;
        goto LABEL_21;
      }
      if ( v8 == 34 || v8 == 39 )
      {
        BYTE2(dword_485C04) = v8;
        BYTE1(dword_485C04) = 1;
        goto LABEL_21;
      }
    }
LABEL_20:
    *v6++ = v8;
LABEL_21:
    if ( BYTE1(dword_485C04) == 4 )
      break;
LABEL_31:
    if ( v6 == v7 )
      goto LABEL_32;
  }
  BYTE1(dword_485C04) = 0;
  if ( BYTE2(dword_485C04) != 0 )
  {
    v9 = "single";
    if ( BYTE2(dword_485C04) != 39 )
      v9 = "double";
    sub_41784C("unmatched %s quote", v9);
  }
  if ( HIDWORD(qword_485BEC) == 0 || strcmp(v5, (const char *)HIDWORD(qword_485BEC)) != 0 )
  {
    sub_463214();
    v5 = v6;
    if ( --a3 == 0 )
      goto LABEL_32;
    goto LABEL_31;
  }
  while ( getchar() != -1 )
    ;
  v6 = (char *)v5;
LABEL_32:
  *v6 = 0;
  return v5;
}

