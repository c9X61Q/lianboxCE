// busybox.exe @ 0x44a178 size=2707

int *__usercall sub_44A178@<eax>(int a1@<eax>, int *a2@<edx>, int *a3@<ecx>, int a4, int a5, int *a6)
{
  int *v8; // esi
  char v9; // al
  int *v10; // ebx
  unsigned int v11; // ebp
  int *v12; // edx
  int v13; // eax
  _DWORD *v14; // ebp
  char v15; // al
  int j; // edx
  char v17; // al
  int v18; // eax
  char v19; // al
  int v20; // eax
  char v21; // cl
  int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned int k; // ecx
  int v26; // eax
  char v27; // al
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int *v31; // eax
  int v32; // edx
  int v33; // ebp
  char v34; // al
  int v35; // ebp
  char v36; // al
  int v37; // edx
  int *v38; // ebp
  char v39; // al
  int *v40; // ebp
  int v41; // eax
  int i; // ebx
  int v44; // [esp+Ch] [ebp-84h]
  int v46; // [esp+14h] [ebp-7Ch]
  _DWORD *v47; // [esp+14h] [ebp-7Ch]
  int *v48; // [esp+14h] [ebp-7Ch]
  int v49; // [esp+14h] [ebp-7Ch]
  unsigned int v50; // [esp+18h] [ebp-78h]
  int v51; // [esp+18h] [ebp-78h]
  int *v52; // [esp+18h] [ebp-78h]
  int v53; // [esp+1Ch] [ebp-74h]
  int *v54; // [esp+1Ch] [ebp-74h]
  int m; // [esp+1Ch] [ebp-74h]
  int v56; // [esp+1Ch] [ebp-74h]
  int v57; // [esp+1Ch] [ebp-74h]
  int v58; // [esp+20h] [ebp-70h]
  int v59; // [esp+24h] [ebp-6Ch]
  unsigned int v60; // [esp+28h] [ebp-68h] BYREF
  char *Str; // [esp+2Ch] [ebp-64h]
  int v62; // [esp+30h] [ebp-60h] BYREF
  char *v63; // [esp+34h] [ebp-5Ch]
  char v64[4]; // [esp+38h] [ebp-58h] BYREF
  char v65; // [esp+3Ch] [ebp-54h]
  char v66; // [esp+40h] [ebp-50h] BYREF
  _DWORD *v67; // [esp+60h] [ebp-30h] BYREF
  char v68; // [esp+64h] [ebp-2Ch]

  v8 = a6;
  while ( 2 )
  {
    v44 = *a2;
    v9 = *((_BYTE *)a3 + 4);
    switch ( v9 )
    {
      case 1:
        goto LABEL_8;
      case 4:
        v28 = 1 << *a3;
        if ( (v28 & *(_DWORD *)(v44 + 84)) == 0 )
        {
          *v8 = 6;
          return nullptr;
        }
        *(_DWORD *)(v44 + 80) |= v28;
        v10 = (int *)sub_4209D0(v44, nullptr, nullptr, a3);
        if ( v10 == nullptr )
          goto LABEL_9;
        v29 = v44;
        ++*(_DWORD *)(v44 + 76);
LABEL_138:
        *(_BYTE *)(v29 + 88) |= 2u;
        goto LABEL_109;
      case 5:
        v10 = (int *)sub_4209D0(v44, nullptr, nullptr, a3);
        if ( v10 == nullptr )
          goto LABEL_9;
        v29 = v44;
        if ( *(int *)(v44 + 92) > 1 )
          goto LABEL_138;
        goto LABEL_109;
      case 8:
        v11 = a2[6];
        a2[6] = v11 + 1;
        sub_42F118(a4 | 0x400000, a1);
        if ( *((_BYTE *)a3 + 4) == 9 )
        {
          v12 = nullptr;
        }
        else
        {
          v12 = (int *)sub_44B530(a4, a5 + 1, v8);
          if ( *v8 != 0 )
            goto LABEL_100;
          if ( *((_BYTE *)a3 + 4) != 9 )
          {
            *v8 = 8;
            goto LABEL_100;
          }
        }
        if ( v11 <= 8 )
          *(_DWORD *)(v44 + 84) |= 1 << v11;
        v13 = sub_420A78(v44, v12, nullptr, 17);
        v10 = (int *)v13;
        if ( v13 != 0 )
          *(_DWORD *)(v13 + 20) = v11;
        else
          *v8 = 12;
        goto LABEL_107;
      case 9:
        goto LABEL_122;
      case 11:
      case 18:
      case 19:
        goto LABEL_4;
      case 12:
        v35 = *a3;
        if ( (*a3 & 0x30F) != 0 )
        {
          v36 = *(_BYTE *)(v44 + 88);
          if ( (v36 & 0x10) == 0 )
          {
            *(_BYTE *)(v44 + 88) = v36 | 0x10;
            v47 = (_DWORD *)(v44 + 96);
            v37 = 0;
            do
            {
              for ( i = 0; i != 32; ++i )
              {
                v59 = v37;
                v57 = v37 + i;
                v41 = isalnum(v37 + i);
                v37 = v59;
                if ( v57 == 95 || v41 != 0 )
                  *v47 |= 1 << i;
              }
              v37 = v59 + 32;
              ++v47;
            }
            while ( v59 != 224 );
          }
        }
        if ( v35 == 256 )
        {
          *a3 = 6;
          v38 = (int *)sub_4209D0(v44, nullptr, nullptr, a3);
          *a3 = 9;
        }
        else
        {
          if ( v35 != 512 )
          {
            v10 = (int *)sub_4209D0(v44, nullptr, nullptr, a3);
            goto LABEL_134;
          }
          *a3 = 5;
          v38 = (int *)sub_4209D0(v44, nullptr, nullptr, a3);
          *a3 = 10;
        }
        v48 = (int *)sub_4209D0(v44, nullptr, nullptr, a3);
        v10 = (int *)sub_420A78(v44, v38, v48, 10);
        if ( v48 == nullptr || v38 == nullptr )
          goto LABEL_9;
LABEL_134:
        if ( v10 == nullptr )
          goto LABEL_9;
        sub_42F118(a4, a1);
        return v10;
      case 20:
        v14 = calloc(0x20u, 1u);
        if ( v14 == nullptr )
        {
          *v8 = 12;
          goto LABEL_100;
        }
        v46 = sub_44C8D8(a4, a1);
        v15 = *((_BYTE *)a3 + 4);
        if ( v15 == 2 )
          goto LABEL_23;
        if ( v15 == 25 )
        {
          if ( _bittest(&a4, 8u) )
            *v14 |= 0x400u;
          *(_DWORD *)(a1 + 24) += v46;
          v46 = sub_44C8D8(a4, a1);
          if ( *((_BYTE *)a3 + 4) == 2 )
          {
LABEL_23:
            *v8 = 2;
            goto LABEL_99;
          }
          v53 = 1;
        }
        else
        {
          v53 = 0;
        }
        if ( *((_BYTE *)a3 + 4) == 21 )
          *((_BYTE *)a3 + 4) = 1;
        for ( j = 1; ; j = 0 )
        {
          Str = &v66;
          *(_DWORD *)(a1 + 24) += v46;
          v17 = *((_BYTE *)a3 + 4);
          if ( (v17 & 0xFB) == 0x1A || v17 == 28 )
          {
            v18 = sub_448A7C(&v60, a1, (char *)a3);
            if ( v18 != 0 )
              goto LABEL_54;
          }
          else
          {
            if ( j == 0 && v17 == 22 )
            {
              sub_44C8D8(a4, a1);
              if ( v68 != 21 )
              {
                v18 = 11;
LABEL_54:
                *v8 = v18;
LABEL_99:
                free(v14);
LABEL_100:
                v10 = nullptr;
                goto LABEL_107;
              }
            }
            v60 = 0;
            LOBYTE(Str) = *(_BYTE *)a3;
          }
          v46 = sub_44C8D8(a4, a1);
          if ( ((v60 - 2) & 0xFFFFFFFD) != 0 )
          {
            v19 = *((_BYTE *)a3 + 4);
            if ( v19 == 2 )
              goto LABEL_44;
            if ( v19 == 22 )
            {
              *(_DWORD *)(a1 + 24) += v46;
              v20 = sub_44C8D8(a4, a1);
              v21 = v65;
              if ( v65 == 2 )
                goto LABEL_44;
              v22 = *(_DWORD *)(a1 + 24);
              if ( v65 != 21 )
              {
                v63 = (char *)&v67;
                *(_DWORD *)(a1 + 24) = v22 + v20;
                if ( (v21 & 0xFB) == 0x1A || v21 == 28 )
                {
                  v18 = sub_448A7C(&v62, a1, v64);
                  if ( v18 != 0 )
                    goto LABEL_54;
                }
                else
                {
                  v62 = 0;
                  LOBYTE(v63) = v64[0];
                }
                v46 = sub_44C8D8(a4, a1);
                if ( ((v60 - 2) & 0xFFFFFFFD) == 0 || ((v62 - 2) & 0xFFFFFFFD) == 0 )
                {
LABEL_84:
                  *v8 = 11;
                  goto LABEL_99;
                }
                if ( v60 == 3 && strlen(Str) > 1 || v62 == 3 && strlen(v63) > 1 )
                {
LABEL_83:
                  *v8 = 3;
                  goto LABEL_99;
                }
                if ( v60 == 0 )
                {
                  v23 = (unsigned __int8)Str;
                  goto LABEL_67;
                }
                v50 = 0;
                if ( v60 == 3 )
                {
                  v23 = (unsigned __int8)*Str;
LABEL_67:
                  v50 = v23;
                }
                if ( v62 != 0 )
                {
                  v24 = 0;
                  if ( v62 == 3 )
                    v24 = (unsigned __int8)*v63;
                }
                else
                {
                  v24 = (unsigned __int8)v63;
                }
                if ( v50 > v24 )
                  goto LABEL_84;
                for ( k = 0; k != 256; ++k )
                {
                  if ( v50 <= k && v24 >= k )
                    v14[k >> 5] |= 1 << k;
                }
                goto LABEL_90;
              }
              *(_DWORD *)(a1 + 24) = v22 - v46;
              *((_BYTE *)a3 + 4) = 1;
            }
          }
          if ( v60 == 4 )
          {
            v26 = sub_4192A4(Str, *(_DWORD *)(a1 + 48), (int)v14, a4);
            *v8 = v26;
            if ( v26 != 0 )
              goto LABEL_99;
          }
          else
          {
            if ( v60 > 4 )
              goto LABEL_92;
            switch ( v60 )
            {
              case 3u:
                goto LABEL_82;
              case 0u:
                v14[(unsigned __int8)Str >> 5] |= 1 << (char)Str;
                break;
              case 2u:
LABEL_82:
                if ( strlen(Str) != 1 )
                  goto LABEL_83;
                v14[(unsigned __int8)*Str >> 5] |= 1 << *Str;
LABEL_90:
                *v8 = 0;
                break;
              default:
                break;
            }
          }
LABEL_92:
          v27 = *((_BYTE *)a3 + 4);
          if ( v27 == 2 )
          {
LABEL_44:
            *v8 = 7;
            goto LABEL_99;
          }
          if ( v27 == 21 )
          {
            *(_DWORD *)(a1 + 24) += v46;
            if ( v53 != 0 )
              sub_418CB4((int)v14);
            v68 = 3;
            v67 = v14;
            v10 = (int *)sub_4209D0(v44, nullptr, nullptr, &v67);
            if ( v10 == nullptr )
            {
              *v8 = 12;
              goto LABEL_99;
            }
LABEL_107:
            if ( *v8 != 0 && v10 == nullptr )
              return nullptr;
LABEL_109:
            v31 = (int *)sub_42F118(a4, a1);
            while ( 2 )
            {
              LOBYTE(v31) = *((_BYTE *)a3 + 4);
              if ( (unsigned __int8)v31 > 0x17u )
                return v10;
              v32 = 9177088;
              if ( !_bittest(&v32, (unsigned int)v31) )
                return v10;
              v51 = *(_DWORD *)(a1 + 24);
              v54 = (int *)*a3;
              v58 = a3[1];
              if ( (_BYTE)v31 == 23 )
              {
                v31 = (int *)sub_42F0A8(a1, (unsigned __int8 *)a3, a4);
                v33 = (int)v31;
                if ( v31 == (int *)-1 )
                {
                  if ( *((_BYTE *)a3 + 4) == 1 && *(_BYTE *)a3 == 44 )
                  {
                    v33 = 0;
                    goto LABEL_145;
                  }
                  goto LABEL_143;
                }
                if ( v31 == (int *)-2 )
                  goto LABEL_115;
LABEL_145:
                v39 = *((_BYTE *)a3 + 4);
                v49 = v33;
                if ( v39 != 24 )
                {
                  v49 = -2;
                  if ( v39 == 1 && *(_BYTE *)a3 == 44 )
                  {
                    v31 = (int *)sub_42F0A8(a1, (unsigned __int8 *)a3, a4);
                    v49 = (int)v31;
                  }
                }
                if ( v33 == -2 || v49 == -2 )
                {
LABEL_115:
                  if ( _bittest(&a4, 0x14u) )
                  {
                    *(_DWORD *)(a1 + 24) = v51;
                    v31 = v54;
                    *a3 = (int)v54;
                    a3[1] = v58;
                    *((_BYTE *)a3 + 4) = 1;
                    goto LABEL_117;
                  }
                  if ( *((_BYTE *)a3 + 4) == 2 )
                  {
                    *v8 = 9;
                    goto LABEL_162;
                  }
LABEL_143:
                  *v8 = 10;
LABEL_162:
                  v10 = nullptr;
                  goto LABEL_117;
                }
                if ( v33 > v49 && v49 != -1 || *((_BYTE *)a3 + 4) != 24 )
                  goto LABEL_143;
              }
              else
              {
                v33 = (_BYTE)v31 == 18;
                v49 = 2 * ((_BYTE)v31 == 19) - 1;
              }
              v31 = (int *)sub_42F118(a4, a1);
              if ( v10 == nullptr )
                goto LABEL_117;
              v31 = (int *)(v33 | v49);
              if ( (v33 | v49) != 0 )
              {
                if ( v33 > 0 )
                {
                  v52 = v10;
                  for ( m = 2; v33 >= m; ++m )
                  {
                    v10 = sub_429660(v10, v44);
                    v31 = (int *)sub_420A78(v44, v52, v10, 16);
                    v52 = v31;
                    if ( v31 == nullptr || v10 == nullptr )
                      goto LABEL_183;
                  }
                  if ( v33 == v49 )
                  {
                    v10 = v52;
                    goto LABEL_117;
                  }
                  v10 = sub_429660(v10, v44);
                }
                else
                {
                  v52 = nullptr;
                }
                if ( *((_BYTE *)v10 + 24) == 17 )
                  sub_44DA6C(v10[5], sub_4423B4);
                v31 = (int *)sub_420A78(v44, v10, nullptr, (v49 == -1) + 10);
                if ( v31 != nullptr )
                {
                  v56 = v33 + 2;
                  v40 = v10;
                  v10 = v31;
                  while ( v49 >= v56 )
                  {
                    v40 = sub_429660(v40, v44);
                    v31 = (int *)sub_420A78(v44, v10, v40, 16);
                    if ( v40 == nullptr )
                      goto LABEL_183;
                    if ( v31 == nullptr )
                      goto LABEL_183;
                    v31 = (int *)sub_420A78(v44, v31, nullptr, 10);
                    v10 = v31;
                    if ( v31 == nullptr )
                      goto LABEL_183;
                    ++v56;
                  }
                  if ( v52 != nullptr )
                  {
                    v31 = (int *)sub_420A78(v44, v52, v10, 16);
                    v10 = v31;
                  }
LABEL_117:
                  if ( *v8 != 0 && v10 == nullptr )
                    return nullptr;
                  if ( _bittest(&a4, 0x17u) )
                  {
                    v34 = *((_BYTE *)a3 + 4);
                    if ( v34 == 11 || v34 == 23 )
                    {
LABEL_120:
                      *v8 = 13;
                      return nullptr;
                    }
                  }
                  continue;
                }
LABEL_183:
                *v8 = 12;
              }
              else
              {
                v31 = (int *)sub_44DA6C(0, sub_431E74);
              }
              goto LABEL_162;
            }
          }
        }
      case 23:
        if ( _bittest(&a4, 0x17u) )
          goto LABEL_120;
LABEL_4:
        if ( (a4 & 0x20) != 0 )
          goto LABEL_120;
        if ( (a4 & 0x10) != 0 )
        {
          sub_42F118(a4, a1);
          continue;
        }
        if ( v9 == 9 )
        {
LABEL_122:
          if ( _bittest(&a4, 0x11u) )
            goto LABEL_7;
          *v8 = 16;
        }
        else
        {
LABEL_7:
          *((_BYTE *)a3 + 4) = 1;
LABEL_8:
          v10 = (int *)sub_4209D0(v44, nullptr, nullptr, a3);
          if ( v10 != nullptr )
            goto LABEL_109;
LABEL_9:
          *v8 = 12;
        }
        return nullptr;
      case 24:
        goto LABEL_7;
      case 32:
      case 33:
        v30 = sub_4198BC("alnum", *(_DWORD *)(a1 + 48), "_", v9 == 33, v8);
        goto LABEL_106;
      case 34:
      case 35:
        v30 = sub_4198BC("space", *(_DWORD *)(a1 + 48), &unk_477923, v9 == 35, v8);
LABEL_106:
        v10 = (int *)v30;
        goto LABEL_107;
      case 36:
        *v8 = 5;
        return nullptr;
      default:
        return nullptr;
    }
  }
}

