// busybox.exe @ 0x436630 size=114

double __usercall sub_436630@<st0>(signed __int32 *a1@<eax>)
{
  signed __int32 v2; // eax
  _BYTE *v3; // edx

  v2 = *a1;
  if ( (v2 & 0x101) == 0 )
  {
    a1[2] = 0;
    a1[3] = 0;
    v3 = (_BYTE *)a1[4];
    if ( v3 != nullptr && *v3 != 0 )
    {
      *((double *)a1 + 1) = sub_445D5C();
      if ( _bittest(a1, 9u) && *(_BYTE *)sub_460EA0() != 0 )
        *a1 &= ~0x200u;
    }
    else
    {
      BYTE1(v2) &= ~2u;
      *a1 = v2;
    }
    *a1 |= 0x100u;
  }
  return *((double *)a1 + 1);
}

