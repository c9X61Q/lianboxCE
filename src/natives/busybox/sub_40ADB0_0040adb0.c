// busybox.exe @ 0x40adb0 size=557

double __cdecl sub_40ADB0(long double a1, int a2)
{
  __int16 v2; // fps
  __int16 v4; // ax
  unsigned int v5; // eax
  long double v6; // st5
  long double v7; // st6
  long double v8; // st5
  long double v9; // rt0
  long double v10; // st5
  long double v11; // st6
  unsigned int v12; // eax
  char v13; // fps^1
  long double v14; // rt1
  double result; // st7
  long double v17; // rt2
  char v18; // fps^1
  char v19; // fps^1
  double v20; // st6

  _ST7 = a1;
  __asm { fxam }
  if ( a2 == 0 || 1.0 == a1 )
    return 1.0;
  v4 = v2 & 0x4500;
  if ( (v2 & 0x4500) == 0x100 )
  {
    __asm { fxam }
    if ( (v19 & 2) != 0 )
    {
      v20 = a1;
      result = NAN;
    }
    else
    {
      v20 = a1;
      result = NAN;
    }
    *errno() = 33;
    sub_401BC0(1, (int)"__powi", v20, (double)a2, result);
    return result;
  }
  if ( v4 == 0x4000 )
  {
    if ( a2 < 0 )
    {
      if ( (a2 & 1) == 0 )
        return INFINITY;
      __asm { fxam }
      if ( (v18 & 2) == 0 )
        return INFINITY;
LABEL_46:
      __asm { fxam }
      if ( (v18 & 2) != 0 )
        return -INFINITY;
      return INFINITY;
    }
    goto LABEL_22;
  }
  if ( v4 == 1280 )
  {
    __asm { fxam }
    if ( (v18 & 2) != 0 && a2 < 0 && (a2 & 1) == 0 )
      return 0.0;
    __asm { fxam }
    if ( (v18 & 2) != 0 && a2 >= 0 && (a2 & 1) != 0 )
      return -INFINITY;
    __asm { fxam }
    if ( (v18 & 2) != 0 )
    {
      if ( a2 < 0 )
        goto LABEL_22;
      if ( (a2 & 1) == 0 )
        return INFINITY;
    }
    if ( a2 >= 0 )
    {
      if ( (a2 & 1) == 0 )
        return INFINITY;
      goto LABEL_46;
    }
LABEL_22:
    if ( (a2 & 1) != 0 )
    {
      __asm { fxam }
      result = 0.0;
      if ( (v18 & 2) == 0 )
        return result;
      return -result;
    }
    return 0.0;
  }
  v5 = a2;
  v6 = fabs(a1);
  if ( a2 < 0 )
  {
    v7 = 1.0 / v6;
    v5 = -a2;
  }
  else
  {
    v7 = v6;
  }
  if ( v5 == 1 )
  {
    v17 = v7;
    _ST6 = a1;
    result = v17;
  }
  else
  {
    v8 = v7;
    if ( (v5 & 1) == 0 )
      v8 = 1.0;
    v9 = v8;
    v10 = v7;
    v11 = v9;
    v12 = v5 >> 1;
    do
    {
      v10 = v10 * v10;
      if ( (v12 & 1) != 0 )
        v11 = v11 * v10;
      v12 >>= 1;
    }
    while ( v12 != 0 );
    v14 = v11;
    _ST6 = a1;
    result = v14;
  }
  __asm { fxam }
  if ( (v13 & 2) != 0 && (a2 & 1) != 0 )
    return -result;
  return result;
}

