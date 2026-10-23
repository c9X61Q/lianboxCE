// busybox.exe @ 0x40d450 size=121

long double __cdecl sub_40D450(long double a1, int a2)
{
  __int16 v2; // fps
  long double result; // st7
  bool v4; // al
  char v5; // c0
  long double v6; // st5
  __int16 v7; // fps
  bool v9; // al
  char v10; // c0

  result = a1;
  __asm { fxam }
  v4 = (v2 & 0x100) != 0;
  if ( v5 == 0 )
  {
    if ( 0.0 == a1 )
      v4 = true;
    if ( !v4 )
    {
      v6 = __FSCALE__(a1, (double)a2);
      _ST6 = v6;
      __asm { fxam }
      v9 = (v7 & 0x100) != 0;
      if ( v10 != 0 )
      {
        result = v6;
      }
      else
      {
        result = v6;
        if ( v6 == 0.0 )
          v9 = true;
        if ( !v9 )
          return result;
      }
      *errno() = 34;
    }
  }
  return result;
}

