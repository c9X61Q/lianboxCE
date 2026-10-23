// busybox.exe @ 0x46b6cc size=1333

int __userpurge sub_46B6CC@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, size_t *a4)
{
  _DWORD *v5; // esi
  int v6; // edi
  _DWORD *v7; // ecx
  int v8; // eax
  signed int v9; // esi
  int *v10; // ecx
  _DWORD *v11; // eax
  int v12; // edx
  signed int k; // eax
  int v14; // esi
  int v15; // edi
  signed int m; // esi
  signed int n; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // ebx
  int v21; // esi
  int v22; // edi
  int v23; // ecx
  int v24; // edi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // edx
  unsigned int v29; // eax
  int v32; // [esp+10h] [ebp-5Ch]
  _DWORD *v33; // [esp+14h] [ebp-58h]
  _DWORD *v34; // [esp+14h] [ebp-58h]
  size_t *v36; // [esp+1Ch] [ebp-50h]
  int v37; // [esp+1Ch] [ebp-50h]
  int v38; // [esp+1Ch] [ebp-50h]
  int v39; // [esp+20h] [ebp-4Ch]
  int j; // [esp+24h] [ebp-48h]
  int v41; // [esp+24h] [ebp-48h]
  int v42; // [esp+28h] [ebp-44h]
  int v43; // [esp+28h] [ebp-44h]
  int i; // [esp+28h] [ebp-44h]
  int v45; // [esp+30h] [ebp-3Ch]
  int v46; // [esp+38h] [ebp-34h]
  int v47; // [esp+3Ch] [ebp-30h] BYREF
  int Block[11]; // [esp+40h] [ebp-2Ch] BYREF

  v33 = (_DWORD *)a1[17];
  v47 = 0;
  v39 = 4 * a3;
  v32 = *(_DWORD *)(a1[21] + 4 * a3);
  if ( v32 != 0 )
    v32 += 4;
  if ( a4[1] == 0 )
  {
    *(_DWORD *)(*a2 + 4 * a3) = 0;
LABEL_57:
    v6 = 0;
    if ( v32 != 0 && (*(_BYTE *)(*(_DWORD *)(a1[21] + 4 * a3) + 52) & 0x40) != 0 )
    {
      v41 = sub_45CCD4((int)a1, a3);
      if ( v41 != -1 )
      {
        v34 = (_DWORD *)a1[17];
        Block[0] = 0;
        for ( i = 0; i < *(_DWORD *)(v32 + 4); ++i )
        {
          v20 = *(_DWORD *)(*(_DWORD *)(v32 + 8) + 4 * i);
          if ( (v20 != a2[2] || a3 != a2[3]) && *(_BYTE *)(*v34 + 8 * v20 + 4) == 4 )
          {
            v21 = a1[25] + 20 * v41;
            v38 = v41;
            while ( 1 )
            {
              if ( v20 == *(_DWORD *)v21 )
              {
                v22 = *(_DWORD *)(v21 + 12) - *(_DWORD *)(v21 + 8);
                v23 = v22 != 0 ? *(_DWORD *)(v34[3] + 4 * v20) : **(_DWORD **)(v34[5] + 12 * v20 + 8);
                v24 = a3 + v22;
                if ( v24 <= a2[3] )
                {
                  v25 = *(_DWORD *)(*a2 + 4 * v24);
                  if ( v25 != 0 )
                  {
                    v46 = v23;
                    if ( sub_4541D4(v25 + 4, v23) != 0 && sub_41C000(v20, (int)(a2 + 4), a3, v46, v24) == 0 )
                    {
                      if ( Block[0] == 0 )
                      {
                        qmemcpy(Block, a2, 0x1Cu);
                        v6 = sub_454254(&Block[4], (int)(a2 + 4));
                        if ( v6 != 0 )
                          goto LABEL_89;
                      }
                      Block[2] = v20;
                      Block[3] = a3;
                      if ( sub_4543C4((size_t *)&Block[4], v38) < 0 )
                      {
                        v6 = 12;
                        goto LABEL_89;
                      }
                      v26 = *(_DWORD *)(Block[0] + v39);
                      v27 = sub_46094C(a1, (int)Block);
                      v6 = v27;
                      if ( v27 != 0 )
                        goto LABEL_89;
                      v28 = a2[1];
                      if ( v28 != 0 )
                      {
                        v6 = sub_442B70((int)v34, v28, Block[0], a3 + 1);
                        if ( v6 != 0 )
                          goto LABEL_89;
                      }
                      *(_DWORD *)(Block[0] + v39) = v26;
                      v29 = sub_4541D4((int)&Block[4], v38);
                      sub_4545FC((int)&Block[4], v29 - 1);
                      v21 = a1[25] + 20 * v38;
                    }
                  }
                }
              }
              ++v38;
              if ( *(_BYTE *)(v21 + 16) == 0 )
                break;
              v21 += 20;
            }
          }
        }
        v6 = 0;
LABEL_89:
        if ( Block[0] != 0 )
          free((void *)Block[6]);
      }
    }
    return v6;
  }
  if ( v32 == 0 )
    goto LABEL_94;
  Block[0] = 0;
  v7 = sub_453164(Block, v33, (int)a4);
  v8 = Block[0];
  if ( Block[0] == 0 )
  {
    v9 = v7[7];
    v10 = v7 + 7;
    if ( v9 == 0 )
    {
      v36 = (size_t *)v10;
      v6 = 12;
      if ( sub_454160(v10, a4[1]) != 0 )
        return v6;
      Block[0] = 0;
      while ( 1 )
      {
        v10 = (int *)v36;
        if ( v9 >= (int)a4[1] )
          break;
        Block[0] = sub_4544DC(v36, v33[7] + 12 * *(_DWORD *)(a4[2] + 4 * v9));
        if ( Block[0] != 0 )
        {
          v8 = 12;
          goto LABEL_17;
        }
        ++v9;
      }
    }
    v8 = sub_454010(a4, v32, (int)v10);
  }
LABEL_17:
  v47 = v8;
  v6 = v8;
  if ( v8 == 0 )
  {
    if ( a2[5] == 0 )
      goto LABEL_94;
    v45 = a1[25];
    for ( j = 0; j < a2[5]; ++j )
    {
      v11 = (_DWORD *)(v45 + 20 * *(_DWORD *)(a2[6] + 4 * j));
      if ( a3 > v11[2] && a3 <= v11[1] )
      {
        v42 = *(_DWORD *)(*v33 + 8 * *v11);
        if ( a3 == v11[3] )
        {
          v37 = -1;
          v12 = -1;
          for ( k = 0; k < (int)a4[1]; ++k )
          {
            v14 = *v33 + 8 * *(_DWORD *)(a4[2] + 4 * k);
            v15 = *(unsigned __int8 *)(v14 + 4);
            if ( v15 == 8 )
            {
              if ( v42 == *(_DWORD *)v14 )
                v12 = *(_DWORD *)(a4[2] + 4 * k);
            }
            else if ( v15 == 9 && v42 == *(_DWORD *)v14 )
            {
              v37 = *(_DWORD *)(a4[2] + 4 * k);
            }
          }
          if ( v12 >= 0 )
          {
            v6 = sub_463A98(v33, v12, (int)a4, v32);
            if ( v6 != 0 )
              goto LABEL_55;
          }
          if ( v37 >= 0 )
          {
            for ( m = 0; m < (int)a4[1]; ++m )
            {
              v43 = *(_DWORD *)(a4[2] + 4 * m);
              if ( sub_4541D4(12 * v43 + v33[7], v37) == 0 && sub_4541D4(12 * v43 + v33[6], v37) == 0 )
              {
                v6 = sub_463A98(v33, v43, (int)a4, v32);
                if ( v6 != 0 )
                  goto LABEL_55;
                --m;
              }
            }
          }
        }
        else
        {
          for ( n = 0; n < (int)a4[1]; ++n )
          {
            v18 = *(_DWORD *)(a4[2] + 4 * n);
            v19 = *v33 + 8 * v18;
            if ( (unsigned int)*(unsigned __int8 *)(v19 + 4) - 8 <= 1 && v42 == *(_DWORD *)v19 )
            {
              v6 = sub_463A98(v33, v18, (int)a4, v32);
              if ( v6 != 0 )
                goto LABEL_55;
            }
          }
        }
      }
    }
    v6 = 0;
LABEL_55:
    v47 = v6;
    if ( v6 == 0 )
    {
LABEL_94:
      v5 = (_DWORD *)(*a2 + v39);
      *v5 = sub_453164(&v47, v33, (int)a4);
      v6 = v47;
      if ( v47 == 0 )
        goto LABEL_57;
    }
  }
  return v6;
}

