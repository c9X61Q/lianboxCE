// gettime.exe @ 0x4089dc size=31

void __thiscall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  if ( *(_DWORD *)this != 0 )
  {
    if ( v1 < 8 )
      sub_40A102(&CriticalSection + v1);
  }
  else
  {
    _unlock_locales();
  }
}

