// gettime.exe @ 0x405190 size=65

int __thiscall std::streambuf::_Gninc(_DWORD **this)
{
  int v1; // ecx

  --**(this + 11);
  v1 = **(this + 7);
  **(this + 7) = v1 + 1;
  return v1;
}

