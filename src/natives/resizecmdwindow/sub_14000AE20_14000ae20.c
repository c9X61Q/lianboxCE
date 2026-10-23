// resizecmdwindow.exe @ 0x14000ae20 size=46

__int64 __fastcall sub_14000AE20(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 2;
  if ( (_DWORD)result != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~2u;
    return std::ios::~ios<char,std::char_traits<char>>(a2 + 216);
  }
  return result;
}

