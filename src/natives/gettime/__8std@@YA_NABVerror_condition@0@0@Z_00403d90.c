// gettime.exe @ 0x403d90 size=82

bool __cdecl std::operator==(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // esi
  int v5; // [esp-4h] [ebp-Ch]
  char v6; // [esp+4h] [ebp-4h]

  v5 = unknown_libname_24(a2);
  v2 = (_DWORD *)unknown_libname_24(a1);
  v6 = false;
  if ( unknown_libname_11(v2, v5) )
  {
    v3 = unknown_libname_48(a1);
    if ( v3 == unknown_libname_48(a2) )
      return true;
  }
  return v6;
}

