// gettime.exe @ 0x402960 size=81

_DWORD *__thiscall sub_402960(_DWORD *this)
{
  int v2; // [esp+0h] [ebp-Ch]
  void *v3; // [esp+4h] [ebp-8h]

  *this = &std::streambuf::`vftable';
  v3 = operator new(8u);
  if ( v3 != nullptr )
    v2 = sub_4032E0(v3);
  else
    v2 = 0;
  *(this + 13) = v2;
  std::streambuf::_Init(this);
  return this;
}

