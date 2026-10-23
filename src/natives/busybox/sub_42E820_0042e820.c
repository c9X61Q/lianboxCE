// busybox.exe @ 0x42e820 size=1487

int __usercall sub_42E820@<eax>(_DWORD *a1@<eax>)
{
  int v1; // ebx
  int i; // eax
  int j; // eax
  int k; // eax
  int v5; // edx
  char *v6; // eax
  int m; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int n; // edx
  int v13; // eax
  int ii; // ecx
  int v15; // edx
  int v16; // eax
  int nn; // eax
  int v18; // esi
  unsigned int v19; // ecx
  _DWORD *i1; // edx
  int v21; // edi
  int v22; // esi
  unsigned int v23; // ecx
  _DWORD *i2; // edx
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // edi
  int v30; // ecx
  _DWORD *v31; // edx
  int *v32; // ecx
  int v33; // edx
  _DWORD *v34; // ecx
  int v35; // eax
  int v36; // edi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // edx
  __int64 i3; // rax
  int v44; // ecx
  int v45; // ebp
  int v47; // [esp+4h] [ebp-B78h]
  int v48; // [esp+8h] [ebp-B74h]
  int jj; // [esp+Ch] [ebp-B70h]
  int v50; // [esp+10h] [ebp-B6Ch]
  int kk; // [esp+14h] [ebp-B68h]
  int v52; // [esp+18h] [ebp-B64h]
  int v53; // [esp+1Ch] [ebp-B60h]
  int v54; // [esp+20h] [ebp-B5Ch]
  int v55; // [esp+24h] [ebp-B58h]
  int mm; // [esp+28h] [ebp-B54h]
  int v57; // [esp+28h] [ebp-B54h]
  int v58; // [esp+28h] [ebp-B54h]
  int v59; // [esp+2Ch] [ebp-B50h]
  int v60; // [esp+30h] [ebp-B4Ch]
  int v61; // [esp+34h] [ebp-B48h]
  int v62; // [esp+38h] [ebp-B44h]
  int v63; // [esp+3Ch] [ebp-B40h]
  unsigned int v64; // [esp+40h] [ebp-B3Ch]
  int v65; // [esp+44h] [ebp-B38h]
  _DWORD v66[100]; // [esp+48h] [ebp-B34h]
  _DWORD v67[356]; // [esp+1D8h] [ebp-9A4h]
  _DWORD v68[256]; // [esp+768h] [ebp-414h] BYREF
  char v69; // [esp+B68h] [ebp-14h] BYREF

  v1 = a1[2];
  v48 = a1[3];
  v52 = a1[4];
  v53 = a1[13];
  for ( i = 0; i != 257; ++i )
    v68[i] = 0;
  for ( j = 0; j < v53; ++j )
    ++v68[*(unsigned __int8 *)(v48 + j)];
  for ( k = 0; k != 256; ++k )
    v67[k + 100] = v68[k];
  v5 = v68[0];
  v6 = (char *)v68;
  do
  {
    v5 += *((_DWORD *)v6 + 1);
    *((_DWORD *)v6 + 1) = v5;
    v6 += 4;
  }
  while ( &v69 != v6 );
  for ( m = 0; m < v53; ++m )
  {
    v8 = *(unsigned __int8 *)(v48 + m);
    v9 = v68[v8] - 1;
    v68[v8] = v9;
    *(_DWORD *)(v1 + 4 * v9) = m;
  }
  v10 = v53;
  v11 = 0;
  do
    *(_DWORD *)(v52 + 4 * v11++) = 0;
  while ( (int)(((unsigned int)v53 >> 5) + 2) > v11 );
  for ( n = 0; n != 256; ++n )
    *(_DWORD *)(v52 + 4 * ((int)v68[n] >> 5)) |= 1 << v68[n];
  do
  {
    *(_DWORD *)(v52 + 4 * (v10 >> 5)) |= 1 << v10;
    *(_DWORD *)(v52 + 4 * ((v10 + 1) >> 5)) &= ~(1 << (v10 + 1));
    v10 += 2;
  }
  while ( v53 + 64 != v10 );
  v61 = 1;
  do
  {
    v13 = 0;
    for ( ii = 0; ii < v53; ++ii )
    {
      if ( ((1 << ii) & *(_DWORD *)(v52 + 4 * (ii >> 5))) != 0 )
        v13 = ii;
      v15 = *(_DWORD *)(v1 + 4 * ii) - v61;
      if ( v15 < 0 )
        v15 += v53;
      *(_DWORD *)(v48 + 4 * v15) = v13;
    }
    v63 = 0;
    v62 = -1;
LABEL_27:
    while ( 2 )
    {
      for ( jj = v62 + 1; ((1 << jj) & *(_DWORD *)(v52 + 4 * (jj >> 5))) != 0; ++jj )
      {
        if ( (jj & 0x1F) == 0 )
        {
          while ( *(_DWORD *)(v52 + 4 * (jj >> 5)) == -1 )
            jj += 32;
          while ( ((1 << jj) & *(_DWORD *)(v52 + 4 * (jj >> 5))) != 0 )
            ++jj;
          break;
        }
      }
      v54 = jj - 1;
      if ( v53 > jj - 1 )
      {
        for ( kk = jj; ((1 << kk) & *(_DWORD *)(v52 + 4 * (kk >> 5))) == 0; ++kk )
        {
          if ( (kk & 0x1F) == 0 )
          {
            while ( *(_DWORD *)(v52 + 4 * (kk >> 5)) == 0 )
              kk += 32;
            while ( ((1 << kk) & *(_DWORD *)(v52 + 4 * (kk >> 5))) == 0 )
              ++kk;
            break;
          }
        }
        v62 = kk - 1;
        if ( v53 > kk - 1 )
        {
          if ( jj >= kk )
            continue;
          v66[0] = jj - 1;
          v67[0] = kk - 1;
          LOWORD(v64) = 0;
          for ( mm = 1; ; mm = v55 )
          {
            v55 = mm - 1;
            v50 = v66[mm - 1];
            v47 = v67[mm - 1];
            if ( v47 - v50 > 9 )
            {
              v64 = (7621 * (_WORD)v64 + 1) & 0x7FFF;
              if ( v64 % 3 != 0 )
              {
                if ( v64 % 3 == 1 )
                  v26 = (v47 + v50) >> 1;
                else
                  v26 = v67[mm - 1];
              }
              else
              {
                v26 = v66[mm - 1];
              }
              v27 = *(_DWORD *)(v48 + 4 * *(_DWORD *)(v1 + 4 * v26));
              v28 = v66[mm - 1];
              v60 = v67[mm - 1];
              v59 = v28;
              v29 = v60;
              while ( v28 <= v29 )
              {
                v30 = *(_DWORD *)(v1 + 4 * v28);
                v65 = *(_DWORD *)(v48 + 4 * v30);
                if ( v65 == v27 )
                {
                  v31 = (_DWORD *)(v1 + 4 * v59);
                  *(_DWORD *)(v1 + 4 * v28) = *v31;
                  *v31 = v30;
                  ++v59;
                  goto LABEL_76;
                }
                if ( v65 - v27 > 0 )
                {
                  while ( 1 )
                  {
                    v32 = (int *)(v1 + 4 * v29);
                    v33 = *v32;
                    --v29;
                    if ( *(_DWORD *)(v48 + 4 * *v32) == v27 )
                    {
                      v34 = (_DWORD *)(v1 + 4 * v60);
                      *(_DWORD *)(v1 + 4 * v29 + 4) = *v34;
                      *v34 = v33;
                      --v60;
                    }
                    else if ( *(_DWORD *)(v48 + 4 * v33) - v27 < 0 )
                    {
                      v45 = *(_DWORD *)(v1 + 4 * v28);
                      *(_DWORD *)(v1 + 4 * v28) = v33;
                      *v32 = v45;
                      break;
                    }
                    if ( v28 > v29 )
                      goto LABEL_84;
                  }
                }
LABEL_76:
                ++v28;
              }
LABEL_84:
              if ( v59 <= v60 )
              {
                v35 = v28 - v59;
                if ( v28 - v59 > v59 - v50 )
                  v35 = v59 - v50;
                sub_445BE8(v35);
                v36 = v60 - v29;
                v37 = v47 - v60;
                if ( v47 - v60 > v36 )
                  v37 = v36;
                sub_445BE8(v37);
                v38 = v50 + v28 - v59 - 1;
                v39 = v47 - v36 + 1;
                if ( v38 - v50 <= v36 - 1 )
                {
                  v66[v55] = v39;
                  v40 = mm;
                  v66[mm] = v50;
                }
                else
                {
                  v67[v55] = v38;
                  v66[mm] = v39;
                  v40 = mm;
                  v38 = v47;
                }
                v67[v40] = v38;
                v55 = mm + 1;
                continue;
              }
            }
            else if ( v50 != v47 )
            {
              if ( v47 - v50 > 3 )
              {
                for ( nn = v47 - 4; v50 <= nn; --nn )
                {
                  v18 = *(_DWORD *)(v1 + 4 * nn);
                  v19 = *(_DWORD *)(v48 + 4 * v18);
                  v57 = nn + 4;
                  for ( i1 = (_DWORD *)(v1 + 4 * nn); v47 >= v57; i1 += 4 )
                  {
                    v21 = i1[4];
                    if ( v19 <= *(_DWORD *)(v48 + 4 * v21) )
                      break;
                    *i1 = v21;
                    v57 += 4;
                  }
                  *i1 = v18;
                }
              }
              v16 = v47;
              while ( v50 <= --v16 )
              {
                v22 = *(_DWORD *)(v1 + 4 * v16);
                v23 = *(_DWORD *)(v48 + 4 * v22);
                v58 = v16 + 1;
                for ( i2 = (_DWORD *)(v1 + 4 * v16); v47 >= v58; ++i2 )
                {
                  v25 = i2[1];
                  if ( v23 <= *(_DWORD *)(v48 + 4 * v25) )
                    break;
                  *i2 = v25;
                  ++v58;
                }
                *i2 = v22;
              }
            }
            if ( v55 == 0 )
            {
              v41 = -1;
              while ( v54 != kk )
              {
                v42 = *(_DWORD *)(v48 + 4 * *(_DWORD *)(v1 + 4 * v54));
                if ( v41 != v42 )
                  *(_DWORD *)(v52 + 4 * (v54 >> 5)) |= 1 << v54;
                ++v54;
                v41 = v42;
              }
              v63 += v54 - jj + 1;
              goto LABEL_27;
            }
          }
        }
      }
      break;
    }
    v61 *= 2;
  }
  while ( v53 >= v61 && v63 != 0 );
  for ( i3 = 0; SHIDWORD(i3) < v53; ++HIDWORD(i3) )
  {
    while ( 1 )
    {
      v44 = v67[(_DWORD)i3 + 100];
      if ( v44 != 0 )
        break;
      LODWORD(i3) = i3 + 1;
    }
    v67[(_DWORD)i3 + 100] = v44 - 1;
    *(_BYTE *)(v48 + *(_DWORD *)(v1 + 4 * HIDWORD(i3))) = i3;
  }
  return i3;
}

