// gettime.exe @ 0x404580 size=41

int __thiscall sub_404580(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = std::string::max_size(this);
  return std::string::_Calculate_growth(a2, *(this + 5), v2);
}

