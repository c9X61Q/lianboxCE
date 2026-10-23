// gettime.exe @ 0x4014a0 size=32

_DWORD *__thiscall sub_4014A0(_DWORD *this, _DWORD *a2)
{
  int v3; // ecx

  v3 = a2[1];
  *this = *a2;
  *(this + 1) = v3;
  return this;
}

