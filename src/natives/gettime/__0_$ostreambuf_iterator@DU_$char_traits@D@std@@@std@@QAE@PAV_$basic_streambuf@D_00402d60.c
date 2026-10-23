// gettime.exe @ 0x402d60 size=31

_DWORD *__thiscall std::ostreambuf_iterator<char>::ostreambuf_iterator<char>(_DWORD *this, int a2)
{
  *(_BYTE *)this = 0;
  *(this + 1) = a2;
  return this;
}

