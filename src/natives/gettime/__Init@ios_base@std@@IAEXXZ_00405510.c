// gettime.exe @ 0x405510 size=159

void __thiscall std::ios_base::_Init(std::ios_base *this)
{
  _DWORD *v1; // [esp+0h] [ebp-Ch]
  _DWORD *v2; // [esp+4h] [ebp-8h]

  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 513;
  *((_DWORD *)this + 6) = 6;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  std::ios_base::clear(this, 0);
  v2 = operator new(8u);
  if ( v2 != nullptr )
    v1 = sub_4032E0(v2);
  else
    v1 = nullptr;
  *((_DWORD *)this + 12) = v1;
}

