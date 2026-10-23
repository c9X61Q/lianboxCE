// gettime.exe @ 0x409833 size=51

_DWORD *__thiscall std::filebuf::_Set_back(int this)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // ecx
  _DWORD *result; // eax

  v2 = *(_DWORD **)(this + 12);
  v3 = this + 60;
  if ( *v2 != this + 60 )
  {
    v4 = *(_DWORD **)(this + 28);
    *(_DWORD *)(this + 80) = *v2;
    *(_DWORD *)(this + 84) = *v4 + **(_DWORD **)(this + 44);
  }
  *v2 = v3;
  **(_DWORD **)(this + 28) = v3;
  result = *(_DWORD **)(this + 44);
  *result = 1;
  return result;
}

