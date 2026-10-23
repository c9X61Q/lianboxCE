// busybox.exe @ 0x470174 size=407

int __usercall sub_470174@<eax>(HANDLE *Size@<ecx>, int result@<eax>, int a3@<edx>, void *Buf1, char *Buf2)
{
  unsigned int i; // esi
  _DWORD *v7; // ecx
  FILE *v8; // eax
  unsigned __int8 *j; // ebp
  int v10; // eax
  int v11; // [esp+10h] [ebp-18h]

  v11 = result;
  if ( (dword_486008 & 0x2000) != 0
    || (_BYTE)dword_485C0C == 0
    || lpHandles != Size
    || (result = memcmp(Buf1, Buf2, (size_t)Size)) != 0 )
  {
    LOWORD(dword_485C0C) = 1;
    for ( i = 0; qword_485BE8 > i; ++i )
    {
      if ( i != 0 )
        sub_46F088("%*s", LOBYTE(dword_485C10[0]) - 48, (const char *)&unk_479EFF);
      else
        ((void (__cdecl *)(int, int, _DWORD))unk_485BF0)(v11, a3, 0);
      (*(void (__cdecl **)(HANDLE *, char *, _DWORD))(24 * i + *(&qword_485BE8 + 1) + 8))(
        Size,
        Buf2,
        *(_DWORD *)(24 * i + *(&qword_485BE8 + 1) + 12));
      v7 = (_DWORD *)(24 * i + *(&qword_485BE8 + 1));
      if ( v7[4] != 0 )
      {
        sub_46F088(
          "%*s",
          (v7[5] + 1) * (((char *)lpHandles - (char *)Size) / (unsigned int)byte_484B10[v7[1]]),
          (const char *)&unk_479EFF);
        v8 = off_4730E8(1);
        sub_46EF20("  >", v8);
        for ( j = (unsigned __int8 *)Buf2; j != (unsigned __int8 *)Size + (_DWORD)Buf2; ++j )
        {
          v10 = *j;
          if ( (unsigned int)(v10 - 32) > 0x5E )
            v10 = 46;
          sub_46F0B8(v10);
        }
        sub_46F0B8(60);
      }
      result = sub_46F0B8(10);
    }
  }
  else if ( BYTE1(dword_485C0C) == 0 )
  {
    result = sub_46F108("*");
    BYTE1(dword_485C0C) = 1;
  }
  return result;
}

