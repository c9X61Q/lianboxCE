// gettime.exe @ 0x4038d0 size=76

int (__thiscall ***__thiscall sub_4038D0(_DWORD **this))(_DWORD, int)
{
  int (__thiscall ***result)(_DWORD, int); // eax

  result = (int (__thiscall ***)(_DWORD, int))this;
  if ( *(this + 1) != nullptr )
  {
    result = (int (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(_DWORD))(**(this + 1) + 8))(*(this + 1));
    if ( result != nullptr )
      return (int (__thiscall ***)(_DWORD, int))(**result)(result, 1);
  }
  return result;
}

