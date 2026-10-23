// gettime.exe @ 0x408440 size=200

int __thiscall std::stringbuf::underflow(_DWORD **this)
{
  int v2; // eax
  unsigned __int8 *v3; // eax
  int v4; // [esp-8h] [ebp-18h]
  int v5; // [esp-4h] [ebp-14h]
  int v6; // [esp+0h] [ebp-10h] BYREF
  unsigned __int8 *v7; // [esp+4h] [ebp-Ch]
  unsigned __int8 *v8; // [esp+8h] [ebp-8h]
  _DWORD **v9; // [esp+Ch] [ebp-4h]

  v9 = this;
  v8 = (unsigned __int8 *)unknown_libname_36(this);
  if ( v8 == nullptr )
    return std::numeric_limits<unsigned int>::max();
  if ( (unsigned int)v8 < std::streambuf::egptr(v9) )
    return std::_Narrow_char_traits<char,int>::to_char_type(v8);
  v6 = unknown_libname_39(v9);
  if ( v6 == 0 || ((unsigned int)v9[15] & 4) != 0 )
    return std::numeric_limits<unsigned int>::max();
  v7 = (unsigned __int8 *)*unknown_libname_5(v9 + 14, &v6);
  if ( v7 <= v8 )
    return std::numeric_limits<unsigned int>::max();
  v9[14] = v7;
  v5 = (int)v7;
  v4 = unknown_libname_36(v9);
  v2 = unknown_libname_32(v9);
  std::streambuf::setg(v9, v2, v4, v5);
  v3 = (unsigned __int8 *)unknown_libname_36(v9);
  return std::_Narrow_char_traits<char,int>::to_char_type(v3);
}

