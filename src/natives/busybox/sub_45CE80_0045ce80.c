// busybox.exe @ 0x45ce80 size=726

int __cdecl sub_45CE80(int a1, int a2)
{
  const char *Str1; // eax
  int v3; // ebx
  char v4; // bl
  const char **v5; // esi
  FILE *(__cdecl *v6)(int); // ebx
  const char *v7; // eax
  int v8; // edx
  _DWORD *i; // eax
  int v11; // [esp+24h] [ebp-7Ch]
  _BYTE v12[108]; // [esp+34h] [ebp-6Ch] BYREF

  dword_485C64 = (int)&dword_485C60;
  Str1 = *(const char **)(a2 + 4);
  if ( Str1 == nullptr || (v3 = strcmp(Str1, "--version")) != 0 )
  {
    v4 = sub_435D60(a2, (int)"^i::rEne:*f:*b", (int)"in-place");
    v11 = v4 & 1;
    if ( (v4 & 1) != 0 )
      dword_485FE8 = (int)sub_41C958;
    if ( (v4 & 6) != 0 )
      *(&MultiByteStr + 1) |= 1u;
    if ( (v4 & 0x40) != 0 )
      unk_485BE8 = 1;
    v5 = (const char **)(a2 + 4 * dword_473090);
    if ( (v4 & 0x30) == 0 )
    {
      if ( *v5 == nullptr )
        sub_418164();
      ++v5;
      sub_4132B4();
    }
    sub_412DC4((const char *)&unk_47B23C);
    v6 = off_4730E8;
    LODWORD(qword_485BEC) = off_4730E8(1);
    dword_485C04 = (int)v5;
    if ( *v5 != nullptr )
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( v11 != 0 )
        {
          if ( sub_444C28(v7, (int)v12) != 0 )
          {
            sub_418224(*v5, v8);
            LOBYTE(qword_485BF8) = 1;
            ++*(&qword_485BF8 + 1);
          }
          else
          {
            HIDWORD(qword_485BEC) = sub_4708BC("%sXXXXXX", *v5);
            sub_471508();
            LODWORD(qword_485BEC) = sub_470C94();
            *_errno() = 40;
            sub_44FE20();
            fclose((FILE *)qword_485BEC);
            LODWORD(qword_485BEC) = v6(1);
            sub_4716FC();
            free((void *)HIDWORD(qword_485BEC));
            HIDWORD(qword_485BEC) = 0;
            for ( i = (_DWORD *)dword_485C60; i != nullptr; i = (_DWORD *)*i )
            {
              i[4] = i[5];
              i[6] = i[7];
            }
          }
        }
        else if ( *v7 == 45 && v7[1] == 0 )
        {
          *v5 = "standard input";
          sub_44FE20();
        }
        if ( *++v5 == nullptr )
          break;
        lpHandles = (HANDLE *)((char *)lpHandles + 1);
      }
    }
    else
    {
      if ( v11 != 0 )
        sub_41784C("%s requires an argument", "-i");
      *v5 = "standard input";
    }
    sub_44FE20();
    return (char)qword_485BF8;
  }
  else
  {
    sub_46F108("This is not GNU sed version 4.0");
  }
  return v3;
}

