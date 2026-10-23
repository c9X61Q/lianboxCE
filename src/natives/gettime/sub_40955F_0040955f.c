// gettime.exe @ 0x40955f size=88

_DWORD *__thiscall sub_40955F(int this)
{
  bool v2; // zf

  v2 = *(_DWORD *)(this + 76) == 0;
  *(_DWORD *)this = &std::filebuf::`vftable';
  if ( !v2 )
    std::filebuf::_Reset_back();
  if ( *(_BYTE *)(this + 72) != 0 )
    std::filebuf::close(this);
  return sub_4035C0((_DWORD *)this);
}

