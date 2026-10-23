// gettime.exe @ 0x41edf7 size=66

void (__cdecl **__cdecl get_global_action_nolock(int a1))(int)
{
  if ( a1 == 2 )
    return (void (__cdecl **)(int))&dword_438E0C;
  if ( a1 != 6 )
  {
    if ( a1 == 15 )
      return (void (__cdecl **)(int))&dword_438E18;
    if ( a1 == 21 )
      return (void (__cdecl **)(int))&dword_438E10;
    if ( a1 != 22 )
      return nullptr;
  }
  return (void (__cdecl **)(int))&dword_438E14;
}

