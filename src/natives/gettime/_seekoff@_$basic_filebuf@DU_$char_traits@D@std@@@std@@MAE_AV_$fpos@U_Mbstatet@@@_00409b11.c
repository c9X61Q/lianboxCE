// gettime.exe @ 0x409b11 size=193

_DWORD *__thiscall std::filebuf::seekoff(int this, _DWORD *a2, __int64 a3, int Origin, int a5)
{
  __int64 v6; // kr00_8
  int v8; // esi
  int v9; // edi
  fpos_t v10; // kr08_8
  fpos_t Position; // [esp+Ch] [ebp-8h] BYREF

  if ( **(_DWORD **)(this + 28) == this + 60 && Origin == 1 && *(_DWORD *)(this + 56) == 0 )
    v6 = a3 - 1;
  else
    v6 = a3;
  if ( *(_DWORD *)(this + 76) == 0
    || !std::filebuf::_Endwrite((void *)this)
    || (v6 != 0 || Origin != 1) && _fseeki64(*(FILE **)(this + 76), v6, Origin) != 0
    || fgetpos(*(FILE **)(this + 76), &Position) != 0 )
  {
    *a2 = -1;
    a2[1] = -1;
    a2[2] = 0;
    a2[3] = 0;
    a2[4] = 0;
    a2[5] = 0;
    return a2;
  }
  else
  {
    std::filebuf::_Reset_back(this);
    v8 = *(_DWORD *)(this + 64);
    v9 = *(_DWORD *)(this + 68);
    v10 = Position;
    a2[2] = 0;
    a2[3] = 0;
    *(_QWORD *)a2 = v10;
    a2[4] = v8;
    a2[5] = v9;
    return a2;
  }
}

