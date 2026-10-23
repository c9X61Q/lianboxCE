// gettime.exe @ 0x41895e size=147

char __cdecl should_round_up(double *a1, unsigned __int64 a2, __int16 a3, int a4)
{
  unsigned __int64 v4; // rax
  __int16 v5; // di
  char result; // al
  int v7; // eax

  v4 = (__PAIR64__(HIDWORD(a2), *(_DWORD *)a1) & __PAIR64__(*((_DWORD *)a1 + 1), a2) & 0xFFFFFFFFFFFFFLL) >> a3;
  v5 = v4;
  if ( a4 == 0 )
    return (unsigned __int16)v4 >= 8u;
  v7 = fegetround();
  switch ( v7 )
  {
    case 0:
      return fe_to_nearest(a1, a2, a3);
    case 512:
      result = 0;
      if ( v5 != 0 && *((int *)a1 + 1) >= 0 )
        return 1;
      break;
    case 256:
      result = 0;
      if ( v5 != 0 && *((int *)a1 + 1) < 0 )
        return 1;
      break;
    default:
      return 0;
  }
  return result;
}

