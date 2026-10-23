// busybox.exe @ 0x407e60 size=465

long double __cdecl sub_407E60(double a1)
{
  __int16 v1; // fps
  int v3; // eax
  double v5; // st6
  double v6; // st7
  int *v7; // eax
  char v8; // fps^1
  long double v10; // st6
  long double v11; // st5
  double v12; // [esp+2Ch] [ebp-1Ch]

  _ST7 = a1;
  __asm { fxam }
  v3 = v1 & 0x4500;
  if ( (v1 & 0x4500) == 0x100 )
  {
    *errno() = 33;
    sub_401BC0(1, (int)&unk_4744B8, a1, 0.0, a1);
    return a1;
  }
  else if ( v3 == 1280 )
  {
    __asm { fxam }
    if ( (v1 & 0x200) != 0 )
    {
      v5 = a1;
      v6 = 0.0;
    }
    else
    {
      v5 = a1;
      v6 = INFINITY;
    }
    v12 = v6;
    v7 = errno();
    _ST7 = v5;
    *v7 = 34;
    __asm { fxam }
    sub_401BC0(((v8 & 2) == 0) + 3, (int)&unk_4744B8, v5, 0.0, v12);
    return v12;
  }
  else if ( v3 == 0x4000 )
  {
    return 1.0;
  }
  else if ( a1 > 709.782712893384 )
  {
    *errno() = 34;
    sub_401BC0(3, (int)&unk_4744B8, a1, 0.0, INFINITY);
    return INFINITY;
  }
  else if ( a1 >= -745.1332191019411 )
  {
    v10 = rint(1.442695040888963407 * a1);
    v11 = rint(a1);
    return __FSCALE__(
             __F2XM1__(
               v11 * *(double *)&tbyte_473010
             - v10
             + *(double *)&tbyte_473010 * (a1 - v11)
             + *(double *)&tbyte_473000 * a1)
           + 1.0,
             v10);
  }
  else
  {
    return 0.0;
  }
}

