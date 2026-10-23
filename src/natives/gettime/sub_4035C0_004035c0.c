// gettime.exe @ 0x4035c0 size=59

_DWORD *__thiscall sub_4035C0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  *this = &std::streambuf::`vftable';
  if ( *(this + 13) != 0 )
    return (_DWORD *)sub_404480(1);
  return result;
}

