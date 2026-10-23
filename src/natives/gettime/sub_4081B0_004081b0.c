// gettime.exe @ 0x4081b0 size=111

int __thiscall sub_4081B0(_DWORD **this, char a2)
{
  _BYTE *v2; // eax
  int v3; // eax

  if ( unknown_libname_19(this) <= 0 )
  {
    v3 = std::_Narrow_char_traits<char,int>::to_char_type(&a2);
    return ((int (__thiscall *)(_DWORD **, int))(*this)[3])(this, v3);
  }
  else
  {
    v2 = (_BYTE *)std::streambuf::_Pninc(this);
    *v2 = a2;
    return std::_Narrow_char_traits<char,int>::to_char_type(v2);
  }
}

