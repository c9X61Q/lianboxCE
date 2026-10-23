// gettime.exe @ 0x40c328 size=38

int __cdecl _IsExceptionObjectToBeDestroyed(int a1)
{
  _DWORD *v1; // eax

  v1 = *(_DWORD **)(__vcrt_getptd() + 36);
  if ( v1 == nullptr )
    return 1;
  while ( *v1 != a1 )
  {
    v1 = (_DWORD *)v1[1];
    if ( v1 == nullptr )
      return 1;
  }
  return 0;
}

