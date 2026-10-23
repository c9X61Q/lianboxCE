// resizecmdwindow.exe @ 0x140006100 size=146

__int64 __fastcall sub_140006100(__int64 a1, char a2)
{
  __int64 v4; // r8

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 136) + 4LL) + a1 - 136) = &std::ostringstream::`vftable';
  v4 = *(int *)(*(_QWORD *)(a1 - 136) + 4LL);
  *(_DWORD *)(v4 + a1 - 140) = v4 - 136;
  sub_140005D60(a1 - 128);
  std::ostream::~ostream<char,std::char_traits<char>>(a1 - 120);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    j_j_free((void *)(a1 - 136));
  return a1 - 136;
}

