// gettime.exe @ 0x404610 size=29

_DWORD *__thiscall sub_404610(_DWORD *this, unsigned int a2)
{
  _DWORD *result; // eax

  result = this;
  if ( *(this + 4) < a2 )
    sub_406020(this);
  return result;
}

