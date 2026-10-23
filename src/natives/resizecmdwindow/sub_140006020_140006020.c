// resizecmdwindow.exe @ 0x140006020 size=146

__int64 __fastcall sub_140006020(__int64 a1, char a2)
{
  __int64 v4; // r8

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 144) + 4LL) + a1 - 144) = &std::istringstream::`vftable';
  v4 = *(int *)(*(_QWORD *)(a1 - 144) + 4LL);
  *(_DWORD *)(v4 + a1 - 148) = v4 - 144;
  sub_140005D60(a1 - 128);
  std::istream::~istream<char,std::char_traits<char>>(a1 - 120);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j_j_free((void *)(a1 - 144));
  return a1 - 144;
}

