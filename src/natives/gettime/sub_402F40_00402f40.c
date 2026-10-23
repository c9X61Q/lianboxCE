// gettime.exe @ 0x402f40 size=55

_DWORD *__thiscall sub_402F40(_DWORD *this, struct std::exception *a2)
{
  int v2; // ecx

  sub_403300(a2);
  *this = &std::_System_error::`vftable';
  v2 = *((_DWORD *)a2 + 4);
  *(this + 3) = *((_DWORD *)a2 + 3);
  *(this + 4) = v2;
  return this;
}

