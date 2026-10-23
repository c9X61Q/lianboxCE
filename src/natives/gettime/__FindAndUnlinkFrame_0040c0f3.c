// gettime.exe @ 0x40c0f3 size=71

int __cdecl _FindAndUnlinkFrame(int a1)
{
  int v1; // esi
  int result; // eax
  int *i; // ecx
  int v4; // eax

  if ( a1 == *(_DWORD *)(__vcrt_getptd() + 36) )
  {
    v1 = *(_DWORD *)(a1 + 4);
    result = __vcrt_getptd();
    *(_DWORD *)(result + 36) = v1;
  }
  else
  {
    for ( i = (int *)(*(_DWORD *)(__vcrt_getptd() + 36) + 4); ; i = (int *)(v4 + 4) )
    {
      v4 = *i;
      if ( *i == 0 )
        abort();
      if ( a1 == v4 )
        break;
    }
    result = *(_DWORD *)(a1 + 4);
    *i = result;
  }
  return result;
}

