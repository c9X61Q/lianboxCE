// resizecmdwindow.exe @ 0x1400061a0 size=91

__int64 __fastcall sub_1400061A0(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 144;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 144) = &std::istringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 148) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 144;
  sub_140005D60(a1 + 16);
  std::istream::~istream<char,std::char_traits<char>>(v1 - 120);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}

