// gettime.exe @ 0x409810 size=35

_DWORD *__thiscall std::filebuf::_Reset_back(int this)
{
  _DWORD *v1; // edi
  _DWORD *result; // eax
  int v3; // edx
  int v4; // esi

  v1 = *(_DWORD **)(this + 12);
  result = (_DWORD *)(this + 60);
  if ( *v1 == this + 60 )
  {
    v3 = *(_DWORD *)(this + 80);
    v4 = *(_DWORD *)(this + 84);
    *v1 = v3;
    **(_DWORD **)(this + 28) = v3;
    result = *(_DWORD **)(this + 44);
    *result = v4 - v3;
  }
  return result;
}

