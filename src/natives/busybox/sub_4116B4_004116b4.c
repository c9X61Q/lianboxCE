// busybox.exe @ 0x4116b4 size=41

long double __cdecl sub_4116B4(_TBYTE a1)
{
  if ( fabs(*(double *)&a1 - 1.0) > 0.29 )
    return __FYL2X__(*(long double *)&a1, 0.6931471805599453094);
  else
    return __FYL2XP1__(*(double *)&a1 - 1.0, 0.6931471805599453094);
}

