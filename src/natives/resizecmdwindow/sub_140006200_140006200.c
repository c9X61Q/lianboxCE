// resizecmdwindow.exe @ 0x140006200 size=91

__int64 __fastcall sub_140006200(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 + 136;
  *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 136) = &std::ostringstream::`vftable';
  *(_DWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + v1 - 140) = *(_DWORD *)(*(_QWORD *)a1 + 4LL) - 136;
  sub_140005D60(a1 + 8);
  std::ostream::~ostream<char,std::char_traits<char>>(v1 - 120);
  return std::ios::~ios<char,std::char_traits<char>>(v1);
}

