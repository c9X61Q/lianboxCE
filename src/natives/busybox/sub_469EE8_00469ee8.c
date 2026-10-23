// busybox.exe @ 0x469ee8 size=2385

__int64 __usercall sub_469EE8@<edx:eax>(int a1@<eax>)
{
  unsigned int v1; // edi
  unsigned int *v2; // eax
  unsigned int *v3; // ebx
  _DWORD *v4; // eax
  unsigned int v5; // esi
  int v6; // eax
  unsigned int v7; // eax
  char v8; // dl
  char v9; // cl
  unsigned int v10; // eax
  int v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  char v16; // dl
  int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  char *v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned __int8 v25; // cl
  unsigned int v26; // esi
  unsigned int v27; // eax
  void *v28; // eax
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // eax
  unsigned int v35; // edx
  int v36; // esi
  __int64 v37; // rax
  int v38; // ecx
  unsigned int v39; // eax
  int v40; // eax
  int v41; // esi
  char i; // cl
  unsigned int v43; // edx
  unsigned int v44; // eax
  int v45; // eax
  char *v46; // edx
  bool v47; // zf
  __int64 v48; // rax
  unsigned int v49; // ecx
  int v50; // eax
  void **v51; // esi
  char *Destination; // [esp+0h] [ebp-58h]
  int v54; // [esp+10h] [ebp-48h]
  int v55; // [esp+18h] [ebp-40h]
  unsigned __int64 v56; // [esp+1Ch] [ebp-3Ch]
  __int64 v57; // [esp+1Ch] [ebp-3Ch]
  int v58; // [esp+1Ch] [ebp-3Ch]
  unsigned int v59; // [esp+1Ch] [ebp-3Ch]
  __int64 v61; // [esp+28h] [ebp-30h]
  char *v62; // [esp+30h] [ebp-28h]
  int v63[6]; // [esp+34h] [ebp-24h] BYREF
  int v64; // [esp+4Ch] [ebp-Ch] BYREF

  if ( dword_486004 == 0 )
    sub_4367A0();
  memset(v63, 0, sizeof(v63));
  v1 = (unsigned int)&v64;
  v62 = (char *)sub_470E78();
  v63[0] = (int)v62;
  v63[3] = (int)(v62 + 512);
  v63[5] = 512;
  if ( a1 == 0 || *(_BYTE *)a1 != 0 )
  {
    strcpy(v62, &byte_478E9C);
    v63[2] = 6;
  }
  v2 = (unsigned int *)malloc(0x4B0u);
  v3 = v2;
  if ( v2 != nullptr )
  {
    v2[8] = 2;
    v4 = malloc(0x6F28u);
    if ( v4 != nullptr )
    {
      v4[15] = 2;
      v4[13] = 0x4000000;
      v4[6] = 0;
      v4[14] = 0;
      v3[298] = (unsigned int)v4;
      ((void (*)(void))sub_47287C)();
    }
    else
    {
      free(v3);
      v3 = nullptr;
    }
  }
  v61 = 0;
  v5 = 1;
  while ( 1 )
  {
    if ( v63[1] == v63[2] )
    {
      v6 = sub_45C560(512, v62, *(_DWORD *)(a1 + 12));
      if ( v6 < 0 )
      {
        sub_4181F8("read error");
        v61 = -1;
        goto LABEL_142;
      }
      if ( v5 == 1 && v6 == 0 )
        goto LABEL_142;
      v63[2] = v6;
      v63[1] = 0;
    }
    if ( v5 == 1 )
      break;
LABEL_26:
    v55 = v63[1];
    v54 = v63[4];
    v3[4] = v63[1];
    while ( 2 )
    {
      switch ( *v3 )
      {
        case 0u:
          if ( sub_42FB5C((int)v3, v63) == 0 )
            goto LABEL_130;
          *v3 = 1;
          if ( memcmp(v3 + 42, &byte_478E9C, 6u) != 0 )
          {
            v5 = 5;
            goto LABEL_137;
          }
          if ( sub_472278(0) != v3[44] )
            goto LABEL_31;
          if ( *((_BYTE *)v3 + 174) != 0 )
            goto LABEL_33;
          v10 = *((unsigned __int8 *)v3 + 175);
          v3[7] = v10;
          if ( v10 > 0xF )
            goto LABEL_33;
          if ( v10 > 1 )
          {
            v5 = 2;
            goto LABEL_137;
          }
LABEL_36:
          v11 = v63[1];
          if ( v63[1] == v63[2] )
            goto LABEL_130;
          v12 = *(unsigned __int8 *)(v63[0] + v63[1]);
          if ( (_BYTE)v12 != 0 )
          {
            v13 = 4 * v12 + 4;
            v3[14] = v13;
            v3[41] = v13;
            v3[40] = 0;
            *v3 = 2;
LABEL_40:
            if ( sub_42FB5C((int)v3, v63) == 0 )
              goto LABEL_130;
            v3[41] -= 4;
            v14 = sub_472278(0);
            v15 = v3[41];
            if ( v14 != *(unsigned int *)((char *)v3 + v15 + 168) )
              goto LABEL_31;
            v3[40] = 2;
            v16 = *((_BYTE *)v3 + 169);
            if ( (v16 & 0x3F) != 0 )
              goto LABEL_33;
            if ( (v16 & 0x40) != 0 )
            {
              v17 = sub_422724(v3, (int)(v3 + 42), v3 + 40, v15);
              Destination = (char *)v1;
              if ( v17 != 1 )
                goto LABEL_31;
              v18 = v3[3];
              v3[10] = v3[2];
              v3[11] = v18;
            }
            else
            {
              v3[10] = -1;
              v3[11] = -1;
            }
            if ( *((char *)v3 + 169) >= 0 )
            {
              v3[12] = -1;
              v3[13] = -1;
            }
            else
            {
              v19 = sub_422724(v3, (int)(v3 + 42), v3 + 40, v3[41]);
              Destination = v20;
              if ( v19 != 1 )
                goto LABEL_31;
              v21 = v3[3];
              v3[12] = v3[2];
              v3[13] = v21;
            }
            v22 = v3[41];
            v23 = v3[40];
            if ( v22 - v23 <= 1 )
              goto LABEL_31;
            v3[40] = v23 + 1;
            if ( *((_BYTE *)v3 + v23 + 168) != 33 )
              goto LABEL_33;
            v24 = v23 + 2;
            v3[40] = v23 + 2;
            if ( *((_BYTE *)v3 + v23 + 169) != 1 )
              goto LABEL_33;
            if ( v22 == v24 )
              goto LABEL_31;
            v3[40] = v23 + 3;
            v25 = *((_BYTE *)v3 + v24 + 168);
            if ( v25 > 0x27u )
            {
LABEL_33:
              v5 = 6;
              goto LABEL_137;
            }
            v26 = v3[298];
            v27 = ((v25 & 1) + 2) << ((v25 >> 1) + 11);
            *(_DWORD *)(v26 + 48) = v27;
            if ( v27 > *(_DWORD *)(v26 + 52) )
            {
              v5 = 4;
              goto LABEL_137;
            }
            *(_DWORD *)(v26 + 44) = v27;
            if ( *(_DWORD *)(v26 + 60) == 2 && v27 > *(_DWORD *)(v26 + 56) )
            {
              free(*(void **)(v26 + 24));
              v28 = malloc(*(_DWORD *)(v26 + 48));
              *(_DWORD *)(v26 + 24) = v28;
              if ( v28 == nullptr )
              {
                *(_DWORD *)(v26 + 56) = 0;
                v5 = 3;
                goto LABEL_137;
              }
            }
            *(_DWORD *)(v26 + 104) = 0;
            *(_DWORD *)(v26 + 64) = 0;
            *(_BYTE *)(v26 + 80) = 1;
            *(_DWORD *)(v26 + 28388) = 0;
            v29 = v3[41];
            while ( 1 )
            {
              v30 = v3[40];
              if ( v30 >= v29 )
                break;
              v3[40] = v30 + 1;
              if ( *((_BYTE *)v3 + v30 + 168) != 0 )
                goto LABEL_33;
            }
            v3[40] = 0;
            v3[16] = 0;
            v3[17] = 0;
            v3[18] = 0;
            v3[19] = 0;
            *v3 = 3;
LABEL_66:
            v3[4] = v63[1];
            v3[5] = v63[4];
            v5 = sub_472298();
            v56 = *((_QWORD *)v3 + 8) + v63[1] - v3[4];
            *((_QWORD *)v3 + 8) = v56;
            v1 = v3[5];
            v31 = *((_QWORD *)v3 + 9) + v63[4] - v1;
            *((_QWORD *)v3 + 9) = v31;
            if ( *((_QWORD *)v3 + 5) < v56 || *((_QWORD *)v3 + 6) < v31 )
              goto LABEL_31;
            if ( v3[7] == 1 )
              v3[6] = sub_472278(v3[6]);
            if ( v5 != 1 )
              goto LABEL_129;
            v32 = v3[10];
            v33 = v3[11];
            if ( (v33 != -1 || v32 != -1) && (v33 != v3[17] || v32 != v3[16]) )
              goto LABEL_31;
            v34 = v3[12];
            v35 = v3[13];
            v1 = v3[19];
            LODWORD(v57) = v3[18];
            HIDWORD(v57) = v1;
            if ( (v35 != -1 || v34 != -1) && (v1 != v35 || (_DWORD)v57 != v34) )
              goto LABEL_31;
            v1 = ((unsigned __int64)v3[14] + *((_QWORD *)v3 + 11) + *((_QWORD *)v3 + 8)) >> 32;
            *((_QWORD *)v3 + 11) += v3[14] + *((_QWORD *)v3 + 8) + (unsigned __int8)byte_47E250[v3[7]];
            *((_QWORD *)v3 + 12) += v57;
            v3[26] = sub_472278(v3[26]);
            ++*((_QWORD *)v3 + 10);
            *v3 = 4;
LABEL_80:
            v58 = v63[2];
            v36 = v63[0];
            while ( 1 )
            {
              v37 = *((_QWORD *)v3 + 8);
              if ( (v37 & 3) == 0 )
                break;
              v38 = v63[1];
              if ( v63[1] == v58 )
                goto LABEL_130;
              v1 = ++v63[1];
              if ( *(_BYTE *)(v36 + v38) != 0 )
                goto LABEL_31;
              *((_QWORD *)v3 + 8) = v37 + 1;
            }
            *v3 = 5;
LABEL_86:
            v39 = v3[7];
            if ( v39 == 1 )
            {
              v5 = sub_4200F8((int)v3, v63);
              if ( v5 != 1 )
                goto LABEL_129;
            }
            else
            {
              v1 = (unsigned __int8)byte_47E250[v39];
              v40 = v63[1];
              v41 = v63[2];
              for ( i = 0; ; i = 1 )
              {
                v43 = v3[1];
                if ( v43 >= v1 )
                  break;
                if ( v41 == v40 )
                {
                  if ( i != 0 )
                    v63[1] = v41;
                  goto LABEL_130;
                }
                ++v40;
                v3[1] = v43 + 1;
              }
              if ( i != 0 )
                v63[1] = v40;
              v3[1] = 0;
            }
            *v3 = 1;
          }
          else
          {
            ++v63[1];
            v3[4] = v11;
            *v3 = 6;
          }
          continue;
        case 1u:
          goto LABEL_36;
        case 2u:
          goto LABEL_40;
        case 3u:
          goto LABEL_66;
        case 4u:
          goto LABEL_80;
        case 5u:
          goto LABEL_86;
        case 6u:
          goto LABEL_103;
        case 7u:
          goto LABEL_112;
        case 8u:
          goto LABEL_120;
        case 9u:
          goto LABEL_122;
        default:
          continue;
      }
    }
    do
    {
LABEL_103:
      v45 = sub_422724(v3, v63[0], (unsigned int *)&v63[1], v63[2]);
      Destination = v46;
      v5 = v45;
      if ( v45 != 1 )
      {
        sub_439A50((int)v3, (int)v63);
        goto LABEL_129;
      }
      v44 = v3[28];
      if ( v44 == 2 )
      {
        *((_QWORD *)v3 + 18) += *((_QWORD *)v3 + 1);
        v3[38] = sub_472278(v3[38]);
        --*((_QWORD *)v3 + 16);
      }
      else
      {
        if ( v44 > 2 )
          continue;
        v47 = v44 == 0;
        v48 = *((_QWORD *)v3 + 1);
        if ( !v47 )
        {
          *((_QWORD *)v3 + 17) += v48;
          v3[28] = 2;
          continue;
        }
        *((_QWORD *)v3 + 16) = v48;
        if ( v48 != *((_QWORD *)v3 + 10) )
          goto LABEL_31;
      }
      v3[28] = 1;
    }
    while ( *((_QWORD *)v3 + 16) != 0 );
    *v3 = 7;
LABEL_112:
    v59 = v3[30];
    v49 = v3[4];
    v1 = v63[0];
    while ( 1 )
    {
      v50 = v63[1];
      if ( (((_BYTE)v59 + LOBYTE(v63[1]) - (_BYTE)v49) & 3) == 0 )
        break;
      if ( v63[2] == v63[1] )
      {
        sub_439A50((int)v3, (int)v63);
        goto LABEL_130;
      }
      ++v63[1];
      if ( *(_BYTE *)(v63[0] + v50) != 0 )
        goto LABEL_31;
    }
    sub_439A50((int)v3, (int)v63);
    if ( memcmp(v3 + 22, v3 + 34, 0x18u) != 0 )
    {
LABEL_31:
      v5 = 7;
      goto LABEL_137;
    }
    *v3 = 8;
LABEL_120:
    v5 = sub_4200F8((int)v3, v63);
    if ( v5 != 1 )
    {
LABEL_129:
      if ( v5 == 0 )
        goto LABEL_130;
      goto LABEL_137;
    }
    v3[41] = 12;
    *v3 = 9;
LABEL_122:
    if ( sub_42FB5C((int)v3, v63) == 0 )
    {
LABEL_130:
      if ( v55 != v63[1] || v54 != v63[4] )
      {
        v5 = 0;
        goto LABEL_137;
      }
      v5 = *((_BYTE *)v3 + 36) != 0 ? 8 : 0;
      *((_BYTE *)v3 + 36) = 1;
      goto LABEL_138;
    }
    if ( memcmp((char *)v3 + 178, "YZ", 2u) != 0 )
      goto LABEL_31;
    if ( sub_472278(0) != v3[42] )
      goto LABEL_31;
    if ( *((_QWORD *)v3 + 15) >> 2 != v3[43] )
      goto LABEL_31;
    if ( *((_BYTE *)v3 + 176) != 0 )
      goto LABEL_31;
    v5 = 1;
    if ( *((unsigned __int8 *)v3 + 177) != v3[7] )
      goto LABEL_31;
LABEL_137:
    *((_BYTE *)v3 + 36) = 0;
LABEL_138:
    if ( v63[4] != 0 )
    {
      sub_471CAC(v63[4], v63[3]);
      v61 += (unsigned int)v63[4];
      v63[4] = 0;
    }
    if ( v5 > 2 )
    {
      sub_4181F8("corrupted data");
      v61 = -1;
      goto LABEL_143;
    }
  }
  v7 = v63[1];
  v8 = 0;
  while ( 1 )
  {
    v1 = (unsigned int)v62;
    v9 = v62[v7];
    if ( v9 != 0 )
      break;
    ++v7;
    v8 = 1;
    if ( v7 >= v63[2] )
    {
      v63[1] = v7;
      goto LABEL_26;
    }
  }
  if ( v8 != 0 )
    v63[1] = v7;
  if ( v9 == -3 )
  {
    sub_47287C(Destination);
    goto LABEL_26;
  }
LABEL_142:
  if ( v3 != nullptr )
  {
LABEL_143:
    v51 = (void **)v3[298];
    free(v51[6]);
    free(v51);
    free(v3);
  }
  free(v62);
  return v61;
}

