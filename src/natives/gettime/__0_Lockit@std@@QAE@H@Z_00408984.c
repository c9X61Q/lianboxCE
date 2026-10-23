// gettime.exe @ 0x408984 size=49

std::_Lockit *__thiscall std::_Lockit::_Lockit(std::_Lockit *this, int a2)
{
  *(_DWORD *)this = a2;
  if ( a2 != 0 )
  {
    if ( a2 < 8 )
      unknown_libname_57(&CriticalSection + a2);
  }
  else
  {
    _lock_locales();
  }
  return this;
}

