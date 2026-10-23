// busybox.exe @ 0x4044e0 size=705

unsigned __int64 __cdecl sub_4044E0(char *a1, _DWORD *a2, signed int a3)
{
  char *v3; // esi
  int C; // ebx
  char v5; // al
  int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // edi
  char *v12; // ebp
  unsigned __int64 v13; // kr08_8
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  int v17; // ebx
  int *v18; // eax
  int *v20; // eax
  unsigned int v21; // [esp+24h] [ebp-28h]
  int v22; // [esp+28h] [ebp-24h]
  char v23; // [esp+2Fh] [ebp-1Dh]

  v3 = a1;
  if ( a2 != nullptr )
    *a2 = a1;
  if ( a3 == 1 || (unsigned int)a3 > 0x24 )
  {
    v18 = errno();
    v9 = 0;
    v10 = 0;
    *v18 = 33;
    return __PAIR64__(v10, v9);
  }
  while ( 1 )
  {
    C = *v3;
    if ( isspace(C) == 0 )
      break;
    ++v3;
  }
  v23 = C;
  v5 = C;
  if ( (((_BYTE)C - 43) & 0xFD) == 0 )
    v5 = *++v3;
  if ( a3 != 0 )
  {
    if ( a3 != 16 || v5 != 48 )
    {
LABEL_12:
      v6 = v5;
      v7 = v5 - 48;
      if ( v7 <= 9 )
      {
        v21 = a3;
        v11 = v7;
      }
      else if ( isupper(v6) != 0 )
      {
        v11 = v6 - 55;
        v21 = a3;
      }
      else
      {
        v8 = islower(v6);
        v9 = 0;
        v10 = 0;
        if ( v8 == 0 )
          return __PAIR64__(v10, v9);
        v11 = v6 - 87;
        v21 = a3;
      }
      goto LABEL_16;
    }
    if ( (v3[1] & 0xDF) == 0x58 )
    {
LABEL_36:
      v5 = v3[2];
      a3 = 16;
      v3 += 2;
      goto LABEL_12;
    }
    v21 = 16;
  }
  else
  {
    a3 = 10;
    if ( v5 != 48 )
      goto LABEL_12;
    if ( (v3[1] & 0xDF) == 0x58 )
      goto LABEL_36;
    v21 = 8;
    a3 = 8;
  }
  v11 = 0;
LABEL_16:
  v12 = v3 + 1;
  v9 = 0;
  v10 = 0;
  if ( v11 >= v21 )
    return __PAIR64__(v10, v9);
  v22 = 0;
  v13 = (int)v11;
  while ( 1 )
  {
    v17 = *v12;
    if ( (unsigned int)(v17 - 48) <= 9 )
    {
      v14 = v17 - 48;
      goto LABEL_19;
    }
    if ( isupper(*v12) != 0 )
    {
      v14 = v17 - 55;
      goto LABEL_19;
    }
    if ( islower(v17) == 0 )
      break;
    v14 = v17 - 87;
LABEL_19:
    if ( v14 >= v21 )
      break;
    LODWORD(v15) = sub_4026E0(0xFFFFFFFFFFFFFFFFuLL, a3, a3 >> 31);
    if ( v15 + 1 < v13 || (v16 = (int)v14 + a3 * v13) < v13 )
      v22 = 1;
    else
      v13 = v16;
    ++v12;
  }
  v10 = HIDWORD(v13);
  v9 = v13;
  if ( a2 != nullptr )
    *a2 = v12;
  if ( v22 != 0 )
  {
    v20 = errno();
    v9 = -1;
    v10 = -1;
    *v20 = 34;
  }
  else if ( v23 == 45 )
  {
    v10 = (unsigned __int64)-(__int64)v13 >> 32;
    v9 = -(int)v13;
  }
  return __PAIR64__(v10, v9);
}

