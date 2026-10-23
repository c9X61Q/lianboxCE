// gettime.exe @ 0x4232e7 size=104

char __cdecl __acrt_execute_initializers(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  void (__cdecl **v3)(_DWORD); // esi

  if ( a1 == a2 )
    return 1;
  v2 = a1;
  do
  {
    if ( *v2 != 0 && ((unsigned __int8 (__thiscall *)(_DWORD))*v2)(*v2) == 0 )
      break;
    v2 += 2;
  }
  while ( v2 != a2 );
  if ( v2 == a2 )
    return 1;
  if ( v2 != a1 )
  {
    v3 = (void (__cdecl **)(_DWORD))(v2 - 1);
    do
    {
      if ( *(v3 - 1) != nullptr && *v3 != nullptr )
        (*v3)(0);
      v3 -= 2;
    }
    while ( v3 + 1 != a1 );
  }
  return 0;
}

