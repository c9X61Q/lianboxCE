// gettime.exe @ 0x408110 size=49

int __thiscall std::streambuf::setp(_DWORD **this, int a2, int a3)
{
  **(this + 4) = a2;
  **(this + 8) = a2;
  **(this + 12) = a3 - a2;
  return a3 - a2;
}

