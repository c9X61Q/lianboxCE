// busybox.exe @ 0x40c5d0 size=1471

int __usercall sub_40C5D0@<eax>(int a1@<eax>, _TBYTE a2)
{
  int v2; // ebx
  __int16 v4; // fps
  __int16 v5; // fps
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebp
  char *v8; // eax
  char *v9; // ebp
  int v10; // edx
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // esi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int64 v19; // kr08_8
  char v20; // cl
  char v21; // dl
  char v22; // al
  unsigned int v23; // eax
  int v24; // edx
  int v26; // eax
  int v27; // eax
  __int16 v28; // dx
  int v29; // edx
  __int16 v30; // bx
  int v31; // eax
  __int16 v32; // [esp+8h] [ebp-74h]
  int v33; // [esp+8h] [ebp-74h]
  int v34; // [esp+Ch] [ebp-70h]
  signed int v35; // [esp+10h] [ebp-6Ch]
  int v36; // [esp+14h] [ebp-68h]
  int v37; // [esp+14h] [ebp-68h]
  unsigned __int16 v38; // [esp+1Ah] [ebp-62h]
  __int16 v39; // [esp+28h] [ebp-54h]
  __int16 v40; // [esp+36h] [ebp-46h] BYREF
  _TBYTE v41; // [esp+38h] [ebp-44h]
  char v42; // [esp+48h] [ebp-34h] BYREF
  char v43; // [esp+49h] [ebp-33h] BYREF

  v2 = a1;
  _ST7 = *(double *)&a2;
  *(double *)&v41 = *(double *)&a2;
  __asm { fxam }
  if ( (v4 & 0x4500) == 0x100 )
    return sub_40B3E0(0, (int)"NaN", a1);
  if ( v39 < 0 )
    *(_DWORD *)(a1 + 4) |= 0x80u;
  __asm { fxam }
  if ( (v5 & 0x4500) == 0x500 )
    return sub_40B3E0(v39 & 0x8000, (int)"Inf", a1);
  v6 = __PAIR64__(LODWORD(v41), DWORD1(v41));
  v32 = v39 & 0x7FFF;
  if ( (v39 & 0x7FFF) != 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    v32 -= 0x3FFF;
    if ( v7 <= 0xE )
      goto LABEL_40;
    v34 = *(_DWORD *)(a1 + 4);
    if ( *(_QWORD *)&v41 == 0 )
      goto LABEL_9;
    goto LABEL_45;
  }
  if ( *(_QWORD *)&v41 == 0 )
  {
    v7 = *(_DWORD *)(a1 + 12);
    if ( v7 > 0xE )
    {
      v34 = *(_DWORD *)(a1 + 4);
LABEL_9:
      if ( *(int *)(v2 + 12) > 0 || (v8 = &v42, (v34 & 0x800) != 0) )
      {
        v42 = 46;
        v8 = &v43;
      }
      *v8 = 48;
      v9 = v8 + 1;
      v36 = *(_DWORD *)(v2 + 8);
      if ( v36 > 0 )
        goto LABEL_12;
LABEL_79:
      v14 = 2;
      v35 = v32;
      if ( (v34 & 0x80u) == 0 )
        goto LABEL_21;
      goto LABEL_80;
    }
    do
    {
      LODWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 31;
      HIDWORD(v6) *= 2;
LABEL_40:
      ;
    }
    while ( (v6 & 0x80000000) == 0LL );
    goto LABEL_41;
  }
  if ( SDWORD1(v41) < 0 )
  {
    v32 = -16382;
  }
  else
  {
    v27 = -16383;
    do
    {
      LODWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 31;
      v28 = v27;
      HIDWORD(v6) *= 2;
      --v27;
    }
    while ( (v6 & 0x80000000) == 0LL );
    v32 = v28;
  }
  v7 = *(_DWORD *)(v2 + 12);
  if ( v7 <= 0xE )
  {
LABEL_41:
    v19 = (4LL << (4 * (14 - (unsigned __int8)v7))) + (__PAIR64__(v6, HIDWORD(v6)) >> 1);
    if ( (v19 & 0x8000000000000000uLL) != 0LL )
      ++v32;
    else
      v19 *= 2LL;
    v20 = 4 * (15 - v7);
    v34 = *(_DWORD *)(v2 + 4);
    HIDWORD(v6) = v19 >> v20;
    LODWORD(v6) = HIDWORD(v19) >> v20;
    if ( (v20 & 0x20) != 0 )
    {
      HIDWORD(v6) = HIDWORD(v19) >> v20;
      LODWORD(v6) = 0;
    }
    goto LABEL_45;
  }
  v34 = *(_DWORD *)(v2 + 4);
LABEL_45:
  v9 = &v42;
  do
  {
    v23 = BYTE4(v6) & 0xF;
    if ( (HIDWORD(v6) & 0xFFFFFFF0 | (unsigned int)v6) != 0 )
    {
      v24 = *(_DWORD *)(v2 + 12);
      HIDWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 4;
      LODWORD(v6) = (unsigned int)v6 >> 4;
      if ( v24 > 0 )
        *(_DWORD *)(v2 + 12) = v24 - 1;
    }
    else
    {
      if ( v9 > &v42 || (v34 & 0x800) != 0 || *(int *)(v2 + 12) > 0 )
        *v9++ = 46;
      v38 = v32 - 1;
      if ( ((unsigned int)v6 | HIDWORD(v6) ^ 1) != 0 )
      {
        v33 = BYTE4(v6) & 0xF;
        v29 = v38;
        v37 = v2;
        do
        {
          HIDWORD(v6) = __PAIR64__(v6, HIDWORD(v6)) >> 1;
          LODWORD(v6) = (unsigned int)v6 >> 1;
          v30 = v29--;
        }
        while ( (HIDWORD(v6) ^ 1 | (unsigned int)v6) != 0 );
        v23 = v33;
        v32 = v30;
        v6 = 0;
        v2 = v37;
      }
      else
      {
        v6 = 0;
      }
    }
    if ( v23 != 0 )
    {
      v21 = v23;
      if ( v23 <= 9 )
LABEL_48:
        v22 = v21 + 48;
      else
        v22 = v34 & 0x20 | (v23 + 55);
      *v9++ = v22;
      continue;
    }
    v21 = 0;
    if ( v9 > &v42 || *(int *)(v2 + 12) >= 0 )
      goto LABEL_48;
  }
  while ( v6 != 0 );
  if ( v9 == &v42 )
    goto LABEL_9;
  v36 = *(_DWORD *)(v2 + 8);
  if ( v36 <= 0 )
    goto LABEL_79;
LABEL_12:
  v10 = *(_DWORD *)(v2 + 12);
  v11 = v9 - &v42;
  if ( v10 > 0 )
    v11 = v9 - &v42 + v10;
  v35 = v32;
  v12 = v11 + ((v34 & 0x1C0) != 0) + 5;
  v13 = v32 / 10;
  if ( v13 != 0 )
  {
    do
    {
      LOWORD(v14) = ++v12 + 2 - (v11 + ((v34 & 0x1C0) != 0) + 5);
      v13 /= 10;
    }
    while ( v13 != 0 );
    v14 = (__int16)v14;
  }
  else
  {
    v12 = v11 + ((v34 & 0x1C0) != 0) + 5;
    v14 = 2;
  }
  if ( v36 <= v12 )
  {
    *(_DWORD *)(v2 + 8) = -1;
  }
  else
  {
    v15 = v36 - v12;
    if ( (v34 & 0x600) != 0 )
    {
      *(_DWORD *)(v2 + 8) = v15;
    }
    else
    {
      *(_DWORD *)(v2 + 8) = v15 - 1;
      if ( v15 > 0 )
      {
        do
        {
          sub_40B130(32, v2);
          v31 = *(_DWORD *)(v2 + 8);
          *(_DWORD *)(v2 + 8) = v31 - 1;
        }
        while ( v31 > 0 );
        v34 = *(_DWORD *)(v2 + 4);
      }
    }
  }
  if ( (v34 & 0x80u) != 0 )
  {
LABEL_80:
    sub_40B130(45, v2);
    goto LABEL_24;
  }
LABEL_21:
  if ( (v34 & 0x100) != 0 )
  {
    sub_40B130(43, v2);
  }
  else if ( (v34 & 0x40) != 0 )
  {
    sub_40B130(32, v2);
  }
LABEL_24:
  sub_40B130(48, v2);
  sub_40B130(*(_DWORD *)(v2 + 4) & 0x20 | 0x58, v2);
  v16 = *(_DWORD *)(v2 + 8);
  if ( v16 > 0 && (*(_BYTE *)(v2 + 5) & 2) != 0 )
  {
    *(_DWORD *)(v2 + 8) = v16 - 1;
    do
    {
      sub_40B130(48, v2);
      v17 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 8) = v17 - 1;
    }
    while ( v17 > 0 );
  }
  if ( v9 > &v42 )
  {
    do
    {
      v18 = *--v9;
      if ( v18 == 46 )
      {
        sub_40B480(v2);
      }
      else if ( v18 == 44 )
      {
        v40 = *(_WORD *)(v2 + 28);
        if ( v40 != 0 )
          sub_40B190((int)&v40, 1, v2);
      }
      else
      {
        sub_40B130(v18, v2);
      }
    }
    while ( v9 != &v42 );
  }
  while ( 1 )
  {
    v26 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = v26 - 1;
    if ( v26 <= 0 )
      break;
    sub_40B130(48, v2);
  }
  sub_40B130(*(_DWORD *)(v2 + 4) & 0x20 | 0x50, v2);
  *(_DWORD *)(v2 + 8) += v14;
  *(_DWORD *)(v2 + 4) |= 0x1C0u;
  return sub_40BA10(v35, v35 >> 31, (_DWORD *)v2);
}

