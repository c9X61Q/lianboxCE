// resizecmdwindow.exe @ 0x140008f60 size=189

_QWORD *__fastcall sub_140008F60(_QWORD *a1)
{
  _QWORD *result; // rax

  *a1 = &unk_14000BD98;
  std::ios::ios(a1 + 18);
  __wind
  {
    std::istream::istream();
    *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::istringstream::`vftable';
    *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 144;
    __wind
    {
      std::streambuf::streambuf(a1 + 2);
      a1[2] = &std::stringbuf::`vftable';
      __wind
      {
        sub_140009020();
        result = a1;
      }
      __unwind
      {
        std::streambuf::~streambuf<char,std::char_traits<char>>(a1 + 2);
      }
    }
    __unwind
    {
      std::istream::~istream<char,std::char_traits<char>>(a1 + 3);
    }
  }
  __unwind
  {
    std::ios::~ios<char,std::char_traits<char>>(a1 + 18);
  }
  return result;
}

