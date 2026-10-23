// busybox.exe @ 0x439b14 size=408

int __cdecl sub_439B14(int a1, _BYTE *a2, _OWORD *a3)
{
  int v3; // ecx
  _BYTE *v4; // esi
  __int16 v5; // bx
  int v6; // edx
  __int128 *v7; // ebp
  __int128 *v8; // edi
  int Val; // ecx
  char *v10; // eax
  const char *v11; // ecx
  __int16 v12; // bx
  char v13; // t0
  __int128 *v14; // esi
  __int16 v15; // bx
  char v16; // t1
  _BYTE *v17; // edx
  int i; // eax
  int v20; // [esp+Ch] [ebp-28h]
  int v21; // [esp+10h] [ebp-24h]
  __int128 v22; // [esp+14h] [ebp-20h] BYREF
  _WORD v23[8]; // [esp+24h] [ebp-10h] BYREF

  v4 = a2;
  if ( a1 == 2 )
    return sub_439CAC(v3, a3);
  if ( a1 != 23 )
  {
    *_errno() = 102;
    return -1;
  }
  memset(&v22, 0, sizeof(v22));
  if ( *a2 == 58 )
  {
    if ( a2[1] != 58 )
      return 0;
    v4 = a2 + 1;
  }
  v5 = 0;
  v6 = 0;
  v7 = nullptr;
  v8 = &v22;
  while ( 1 )
  {
    while ( 1 )
    {
      Val = (unsigned __int8)*v4;
      if ( *v4 == 0 )
      {
        if ( v6 != 0 )
        {
          v14 = (__int128 *)((char *)v8 + 2);
          if ( v23 < (_WORD *)v8 + 1 )
            return 0;
          v16 = HIBYTE(v5);
          HIBYTE(v15) = v5;
          LOBYTE(v15) = v16;
          *(_WORD *)v8 = v15;
        }
        else
        {
          v14 = v8;
        }
        goto LABEL_31;
      }
      v21 = v6;
      ++v4;
      v20 = Val;
      v10 = strchr("0123456789abcdef", Val);
      v6 = v21;
      if ( v10 == nullptr )
        break;
      v11 = "0123456789abcdef";
LABEL_13:
      if ( ++v6 > 4 )
        return 0;
      v5 = ((_WORD)v10 - (_WORD)v11) | (16 * v5);
    }
    v10 = strchr("0123456789ABCDEF", v20);
    v6 = v21;
    if ( v10 != nullptr )
    {
      v11 = "0123456789ABCDEF";
      goto LABEL_13;
    }
    if ( v20 != 58 )
      break;
    if ( v21 != 0 )
    {
      if ( v23 < (_WORD *)v8 + 1 )
        return 0;
      v13 = HIBYTE(v5);
      HIBYTE(v12) = v5;
      LOBYTE(v12) = v13;
      *(_WORD *)v8 = v12;
      v8 = (__int128 *)((char *)v8 + 2);
      v5 = 0;
      v6 = 0;
    }
    else
    {
      if ( v7 != nullptr )
        return 0;
      v7 = v8;
    }
  }
  if ( v20 != 46 )
    return 0;
  v14 = (__int128 *)((char *)v8 + 4);
  if ( (char *)v8 + 4 > (char *)v23 || sub_439CAC(46, v8) <= 0 )
    return 0;
LABEL_31:
  if ( v7 != nullptr )
  {
    if ( v14 == (__int128 *)v23 )
      return 0;
    v17 = (_BYTE *)((char *)v14 - (char *)v7);
    for ( i = 1; ; ++i )
    {
      v14 = (__int128 *)((char *)v14 - 1);
      if ( (int)v17 < i )
        break;
      *((_BYTE *)v23 - i) = *(_BYTE *)v14;
      *(_BYTE *)v14 = 0;
    }
  }
  else if ( v14 != (__int128 *)v23 )
  {
    return 0;
  }
  *a3 = v22;
  return 1;
}

