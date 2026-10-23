// gettime.exe @ 0x405bc0 size=65

int __thiscall std::streambuf::_Pninc(_DWORD **this)
{
  int v1; // ecx

  --**(this + 12);
  v1 = **(this + 8);
  **(this + 8) = v1 + 1;
  return v1;
}

