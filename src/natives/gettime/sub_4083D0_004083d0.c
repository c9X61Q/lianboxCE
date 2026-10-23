// gettime.exe @ 0x4083d0 size=93

int __thiscall sub_4083D0(_DWORD **this)
{
  unsigned __int8 *v1; // eax
  int v3; // [esp+0h] [ebp-10h] BYREF
  int v4; // [esp+4h] [ebp-Ch] BYREF
  _DWORD **v6; // [esp+Ch] [ebp-4h]

  v6 = this;
  v4 = ((int (__thiscall *)(_DWORD **))(*this)[6])(this);
  v3 = std::numeric_limits<unsigned int>::max();
  if ( unknown_libname_34(&v3, &v4) )
    return std::numeric_limits<unsigned int>::max();
  v1 = (unsigned __int8 *)std::streambuf::_Gninc(v6);
  return std::_Narrow_char_traits<char,int>::to_char_type(v1);
}

