// gettime.exe @ 0x402ca0 size=56

_DWORD *__thiscall std::fpos<_Mbstatet>::fpos<_Mbstatet>(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx

  *this = a2;
  *(this + 1) = a3;
  result = this;
  *(this + 2) = 0;
  *(this + 3) = 0;
  v4 = this + 4;
  *v4 = 0;
  v4[1] = 0;
  return result;
}

