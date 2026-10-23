// busybox.exe @ 0x42635c size=741

unsigned int __usercall sub_42635C@<eax>(_BYTE *a1@<eax>, int a2@<edx>, _BYTE *a3@<ecx>, _DWORD *a4, int a5)
{
  unsigned __int8 *v5; // eax
  _BYTE *v6; // edx
  unsigned __int8 v7; // bl
  unsigned int v8; // ecx
  int v9; // edi
  _BYTE *v10; // ebp
  unsigned int v11; // esi
  _BYTE *v12; // ecx
  unsigned int v13; // ecx
  _BYTE *v14; // edi
  _BYTE *v15; // ebx
  unsigned int v16; // esi
  char v17; // al
  char v18; // al
  _BYTE *v19; // ebx
  unsigned int v20; // esi
  unsigned int v21; // edi
  char v22; // al
  _BYTE *i; // ebp
  unsigned int v24; // eax
  unsigned int v25; // ebp
  unsigned int v27; // [esp+0h] [ebp-2Ch]
  _BYTE *v28; // [esp+4h] [ebp-28h]
  unsigned __int8 v30; // [esp+Dh] [ebp-1Fh]
  unsigned __int8 v31; // [esp+Eh] [ebp-1Eh]
  unsigned int v32; // [esp+10h] [ebp-1Ch]
  unsigned int v33; // [esp+14h] [ebp-18h]

  v32 = (unsigned int)&a1[a2];
  v33 = (unsigned int)&a1[a2 - 13];
  v5 = a1 + 4;
  v28 = a1;
  v6 = a3;
  while ( 1 )
  {
    v7 = v5[3];
    v30 = v5[2];
    v31 = v5[1];
    v8 = (unsigned int)(33 * (*v5 ^ (32 * (v31 ^ (32 * (v30 ^ (v7 << 6))))))) >> 5;
    v9 = v8 & 0x3FFF;
    v27 = (unsigned int)&v5[-*(_DWORD *)(a5 + 4 * v9)];
    v10 = *(_BYTE **)(a5 + 4 * v9);
    if ( v27 - 1 > 0xBFFE )
      break;
    if ( v10 < a1 )
      break;
    if ( v27 > 0x800 && v7 != v10[3] )
    {
      v9 = v8 & 0x7FF ^ 0x201F;
      v11 = (unsigned int)&v5[-*(_DWORD *)(a5 + 4 * v9)];
      v27 = v11;
      v10 = *(_BYTE **)(a5 + 4 * v9);
      if ( v11 - 1 > 0xBFFE || v10 < a1 || v11 > 0x800 && v7 != v10[3] )
        break;
    }
    if ( *v5 != *v10 || v31 != v10[1] || v30 != v10[2] )
      break;
    *(_DWORD *)(a5 + 4 * v9) = v5;
    if ( v5 != v28 )
    {
      v13 = v5 - v28;
      if ( (unsigned int)(v5 - v28) > 3 )
      {
        v14 = v6 + 1;
        if ( v13 > 0x12 )
        {
          v15 = v6 + 1;
          v16 = v13 - 18;
          *v6 = 0;
          while ( 1 )
          {
            v14 = v15 + 1;
            if ( v16 <= 0xFF )
              break;
            v16 -= 255;
            *v15++ = 0;
          }
          *v15 = v16;
        }
        else
        {
          *v6 = v13 - 3;
        }
      }
      else
      {
        *(v6 - 2) |= v13;
        v14 = v6;
      }
      v6 = &v14[v13];
      do
        *v14++ = *v28++;
      while ( v14 != v6 );
      v28 = v5;
    }
    v12 = v5 + 4;
    if ( v10[3] == v5[3] )
    {
      v12 = v5 + 5;
      if ( v10[4] == v5[4] )
      {
        v12 = v5 + 6;
        if ( v10[5] == v5[5] )
        {
          v12 = v5 + 7;
          if ( v10[6] == v5[6] )
          {
            v12 = v5 + 8;
            if ( v10[7] == v5[7] )
            {
              v12 = v5 + 9;
              if ( v10[8] == v5[8] )
              {
                for ( i = v10 + 9; (unsigned int)v12 < v32 && *i == *v12; ++i )
                  ++v12;
                v24 = v12 - v28;
                v19 = v6 + 1;
                if ( v27 <= 0x4000 )
                {
                  v20 = v27 - 1;
                  if ( v24 <= 0x21 )
                  {
                    v18 = v24 - 2;
LABEL_48:
                    v22 = v18 | 0x20;
LABEL_40:
                    *v6 = v22;
LABEL_56:
                    *v19 = 4 * v20;
                    v6 = v19 + 2;
                    v19[1] = v20 >> 6;
                    goto LABEL_57;
                  }
                  v25 = v24 - 33;
                  *v6 = 32;
LABEL_54:
                  while ( v25 > 0xFF )
                  {
                    v25 -= 255;
                    *v19++ = 0;
                  }
                  *v19++ = v25;
                  goto LABEL_56;
                }
                v20 = v27 - 0x4000;
                v21 = ((v27 - 0x4000) >> 11) & 8;
                if ( v24 > 9 )
                {
                  v25 = v24 - 9;
                  *v6 = v21 | 0x10;
                  goto LABEL_54;
                }
                v18 = v24 - 2;
LABEL_39:
                v22 = v21 | v18 | 0x10;
                goto LABEL_40;
              }
            }
          }
        }
      }
    }
    v17 = (_BYTE)--v12 - (_BYTE)v28;
    if ( v27 > 0x800 )
    {
      v18 = v17 - 2;
      v19 = v6 + 1;
      if ( v27 <= 0x4000 )
      {
        v20 = v27 - 1;
        goto LABEL_48;
      }
      v20 = v27 - 0x4000;
      v21 = ((v27 - 0x4000) >> 11) & 8;
      goto LABEL_39;
    }
    *v6 = (4 * (v27 - 1)) & 0x1C | (32 * (v17 - 1));
    v6[1] = (v27 - 1) >> 3;
    v6 += 2;
LABEL_57:
    if ( (unsigned int)v12 >= v33 )
      goto LABEL_60;
    v28 = v12;
LABEL_16:
    v5 = v12;
  }
  *(_DWORD *)(a5 + 4 * v9) = v5;
  v12 = v5 + 1;
  if ( v33 > (unsigned int)(v5 + 1) )
    goto LABEL_16;
  v12 = v28;
LABEL_60:
  *a4 = v6 - a3;
  return v32 - (_DWORD)v12;
}

