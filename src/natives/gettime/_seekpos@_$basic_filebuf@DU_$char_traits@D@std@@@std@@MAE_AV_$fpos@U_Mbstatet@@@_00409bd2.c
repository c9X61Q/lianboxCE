// gettime.exe @ 0x409bd2 size=144

int __thiscall std::filebuf::seekpos(int this, int a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  int v9; // esi
  int v10; // edi
  fpos_t v11; // kr00_8
  fpos_t Position; // [esp+8h] [ebp-8h] BYREF

  Position = a4 + a3;
  if ( *(_DWORD *)(this + 76) != 0
    && std::filebuf::_Endwrite((void *)this)
    && fsetpos(*(FILE **)(this + 76), &Position) == 0 )
  {
    *(_DWORD *)(this + 68) = a6;
    *(_DWORD *)(this + 64) = a5;
    std::filebuf::_Reset_back(this);
    v9 = *(_DWORD *)(this + 64);
    v10 = *(_DWORD *)(this + 68);
    v11 = Position;
    *(_DWORD *)(a2 + 16) = v9;
    *(_QWORD *)a2 = v11;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 20) = v10;
    return a2;
  }
  else
  {
    *(_DWORD *)a2 = -1;
    *(_DWORD *)(a2 + 4) = -1;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)(a2 + 20) = 0;
    return a2;
  }
}

