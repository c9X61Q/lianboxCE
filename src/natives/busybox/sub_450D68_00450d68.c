// busybox.exe @ 0x450d68 size=602

int __cdecl sub_450D68(int a1, int a2)
{
  unsigned __int64 v2; // rax
  const char *v3; // eax
  int v4; // edx
  int v5; // ecx
  char *v6; // eax
  int v7; // eax
  signed int v8; // edx
  unsigned __int16 *v9; // ecx
  int v10; // ecx
  char *v11; // ebx
  int v12; // esi
  const char **v13; // eax
  HANDLE *v14; // esi
  char *v15; // ebx
  int v16; // edi
  int v17; // ebp
  size_t v18; // eax
  _DWORD *v20; // [esp+10h] [ebp-34h] BYREF
  char Destination[46]; // [esp+16h] [ebp-2Eh] BYREF

  v20 = nullptr;
  LODWORD(v2) = sub_411CF0();
  *(&qword_485BF8 + 1) = sub_4026E0(v2, 0x3E8u, 0);
  qword_485BF8 = sub_416EB0();
  sub_435D44(a2, (int)"Zo:*aAdefl", &v20);
  if ( v20 != nullptr )
  {
    do
    {
      v3 = (const char *)sub_43E400(&v20);
      sub_44AC6C(v3);
    }
    while ( v20 != nullptr );
  }
  else
  {
    strcpy(Destination, "pid,ppid,user,time,etime,args");
    sub_44AC6C(Destination);
  }
  unk_485BF4 = (char *)2048;
  if ( sub_443380(1) != 0 )
  {
    v6 = (char *)(sub_43571C(v5, v4) - 1);
    if ( (unsigned int)v6 > 0x800 )
      unk_485BF4 = (char *)2048;
    else
      unk_485BF4 = v6;
  }
  v7 = 0;
  v8 = 0;
  while ( v8 < (int)*(&MultiByteStr + 1) )
  {
    v9 = (unsigned __int16 *)(MultiByteStr + 20 * v8);
    LODWORD(qword_485BEC) = *((_DWORD *)v9 + 4) | qword_485BEC;
    if ( **((_BYTE **)v9 + 2) != 0 )
      unk_485BE8 = 1;
    v7 += *v9 + 1;
    ++v8;
    if ( v7 - (int)unk_485BF4 > 0 )
    {
      *(&MultiByteStr + 1) = v8;
      break;
    }
  }
  v11 = (char *)sub_470E78();
  HIDWORD(qword_485BEC) = v11;
  if ( unk_485BE8 != 0 )
  {
    if ( *(&MultiByteStr + 1) != 0 )
    {
      v12 = 0;
      while ( 1 )
      {
        v13 = (const char **)(MultiByteStr + 20 * v12++);
        if ( v12 == *(&MultiByteStr + 1) )
          break;
        v11 += sub_4626B8(v11, "%-*s ", *(unsigned __int16 *)v13, v13[2]);
      }
      strcpy(v11, v13[2]);
    }
    sub_46F088("%.*s\n", (int)unk_485BF4, (const char *)HIDWORD(qword_485BEC));
  }
  v14 = nullptr;
  while ( 1 )
  {
    v14 = sub_450908(v14, qword_485BEC, v10);
    if ( v14 == nullptr )
      break;
    if ( *(&MultiByteStr + 1) != 0 )
    {
      v15 = (char *)HIDWORD(qword_485BEC);
      v16 = 0;
      while ( 1 )
      {
        v17 = 20 * v16;
        (*(void (__cdecl **)(char *, _DWORD, HANDLE *))(20 * v16 + MultiByteStr + 12))(
          v15,
          *(unsigned __int16 *)(20 * v16 + MultiByteStr),
          v14);
        if ( *v15 == 0 )
          *(_WORD *)v15 = 45;
        v18 = strlen(v15);
        if ( ++v16 == *(&MultiByteStr + 1) )
          break;
        v15 += sub_4626B8(&v15[v18], "%*s", *(unsigned __int16 *)(MultiByteStr + v17) - v18 + 1, " ") + v18;
      }
    }
    sub_46F088("%.*s\n", (int)unk_485BF4, (const char *)HIDWORD(qword_485BEC));
  }
  return 0;
}

