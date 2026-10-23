// gettime.exe @ 0x4080d0 size=49

int __thiscall std::streambuf::setp(_DWORD **this, int a2, int a3, int a4)
{
  **(this + 4) = a2;
  **(this + 8) = a3;
  **(this + 12) = a4 - a3;
  return a4 - a3;
}

