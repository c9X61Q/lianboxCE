// busybox.exe @ 0x432cd4 size=251

int __usercall sub_432CD4@<eax>(_DWORD *a1@<eax>)
{
  int v2; // ebp
  int v3; // eax
  int i; // edx
  int j; // edx
  int k; // edx
  int v7; // esi
  int v8; // eax
  int m; // edi
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int result; // eax
  _BYTE v18[272]; // [esp+4h] [ebp-110h]

  v2 = a1[7];
  v3 = 0;
  for ( i = 0; i != 256; ++i )
  {
    if ( *((_BYTE *)a1 + i + 100) != 0 )
      *((_BYTE *)a1 + i + 356) = v3++;
  }
  a1[24] = v3;
  for ( j = 0; v3 + 1 >= j; ++j )
    a1[j + 153] = 0;
  for ( k = 0; k < v3; ++k )
    v18[k] = k;
  v7 = 0;
  v8 = 0;
  for ( m = 0; ; ++m )
  {
    v10 = a1[13];
    if ( v10 <= m )
      break;
    v11 = *(_DWORD *)(v2 + 4 * m) - 1;
    if ( v11 < 0 )
      v11 += v10;
    if ( v18[0] == *((_BYTE *)a1 + *(unsigned __int8 *)(a1[8] + v11) + 356) )
    {
      ++v8;
      continue;
    }
    if ( v8 != 0 )
      goto LABEL_21;
LABEL_25:
    v16 = sub_43AD8C();
    *(_WORD *)(a1[9] + 2 * v7++) = v16 + 1;
    ++a1[v16 + 154];
    v8 = 0;
  }
  if ( v8 == 0 )
    goto LABEL_27;
  m = -1;
LABEL_21:
  v12 = v8 - 1;
  v13 = a1[9];
  while ( 1 )
  {
    v14 = v12 & 1;
    *(_WORD *)(v13 + 2 * v7++) = v14;
    ++a1[v14 + 153];
    v15 = v12 - 2;
    if ( v15 < 0 )
      break;
    v12 = (unsigned int)v15 >> 1;
  }
  if ( m != -1 )
    goto LABEL_25;
LABEL_27:
  result = a1[24];
  *(_WORD *)(a1[9] + 2 * v7) = result + 1;
  ++a1[result + 154];
  a1[23] = v7 + 1;
  return result;
}

