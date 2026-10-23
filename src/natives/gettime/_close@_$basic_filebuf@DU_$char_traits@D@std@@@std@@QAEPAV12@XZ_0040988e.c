// gettime.exe @ 0x40988e size=91

int __fastcall std::filebuf::close(int a1)
{
  int v2; // edi
  int v4; // ecx
  int v5; // edx

  if ( *(_DWORD *)(a1 + 76) == 0
    || (std::filebuf::_Reset_back(a1),
        v2 = std::filebuf::_Endwrite((void *)a1) ? a1 : 0,
        fclose(*(FILE **)(a1 + 76)) != 0) )
  {
    v2 = 0;
  }
  *(_BYTE *)(a1 + 72) = 0;
  *(_BYTE *)(a1 + 61) = 0;
  std::streambuf::_Init((_DWORD *)a1);
  *(_DWORD *)(a1 + 76) = 0;
  v4 = dword_4381D4;
  v5 = dword_4381D8;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 64) = v4;
  *(_DWORD *)(a1 + 68) = v5;
  return v2;
}

