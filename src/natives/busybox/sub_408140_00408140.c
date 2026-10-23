// busybox.exe @ 0x408140 size=1932

double __cdecl sub_408140(double a1, double a2)
{
  double result; // st7
  __int16 v4; // fps
  __int16 v6; // dx
  __int16 v7; // fps
  int v9; // eax
  __int16 v10; // cx
  int v11; // edx
  __int16 v12; // cx
  long double v13; // st5
  __int16 v14; // fps
  char v16; // fps^1
  double v18; // st7
  char v19; // fps^1
  long double v21; // st6
  __int16 v22; // fps
  char v24; // fps^1
  char v26; // fps^1
  long double v28; // st5
  __int16 v29; // fps
  char v31; // fps^1
  double v32; // st6
  double v33; // st7
  long double v34; // st6
  __int16 v35; // fps
  double v38; // st4
  char v40; // fps^1
  long double v41; // st6
  bool v42; // zf
  char v43; // fps^1
  bool v44; // cc
  char v45; // fps^1
  double v47; // st6
  double v48; // st7
  long double v49; // st6
  __int16 v50; // fps
  double v53; // st4
  long double v54; // st6
  char v55; // fps^1
  char v57; // fps^1
  char v59; // fps^1
  char v61; // fps^1
  char v63; // fps^1
  char v65; // ah
  char v66; // fps^1
  char v67; // fps^1
  char v69; // ah
  char v70; // fps^1
  long double v72; // st5
  __int16 v73; // fps
  char v75; // fps^1
  char v76; // fps^1
  char v77; // fps^1
  _TBYTE v78; // [esp+Ch] [ebp-4Ch]
  _TBYTE v79; // [esp+Ch] [ebp-4Ch]
  double v80; // [esp+2Ch] [ebp-2Ch]
  double v81; // [esp+34h] [ebp-24h]
  double v82; // [esp+34h] [ebp-24h]

  result = a1;
  _ST6 = a2;
  _ST5 = a1;
  __asm { fxam }
  v6 = v4;
  _ST5 = a2;
  __asm { fxam }
  v9 = v7 & 0x4500;
  if ( v9 == 0x4000 || 1.0 == a1 )
    return 1.0;
  v10 = v6;
  v11 = v6 & 0x4500;
  v12 = v10 & 0x4500;
  if ( v11 == 256 || v9 == 256 )
  {
    if ( v12 == 256 )
    {
      *errno() = 33;
      sub_401BC0(1, (int)&unk_4744D0, a1, a2, a1);
      return a1;
    }
    else
    {
      *errno() = 33;
      sub_401BC0(1, (int)&unk_4744D0, a1, a2, a2);
      return a2;
    }
  }
  if ( v11 == 0x4000 )
  {
    if ( v9 != 1280 )
    {
      _ST5 = a1;
      __asm { fxam }
      if ( (v26 & 2) != 0 )
      {
        v28 = rint(a2);
        _ST4 = a2;
        __asm { fxam }
        if ( (v29 & 0x4500) == 0x500 )
        {
          v32 = a1;
          v33 = a2;
        }
        else
        {
          if ( a2 - v28 != 0.0 )
          {
            __asm { fxam }
            if ( (v31 & 2) != 0 )
              return -1.0 / a1;
            return 0.0;
          }
          v32 = a1;
          v33 = a2;
        }
      }
      else
      {
        v32 = a1;
        v33 = a2;
      }
      v81 = v32;
      sub_40D450(v33, -1);
      v34 = rint(v33);
      _ST5 = v33;
      __asm { fxam }
      _ST5 = v33;
      if ( (v35 & 0x4500) == 0x500 )
      {
        v41 = 0.0;
        _ST7 = v81;
      }
      else
      {
        v38 = v33;
        _ST7 = v81;
        v41 = v38 - v34;
      }
      __asm { fxam }
      if ( (v40 & 2) == 0 )
      {
        v42 = v41 == 0.0;
LABEL_66:
        if ( !v42 )
        {
          __asm { fxam }
          if ( (v43 & 2) != 0 )
            return -0.0;
        }
        return 0.0;
      }
      if ( v41 == 0.0 )
        return INFINITY;
      __asm { fxam }
      if ( (v76 & 2) == 0 )
        return INFINITY;
      __asm { fxam }
      return -INFINITY;
    }
    _ST7 = a2;
    goto LABEL_74;
  }
  if ( v9 == 1280 )
  {
    if ( v11 == 1280 )
    {
      _ST7 = a2;
      goto LABEL_44;
    }
    _ST5 = a1;
    __asm { fxam }
    if ( (v24 & 2) != 0 )
    {
      if ( a1 == -1.0 )
        return 1.0;
      _ST6 = a2;
      result = -a1;
    }
    v44 = result <= 1.0;
    _ST7 = _ST6;
    if ( !v44 )
    {
LABEL_44:
      __asm { fxam }
      if ( (v45 & 2) == 0 )
        return INFINITY;
      return 0.0;
    }
LABEL_74:
    __asm { fxam }
    if ( (v45 & 2) == 0 )
      return 0.0;
    return INFINITY;
  }
  if ( v11 == 1280 )
  {
    _ST5 = a1;
    __asm { fxam }
    if ( (v70 & 2) != 0 )
    {
      v72 = rint(a2);
      _ST4 = a2;
      __asm { fxam }
      if ( (v73 & 0x4500) == 0x500 )
      {
        v47 = a1;
        v48 = a2;
      }
      else
      {
        if ( a2 - v72 != 0.0 )
        {
          __asm { fxam }
          if ( (v75 & 2) == 0 )
            return -a1;
          return -1.0 / a1;
        }
        v47 = a1;
        v48 = a2;
      }
    }
    else
    {
      v47 = a1;
      v48 = a2;
    }
    v82 = v47;
    v80 = v48;
    sub_40D450(v48, -1);
    v49 = rint(v48);
    _ST5 = v48;
    __asm { fxam }
    _ST5 = v48;
    if ( (v50 & 0x4500) == 0x500 )
    {
      v54 = 0.0;
      _ST7 = v82;
    }
    else
    {
      v53 = v48;
      _ST7 = v82;
      v54 = v53 - v49;
    }
    _ST4 = _ST7;
    __asm { fxam }
    if ( (v55 & 2) != 0 )
    {
      _ST4 = v80;
      __asm { fxam }
      if ( (v57 & 2) != 0 && 0.0 == v54 )
        return 0.0;
    }
    _ST4 = _ST7;
    __asm { fxam }
    if ( (v59 & 2) == 0 )
      goto LABEL_91;
    _ST4 = v80;
    __asm { fxam }
    if ( (v61 & 2) != 0 || 0.0 == v54 )
    {
LABEL_91:
      _ST4 = _ST7;
      __asm { fxam }
      v65 = v63;
      if ( (v65 & 2) != 0 )
      {
        _ST4 = v80;
        __asm { fxam }
        v69 = v67;
        if ( (v69 & 2) == 0 && 0.0 == v54 )
          return INFINITY;
      }
      __asm { fxam }
      if ( (v66 & 2) != 0 )
      {
        v42 = v54 == 0.0;
        goto LABEL_66;
      }
      if ( v54 == 0.0 )
        return INFINITY;
      __asm { fxam }
      if ( (v77 & 2) == 0 )
        return INFINITY;
    }
    return -INFINITY;
  }
  v13 = rint(a2);
  _ST4 = a2;
  __asm { fxam }
  if ( (v14 & 0x4500) == 0x500 || a2 - v13 == 0.0 )
  {
    if ( v13 <= 2147483647.0 && v13 >= -2147483600.0 )
    {
      sub_40ADB0(a1, (int)a2);
      return result;
    }
  }
  else
  {
    _ST5 = a1;
    __asm { fxam }
    if ( (v16 & 2) != 0 )
    {
      *errno() = 33;
      sub_401BC0(1, (int)&unk_4744D0, a1, a2, NAN);
      return NAN;
    }
    if ( a2 == 0.5 )
      return sqrt(a1);
  }
  v18 = fabs(a1);
  *(double *)&v78 = v18;
  sub_4116F0(v78);
  result = v18 * a2;
  *(double *)&v79 = result;
  sub_411654(v79);
  _ST6 = a1;
  __asm { fxam }
  if ( (v19 & 2) != 0 )
  {
    sub_40D450(a2, -1);
    v21 = rint(a2);
    _ST5 = a2;
    __asm { fxam }
    if ( (v22 & 0x4500) != 0x500 && a2 - v21 != 0.0 )
      return -result;
  }
  return result;
}

