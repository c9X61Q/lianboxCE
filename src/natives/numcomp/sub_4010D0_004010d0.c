// numcomp.exe @ 0x4010d0 size=201

int __cdecl sub_4010D0(int a1, int a2)
{
  int v2; // esi
  unsigned int v3; // esi
  int v5; // esi
  int v6; // esi
  unsigned int i; // [esp+Ch] [ebp-4h]

  v2 = unknown_libname_23(a1);
  if ( v2 == unknown_libname_23(a2) )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= unknown_libname_23(a1) )
        return 0;
      v5 = *(char *)sub_403390(i);
      if ( v5 != *(char *)sub_403390(i) )
        break;
    }
    v6 = *(char *)sub_403390(i);
    if ( v6 <= *(char *)sub_403390(i) )
      return -1;
    else
      return 1;
  }
  else
  {
    v3 = unknown_libname_23(a1);
    if ( v3 <= unknown_libname_23(a2) )
      return -1;
    else
      return 1;
  }
}

