// gettime.exe @ 0x40ebdf size=71

double __cdecl fabs(double X)
{
  double v2; // [esp+0h] [ebp-8h]

  if ( (HIWORD(X) & 0x7FF8) != 0x7FF0 || (HIDWORD(X) & 0x7FFFF) == 0 && LODWORD(X) == 0 )
    return fabs(X);
  LODWORD(v2) = LODWORD(X);
  HIDWORD(v2) = HIDWORD(X) & 0x7FF7FFFF | 0x80000;
  return v2;
}

