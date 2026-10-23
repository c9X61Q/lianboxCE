// gettime.exe @ 0x408ee9 size=59

int (__thiscall ***__cdecl _Deletegloballocale(_DWORD *a1))(_DWORD, int)
{
  int (__thiscall ***result)(_DWORD, int); // eax

  result = (int (__thiscall ***)(_DWORD, int))a1;
  if ( *a1 != 0 )
  {
    result = (int (__thiscall ***)(_DWORD, int))(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a1 + 8))(*a1);
    if ( result != nullptr )
      return (int (__thiscall ***)(_DWORD, int))(**result)(result, 1);
  }
  return result;
}

