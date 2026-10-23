// busybox.exe @ 0x413374 size=194

int __usercall sub_413374@<eax>(_DWORD *a1@<eax>)
{
  int v1; // edx
  int v2; // ebx
  int i; // esi
  _BYTE *v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v1 = a1[11];
  v2 = a1[12];
  for ( i = 0; v2 > i; ++i )
    a1[20] = *(_DWORD *)(a1[19] + 4 * ((unsigned __int8)v1 ^ HIBYTE(a1[20]))) ^ (a1[20] << 8);
  *((_BYTE *)a1 + v1 + 100) = 1;
  v4 = (_BYTE *)(a1[8] + a1[13]);
  if ( v2 == 3 )
  {
    *v4 = v1;
    ++a1[13];
LABEL_10:
    *(_BYTE *)(a1[8] + a1[13]++) = v1;
    goto LABEL_11;
  }
  if ( v2 > 3 )
  {
LABEL_12:
    *((_BYTE *)a1 + v2 + 96) = 1;
    *v4 = v1;
    v5 = a1[13];
    a1[13] = v5 + 1;
    *(_BYTE *)(a1[8] + v5 + 1) = v1;
    v6 = a1[13];
    a1[13] = v6 + 1;
    *(_BYTE *)(a1[8] + v6 + 1) = v1;
    v7 = a1[13];
    a1[13] = v7 + 1;
    *(_BYTE *)(a1[8] + v7 + 1) = v1;
    v8 = a1[13];
    a1[13] = v8 + 1;
    *(_BYTE *)(a1[8] + v8 + 1) = a1[12] - 4;
    goto LABEL_13;
  }
  if ( v2 != 1 )
  {
    if ( v2 != 2 )
      goto LABEL_12;
    goto LABEL_10;
  }
LABEL_11:
  *(_BYTE *)(a1[8] + a1[13]) = v1;
LABEL_13:
  ++a1[13];
  return (unsigned __int8)v1;
}

