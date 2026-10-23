// gettime.exe @ 0x426da0 size=79

double __usercall _CIlog10@<st0>(double x@<st0>)
{
  int v1; // eax
  bool v2; // zf
  int v3; // [esp+0h] [ebp-Ch]
  char v4; // [esp+4h] [ebp-8h]
  int v5; // [esp+4h] [ebp-8h]

  if ( dword_438E5C == 0 )
    goto __CIlog10_default;
  v1 = _mm_getcsr() & 0x7F80;
  v2 = v1 == 8064;
  if ( v1 == 8064 )
    v2 = (v4 & 0x7F) == 127;
  if ( v2 )
  {
    _CIlog10_pentium4();
  }
  else
  {
__CIlog10_default:
    _checkTOS_withFB(SLODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
    return start_1(v3, v5);
  }
  return x;
}

