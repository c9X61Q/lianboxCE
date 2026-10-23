// gettime.exe @ 0x4096b0 size=64

_DWORD *__thiscall std::string::_Erase_noexcept(_DWORD *this, int a2, unsigned int a3)
{
  _DWORD *v3; // esi
  int v4; // edx
  unsigned int v5; // eax
  int v6; // edx

  v3 = this;
  v4 = *(this + 4);
  v5 = v4 - a2;
  if ( v4 - a2 >= a3 )
    v5 = a3;
  if ( *(this + 5) >= 0x10u )
    this = (_DWORD *)*this;
  v6 = v4 - v5;
  v3[4] = v6;
  memmove((char *)this + a2, (char *)this + a2 + v5, v6 - a2 + 1);
  return v3;
}

