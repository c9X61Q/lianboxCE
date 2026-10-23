// busybox.exe @ 0x408040 size=245

double __cdecl sub_408040(double a1)
{
  __int16 v1; // fps
  double result; // st7
  int v3; // edx
  _TBYTE v4; // [esp+0h] [ebp-3Ch]

  result = a1;
  __asm { fxam }
  v3 = v1 & 0x4500;
  if ( (v1 & 0x4500) == 0x4000 )
  {
    *errno() = 34;
    sub_401BC0(3, (int)&unk_47CE7C, a1, 0.0, -INFINITY);
    return -INFINITY;
  }
  else if ( v3 != 256 )
  {
    __asm { fxam }
    if ( (v1 & 0x200) != 0 )
    {
      *errno() = 33;
      sub_401BC0(1, (int)&unk_47CE7C, a1, 0.0, NAN);
      return NAN;
    }
    else if ( v3 == 1280 )
    {
      return INFINITY;
    }
    else
    {
      *(double *)&v4 = a1;
      sub_4116B4(v4);
    }
  }
  return result;
}

