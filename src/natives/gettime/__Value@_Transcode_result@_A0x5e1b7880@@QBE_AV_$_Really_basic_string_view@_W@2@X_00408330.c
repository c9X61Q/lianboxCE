// gettime.exe @ 0x408330 size=32

_DWORD *__thiscall `anonymous namespace'::_Transcode_result::_Value(_DWORD *this, _DWORD *a2)
{
  int v2; // edx

  v2 = *(this + 1);
  *a2 = *this;
  a2[1] = v2;
  return a2;
}

