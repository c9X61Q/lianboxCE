// gettime.exe @ 0x4079c0 size=51

_DWORD *__thiscall std::streambuf::pbump(int this, int a2)
{
  _DWORD *result; // eax

  **(_DWORD **)(this + 48) -= a2;
  result = *(_DWORD **)(this + 32);
  *result += a2;
  return result;
}

