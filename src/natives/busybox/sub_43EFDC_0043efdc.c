// busybox.exe @ 0x43efdc size=442

_DWORD *__usercall sub_43EFDC@<eax>(_DWORD *result@<eax>, unsigned __int16 *a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // ebp
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  int v10; // esi
  int v11; // ecx
  int v12; // ebp
  unsigned int v13; // ebx
  unsigned int v14; // esi
  unsigned int v15; // ebx
  unsigned int v16; // edx
  int v17; // esi
  int v18; // ecx
  _WORD *v19; // edi
  unsigned int v20; // ecx
  unsigned int v21; // esi
  unsigned __int16 v23; // [esp+0h] [ebp-1Ch]
  int v24; // [esp+4h] [ebp-18h]

  if ( *result <= 0xFFFFFFu )
  {
    *result <<= 8;
    v3 = result[3];
    v4 = result[4];
    result[4] = v4 + 1;
    result[1] = (result[1] << 8) + *(unsigned __int8 *)(v3 + v4);
  }
  v5 = *a2;
  v6 = v5 * (*result >> 11);
  v7 = result[1];
  if ( v6 <= v7 )
  {
    v8 = *result - v6;
    *result = v8;
    v9 = v7 - v6;
    result[1] = v9;
    *a2 = v5 - ((unsigned __int16)v5 >> 5);
    if ( v8 <= 0xFFFFFF )
    {
      *result = v8 << 8;
      v10 = result[3];
      v11 = result[4];
      result[4] = v11 + 1;
      result[1] = *(unsigned __int8 *)(v10 + v11) + (v9 << 8);
    }
    v12 = a2[1];
    v13 = v12 * (*result >> 11);
    v14 = result[1];
    if ( v13 <= v14 )
    {
      *result -= v13;
      result[1] = v14 - v13;
      a2[1] = v12 - ((unsigned __int16)v12 >> 5);
      v24 = (int)(a2 + 258);
      result[26] = 18;
      v15 = 256;
      goto LABEL_11;
    }
    *result = v13;
    a2[1] = ((2048 - v12) >> 5) + v12;
    v24 = (int)&a2[8 * a3 + 130];
    result[26] = 10;
  }
  else
  {
    *result = v6;
    *a2 = ((2048 - v5) >> 5) + v5;
    v24 = (int)&a2[8 * a3 + 2];
    result[26] = 2;
  }
  v15 = 8;
LABEL_11:
  v16 = 1;
  do
  {
    if ( *result <= 0xFFFFFFu )
    {
      *result <<= 8;
      v17 = result[3];
      v18 = result[4];
      result[4] = v18 + 1;
      result[1] = (result[1] << 8) + *(unsigned __int8 *)(v17 + v18);
    }
    v16 *= 2;
    v19 = (_WORD *)(v16 + v24);
    v23 = *(_WORD *)(v16 + v24);
    v20 = v23 * (*result >> 11);
    v21 = result[1];
    if ( v20 <= v21 )
    {
      *result -= v20;
      result[1] = v21 - v20;
      *v19 = v23 - (v23 >> 5);
      ++v16;
    }
    else
    {
      *result = v20;
      *v19 = v23 + ((2048 - v23) >> 5);
    }
  }
  while ( v15 > v16 );
  result[26] = result[26] - v15 + v16;
  return result;
}

