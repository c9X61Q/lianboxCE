// gettime.exe @ 0x427a60 size=190

long double __cdecl _ceil_default(long double a1)
{
  int v1; // ebx
  int v2; // eax
  long double result; // st7
  int savedregs; // [esp+24h] [ebp+0h] BYREF

  v1 = _ctrlfp();
  if ( (HIWORD(a1) & 0x7FF0) == 0x7FF0 )
  {
    v2 = _sptype(SLODWORD(a1), SHIDWORD(a1)) - 1;
    if ( v2 != 0 && (unsigned int)(v2 - 1) >= 2 )
    {
      return _except1((int)&savedregs, 8, 12, a1, a1 + 1.0, v1);
    }
    else
    {
      _ctrlfp();
      return a1;
    }
  }
  else
  {
    result = _frnd(a1);
    if ( a1 == result || (v1 & 0x20) != 0 )
      _ctrlfp();
    else
      return _except1((int)&savedregs, 16, 12, a1, result, v1);
  }
  return result;
}

