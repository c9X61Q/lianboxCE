// busybox.exe @ 0x41162c size=38

long double __cdecl sub_41162C(_TBYTE a1)
{
  __int16 v1; // fps
  long double result; // st7
  long double v3; // st6
  __int16 v4; // fps

  result = sin(*(long double *)&a1);
  if ( (v1 & 0x400) != 0 )
  {
    v3 = result;
    do
      v3 = __FPREM1__(v3, 3.141592653589793238 + 3.141592653589793238);
    while ( (v4 & 0x400) != 0 );
    return sin(v3);
  }
  return result;
}

