// gettime.exe @ 0x405320 size=109

int __thiscall std::streambuf::_Init(_DWORD *this)
{
  *(this + 3) = this + 1;
  *(this + 4) = this + 2;
  *(this + 7) = this + 5;
  *(this + 8) = this + 6;
  *(this + 11) = this + 9;
  *(this + 12) = this + 10;
  std::streambuf::setp(0, 0);
  return std::streambuf::setg(0, 0, 0);
}

