// busybox.exe @ 0x40b590 size=944

int __usercall sub_40B590@<eax>(int a1@<eax>, char *a2@<edx>, int a3@<ecx>, int a4)
{
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // dl
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int result; // eax
  char v19; // dl
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edx
  unsigned int v24; // [esp+Ch] [ebp-20h]

  v7 = *(_DWORD *)(a4 + 8);
  if ( a3 <= 0 )
  {
    if ( v7 <= 0 )
    {
      if ( v7 != 0 )
      {
        *(_DWORD *)(a4 + 8) = -1;
        goto LABEL_9;
      }
    }
    else
    {
      --v7;
    }
    v14 = *(_DWORD *)(a4 + 12);
    if ( v7 <= v14 )
    {
      *(_DWORD *)(a4 + 8) = -1;
      goto LABEL_9;
    }
  }
  else if ( a3 > v7 || (v14 = *(_DWORD *)(a4 + 12), v7 -= a3, v7 <= v14) )
  {
    *(_DWORD *)(a4 + 8) = -1;
    v8 = -1;
    if ( (*(_BYTE *)(a4 + 5) & 0x10) == 0 )
      goto LABEL_9;
LABEL_4:
    if ( *(_WORD *)(a4 + 28) == 0 )
      goto LABEL_28;
    goto LABEL_5;
  }
  v8 = v7 - v14;
  *(_DWORD *)(a4 + 8) = v8;
  if ( v14 > 0 || ((v21 = *(_DWORD *)(a4 + 4)) & 0x800) != 0 )
  {
    *(_DWORD *)(a4 + 8) = --v8;
    if ( a3 <= 0 || (*(_BYTE *)(a4 + 5) & 0x10) == 0 )
      goto LABEL_28;
    goto LABEL_4;
  }
  if ( a3 > 0 && (v21 & 0x1000) != 0 && *(_WORD *)(a4 + 28) != 0 )
  {
LABEL_5:
    v9 = v8;
    v24 = (a3 + 2) / 3u;
    if ( v24 != 1 )
    {
      while ( v9 > 0 )
      {
        *(_DWORD *)(a4 + 8) = --v9;
        if ( v9 + v24 - 1 - v8 == 0 )
        {
          v8 = v9;
          goto LABEL_28;
        }
      }
      goto LABEL_9;
    }
LABEL_28:
    if ( v8 > 0 )
      goto LABEL_29;
LABEL_9:
    if ( a1 == 0 )
    {
LABEL_10:
      v10 = *(_DWORD *)(a4 + 4);
      goto LABEL_11;
    }
    goto LABEL_52;
  }
LABEL_29:
  if ( a1 != 0 )
  {
    v15 = v8 - 1;
    *(_DWORD *)(a4 + 8) = v15;
    if ( v15 != 0 && (*(_DWORD *)(a4 + 4) & 0x600) == 0 )
      goto LABEL_33;
LABEL_52:
    sub_40B130(45, a4);
    goto LABEL_14;
  }
  v10 = *(_DWORD *)(a4 + 4);
  if ( (v10 & 0x1C0) != 0 )
  {
    v15 = v8 - 1;
    *(_DWORD *)(a4 + 8) = v15;
    if ( v15 != 0 && (v10 & 0x600) == 0 )
    {
LABEL_33:
      *(_DWORD *)(a4 + 8) = v15 - 1;
      do
      {
LABEL_34:
        sub_40B130(32, a4);
        v16 = *(_DWORD *)(a4 + 8);
        *(_DWORD *)(a4 + 8) = v16 - 1;
      }
      while ( v16 > 0 );
      if ( a1 != 0 )
        goto LABEL_52;
      goto LABEL_10;
    }
  }
  else if ( (v10 & 0x600) == 0 )
  {
    v23 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 8) = v23 - 1;
    if ( v23 > 0 )
      goto LABEL_34;
  }
LABEL_11:
  if ( (v10 & 0x100) != 0 )
  {
    sub_40B130(43, a4);
  }
  else if ( (v10 & 0x40) != 0 )
  {
    sub_40B130(32, a4);
  }
LABEL_14:
  v11 = *(_DWORD *)(a4 + 8);
  if ( v11 > 0 && (*(_DWORD *)(a4 + 4) & 0x600) == 0x200 )
  {
    *(_DWORD *)(a4 + 8) = v11 - 1;
    do
    {
      sub_40B130(48, a4);
      v22 = *(_DWORD *)(a4 + 8);
      *(_DWORD *)(a4 + 8) = v22 - 1;
    }
    while ( v22 > 0 );
  }
  if ( a3 <= 0 )
  {
    sub_40B130(48, a4);
    v17 = *(_DWORD *)(a4 + 12);
    if ( v17 > 0 || (*(_BYTE *)(a4 + 5) & 8) != 0 )
    {
      sub_40B480(a4);
      if ( a3 == 0 )
        goto LABEL_44;
      v17 = *(_DWORD *)(a4 + 12);
    }
    else if ( a3 == 0 )
    {
LABEL_39:
      result = v17 - 1;
      *(_DWORD *)(a4 + 12) = result;
      return result;
    }
    *(_DWORD *)(a4 + 12) = a3 + v17;
    do
    {
      sub_40B130(48, a4);
      ++a3;
    }
    while ( a3 != 0 );
  }
  else
  {
    while ( 1 )
    {
      v12 = *a2;
      v13 = 48;
      if ( *a2 != 0 )
      {
        ++a2;
        v13 = v12;
      }
      sub_40B130(v13, a4);
      if ( --a3 == 0 )
        break;
      if ( (*(_BYTE *)(a4 + 5) & 0x10) != 0
        && *(_WORD *)(a4 + 28) != 0
        && (unsigned int)(-1431655765 * a3) <= 0x55555555 )
      {
        sub_40B190(a4 + 28, 1, a4);
      }
    }
    v17 = *(_DWORD *)(a4 + 12);
    if ( v17 <= 0 && (*(_BYTE *)(a4 + 5) & 8) == 0 )
      goto LABEL_39;
    sub_40B480(a4);
  }
LABEL_44:
  while ( 1 )
  {
    result = *(_DWORD *)(a4 + 12);
    *(_DWORD *)(a4 + 12) = result - 1;
    if ( result <= 0 )
      break;
    v19 = *a2;
    v20 = 48;
    if ( *a2 != 0 )
    {
      ++a2;
      v20 = v19;
    }
    sub_40B130(v20, a4);
  }
  return result;
}

