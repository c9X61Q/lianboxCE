// busybox.exe @ 0x43fc04 size=983

int __cdecl sub_43FC04(unsigned __int8 *a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned __int8 *v4; // ebx
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // edx
  int v8; // edx
  _BYTE *v9; // esi
  _BYTE *v10; // edi
  int v11; // eax
  unsigned __int8 *v12; // ebx
  _BYTE *v13; // eax
  unsigned int v14; // edx
  unsigned __int8 *v15; // ecx
  _BYTE *v16; // edx
  int v17; // edx
  bool v18; // cf
  _BYTE *v19; // edx
  int v20; // edi
  _BYTE *v21; // edi
  unsigned int v22; // edx
  unsigned int v23; // esi
  bool i; // zf
  int v25; // edx
  bool j; // zf
  int v27; // ebx
  _BYTE *v28; // edi
  int result; // eax
  _BYTE *v30; // edx
  _BYTE *v31; // eax
  unsigned __int8 *v32; // edx
  int v33; // ebx
  _BYTE *v34; // esi
  unsigned __int8 *v35; // edi
  _BYTE *v36; // eax
  unsigned int v37; // [esp+0h] [ebp-1Ch]
  unsigned int v38; // [esp+4h] [ebp-18h]
  _BYTE *v39; // [esp+8h] [ebp-14h]
  unsigned __int8 *v40; // [esp+8h] [ebp-14h]

  v4 = a1;
  v37 = (unsigned int)&a1[a2];
  v5 = *a4;
  v38 = a3 + *a4;
  *a4 = 0;
  v6 = *a1;
  if ( (unsigned __int8)v6 <= 0x11u )
  {
    v13 = (_BYTE *)a3;
    goto LABEL_20;
  }
  v4 = a1 + 1;
  v7 = v6 - 17;
  if ( v6 - 17 <= 3 )
  {
    v13 = (_BYTE *)a3;
    goto LABEL_53;
  }
  if ( v5 < v6 - 17 )
  {
    v13 = (_BYTE *)a3;
    goto LABEL_78;
  }
  if ( a2 - 1 < (unsigned int)(v6 - 16) )
  {
    v13 = (_BYTE *)a3;
    goto LABEL_76;
  }
  v8 = *a1;
  v9 = a1 + 1;
  v10 = (_BYTE *)a3;
  do
  {
    *v10++ = *v9++;
    --v8;
  }
  while ( v8 != 17 );
  v11 = v6 - 17;
  v12 = &v4[v11];
  v13 = (_BYTE *)(a3 + v11);
  while ( 2 )
  {
    v14 = *v12;
    v15 = v12 + 1;
    if ( v14 <= 0xF )
    {
      v16 = &v13[-2049 - (v14 >> 2) - 4 * v12[1]];
      if ( a3 > (unsigned int)v16 || v13 <= v16 )
      {
LABEL_79:
        *a4 = (unsigned int)&v13[-a3];
        return -6;
      }
      if ( v38 - (unsigned int)v13 > 2 )
      {
        v4 = v12 + 2;
        *v13 = *v16;
        v13[1] = v16[1];
        v13[2] = v16[2];
        v13 += 3;
        goto LABEL_19;
      }
LABEL_78:
      *a4 = (unsigned int)&v13[-a3];
      return -5;
    }
    do
    {
      while ( 1 )
      {
        if ( v14 > 0x3F )
        {
          v20 = ~((v14 >> 2) & 7) - 8 * *v15;
          v18 = __CFADD__(v13, v20);
          v21 = &v13[v20];
          if ( !v18 || a3 > (unsigned int)v21 )
            goto LABEL_79;
          v22 = v14 >> 5;
          if ( v38 - (unsigned int)v13 < v22 + 1 )
            goto LABEL_78;
          v4 = v15 + 1;
          v23 = v22 - 1;
LABEL_49:
          *v13 = *v21;
          v30 = v13 + 2;
          v13[1] = v21[1];
          v39 = &v21[v23];
          v31 = v13 + 2;
          do
          {
            *v31++ = v21[2];
            ++v21;
          }
          while ( v39 != v21 );
          v13 = &v30[v23];
          goto LABEL_19;
        }
        if ( v14 > 0x1F )
        {
          v23 = v14 & 0x1F;
          if ( (v14 & 0x1F) == 0 )
          {
            for ( i = v15 == (unsigned __int8 *)v37; !i; i = v37 == (_DWORD)v15 )
            {
              v25 = *v15;
              if ( (_BYTE)v25 != 0 )
              {
                if ( v23 > 0xFFFFFE01 )
                  goto LABEL_76;
                ++v15;
                v23 += v25 + 31;
                goto LABEL_34;
              }
              v23 += 255;
              ++v15;
            }
            goto LABEL_76;
          }
LABEL_34:
          v21 = &v13[~((*v15 >> 2) + (v15[1] << 6))];
          v4 = v15 + 2;
          goto LABEL_46;
        }
        if ( v14 > 0xF )
        {
          v23 = v14 & 7;
          if ( (v14 & 7) == 0 )
          {
            for ( j = v15 == (unsigned __int8 *)v37; !j; j = v37 == (_DWORD)v15 )
            {
              v27 = *v15;
              if ( (_BYTE)v27 != 0 )
              {
                if ( v23 > 0xFFFFFE01 )
                  goto LABEL_76;
                ++v15;
                v23 += v27 + 7;
                goto LABEL_42;
              }
              v23 += 255;
              ++v15;
            }
            goto LABEL_76;
          }
LABEL_42:
          v28 = &v13[-(((_WORD)v14 << 11) & 0x4000) - (*v15 >> 2) + -64 * v15[1]];
          v4 = v15 + 2;
          if ( v13 == v28 )
          {
            *a4 = (unsigned int)&v13[-a3];
            result = 0;
            if ( (unsigned __int8 *)v37 != v4 )
              return (unsigned int)v4 < v37 ? -8 : -4;
            return result;
          }
          v21 = v28 - 0x4000;
LABEL_46:
          if ( v13 <= v21 || (unsigned int)v21 < a3 )
            goto LABEL_79;
          if ( v38 - (unsigned int)v13 < v23 + 2 )
            goto LABEL_78;
          goto LABEL_49;
        }
        v17 = ~(v14 >> 2) - 4 * *v15;
        v18 = __CFADD__(v13, v17);
        v19 = &v13[v17];
        if ( !v18 || a3 > (unsigned int)v19 )
          goto LABEL_79;
        if ( v38 - (unsigned int)v13 <= 1 )
          goto LABEL_78;
        v4 = v15 + 1;
        *v13 = *v19;
        v13[1] = v19[1];
        v13 += 2;
LABEL_19:
        v7 = *(v4 - 2) & 3;
        if ( (*(v4 - 2) & 3) == 0 )
          break;
LABEL_53:
        if ( v38 - (unsigned int)v13 < v7 )
          goto LABEL_78;
        if ( v37 - (unsigned int)v4 < v7 + 1 )
          goto LABEL_76;
        *v13 = *v4;
        if ( v7 == 1 )
        {
          v32 = v4 + 1;
          ++v13;
        }
        else
        {
          v13[1] = v4[1];
          if ( v7 == 2 )
          {
            v32 = v4 + 2;
            v13 += 2;
          }
          else
          {
            v32 = v4 + 3;
            v13[2] = v4[2];
            v13 += 3;
          }
        }
        v15 = v32 + 1;
        if ( v37 <= (unsigned int)(v32 + 1) )
        {
LABEL_74:
          *a4 = (unsigned int)&v13[-a3];
          return -7;
        }
        v14 = *v32;
      }
LABEL_20:
      if ( (unsigned int)v4 >= v37 )
        goto LABEL_74;
      v15 = v4 + 1;
      v14 = *v4;
    }
    while ( v14 > 0xF );
    if ( *v4 != 0 )
    {
LABEL_69:
      if ( v38 - (unsigned int)v13 < v14 + 3 )
        goto LABEL_78;
      if ( v37 - (unsigned int)v15 >= v14 + 4 )
      {
        *v13 = *v15;
        v13[1] = v15[1];
        v40 = v15 + 3;
        v34 = v13 + 3;
        v13[2] = v15[2];
        v35 = &v15[v14];
        v36 = v13 + 3;
        do
        {
          *v36++ = v15[3];
          ++v15;
        }
        while ( v35 != v15 );
        v12 = &v40[v14];
        v13 = &v34[v14];
        continue;
      }
    }
    else
    {
      while ( (unsigned __int8 *)v37 != v15 )
      {
        v33 = *v15;
        if ( (_BYTE)v33 != 0 )
        {
          if ( v14 > 0xFFFFFE01 )
            goto LABEL_76;
          ++v15;
          v14 += v33 + 15;
          goto LABEL_69;
        }
        v14 += 255;
        ++v15;
      }
    }
    break;
  }
LABEL_76:
  *a4 = (unsigned int)&v13[-a3];
  return -4;
}

