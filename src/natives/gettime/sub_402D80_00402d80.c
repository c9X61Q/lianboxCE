// gettime.exe @ 0x402d80 size=32

_DWORD *__thiscall sub_402D80(_DWORD *this, _DWORD *a2)
{
  int v2; // edx

  v2 = a2[1];
  *this = *a2;
  *(this + 1) = v2;
  return this;
}

