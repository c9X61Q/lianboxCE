// busybox.exe @ 0x41b000 size=655

_DWORD *sub_41B000()
{
  int v0; // ebx
  int v1; // esi
  int v2; // eax
  int v3; // eax
  _DWORD *result; // eax
  int v5; // eax
  int v6; // ebx
  unsigned int v7; // edx
  int v8; // esi
  int v9; // edi
  _DWORD *v10; // esi
  int v11; // ebx
  int v12; // esi
  int v13; // ebx
  _DWORD *v14; // eax
  _DWORD *v15; // esi
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  int v19; // edx

  do
    v3 = sub_446730();
  while ( (v3 & 0x8000) != 0 );
  if ( (v3 & 0x1000) != 0 )
  {
    while ( 1 )
    {
      result = (_DWORD *)sub_446730();
      if ( result == (_DWORD *)0x2000 )
        break;
      if ( *(char *)(dword_486010 + 5) >= 0 )
      {
        sub_45B408();
        sub_41B000();
      }
    }
    return result;
  }
  if ( (v3 & 0x7C38C425) != 0 )
  {
    sub_45B408();
    v5 = 66048;
    goto LABEL_40;
  }
  v6 = dword_486010;
  v5 = *(_DWORD *)dword_486010;
  v7 = *(_DWORD *)dword_486010 & 0xFF00;
  if ( v7 == 13056 )
  {
    v11 = sub_41EA34();
    result = (_DWORD *)sub_41B290();
    result[2] = v11;
    return result;
  }
  if ( v7 > 0x3300 )
  {
LABEL_40:
    v0 = v5;
    v1 = ((int (__cdecl *)())sub_41B308)();
    v2 = sub_449DBC();
    *(_DWORD *)(v1 + 8) = v2;
    if ( (v0 & 0x400000) != 0 && v2 == 0 )
      sub_4645B8();
    result = (_DWORD *)dword_486010;
    if ( (*(_BYTE *)(dword_486010 + 5) & 0x20) == 0 )
      return result;
    return (_DWORD *)sub_45B408();
  }
  if ( v7 == 12800 )
  {
    sub_446730();
    v14 = (_DWORD *)sub_449DBC();
    v15 = v14;
    if ( (*(_BYTE *)(v6 + 4) & 2) != 0 )
    {
      if ( v14 == nullptr || (*v14 & 0xFF00) != 0x1B00 )
        sub_4645B8();
      v16 = ((int (*)(void))sub_41B308)();
      *(_DWORD *)(v16 + 8) = v15[2];
      *(_DWORD *)(v16 + 12) = v15[3];
      result = (_DWORD *)sub_41B290();
      *result = 69120;
      result[2] = v15[2];
    }
    else
    {
      *(_DWORD *)(((int (*)(void))sub_41B308)() + 8) = v14;
      v17 = sub_449DBC();
      sub_449DBC();
      result = (_DWORD *)sub_41B290();
      result[2] = v17;
      if ( v17 == 0 )
        *result = 512;
    }
    return result;
  }
  if ( v7 > 0x3200 )
    goto LABEL_40;
  if ( v7 == 12544 )
  {
    v12 = ((int (*)(void))sub_41B308)();
    v13 = sub_41B290();
    *(_DWORD *)(v12 + 16) = *(_DWORD *)(v13 + 16);
    sub_446730();
    result = (_DWORD *)sub_41EA34();
    *(_DWORD *)(v13 + 8) = result;
    return result;
  }
  if ( v7 > 0x3100 )
    goto LABEL_40;
  if ( v7 == 12288 )
  {
    v8 = ((int (*)(void))sub_41B308)();
    *(_DWORD *)(v8 + 8) = sub_41EA34();
    sub_41B000();
    v9 = ((int (*)(void))sub_41B308)();
    *(_DWORD *)(v8 + 12) = *(_DWORD *)(*(_DWORD *)(v6 - 76) + 4);
    if ( sub_446730() == 0x40000 )
    {
      sub_41B000();
      result = *(_DWORD **)(*(_DWORD *)(v6 - 76) + 4);
      *(_DWORD *)(v9 + 16) = result;
      return result;
    }
    return (_DWORD *)sub_45B408();
  }
  if ( v7 > 0x3000 )
    goto LABEL_40;
  if ( v7 == 2304 )
  {
    v18 = ((int (*)(void))sub_41B308)();
    v19 = *(_DWORD *)(v6 - 68);
    goto LABEL_39;
  }
  if ( v7 > 0x900 )
    goto LABEL_40;
  if ( v7 == 2048 )
  {
    v18 = ((int (*)(void))sub_41B308)();
    v19 = *(_DWORD *)(v6 - 72);
LABEL_39:
    *(_DWORD *)(v18 + 16) = v19;
    v5 = *(_DWORD *)v6;
    goto LABEL_40;
  }
  if ( v7 > 0x800 || (*(_DWORD *)dword_486010 & 0xFE00) != 0x400 )
    goto LABEL_40;
  v10 = (_DWORD *)((int (*)(void))sub_41B308)();
  result = (_DWORD *)sub_449DBC();
  v10[2] = result;
  if ( (*(_BYTE *)(v6 + 4) & 8) != 0 )
  {
    *v10 |= *(_DWORD *)v6;
    result = (_DWORD *)sub_449DBC();
    v10[3] = result;
  }
  if ( (*(_BYTE *)(v6 + 5) & 0x20) != 0 )
    return (_DWORD *)sub_45B408();
  return result;
}

