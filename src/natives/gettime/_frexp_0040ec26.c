// gettime.exe @ 0x40ec26 size=250

double __cdecl frexp(double X, int *Y)
{
  double result; // st7
  int v3; // edi
  int v4; // eax

  if ( Y == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0.0;
  }
  result = X;
  v3 = _ctrlfp(4927, 0xFFFF);
  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    *Y = -1;
    v4 = _sptype(LODWORD(X), HIDWORD(X)) - 1;
    if ( v4 != 0 && (unsigned int)(v4 - 1) >= 2 )
    {
      return _except1(
               8,
               23,
               LODWORD(X),
               HIDWORD(X),
               COERCE_UNSIGNED_INT64(X + 1.0),
               HIDWORD(COERCE_UNSIGNED_INT64(X + 1.0)),
               v3);
    }
    else
    {
      _ctrlfp(v3, 0xFFFF);
      return X;
    }
  }
  else
  {
    if ( 0.0 == X )
    {
      if ( unknown_libname_97(LODWORD(X), SWORD2(X)) != 0 )
      {
        *Y = 0;
        return _except1(
                 0,
                 23,
                 LODWORD(X),
                 HIDWORD(X),
                 COERCE_UNSIGNED_INT64(-0.0),
                 HIDWORD(COERCE_UNSIGNED_INT64(-0.0)),
                 v3);
      }
      result = X;
    }
    _decomp(result, (int)Y);
    _ctrlfp(v3, 0xFFFF);
  }
  return result;
}

