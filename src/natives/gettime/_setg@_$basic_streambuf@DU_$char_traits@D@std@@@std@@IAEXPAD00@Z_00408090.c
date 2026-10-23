// gettime.exe @ 0x408090 size=49

int __thiscall std::streambuf::setg(_DWORD **this, int a2, int a3, int a4)
{
  **(this + 3) = a2;
  **(this + 7) = a3;
  **(this + 11) = a4 - a3;
  return a4 - a3;
}

