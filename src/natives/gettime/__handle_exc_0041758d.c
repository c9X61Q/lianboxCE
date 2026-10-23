// gettime.exe @ 0x41758d size=640

BOOL __cdecl _handle_exc(unsigned __int8 a1, double *a2, __int16 a3)
{
  unsigned __int8 v3; // bl
  int v4; // esi
  int v5; // eax
  double *v6; // ecx
  double v7; // st7
  double v8; // st7
  int v9; // edx
  double v10; // st7
  int v11; // eax
  char v12; // ah
  char v13; // al
  int v14; // ecx
  unsigned int v15; // edi
  int v16; // ebx
  char v17; // dl
  int v18; // eax
  char v19; // al
  bool v20; // zf
  double v22; // [esp+18h] [ebp-20h]
  int v23; // [esp+24h] [ebp-14h] BYREF
  double v24; // [esp+28h] [ebp-10h]
  BOOL v25; // [esp+30h] [ebp-8h]
  char v26; // [esp+35h] [ebp-3h]
  char v27; // [esp+36h] [ebp-2h]
  char v28; // [esp+37h] [ebp-1h]

  v3 = a1;
  v4 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a3 & 1) != 0 )
  {
    _set_statfp(1);
    v4 = a1 & 0x17;
    goto LABEL_65;
  }
  if ( ((unsigned __int8)a3 & a1 & 4) != 0 )
  {
    _set_statfp(4);
    v4 = a1 & 0x1B;
    goto LABEL_65;
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 )
  {
    _set_statfp(8);
    v5 = a3 & 0xC00;
    if ( (a3 & 0xC00) != 0 )
    {
      if ( v5 != 1024 )
      {
        if ( v5 != 2048 )
        {
          if ( v5 != 3072 )
          {
LABEL_23:
            v4 = a1 & 0x1E;
            goto LABEL_65;
          }
          v6 = a2;
          v7 = 1.797693134862316e308;
          if ( *a2 <= 0.0 )
            goto LABEL_21;
LABEL_22:
          *v6 = v7;
          goto LABEL_23;
        }
        v6 = a2;
        if ( *a2 <= 0.0 )
        {
          v7 = 1.797693134862316e308;
LABEL_21:
          v7 = -v7;
          goto LABEL_22;
        }
LABEL_19:
        v7 = INFINITY;
        goto LABEL_22;
      }
      v6 = a2;
      if ( *a2 > 0.0 )
      {
        v7 = 1.797693134862316e308;
        goto LABEL_22;
      }
    }
    else
    {
      v6 = a2;
      if ( *a2 > 0.0 )
        goto LABEL_19;
    }
    v7 = INFINITY;
    goto LABEL_21;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x10) != 0 )
  {
    v8 = *a2;
    v25 = (a1 & 0x10) != 0;
    if ( 0.0 == v8 )
      goto LABEL_63;
    _decomp(v8, (int)&v23);
    v9 = v23 - 1536;
    v22 = v8;
    if ( v23 - 1536 < -1074 )
    {
      v10 = v8 * 0.0;
      v11 = 1;
      goto LABEL_62;
    }
    if ( v8 >= 0.0 )
    {
      HIDWORD(v24) = 0;
      v28 = 0;
    }
    else
    {
      HIDWORD(v24) = 1;
      v28 = 1;
    }
    HIWORD(v22) = BYTE6(v22) & 0xF | 0x10;
    v12 = 0;
    v13 = 0;
    v26 = 0;
    v27 = 0;
    if ( v9 >= -1021 )
    {
      v15 = LODWORD(v22);
    }
    else
    {
      v25 = (a1 & 0x10) != 0;
      v14 = -1021 - v9;
      v15 = LODWORD(v22);
      v16 = v25;
      do
      {
        v17 = v15 & 1;
        if ( (v15 & 1) != 0 && v16 == 0 )
          v16 = 1;
        if ( v13 != 0 )
          v12 = 1;
        v15 >>= 1;
        v13 = v17;
        LODWORD(v22) = v15;
        if ( (BYTE4(v22) & 1) != 0 )
        {
          v15 |= 0x80000000;
          LODWORD(v22) = v15;
        }
        HIDWORD(v22) >>= 1;
        --v14;
      }
      while ( v14 != 0 );
      v25 = v16;
      v3 = a1;
      v26 = v12;
      v27 = v17;
    }
    v10 = v22;
    if ( HIDWORD(v24) != 0 )
    {
      v10 = -v22;
      v24 = -v22;
      v22 = v24;
      v15 = LODWORD(v22);
    }
    else
    {
      v24 = v22;
    }
    if ( v13 == 0 && v12 == 0 )
    {
LABEL_61:
      v11 = v25;
LABEL_62:
      *a2 = v10;
      if ( v11 == 0 )
      {
LABEL_64:
        v4 = a1 & 0x1D;
        goto LABEL_65;
      }
LABEL_63:
      _set_statfp(16);
      goto LABEL_64;
    }
    v18 = fegetround();
    if ( v18 != 0 )
    {
      if ( v18 == 256 )
      {
        v19 = v28;
      }
      else
      {
        if ( v18 != 512 )
          goto LABEL_60;
        v19 = v28 ^ 1;
      }
      v20 = v19 == 0;
    }
    else
    {
      if ( v27 == 0 )
        goto LABEL_60;
      if ( v26 != 0 )
      {
LABEL_59:
        LODWORD(v22) = v15 + 1;
        HIDWORD(v22) += __CFADD__(v15, 1);
        v10 = v22;
        goto LABEL_61;
      }
      v20 = (LOBYTE(v22) & 1) == 0;
    }
    if ( !v20 )
      goto LABEL_59;
LABEL_60:
    v10 = v24;
    goto LABEL_61;
  }
LABEL_65:
  if ( (v3 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    _set_statfp(32);
    v4 &= ~0x10u;
  }
  return v4 == 0;
}

