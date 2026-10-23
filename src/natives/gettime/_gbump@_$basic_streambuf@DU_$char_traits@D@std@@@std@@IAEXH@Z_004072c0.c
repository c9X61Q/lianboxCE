// gettime.exe @ 0x4072c0 size=51

_DWORD *__thiscall std::streambuf::gbump(int this, int a2)
{
  _DWORD *result; // eax

  **(_DWORD **)(this + 44) -= a2;
  result = *(_DWORD **)(this + 28);
  *result += a2;
  return result;
}

