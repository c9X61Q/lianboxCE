// resizecmdwindow.exe @ 0x140007cd0 size=395

_QWORD *__fastcall sub_140007CD0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *result; // rax
  _QWORD *i; // rcx
  unsigned __int8 v9; // r9
  __int64 **v10; // r11
  __int64 *v11; // r8
  __int64 *v12; // rdx
  _QWORD *v13; // r10
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // r10
  __int64 **v18; // r9
  _QWORD *v19; // r8
  __int64 v20; // r10
  _QWORD *v21; // r9
  _QWORD *v22; // r8
  _QWORD *v23; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  sub_140006480((__int64)(a1 + 3), 2 * v6, v4);
  a1[7] = v6;
  a1[6] = v6 - 1;
  result = *(_QWORD **)a1[1];
  for ( i = result; i != (_QWORD *)v4; result = i )
  {
    v9 = *((_BYTE *)result + 16);
    i = (_QWORD *)*i;
    v10 = (__int64 **)(a1[3] + 16 * ((0x100000001B3LL * (v9 ^ 0xCBF29CE484222325uLL)) & a1[6]));
    v11 = *v10;
    if ( *v10 == (__int64 *)v4 )
    {
      *v10 = result;
      v10[1] = result;
    }
    else
    {
      v12 = v10[1];
      if ( v9 == *((_BYTE *)v12 + 16) )
      {
        v13 = (_QWORD *)*v12;
        if ( (_QWORD *)*v12 != result )
        {
          v14 = (_QWORD *)result[1];
          *v14 = i;
          v15 = (_QWORD *)i[1];
          *v15 = v13;
          v16 = (_QWORD *)v13[1];
          *v16 = result;
          v13[1] = v15;
          i[1] = v14;
          result[1] = v16;
        }
        v10[1] = result;
      }
      else if ( v11 == v12 )
      {
LABEL_13:
        v17 = (_QWORD *)result[1];
        *v17 = i;
        v18 = (__int64 **)i[1];
        *v18 = v12;
        v19 = (_QWORD *)v12[1];
        *v19 = result;
        v12[1] = (__int64)v18;
        i[1] = v17;
        result[1] = v19;
        *v10 = result;
      }
      else
      {
        while ( 1 )
        {
          v12 = (__int64 *)v12[1];
          if ( v9 == *((_BYTE *)v12 + 16) )
            break;
          if ( v11 == v12 )
            goto LABEL_13;
        }
        v20 = *v12;
        v21 = (_QWORD *)result[1];
        *v21 = i;
        v22 = (_QWORD *)i[1];
        *v22 = v20;
        v23 = *(_QWORD **)(v20 + 8);
        *v23 = result;
        *(_QWORD *)(v20 + 8) = v22;
        i[1] = v21;
        result[1] = v23;
      }
    }
  }
  return result;
}

