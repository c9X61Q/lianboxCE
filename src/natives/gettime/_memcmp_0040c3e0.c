// gettime.exe @ 0x40c3e0 size=3722

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  size_t v3; // ebx
  unsigned __int8 *v4; // edx
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // edi
  char *v21; // esi
  unsigned __int8 *v22; // kr00_4
  _DWORD *v23; // kr0C_4
  unsigned __int8 *v24; // edx
  int v25; // eax
  int v26; // edi
  int v27; // eax
  int v28; // edi
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // edi
  int v33; // edi
  int v34; // eax
  int v35; // edi
  int v36; // eax
  int v37; // edi
  int v39; // eax
  int v40; // edi
  int v41; // eax
  int v42; // edi
  int v43; // eax
  int v44; // edi
  int v45; // eax
  int v46; // edi
  int v47; // eax
  int v48; // edi
  int v49; // edi
  int v50; // eax
  int v51; // edi
  int v52; // eax
  int v53; // edi
  int v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // edi
  int v60; // eax
  int v61; // edi
  int v62; // edi
  int v63; // eax
  int v64; // edi
  int v65; // edi
  int v66; // eax
  int v67; // edi
  int v68; // eax
  int v69; // edi
  int v70; // eax
  int v71; // edi
  int v72; // edi
  int v73; // eax
  int v74; // edi
  int v75; // eax
  int v76; // edi
  int v77; // edi
  int v78; // esi
  int v79; // ecx
  bool v80; // zf
  bool v81; // sf
  int v82; // ecx
  int v83; // ecx
  int v84; // eax
  int v85; // edx

  v3 = Size;
  if ( Size != 0 )
  {
    if ( Size != 1 )
    {
      if ( Size == 2 )
      {
        v85 = *(unsigned __int8 *)Buf1 - *(unsigned __int8 *)Buf2;
        if ( v85 == 0 )
        {
          v83 = *((unsigned __int8 *)Buf1 + 1);
          v84 = *((unsigned __int8 *)Buf2 + 1);
          goto LABEL_312;
        }
      }
      else
      {
        if ( Size != 3 )
        {
          v4 = (unsigned __int8 *)Buf2;
          if ( Size != 4 )
          {
            v5 = Buf1;
            if ( Size >= 0x20 )
            {
LABEL_7:
              if ( *v5 != *(_DWORD *)v4 )
              {
                v6 = (unsigned __int8)*v5 - *v4;
                if ( v6 != 0
                  || (v6 = *((unsigned __int8 *)v5 + 1) - v4[1]) != 0
                  || (v6 = *((unsigned __int8 *)v5 + 2) - v4[2]) != 0 )
                {
                  v7 = 2 * (v6 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 3) - v4[3];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 3) > (unsigned int)v4[3]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              v8 = v5[1];
              if ( v8 != *((_DWORD *)v4 + 1) )
              {
                v9 = (unsigned __int8)v8 - v4[4];
                if ( v9 != 0
                  || (v9 = *((unsigned __int8 *)v5 + 5) - v4[5]) != 0
                  || (v9 = *((unsigned __int8 *)v5 + 6) - v4[6]) != 0 )
                {
                  v7 = 2 * (v9 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 7) - v4[7];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 7) > (unsigned int)v4[7]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              v10 = v5[2];
              if ( v10 != *((_DWORD *)v4 + 2) )
              {
                v11 = (unsigned __int8)v10 - v4[8];
                if ( v11 != 0
                  || (v11 = *((unsigned __int8 *)v5 + 9) - v4[9]) != 0
                  || (v11 = *((unsigned __int8 *)v5 + 10) - v4[10]) != 0 )
                {
                  v7 = 2 * (v11 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 11) - v4[11];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 11) > (unsigned int)v4[11]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              v12 = v5[3];
              if ( v12 != *((_DWORD *)v4 + 3) )
              {
                v13 = (unsigned __int8)v12 - v4[12];
                if ( v13 != 0
                  || (v13 = *((unsigned __int8 *)v5 + 13) - v4[13]) != 0
                  || (v13 = *((unsigned __int8 *)v5 + 14) - v4[14]) != 0 )
                {
                  v7 = 2 * (v13 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 15) - v4[15];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 15) > (unsigned int)v4[15]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              if ( v5[4] != *((_DWORD *)v4 + 4) )
              {
                v14 = *((unsigned __int8 *)v5 + 16) - v4[16];
                if ( v14 != 0
                  || (v14 = *((unsigned __int8 *)v5 + 17) - v4[17]) != 0
                  || (v14 = *((unsigned __int8 *)v5 + 18) - v4[18]) != 0 )
                {
                  v7 = 2 * (v14 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 19) - v4[19];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 19) > (unsigned int)v4[19]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              v15 = v5[5];
              if ( v15 != *((_DWORD *)v4 + 5) )
              {
                v16 = (unsigned __int8)v15 - v4[20];
                if ( v16 != 0
                  || (v16 = *((unsigned __int8 *)v5 + 21) - v4[21]) != 0
                  || (v16 = *((unsigned __int8 *)v5 + 22) - v4[22]) != 0 )
                {
                  v7 = 2 * (v16 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 23) - v4[23];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 23) > (unsigned int)v4[23]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              v17 = v5[6];
              if ( v17 != *((_DWORD *)v4 + 6) )
              {
                v18 = (unsigned __int8)v17 - v4[24];
                if ( v18 != 0
                  || (v18 = *((unsigned __int8 *)v5 + 25) - v4[25]) != 0
                  || (v18 = *((unsigned __int8 *)v5 + 26) - v4[26]) != 0 )
                {
                  v7 = 2 * (v18 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 27) - v4[27];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 27) > (unsigned int)v4[27]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              v19 = v5[7];
              if ( v19 != *((_DWORD *)v4 + 7) )
              {
                v20 = (unsigned __int8)v19 - v4[28];
                if ( v20 != 0
                  || (v20 = *((unsigned __int8 *)v5 + 29) - v4[29]) != 0
                  || (v20 = *((unsigned __int8 *)v5 + 30) - v4[30]) != 0 )
                {
                  v7 = 2 * (v20 > 0) - 1;
                }
                else
                {
                  v7 = *((unsigned __int8 *)v5 + 31) - v4[31];
                  if ( v7 != 0 )
                    v7 = 2 * (*((unsigned __int8 *)v5 + 31) > (unsigned int)v4[31]) - 1;
                }
                if ( v7 != 0 )
                  return v7;
              }
              v3 -= 32;
              v5 += 8;
              v4 += 32;
            }
            v22 = v4;
            v23 = v5;
            v21 = (char *)v5 + v3;
            v24 = &v4[v3];
            switch ( v3 )
            {
              case 0u:
                return 0;
              case 1u:
                goto LABEL_187;
              case 2u:
                goto LABEL_245;
              case 3u:
                goto LABEL_303;
              case 4u:
                goto LABEL_121;
              case 5u:
                goto LABEL_179;
              case 6u:
                goto LABEL_237;
              case 7u:
                goto LABEL_295;
              case 8u:
                goto LABEL_113;
              case 9u:
                goto LABEL_171;
              case 0xAu:
                goto LABEL_229;
              case 0xBu:
                goto LABEL_287;
              case 0xCu:
                goto LABEL_105;
              case 0xDu:
                goto LABEL_163;
              case 0xEu:
                goto LABEL_221;
              case 0xFu:
                goto LABEL_279;
              case 0x10u:
                goto LABEL_97;
              case 0x11u:
                goto LABEL_155;
              case 0x12u:
                goto LABEL_213;
              case 0x13u:
                goto LABEL_271;
              case 0x14u:
                goto LABEL_89;
              case 0x15u:
                goto LABEL_147;
              case 0x16u:
                goto LABEL_205;
              case 0x17u:
                goto LABEL_263;
              case 0x18u:
                goto LABEL_81;
              case 0x19u:
                goto LABEL_139;
              case 0x1Au:
                goto LABEL_197;
              case 0x1Bu:
                goto LABEL_255;
              case 0x1Cu:
                v25 = *((_DWORD *)v21 - 7);
                if ( v25 != *((_DWORD *)v24 - 7) )
                {
                  v26 = (unsigned __int8)v25 - *(v24 - 28);
                  if ( v26 != 0
                    || (v26 = (unsigned __int8)*(v21 - 27) - *(v24 - 27)) != 0
                    || (v26 = (unsigned __int8)*(v21 - 26) - *(v24 - 26)) != 0 )
                  {
                    v7 = 2 * (v26 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 25) - *(v24 - 25);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 25) > (unsigned int)*(v24 - 25)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_81:
                v27 = *((_DWORD *)v21 - 6);
                if ( v27 != *((_DWORD *)v24 - 6) )
                {
                  v28 = (unsigned __int8)v27 - *(v24 - 24);
                  if ( v28 != 0
                    || (v28 = (unsigned __int8)*(v21 - 23) - *(v24 - 23)) != 0
                    || (v28 = (unsigned __int8)*(v21 - 22) - *(v24 - 22)) != 0 )
                  {
                    v7 = 2 * (v28 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 21) - *(v24 - 21);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 21) > (unsigned int)*(v24 - 21)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_89:
                v29 = *((_DWORD *)v21 - 5);
                if ( v29 != *((_DWORD *)v24 - 5) )
                {
                  v30 = (unsigned __int8)v29 - *(v24 - 20);
                  if ( v30 != 0
                    || (v30 = (unsigned __int8)*(v21 - 19) - *(v24 - 19)) != 0
                    || (v30 = (unsigned __int8)*(v21 - 18) - *(v24 - 18)) != 0 )
                  {
                    v7 = 2 * (v30 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 17) - *(v24 - 17);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 17) > (unsigned int)*(v24 - 17)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_97:
                v31 = *((_DWORD *)v21 - 4);
                if ( v31 != *((_DWORD *)v24 - 4) )
                {
                  v32 = (unsigned __int8)v31 - *(v24 - 16);
                  if ( v32 != 0
                    || (v32 = (unsigned __int8)*(v21 - 15) - *(v24 - 15)) != 0
                    || (v32 = (unsigned __int8)*(v21 - 14) - *(v24 - 14)) != 0 )
                  {
                    v7 = 2 * (v32 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 13) - *(v24 - 13);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 13) > (unsigned int)*(v24 - 13)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_105:
                if ( *((_DWORD *)v21 - 3) != *((_DWORD *)v24 - 3) )
                {
                  v33 = (unsigned __int8)*(v21 - 12) - *(v24 - 12);
                  if ( v33 != 0
                    || (v33 = (unsigned __int8)*(v21 - 11) - *(v24 - 11)) != 0
                    || (v33 = (unsigned __int8)*(v21 - 10) - *(v24 - 10)) != 0 )
                  {
                    v7 = 2 * (v33 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 9) - *(v24 - 9);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 9) > (unsigned int)*(v24 - 9)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_113:
                v34 = *((_DWORD *)v21 - 2);
                if ( v34 != *((_DWORD *)v24 - 2) )
                {
                  v35 = (unsigned __int8)v34 - *(v24 - 8);
                  if ( v35 != 0
                    || (v35 = (unsigned __int8)*(v21 - 7) - *(v24 - 7)) != 0
                    || (v35 = (unsigned __int8)*(v21 - 6) - *(v24 - 6)) != 0 )
                  {
                    v7 = 2 * (v35 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 5) - *(v24 - 5);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 5) > (unsigned int)*(v24 - 5)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_121:
                v36 = *((_DWORD *)v21 - 1);
                if ( v36 == *((_DWORD *)v24 - 1) )
                  return 0;
                v37 = (unsigned __int8)v36 - *(v24 - 4);
                if ( v37 != 0
                  || (v37 = (unsigned __int8)*(v21 - 3) - *(v24 - 3)) != 0
                  || (v37 = (unsigned __int8)*(v21 - 2) - *(v24 - 2)) != 0 )
                {
                  v7 = 2 * (v37 > 0) - 1;
                }
                else
                {
                  v7 = (unsigned __int8)*(v21 - 1) - *(v24 - 1);
                  if ( v7 != 0 )
                    v7 = 2 * ((unsigned __int8)*(v21 - 1) > (unsigned int)*(v24 - 1)) - 1;
                }
                if ( v7 == 0 )
                  return 0;
                return v7;
              case 0x1Du:
                v39 = *(_DWORD *)(v21 - 29);
                if ( v39 != *(_DWORD *)(v24 - 29) )
                {
                  v40 = (unsigned __int8)v39 - *(v24 - 29);
                  if ( v40 != 0
                    || (v40 = (unsigned __int8)*(v21 - 28) - *(v24 - 28)) != 0
                    || (v40 = (unsigned __int8)*(v21 - 27) - *(v24 - 27)) != 0 )
                  {
                    v7 = 2 * (v40 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 26) - *(v24 - 26);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 26) > (unsigned int)*(v24 - 26)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_139:
                v41 = *(_DWORD *)(v21 - 25);
                if ( v41 != *(_DWORD *)(v24 - 25) )
                {
                  v42 = (unsigned __int8)v41 - *(v24 - 25);
                  if ( v42 != 0
                    || (v42 = (unsigned __int8)*(v21 - 24) - *(v24 - 24)) != 0
                    || (v42 = (unsigned __int8)*(v21 - 23) - *(v24 - 23)) != 0 )
                  {
                    v7 = 2 * (v42 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 22) - *(v24 - 22);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 22) > (unsigned int)*(v24 - 22)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_147:
                v43 = *(_DWORD *)(v21 - 21);
                if ( v43 != *(_DWORD *)(v24 - 21) )
                {
                  v44 = (unsigned __int8)v43 - *(v24 - 21);
                  if ( v44 != 0
                    || (v44 = (unsigned __int8)*(v21 - 20) - *(v24 - 20)) != 0
                    || (v44 = (unsigned __int8)*(v21 - 19) - *(v24 - 19)) != 0 )
                  {
                    v7 = 2 * (v44 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 18) - *(v24 - 18);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 18) > (unsigned int)*(v24 - 18)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_155:
                v45 = *(_DWORD *)(v21 - 17);
                if ( v45 != *(_DWORD *)(v24 - 17) )
                {
                  v46 = (unsigned __int8)v45 - *(v24 - 17);
                  if ( v46 != 0
                    || (v46 = (unsigned __int8)*(v21 - 16) - *(v24 - 16)) != 0
                    || (v46 = (unsigned __int8)*(v21 - 15) - *(v24 - 15)) != 0 )
                  {
                    v7 = 2 * (v46 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 14) - *(v24 - 14);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 14) > (unsigned int)*(v24 - 14)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_163:
                v47 = *(_DWORD *)(v21 - 13);
                if ( v47 != *(_DWORD *)(v24 - 13) )
                {
                  v48 = (unsigned __int8)v47 - *(v24 - 13);
                  if ( v48 != 0
                    || (v48 = (unsigned __int8)*(v21 - 12) - *(v24 - 12)) != 0
                    || (v48 = (unsigned __int8)*(v21 - 11) - *(v24 - 11)) != 0 )
                  {
                    v7 = 2 * (v48 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 10) - *(v24 - 10);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 10) > (unsigned int)*(v24 - 10)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_171:
                if ( *(_DWORD *)(v21 - 9) != *(_DWORD *)(v24 - 9) )
                {
                  v49 = (unsigned __int8)*(v21 - 9) - *(v24 - 9);
                  if ( v49 != 0
                    || (v49 = (unsigned __int8)*(v21 - 8) - *(v24 - 8)) != 0
                    || (v49 = (unsigned __int8)*(v21 - 7) - *(v24 - 7)) != 0 )
                  {
                    v7 = 2 * (v49 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 6) - *(v24 - 6);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 6) > (unsigned int)*(v24 - 6)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_179:
                v50 = *(_DWORD *)(v21 - 5);
                if ( v50 == *(_DWORD *)(v24 - 5) )
                  goto LABEL_187;
                v51 = (unsigned __int8)v50 - *(v24 - 5);
                if ( v51 != 0
                  || (v51 = (unsigned __int8)*(v21 - 4) - *(v24 - 4)) != 0
                  || (v51 = (unsigned __int8)*(v21 - 3) - *(v24 - 3)) != 0 )
                {
                  v7 = 2 * (v51 > 0) - 1;
                }
                else
                {
                  v7 = (unsigned __int8)*(v21 - 2) - *(v24 - 2);
                  if ( v7 != 0 )
                    v7 = 2 * ((unsigned __int8)*(v21 - 2) > (unsigned int)*(v24 - 2)) - 1;
                }
                if ( v7 == 0 )
                  goto LABEL_187;
                return v7;
              case 0x1Eu:
                v52 = *(_DWORD *)(v21 - 30);
                if ( v52 != *(_DWORD *)(v24 - 30) )
                {
                  v53 = (unsigned __int8)v52 - *(v24 - 30);
                  if ( v53 != 0
                    || (v53 = (unsigned __int8)*(v21 - 29) - *(v24 - 29)) != 0
                    || (v53 = (unsigned __int8)*(v21 - 28) - *(v24 - 28)) != 0 )
                  {
                    v7 = 2 * (v53 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 27) - *(v24 - 27);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 27) > (unsigned int)*(v24 - 27)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_197:
                v54 = *(_DWORD *)(v21 - 26);
                if ( v54 != *(_DWORD *)(v24 - 26) )
                {
                  v55 = (unsigned __int8)v54 - *(v24 - 26);
                  if ( v55 != 0
                    || (v55 = (unsigned __int8)*(v21 - 25) - *(v24 - 25)) != 0
                    || (v55 = (unsigned __int8)*(v21 - 24) - *(v24 - 24)) != 0 )
                  {
                    v7 = 2 * (v55 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 23) - *(v24 - 23);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 23) > (unsigned int)*(v24 - 23)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_205:
                v56 = *(_DWORD *)(v21 - 22);
                if ( v56 != *(_DWORD *)(v24 - 22) )
                {
                  v57 = (unsigned __int8)v56 - *(v24 - 22);
                  if ( v57 != 0
                    || (v57 = (unsigned __int8)*(v21 - 21) - *(v24 - 21)) != 0
                    || (v57 = (unsigned __int8)*(v21 - 20) - *(v24 - 20)) != 0 )
                  {
                    v7 = 2 * (v57 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 19) - *(v24 - 19);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 19) > (unsigned int)*(v24 - 19)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_213:
                v58 = *(_DWORD *)(v21 - 18);
                if ( v58 != *(_DWORD *)(v24 - 18) )
                {
                  v59 = (unsigned __int8)v58 - *(v24 - 18);
                  if ( v59 != 0
                    || (v59 = (unsigned __int8)*(v21 - 17) - *(v24 - 17)) != 0
                    || (v59 = (unsigned __int8)*(v21 - 16) - *(v24 - 16)) != 0 )
                  {
                    v7 = 2 * (v59 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 15) - *(v24 - 15);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 15) > (unsigned int)*(v24 - 15)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_221:
                v60 = *(_DWORD *)(v21 - 14);
                if ( v60 != *(_DWORD *)(v24 - 14) )
                {
                  v61 = (unsigned __int8)v60 - *(v24 - 14);
                  if ( v61 != 0
                    || (v61 = (unsigned __int8)*(v21 - 13) - *(v24 - 13)) != 0
                    || (v61 = (unsigned __int8)*(v21 - 12) - *(v24 - 12)) != 0 )
                  {
                    v7 = 2 * (v61 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 11) - *(v24 - 11);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 11) > (unsigned int)*(v24 - 11)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_229:
                if ( *(_DWORD *)(v21 - 10) != *(_DWORD *)(v24 - 10) )
                {
                  v62 = (unsigned __int8)*(v21 - 10) - *(v24 - 10);
                  if ( v62 != 0
                    || (v62 = (unsigned __int8)*(v21 - 9) - *(v24 - 9)) != 0
                    || (v62 = (unsigned __int8)*(v21 - 8) - *(v24 - 8)) != 0 )
                  {
                    v7 = 2 * (v62 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 7) - *(v24 - 7);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 7) > (unsigned int)*(v24 - 7)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_237:
                v63 = *(_DWORD *)(v21 - 6);
                if ( v63 != *(_DWORD *)(v24 - 6) )
                {
                  v64 = (unsigned __int8)v63 - *(v24 - 6);
                  if ( v64 != 0
                    || (v64 = (unsigned __int8)*(v21 - 5) - *(v24 - 5)) != 0
                    || (v64 = (unsigned __int8)*(v21 - 4) - *(v24 - 4)) != 0 )
                  {
                    v7 = 2 * (v64 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 3) - *(v24 - 3);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 3) > (unsigned int)*(v24 - 3)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_245:
                if ( *((_WORD *)v21 - 1) != *((_WORD *)v24 - 1) )
                  goto LABEL_304;
                return 0;
              case 0x1Fu:
                if ( *(_DWORD *)(v21 - 31) != *(_DWORD *)(v24 - 31) )
                {
                  v65 = (unsigned __int8)*(v21 - 31) - *(v24 - 31);
                  if ( v65 != 0
                    || (v65 = (unsigned __int8)*(v21 - 30) - *(v24 - 30)) != 0
                    || (v65 = (unsigned __int8)*(v21 - 29) - *(v24 - 29)) != 0 )
                  {
                    v7 = 2 * (v65 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 28) - *(v24 - 28);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 28) > (unsigned int)*(v24 - 28)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_255:
                v66 = *(_DWORD *)(v21 - 27);
                if ( v66 != *(_DWORD *)(v24 - 27) )
                {
                  v67 = (unsigned __int8)v66 - *(v24 - 27);
                  if ( v67 != 0
                    || (v67 = (unsigned __int8)*(v21 - 26) - *(v24 - 26)) != 0
                    || (v67 = (unsigned __int8)*(v21 - 25) - *(v24 - 25)) != 0 )
                  {
                    v7 = 2 * (v67 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 24) - *(v24 - 24);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 24) > (unsigned int)*(v24 - 24)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_263:
                v68 = *(_DWORD *)(v21 - 23);
                if ( v68 != *(_DWORD *)(v24 - 23) )
                {
                  v69 = (unsigned __int8)v68 - *(v24 - 23);
                  if ( v69 != 0
                    || (v69 = (unsigned __int8)*(v21 - 22) - *(v24 - 22)) != 0
                    || (v69 = (unsigned __int8)*(v21 - 21) - *(v24 - 21)) != 0 )
                  {
                    v7 = 2 * (v69 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 20) - *(v24 - 20);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 20) > (unsigned int)*(v24 - 20)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_271:
                v70 = *(_DWORD *)(v21 - 19);
                if ( v70 != *(_DWORD *)(v24 - 19) )
                {
                  v71 = (unsigned __int8)v70 - *(v24 - 19);
                  if ( v71 != 0
                    || (v71 = (unsigned __int8)*(v21 - 18) - *(v24 - 18)) != 0
                    || (v71 = (unsigned __int8)*(v21 - 17) - *(v24 - 17)) != 0 )
                  {
                    v7 = 2 * (v71 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 16) - *(v24 - 16);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 16) > (unsigned int)*(v24 - 16)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_279:
                if ( *(_DWORD *)(v21 - 15) != *(_DWORD *)(v24 - 15) )
                {
                  v72 = (unsigned __int8)*(v21 - 15) - *(v24 - 15);
                  if ( v72 != 0
                    || (v72 = (unsigned __int8)*(v21 - 14) - *(v24 - 14)) != 0
                    || (v72 = (unsigned __int8)*(v21 - 13) - *(v24 - 13)) != 0 )
                  {
                    v7 = 2 * (v72 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 12) - *(v24 - 12);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 12) > (unsigned int)*(v24 - 12)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_287:
                v73 = *(_DWORD *)(v21 - 11);
                if ( v73 != *(_DWORD *)(v24 - 11) )
                {
                  v74 = (unsigned __int8)v73 - *(v24 - 11);
                  if ( v74 != 0
                    || (v74 = (unsigned __int8)*(v21 - 10) - *(v24 - 10)) != 0
                    || (v74 = (unsigned __int8)*(v21 - 9) - *(v24 - 9)) != 0 )
                  {
                    v7 = 2 * (v74 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 8) - *(v24 - 8);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 8) > (unsigned int)*(v24 - 8)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_295:
                v75 = *(_DWORD *)(v21 - 7);
                if ( v75 != *(_DWORD *)(v24 - 7) )
                {
                  v76 = (unsigned __int8)v75 - *(v24 - 7);
                  if ( v76 != 0
                    || (v76 = (unsigned __int8)*(v21 - 6) - *(v24 - 6)) != 0
                    || (v76 = (unsigned __int8)*(v21 - 5) - *(v24 - 5)) != 0 )
                  {
                    v7 = 2 * (v76 > 0) - 1;
                  }
                  else
                  {
                    v7 = (unsigned __int8)*(v21 - 4) - *(v24 - 4);
                    if ( v7 != 0 )
                      v7 = 2 * ((unsigned __int8)*(v21 - 4) > (unsigned int)*(v24 - 4)) - 1;
                  }
                  if ( v7 != 0 )
                    return v7;
                }
LABEL_303:
                v77 = (unsigned __int8)*(v21 - 3) - *(v24 - 3);
                if ( v77 != 0 )
                  goto LABEL_305;
LABEL_304:
                v77 = (unsigned __int8)*(v21 - 2) - *(v24 - 2);
                if ( v77 != 0 )
                {
LABEL_305:
                  v7 = 2 * (v77 > 0) - 1;
                }
                else
                {
LABEL_187:
                  v7 = (unsigned __int8)*(v21 - 1) - *(v24 - 1);
                  if ( v7 != 0 )
                    v7 = 2 * ((unsigned __int8)*(v21 - 1) > (unsigned int)*(v24 - 1)) - 1;
                }
                break;
              default:
                v5 = v23;
                v4 = v22;
                goto LABEL_7;
            }
            return v7;
          }
          v78 = *(unsigned __int8 *)Buf1 - *(unsigned __int8 *)Buf2;
          if ( v78 != 0
            || (v78 = *((unsigned __int8 *)Buf1 + 1) - *((unsigned __int8 *)Buf2 + 1)) != 0
            || (v78 = *((unsigned __int8 *)Buf1 + 2) - *((unsigned __int8 *)Buf2 + 2)) != 0 )
          {
            v79 = 0;
            v80 = v78 == 0;
            v81 = v78 < 0;
LABEL_310:
            LOBYTE(v79) = !v81 && !v80;
            return 2 * v79 - 1;
          }
          v83 = *((unsigned __int8 *)Buf1 + 3);
          v84 = *((unsigned __int8 *)Buf2 + 3);
LABEL_312:
          v82 = v83 - v84;
          if ( v82 != 0 )
            return 2 * (v82 > 0) - 1;
          return v82;
        }
        v85 = *(unsigned __int8 *)Buf1 - *(unsigned __int8 *)Buf2;
        if ( v85 == 0 )
        {
          v85 = *((unsigned __int8 *)Buf1 + 1) - *((unsigned __int8 *)Buf2 + 1);
          if ( v85 == 0 )
          {
            v83 = *((unsigned __int8 *)Buf1 + 2);
            v84 = *((unsigned __int8 *)Buf2 + 2);
            goto LABEL_312;
          }
        }
      }
      v79 = 0;
      v80 = v85 == 0;
      v81 = v85 < 0;
      goto LABEL_310;
    }
    v83 = *(unsigned __int8 *)Buf1;
    v84 = *(unsigned __int8 *)Buf2;
    goto LABEL_312;
  }
  return 0;
}

