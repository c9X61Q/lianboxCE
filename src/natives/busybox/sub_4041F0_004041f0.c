// busybox.exe @ 0x4041f0 size=742

int __cdecl sub_4041F0(char *a1, _DWORD *a2, signed int a3)
{
  char *v3; // edi
  int C; // ebx
  char v5; // al
  int v6; // esi
  unsigned int v7; // eax
  int v8; // ecx
  __int64 v9; // rax
  int v10; // esi
  char *v11; // ebp
  int v12; // edi
  unsigned int v13; // ebx
  int v14; // ebx
  unsigned int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  char v18; // [esp+2Fh] [ebp-1Dh]

  v3 = a1;
  if ( a2 != nullptr )
    *a2 = a1;
  if ( a3 == 1 || (unsigned int)a3 > 0x24 )
  {
    *errno() = 33;
    LODWORD(v9) = 0;
    return v9;
  }
  while ( 1 )
  {
    C = *v3;
    if ( isspace(C) == 0 )
      break;
    ++v3;
  }
  v18 = C;
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
        v10 = v7;
        v16 = a3;
      }
      else if ( isupper(v6) != 0 )
      {
        v10 = v6 - 55;
        v16 = a3;
      }
      else
      {
        v8 = islower(v6);
        LODWORD(v9) = 0;
        if ( v8 == 0 )
          return v9;
        v10 = v6 - 87;
        v16 = a3;
      }
      goto LABEL_16;
    }
    if ( (v3[1] & 0xDF) == 0x58 )
    {
LABEL_35:
      v5 = v3[2];
      a3 = 16;
      v3 += 2;
      goto LABEL_12;
    }
    v16 = 16;
  }
  else
  {
    a3 = 10;
    if ( v5 != 48 )
      goto LABEL_12;
    if ( (v3[1] & 0xDF) == 0x58 )
      goto LABEL_35;
    v16 = 8;
    a3 = 8;
  }
  v10 = 0;
LABEL_16:
  v11 = v3 + 1;
  LODWORD(v9) = 0;
  if ( v10 >= v16 )
    return v9;
  v17 = 0;
  v12 = v10 >> 31;
  while ( 1 )
  {
    v14 = *v11;
    if ( (unsigned int)(v14 - 48) <= 9 )
    {
      v13 = v14 - 48;
      goto LABEL_19;
    }
    if ( isupper(*v11) != 0 )
    {
      v13 = v14 - 55;
      goto LABEL_19;
    }
    if ( islower(v14) == 0 )
      break;
    v13 = v14 - 87;
LABEL_19:
    if ( v13 >= v16 )
      break;
    if ( sub_4023F0(0x7FFFFFFFFFFFFFFFLL, a3) + 2 < __PAIR64__(v12, v10) )
    {
      v17 = 1;
    }
    else
    {
      v12 = ((int)v13 + a3 * __PAIR64__(v12, v10)) >> 32;
      v10 = v13 + a3 * v10;
    }
    ++v11;
  }
  if ( a2 != nullptr )
    *a2 = v11;
  if ( v18 == 45 )
  {
    if ( (unsigned int)(v10 != 0) + v12 > 0x80000000 || v17 != 0 )
    {
      *errno() = 34;
      LODWORD(v9) = 0;
    }
    else
    {
      return -__SPAIR64__(v12, v10);
    }
  }
  else
  {
    LODWORD(v9) = v10;
    if ( v12 < 0 || v17 != 0 )
    {
      *errno() = 34;
      LODWORD(v9) = -1;
    }
  }
  return v9;
}

