// gettime.exe @ 0x40f057 size=27

// Microsoft VisualC universal runtime
_DWORD *__cdecl unknown_libname_62(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = a2;
  a1[1] = a3;
  if ( a3 != nullptr )
    *a3 = a2;
  return result;
}

