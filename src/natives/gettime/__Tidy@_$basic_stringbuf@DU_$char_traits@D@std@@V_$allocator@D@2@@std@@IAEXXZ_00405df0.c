// gettime.exe @ 0x405df0 size=154

_DWORD *__thiscall std::stringbuf::_Tidy(_DWORD *this)
{
  int v1; // eax
  void *v2; // eax
  int v4; // [esp-4h] [ebp-Ch]
  int v5; // [esp+0h] [ebp-8h]

  if ( (*(this + 15) & 1) != 0 )
  {
    if ( unknown_libname_39(this) != 0 )
      v5 = std::streambuf::epptr(this);
    else
      v5 = std::streambuf::egptr(this);
    v4 = v5 - unknown_libname_32(this);
    v1 = unknown_libname_32(this);
    v2 = (void *)sub_407A00(v1);
    std::allocator<char>::deallocate(v2, v4);
  }
  std::streambuf::setg(0, 0, 0);
  std::streambuf::setp(0, 0);
  *(this + 14) = 0;
  *(this + 15) &= ~1u;
  return this;
}

