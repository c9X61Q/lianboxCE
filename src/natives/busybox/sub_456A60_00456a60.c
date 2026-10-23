// busybox.exe @ 0x456a60 size=245

int __usercall sub_456A60@<eax>(_DWORD *a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  int result; // eax
  _BYTE *v5; // esi
  int v6; // ecx
  int v7; // edi
  unsigned int v8; // eax
  _BYTE *v9; // ebp
  int v11; // ecx
  int v12; // edx
  int v14; // eax
  int v15; // edx
  int v17; // [esp+4h] [ebp-14h]

  result = a1[10];
  if ( result >= 0 )
  {
    v5 = a2;
    v17 = a1[15];
    if ( a1[7] == 0 )
      goto LABEL_17;
    v6 = a1[8];
    v7 = a1[11];
    v8 = a1[14];
    v9 = a2;
    do
    {
      --a1[7];
      v5 = v9;
LABEL_5:
      if ( --a3 < 0 )
      {
        a1[8] = v6;
        a1[11] = v7;
        a1[14] = v8;
        ++a1[7];
        return 0;
      }
      v9 = v5 + 1;
      *v5 = v7;
      v8 = a1[(v7 ^ HIBYTE(v8)) + 18] ^ (v8 << 8);
    }
    while ( a1[7] != 0 );
    ++v5;
    while ( 1 )
    {
      while ( --a1[10] >= 0 )
      {
        v11 = *(_DWORD *)(v17 + 4 * v6);
        v12 = (unsigned __int8)v11;
        v6 = v11 >> 8;
        if ( a1[9]-- != 1 )
        {
          if ( v7 != v12 )
          {
            a1[9] = 4;
            v7 = v12;
          }
          goto LABEL_5;
        }
        a1[7] = v12;
        a1[9] = 5;
        if ( v12 != 0 )
        {
          a1[7] = v12 - 1;
          goto LABEL_5;
        }
      }
      v14 = ~v8;
      a1[14] = v14;
      a1[13] = v14 ^ __ROL4__(a1[13], 1);
      v15 = a1[12];
      if ( v15 != v14 )
      {
        a1[13] = v15 + 1;
        return -1;
      }
LABEL_17:
      result = sub_434988(a1);
      if ( result != 0 )
        break;
      v6 = a1[8];
      v7 = a1[11];
      v8 = -1;
    }
    a1[10] = result;
    if ( result == -1 )
      return a3;
  }
  return result;
}

