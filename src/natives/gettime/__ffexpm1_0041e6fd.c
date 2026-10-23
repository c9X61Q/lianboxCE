// gettime.exe @ 0x41e6fd size=67

// positive sp value has been detected, the output may be wrong!
void __usercall _ffexpm1(int a1@<ebp>, long double a2@<st0>)
{
  bool v2; // c0
  char v3; // c2
  bool v4; // c3
  long double v5; // st6
  __int16 v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  __int16 v10; // fps
  long double v11; // st6
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  __int16 v15; // fps
  long double v16; // st6
  bool v17; // c0
  char v18; // c2
  bool v19; // c3

  v5 = fabs(a2);
  v7 = v5 > NAN;
  v8 = 0;
  v9 = NAN == v5;
  *(_WORD *)(a1 - 160) = v6;
  if ( (*(_BYTE *)(a1 - 159) & 0x41) != 0 )
  {
    v2 = a2 < 0.0;
    v3 = 0;
    v4 = a2 == 0.0;
    *(_WORD *)(a1 - 160) = v6;
    if ( (*(_BYTE *)(a1 - 159) & 1) != 0 )
    {
      *(_BYTE *)(a1 - 144) = 4;
      JUMPOUT(0x41E8EA);
    }
    expbigret();
  }
  else
  {
    v11 = rint(a2);
    v12 = v11 < 0.0;
    v13 = 0;
    v14 = v11 == 0.0;
    *(_WORD *)(a1 - 160) = v10;
    v16 = a2 - v11;
    v17 = v16 < 0.0;
    v18 = 0;
    v19 = v16 == 0.0;
    *(_WORD *)(a1 - 160) = v15;
  }
}

