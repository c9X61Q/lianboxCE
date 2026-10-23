// busybox.exe @ 0x402c40 size=266

double __cdecl sub_402C40(double a1)
{
  __int16 v1; // fps
  double result; // st7
  __int16 v3; // ax

  result = a1;
  __asm { fxam }
  if ( (v1 & 0x4500) == 0x100 )
  {
    *errno() = 33;
    sub_401BC0(1, (int)"sqrt", a1, 0.0, a1);
    return a1;
  }
  else
  {
    v3 = v1 & 0x4500;
    __asm { fxam }
    if ( (v1 & 0x200) != 0 )
    {
      if ( v3 == 0x4000 )
      {
        return -0.0;
      }
      else
      {
        *errno() = 33;
        sub_401BC0(1, (int)"sqrt", a1, 0.0, NAN);
        return NAN;
      }
    }
    else if ( v3 == 0x4000 )
    {
      return 0.0;
    }
    else if ( v3 == 1280 )
    {
      return INFINITY;
    }
    else if ( a1 != 1.0 )
    {
      return sqrt(a1);
    }
  }
  return result;
}

