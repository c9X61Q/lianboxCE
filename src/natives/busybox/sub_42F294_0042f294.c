// busybox.exe @ 0x42f294 size=205

int __userpurge sub_42F294@<eax>(char *a1@<eax>, int a2@<edx>, const char *a3@<ecx>, int a4)
{
  int v7; // edx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // bx
  unsigned __int16 v10; // bp
  int v11; // eax
  char *v12; // eax
  int v13; // ebx

  if ( a4 != 0 )
  {
    if ( (*(_DWORD *)(a2 + 16) & 0xF000) == 0xA000 )
      return 1;
  }
  else if ( sub_444C28(a1, a2) != 0 )
  {
    goto LABEL_14;
  }
  v8 = sub_417E48(a3, *(unsigned __int16 *)(a2 + 16), (int)a3);
  v9 = v8;
  if ( v8 == 0xFFFF )
    sub_41784C("invalid mode '%s'", a3);
  v10 = v8;
  v11 = sub_442E6C(a1, v8);
  if ( v11 == 0 )
  {
    if ( (dword_486008 & 2) != 0 || (dword_486008 & 4) != 0 && *(_WORD *)(a2 + 16) != v9 )
    {
      v12 = sub_417DC8(v10);
      sub_46F088("mode of '%s' changed to %04o (%s)\n", a1, v9 & 0xFFF, v12 + 1);
    }
    return 1;
  }
LABEL_14:
  v13 = 0;
  if ( (dword_486008 & 8) == 0 )
    sub_418224(a1, v7);
  return v13;
}

