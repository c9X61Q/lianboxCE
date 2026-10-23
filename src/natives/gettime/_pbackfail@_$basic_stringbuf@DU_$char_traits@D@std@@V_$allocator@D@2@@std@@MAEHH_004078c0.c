// gettime.exe @ 0x4078c0 size=219

int __thiscall std::stringbuf::pbackfail(_DWORD **this, int a2)
{
  char v3; // bl
  int v4; // [esp+4h] [ebp-14h] BYREF
  int v5; // [esp+8h] [ebp-10h] BYREF
  unsigned int v6; // [esp+Ch] [ebp-Ch]
  _DWORD **v7; // [esp+10h] [ebp-8h]
  char v8; // [esp+17h] [ebp-1h] BYREF

  v7 = this;
  v6 = unknown_libname_36(this);
  if ( v6 == 0 )
    return std::numeric_limits<unsigned int>::max();
  if ( v6 <= unknown_libname_32(v7) )
    return std::numeric_limits<unsigned int>::max();
  v5 = std::numeric_limits<unsigned int>::max();
  if ( !unknown_libname_34(&v5, &a2) )
  {
    v8 = std::_Narrow_char_traits<char,int>::to_char_type(&a2);
    if ( !unknown_libname_33(&v8, (char *)(v6 - 1)) && ((unsigned int)v7[15] & 2) != 0 )
      return std::numeric_limits<unsigned int>::max();
  }
  std::streambuf::gbump((int)v7, -1);
  v4 = std::numeric_limits<unsigned int>::max();
  if ( !unknown_libname_34(&v4, &a2) )
  {
    v3 = std::_Narrow_char_traits<char,int>::to_char_type(&a2);
    *(_BYTE *)unknown_libname_36(v7) = v3;
  }
  return sub_407620((int)&a2);
}

