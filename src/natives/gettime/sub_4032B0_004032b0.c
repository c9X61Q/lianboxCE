// gettime.exe @ 0x4032b0 size=47

_DWORD *__thiscall sub_4032B0(_DWORD *this, int a2)
{
  *(this + 1) = *(_DWORD *)(a2 + 4);
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 1) + 4))(*(this + 1));
  return this;
}

