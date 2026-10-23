// busybox.exe @ 0x4116f0 size=55

long double __cdecl sub_4116F0(_TBYTE a1)
{
  char v3; // c2
  char v4; // c0

  _ST6 = *(double *)&a1;
  __asm { fxam }
  if ( v4 != 0 && v3 == 0 )
    return *(double *)&a1;
  if ( fabs(*(double *)&a1 - 1.0) > 0.29 )
    return __FYL2X__(*(long double *)&a1, 1.0);
  return __FYL2XP1__(*(double *)&a1 - 1.0, 1.0);
}

