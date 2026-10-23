// busybox.exe @ 0x411654 size=78

long double __cdecl sub_411654(_TBYTE a1)
{
  __int16 v1; // fps
  long double result; // st7
  long double v3; // rt0

  result = *(double *)&a1;
  __asm { fxam }
  if ( (HIBYTE(v1) & 0x45) == 5 )
  {
    if ( (v1 & 0x200) != 0 )
      return 0.0;
  }
  else
  {
    v3 = rint(*(long double *)&a1);
    return __FSCALE__(__F2XM1__(*(double *)&a1 - v3) + 1.0, v3);
  }
  return result;
}

