// resizecmdwindow.exe @ 0x140005d60 size=183

__int64 __fastcall sub_140005D60(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rcx

  v1 = (*(_BYTE *)(a1 + 112) & 1) == 0;
  *(_QWORD *)a1 = &std::stringbuf::`vftable';
  if ( !v1 )
  {
    v3 = **(_QWORD **)(a1 + 64);
    if ( v3 != 0 )
      v4 = v3 + **(int **)(a1 + 88);
    else
      v4 = **(_QWORD **)(a1 + 56) + **(int **)(a1 + 80);
    v5 = **(_QWORD ***)(a1 + 24);
    if ( (unsigned __int64)(v4 - (_QWORD)v5) >= 0x1000 )
    {
      if ( (unsigned __int64)v5 - *(v5 - 1) - 8 > 0x1F )
        invalid_parameter_noinfo_noreturn();
      v5 = (_QWORD *)*(v5 - 1);
    }
    j_j_free(v5);
  }
  **(_QWORD **)(a1 + 24) = 0;
  **(_QWORD **)(a1 + 56) = 0;
  **(_DWORD **)(a1 + 80) = 0;
  **(_QWORD **)(a1 + 32) = 0;
  **(_QWORD **)(a1 + 64) = 0;
  **(_DWORD **)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 112) &= ~1u;
  *(_QWORD *)(a1 + 104) = 0;
  return std::streambuf::~streambuf<char,std::char_traits<char>>(a1);
}

