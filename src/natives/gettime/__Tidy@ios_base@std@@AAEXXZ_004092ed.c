// gettime.exe @ 0x4092ed size=118

void __thiscall std::ios_base::_Tidy(int ***this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi

  std::ios_base::_Callfns(this, 0);
  v2 = *(this + 10);
  if ( v2 != nullptr )
  {
    do
    {
      v3 = (_DWORD *)*v2;
      sub_40A6BA(v2);
      v2 = v3;
    }
    while ( v3 != nullptr );
  }
  *(this + 10) = nullptr;
  v4 = *(this + 11);
  if ( v4 != nullptr )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      sub_40A6BA(v4);
      v4 = v5;
    }
    while ( v5 != nullptr );
  }
  *(this + 11) = nullptr;
}

