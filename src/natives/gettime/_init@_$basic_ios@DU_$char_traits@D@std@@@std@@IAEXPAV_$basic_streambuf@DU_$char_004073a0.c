// gettime.exe @ 0x4073a0 size=97

void __thiscall std::ios::init(int this, int a2, char a3)
{
  std::ios_base::_Init((std::ios_base *)this);
  *(_DWORD *)(this + 56) = a2;
  *(_DWORD *)(this + 60) = 0;
  *(_BYTE *)(this + 64) = sub_408550(32);
  if ( *(_DWORD *)(this + 56) == 0 )
    sub_408150(4, 0);
  if ( a3 != 0 )
    std::ios_base::_Addstd((struct std::ios_base *)this);
}

