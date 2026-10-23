// busybox.exe @ 0x45cb14 size=98

_BYTE *__cdecl sub_45CB14(_BYTE *a1, char *a2, int a3, int a4, int a5, int a6)
{
  char *i; // esi
  char v8; // dl
  int v9; // eax
  int v10; // eax
  char v12; // [esp+Fh] [ebp-9h]

  for ( i = a2; ; ++i )
  {
    v8 = *i;
    v9 = (int)i;
    if ( a6 != 0 )
    {
      *i = 0;
      v9 = (int)a2;
    }
    v12 = v8;
    v10 = sub_4312E8(a4, v9, 0);
    *i = v12;
    if ( v10 == 0 )
      break;
    if ( a5 != 0 && *a1 == 0x81 )
      ++a1;
    ++a1;
    if ( v12 == 0 )
      return nullptr;
  }
  return a1;
}

