// busybox.exe @ 0x434f64 size=280

int __usercall sub_434F64@<eax>(char *a1@<eax>, void *a2@<edx>)
{
  FILE *Stream; // ebx
  char *v4; // esi
  int v5; // esi
  char *v6; // ecx
  char v7; // dl
  bool v8; // al
  _BYTE *v9; // eax
  int v10; // eax
  unsigned int v12[4]; // [esp+Ch] [ebp-10h] BYREF

  sub_430F14((int)a2, a2);
  while ( 1 )
  {
    if ( (int)*(&qword_485BF8 + 1) > (int)lpHandles )
    {
      v7 = 1;
      v5 = 0;
      goto LABEL_23;
    }
    Stream = ::Stream;
    if ( ::Stream == nullptr )
    {
      v4 = *(char **)(dword_485C04 + 4 * *(&qword_485BF8 + 1));
      Stream = off_4730E8(0);
      if ( v4 != "standard input" )
      {
        Stream = (FILE *)sub_4314F0(v4, "r");
        if ( Stream == nullptr )
        {
          LOBYTE(qword_485BF8) = 1;
          goto LABEL_20;
        }
      }
      ::Stream = Stream;
    }
    v5 = sub_417980(Stream, v12);
    if ( v5 != 0 )
      break;
    sub_42EE00(Stream);
    ::Stream = nullptr;
LABEL_20:
    ++*(&qword_485BF8 + 1);
  }
  v6 = (char *)(v5 + v12[0] - 1);
  v7 = *v6;
  v8 = *v6 == 10;
  if ( *v6 != 0 && *v6 != 10 )
  {
    v7 = 1;
  }
  else
  {
    *v6 = 0;
    if ( NumOfElements != 0 || !v8 )
    {
      if ( v7 == 0 )
      {
        v10 = fgetc(Stream);
        v7 = 2;
        if ( v10 != -1 )
        {
          ungetc(v10, Stream);
          v7 = 0;
        }
      }
    }
    else
    {
      v7 = 10;
      if ( v12[0] > 1 )
      {
        v9 = (_BYTE *)(v5 + v12[0] - 2);
        if ( *v9 == 13 )
          *v9 = 0;
      }
    }
  }
LABEL_23:
  *a1 = v7;
  return v5;
}

