// gettime.exe @ 0x403e40 size=78

int __thiscall std::locale::id::operator unsigned int(_DWORD *this)
{
  _BYTE v2[4]; // [esp+0h] [ebp-8h] BYREF
  _DWORD *v3; // [esp+4h] [ebp-4h]

  v3 = this;
  if ( *this == 0 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v2, 0);
    if ( *v3 == 0 )
      *v3 = ++dword_4380B0;
    std::_Lockit::~_Lockit((std::_Lockit *)v2);
  }
  return *v3;
}

