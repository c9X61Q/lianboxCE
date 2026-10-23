// busybox.exe @ 0x414e2c size=1159

const char *__usercall sub_414E2C@<eax>(int a1@<eax>, char a2@<dl>, _DWORD *a3@<ecx>, _DWORD *a4)
{
  _DWORD *v5; // ebp
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rax
  char v10; // al
  int v11; // eax
  __int64 v12; // rax
  unsigned __int8 v13; // al
  bool v14; // sf
  bool v15; // of
  char v16; // cl
  char v17; // cl
  bool v18; // sf
  bool v19; // of
  int v20; // ecx
  __int64 v21; // rax
  int v22; // ecx
  _DWORD *v24; // [esp+10h] [ebp-44h]
  unsigned __int64 v25; // [esp+10h] [ebp-44h]
  int v26; // [esp+18h] [ebp-3Ch]
  unsigned __int64 i; // [esp+1Ch] [ebp-38h]
  _BYTE v30[42]; // [esp+2Ah] [ebp-2Ah] BYREF

  if ( (_DWORD *)*a4 == a3 )
    return "arithmetic syntax error";
  v5 = (_DWORD *)(*a4 - 24);
  v24 = (_DWORD *)*a4;
  v26 = sub_4152B4();
  if ( v26 == 0 )
  {
    v6 = v24;
    HIDWORD(v7) = *(v24 - 6);
    LODWORD(v7) = *(v24 - 5);
    switch ( a2 )
    {
      case 17:
        HIDWORD(v7) = -HIDWORD(v7);
        LODWORD(v7) = (unsigned __int64)-__SPAIR64__(v7, HIDWORD(v7)) >> 32;
        goto LABEL_98;
      case 48:
        v8 = v7 == 0;
LABEL_48:
        v13 = v8;
        goto LABEL_36;
      case 16:
        v9 = ~v7;
LABEL_32:
        v7 = v9;
        goto LABEL_98;
      default:
        break;
    }
    if ( (unsigned __int8)(a2 - 18) <= 1u )
    {
      LODWORD(v7) = (__PAIR64__(v7, HIDWORD(v7)) + 1) >> 32;
      ++HIDWORD(v7);
      goto LABEL_98;
    }
    if ( (unsigned __int8)(a2 - 50) <= 1u )
    {
      LODWORD(v7) = (__PAIR64__(v7, HIDWORD(v7)) - 1) >> 32;
      --HIDWORD(v7);
      goto LABEL_98;
    }
    if ( a2 != 49 )
    {
      if ( a3 == v5 )
        return "arithmetic syntax error";
      *a4 = v5;
      v10 = *((_BYTE *)v24 - 8);
      if ( a2 == 4 )
        v10 = v10 == 0;
      if ( v10 != 0 )
        return "malformed ?: operator";
      v5 = v24 - 12;
      if ( a2 != 2 )
      {
        v11 = sub_4152B4();
        if ( v11 != 0 )
          return (const char *)v11;
        v6 = v24;
      }
      v25 = *((_QWORD *)v6 - 6);
      switch ( a2 )
      {
        case 4:
          if ( v25 == 0 )
          {
            HIDWORD(v7) = *(v6 - 4);
            LODWORD(v7) = *(v6 - 3);
          }
          break;
        case 36:
          if ( a3 == v5 )
            return "malformed ?: operator";
          *((_BYTE *)v6 - 32) = 36;
          *(v6 - 10) = HIDWORD(v7);
          *(v6 - 9) = v7;
          goto LABEL_97;
        case 66:
        case 7:
          HIDWORD(v9) = HIDWORD(v7) | v25;
          LODWORD(v9) = v7 | HIDWORD(v25);
          goto LABEL_32;
        case 5:
          HIDWORD(v12) = HIDWORD(v7) | v25;
          LODWORD(v12) = v7 | HIDWORD(v25);
LABEL_35:
          v13 = v12 != 0;
LABEL_36:
          HIDWORD(v7) = v13;
LABEL_37:
          LODWORD(v7) = 0;
          break;
        case 9:
        case 34:
          HIDWORD(v9) = HIDWORD(v7) & v25;
          LODWORD(v9) = v7 & HIDWORD(v25);
          goto LABEL_32;
        case 8:
        case 98:
          HIDWORD(v9) = HIDWORD(v7) ^ v25;
          LODWORD(v9) = v7 ^ HIDWORD(v25);
          goto LABEL_32;
        case 6:
          HIDWORD(v7) = v25 != 0 && v7 != 0;
          goto LABEL_37;
        case 10:
          v8 = v7 == __PAIR64__(v25, HIDWORD(v25));
          goto LABEL_48;
        case 42:
          HIDWORD(v12) = HIDWORD(v7) ^ v25;
          LODWORD(v12) = v7 ^ HIDWORD(v25);
          goto LABEL_35;
        case 75:
          v15 = __OFSUB__(v25, __PAIR64__(v7, HIDWORD(v7)));
          v14 = (((v25 - __PAIR64__(v7, HIDWORD(v7))) >> 32) & 0x80000000) != 0LL;
LABEL_70:
          v13 = v14 == v15;
          goto LABEL_36;
        case -30:
        case 44:
          v16 = BYTE4(v7);
          HIDWORD(v7) = v25 >> SBYTE4(v7);
          LODWORD(v7) = SHIDWORD(v25) >> v16;
          if ( (v16 & 0x20) != 0 )
          {
            HIDWORD(v7) = SHIDWORD(v25) >> v16;
            LODWORD(v7) = (int)v7 >> 31;
          }
          break;
        case -62:
        case 12:
          v17 = BYTE4(v7);
          LODWORD(v7) = v25 << SBYTE4(v7) >> 32;
          HIDWORD(v7) = (_DWORD)v25 << SBYTE4(v7);
          if ( (v17 & 0x20) != 0 )
            v7 = HIDWORD(v7);
          break;
        case 43:
          v19 = __OFSUB__(__PAIR64__(v7, HIDWORD(v7)), v25);
          v18 = (((__PAIR64__(v7, HIDWORD(v7)) - v25) >> 32) & 0x80000000) != 0LL;
LABEL_67:
          v13 = v18 ^ v19;
          goto LABEL_36;
        case 11:
          v19 = __OFSUB__(v25, __PAIR64__(v7, HIDWORD(v7)));
          v18 = (((v25 - __PAIR64__(v7, HIDWORD(v7))) >> 32) & 0x80000000) != 0LL;
          goto LABEL_67;
        case 107:
          v15 = __OFSUB__(__PAIR64__(v7, HIDWORD(v7)), v25);
          v14 = (((__PAIR64__(v7, HIDWORD(v7)) - v25) >> 32) & 0x80000000) != 0LL;
          goto LABEL_70;
        case 3:
        case 14:
          v20 = HIDWORD(v7) * HIDWORD(v25) + v7 * v25;
          LODWORD(v7) = (HIDWORD(v7) * (unsigned __int64)(unsigned int)v25) >> 32;
          HIDWORD(v7) *= (_DWORD)v25;
          LODWORD(v7) = v20 + v7;
          break;
        case 13:
        case -126:
          LODWORD(v7) = (v25 + __PAIR64__(v7, HIDWORD(v7))) >> 32;
          HIDWORD(v7) += v25;
          break;
        case -94:
        case 45:
          v21 = v25 - __PAIR64__(v7, HIDWORD(v7));
          goto LABEL_96;
        default:
          if ( (unsigned __int8)(a2 - 1) <= 1u )
            break;
          if ( a2 != 47 )
          {
            if ( v7 == 0 )
              return "divide by zero";
            if ( a2 != 78 && a2 != 67 && a2 != 46 && a2 != 35 )
            {
LABEL_97:
              v7 = __PAIR64__(v25, HIDWORD(v25));
              break;
            }
            if ( v7 == -1 && 2 * v25 == 0 )
              v7 = 0x100000000LL;
            if ( a2 == 46 || a2 == 35 )
              v21 = sub_4023F0(v25, __SPAIR64__(v7, HIDWORD(v7)));
            else
              LODWORD(v21) = sub_402540(v25, __SPAIR64__(v7, HIDWORD(v7)));
LABEL_96:
            v7 = __PAIR64__(v21, HIDWORD(v21));
            break;
          }
          if ( (v7 & 0x80000000) != 0LL )
            return "exponent less than 0";
          for ( i = 1; ; HIDWORD(i) += v22 )
          {
            LODWORD(v7) = (__PAIR64__(v7, HIDWORD(v7)) - 1) >> 32;
            --HIDWORD(v7);
            if ( __PAIR64__(v7, HIDWORD(v7)) == -1 )
              break;
            v22 = i * HIDWORD(v25) + HIDWORD(i) * v25;
            i = (unsigned int)v25 * (unsigned __int64)(unsigned int)i;
          }
          v7 = __PAIR64__(i, HIDWORD(i));
          break;
      }
    }
LABEL_98:
    if ( (a2 & 0xE) == 2 )
    {
      if ( v5[5] == 0 )
        return "arithmetic syntax error";
      sub_462844(v30, "%lld", __PAIR64__(v7, HIDWORD(v7)));
      (*(void (__fastcall **)(int, _BYTE *))(a1 + 8))(a1, v30);
      if ( a2 == 19 )
      {
        LODWORD(v7) = (__PAIR64__(v7, HIDWORD(v7)) - 1) >> 32;
        --HIDWORD(v7);
      }
      else if ( a2 == 51 )
      {
        LODWORD(v7) = (__PAIR64__(v7, HIDWORD(v7)) + 1) >> 32;
        ++HIDWORD(v7);
      }
    }
    *v5 = HIDWORD(v7);
    v5[1] = v7;
    v5[5] = 0;
  }
  return (const char *)v26;
}

