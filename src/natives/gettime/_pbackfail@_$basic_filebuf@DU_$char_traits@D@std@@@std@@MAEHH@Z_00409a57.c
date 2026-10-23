// gettime.exe @ 0x409a57 size=130

int __thiscall std::filebuf::pbackfail(int this, int a2)
{
  unsigned int v3; // ecx

  v3 = **(_DWORD **)(this + 28);
  if ( v3 != 0 && **(_DWORD **)(this + 12) < v3 && (a2 == -1 || *(unsigned __int8 *)(v3 - 1) == a2) )
  {
    ++**(_DWORD **)(this + 44);
    --**(_DWORD **)(this + 28);
    return a2 != -1 ? a2 : 0;
  }
  if ( *(_DWORD *)(this + 76) != 0 && a2 != -1 )
  {
    if ( *(_DWORD *)(this + 56) == 0 && ungetc((unsigned __int8)a2, *(FILE **)(this + 76)) != -1 )
      return a2;
    if ( **(_DWORD **)(this + 28) != this + 60 )
    {
      *(_BYTE *)(this + 60) = a2;
      std::filebuf::_Set_back(this);
      return a2;
    }
  }
  return -1;
}

