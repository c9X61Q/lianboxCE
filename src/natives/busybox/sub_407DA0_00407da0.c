// busybox.exe @ 0x407da0 size=181

double __cdecl sub_407DA0(double a1)
{
  __int16 v1; // fps
  double result; // st7
  _TBYTE v3; // [esp+0h] [ebp-3Ch]

  result = a1;
  __asm { fxam }
  if ( (v1 & 0x4500) == 0x100 )
  {
    *errno() = 33;
    sub_401BC0(1, (int)&unk_47CE74, a1, 0.0, a1);
    return a1;
  }
  else if ( (v1 & 0x4500) == 0x500 )
  {
    *errno() = 33;
    sub_401BC0(1, (int)&unk_47CE74, a1, 0.0, NAN);
    return NAN;
  }
  else
  {
    *(double *)&v3 = a1;
    sub_411604(v3);
  }
  return result;
}

