// gettime.exe @ 0x4097d5 size=43

int __thiscall std::filebuf::_Initcvt(_DWORD *this, int a2)
{
  int result; // eax

  result = unknown_libname_55(a2);
  if ( (_BYTE)result != 0 )
  {
    *(this + 14) = 0;
  }
  else
  {
    *(this + 14) = a2;
    return std::streambuf::_Init(this);
  }
  return result;
}

