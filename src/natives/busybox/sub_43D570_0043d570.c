// busybox.exe @ 0x43d570 size=2259

int __cdecl sub_43D570(int a1, int a2)
{
  int v2; // ebx
  char **v3; // esi
  unsigned __int8 *v4; // eax
  unsigned __int8 v5; // dl
  unsigned int v6; // eax
  signed int v8; // eax
  int v9; // edx
  int v10; // ecx
  const char *v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  unsigned int v20; // esi
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  char *v24; // esi
  FILE *v25; // edi
  unsigned int v26; // edx
  const char *v27; // eax
  int v28; // eax
  signed int v29; // eax
  int v30; // ecx
  void *v31; // esp
  char v32; // dl
  FILE ***v33; // esi
  char v34; // al
  FILE ***v35; // eax
  int v36; // esi
  _DWORD *v37; // eax
  int v38; // esi
  int v39; // edi
  unsigned int v40; // esi
  int v41; // edi
  char *v42; // eax
  char *v43; // eax
  int v44; // esi
  int v45; // edi
  char *v46; // eax
  char *v47; // eax
  unsigned int v48; // eax
  unsigned int j; // edx
  unsigned int v50; // eax
  unsigned int i; // edx
  int v52; // eax
  int v53; // edi
  int v54; // ecx
  unsigned int v55; // eax
  int v56; // esi
  int v57; // ecx
  int v58; // edx
  int v59; // ecx
  int v60; // edi
  unsigned int v61; // eax
  int v62; // eax
  FILE *Stream; // [esp+0h] [ebp-5Ch] BYREF
  int Val; // [esp+4h] [ebp-58h]
  FILE **p_Stream; // [esp+Ch] [ebp-50h] BYREF
  int v66; // [esp+10h] [ebp-4Ch]
  char *v67; // [esp+14h] [ebp-48h]
  int v68; // [esp+18h] [ebp-44h]
  int v69; // [esp+1Ch] [ebp-40h]
  void *Block; // [esp+20h] [ebp-3Ch]
  signed int v71; // [esp+24h] [ebp-38h]
  FILE ***p_p_Stream; // [esp+28h] [ebp-34h]
  int v73; // [esp+2Ch] [ebp-30h]
  _BYTE *v74; // [esp+30h] [ebp-2Ch]
  unsigned int v75; // [esp+34h] [ebp-28h]
  unsigned int v76; // [esp+38h] [ebp-24h]
  signed int v77; // [esp+3Ch] [ebp-20h]
  char v78[28]; // [esp+40h] [ebp-1Ch] BYREF

  v2 = sub_4728CC();
  dword_486010 = v2;
  *(_DWORD *)(v2 + 12) = -1;
  *(_DWORD *)(v2 + 56) = "~";
  *(_DWORD *)(v2 + 64) = 1;
  *(_DWORD *)(v2 + 36) = 1;
  *(_BYTE *)(v2 + 254) = 1;
  *(_DWORD *)(v2 + 212) = -1;
  sub_435D44(a2, (int)"EMmN~IFSRs");
  v3 = (char **)(a2 + 4 * dword_473090);
  *(_DWORD *)(v2 + 60) = a1 - dword_473090;
  *(_DWORD *)(v2 + 72) = v3;
  v4 = (unsigned __int8 *)sub_44328C("LESS");
  if ( v4 != nullptr )
  {
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == 0 )
        break;
      if ( v5 == 83 )
      {
        dword_486008 |= 0x80u;
      }
      else if ( v5 <= 0x53u )
      {
        switch ( v5 )
        {
          case 'R':
            dword_486008 |= 0x100u;
            break;
          case 'F':
            dword_486008 |= 0x40u;
            break;
          case 'M':
            dword_486008 |= 2u;
            break;
          default:
            break;
        }
      }
      ++v4;
    }
  }
  if ( sub_443380(1) != 0 )
  {
    if ( *(_DWORD *)(v2 + 60) != 0 )
    {
      *(_DWORD *)(v2 + 68) = sub_47188C();
    }
    else if ( sub_443380(0) != 0 )
    {
      sub_418164();
    }
    if ( (dword_486008 & 0x10) != 0 )
      *(_DWORD *)(v2 + 56) = &unk_474D7A;
    *(_DWORD *)(v2 + 4) = 0;
    sub_43572C(0, (int *)(v2 + 32), (int *)(v2 + 28));
    if ( *(_DWORD *)(v2 + 32) > 0x13u )
    {
      v6 = *(_DWORD *)(v2 + 28);
      if ( v6 > 2 )
      {
        *(_DWORD *)(v2 + 28) = v6 - 2;
        *(_DWORD *)(v2 + 48) = sub_470E78();
        sub_45A198();
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              do
              {
                while ( 1 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      do
                      {
LABEL_27:
                        v8 = sub_43D49C(-1, v2);
                        v77 = v8;
                        if ( v8 >= -1 )
                        {
                          v11 = (const char *)(v77 - 13);
                          switch ( v77 )
                          {
                            case 13:
                            case 101:
                            case 106:
LABEL_31:
                              v12 = 1;
                              goto LABEL_34;
                            case 32:
                            case 102:
                            case 122:
LABEL_33:
                              v12 = *(_DWORD *)(v2 + 28) + 1;
                              goto LABEL_34;
                            case 37:
                            case 60:
                            case 103:
                            case 112:
LABEL_39:
                              v14 = 0;
                              goto LABEL_41;
                            case 39:
                              sub_44F07C(v10, v9);
                              v20 = sub_43D49C(12, v2);
                              sub_41CA38();
                              if ( (unsigned __int8)((v20 | 0x20) - 97) > 0x19u )
                                goto LABEL_48;
                              v21 = 0;
                              while ( *(_DWORD *)(v2 + 8 * v21 + 84) != v20 )
                              {
                                if ( *(_DWORD *)(v2 + 80) < (unsigned int)++v21 )
                                  goto LABEL_53;
                              }
                              sub_419230(*(_DWORD *)(v2 + 8 * v21 + 88), 0);
LABEL_53:
                              if ( *(_DWORD *)(v2 + 80) == 14 && v20 != *(_DWORD *)(v2 + 196) )
LABEL_48:
                                sub_44F07C(v16, v18);
                              goto LABEL_55;
                            case 40:
                            case 91:
                            case 123:
                              v40 = *(_DWORD *)v2;
                              v76 = *(_DWORD *)(v2 + 20);
                              if ( v40 >= v76 )
                                goto LABEL_116;
                              v41 = *(_DWORD *)(v2 + 52);
                              Val = (unsigned __int8)v77;
                              v75 = (unsigned __int8)v77;
                              v42 = strchr(*(const char **)(v41 + 4 * v40), (unsigned __int8)v77);
                              v10 = v75;
                              if ( v42 == nullptr )
                                goto LABEL_116;
                              v10 = (unsigned __int8)sub_447B9C();
                              while ( 1 )
                              {
                                v75 = v10;
                                v43 = strchr(*(const char **)(v41 + 4 * v40), v10);
                                v10 = v75;
                                if ( v43 != nullptr )
                                  break;
                                if ( v76 <= ++v40 )
                                  goto LABEL_116;
                              }
                              v14 = v40 - *(_DWORD *)(v2 + 28);
                              goto LABEL_41;
                            case 41:
                            case 93:
                            case 125:
                              v44 = *(_DWORD *)v2 + *(_DWORD *)(v2 + 28);
                              if ( (unsigned int)v44 >= *(_DWORD *)(v2 + 20) )
                                goto LABEL_116;
                              v45 = *(_DWORD *)(v2 + 52);
                              Val = (unsigned __int8)v77;
                              v76 = (unsigned __int8)v77;
                              v46 = strchr(*(const char **)(v45 + 4 * v44), (unsigned __int8)v77);
                              v9 = v76;
                              if ( v46 == nullptr )
                                goto LABEL_116;
                              v9 = (unsigned __int8)sub_447B9C();
                              while ( 1 )
                              {
                                if ( v44 < 0 )
                                {
LABEL_116:
                                  sub_44F07C(v10, v9);
                                  goto LABEL_137;
                                }
                                v76 = v9;
                                v47 = strchr(*(const char **)(v45 + 4 * v44), v9);
                                v9 = v76;
                                if ( v47 != nullptr )
                                  break;
                                --v44;
                              }
                              v14 = v44;
LABEL_41:
                              sub_419230(v14, 0);
                              continue;
                            case 45:
                              sub_41CA38();
                              sub_418130(45);
                              v29 = sub_43D49C(1, v2);
                              if ( v29 == 126 )
                              {
                                dword_486008 ^= 0x10u;
                                goto LABEL_55;
                              }
                              if ( v29 > 126 )
                                goto LABEL_55;
                              if ( v29 == 109 )
                              {
                                dword_486008 ^= 4u;
                                goto LABEL_55;
                              }
                              if ( v29 > 109 )
                                goto LABEL_55;
                              if ( v29 == 83 )
                              {
                                dword_486008 ^= 0x80u;
                                goto LABEL_105;
                              }
                              if ( v29 > 83 )
                                goto LABEL_55;
                              if ( v29 != 78 )
                              {
                                if ( v29 <= 78 )
                                {
                                  if ( v29 == 69 )
                                  {
                                    dword_486008 ^= 1u;
                                  }
                                  else if ( v29 == 77 )
                                  {
                                    dword_486008 ^= 2u;
                                  }
                                }
                                goto LABEL_55;
                              }
                              dword_486008 ^= 8u;
                              p_Stream = &Stream;
                              v71 = *(_DWORD *)(v2 + 32);
                              v31 = alloca(sub_4115D8(4 * ((unsigned int)(v71 + 4) >> 2), v30, (char)Stream));
                              p_p_Stream = &p_Stream;
                              if ( (v32 & 8) != 0 )
                                v71 -= 8;
                              Block = *(void **)(v2 + 52);
                              v74 = *(_BYTE **)Block;
                              v68 = *((_DWORD *)v74 - 1);
                              v33 = p_p_Stream;
                              v69 = 0;
                              v66 = 0;
                              v73 = 0;
                              v75 = 0;
                              v76 = 0;
                              break;
                            case 47:
                              dword_486008 &= ~0x8000u;
                              goto LABEL_69;
                            case 58:
                              sub_44F07C(v10, v9);
                              v11 = (const char *)(sub_43D49C(2, v2) - 100);
                              switch ( (unsigned int)v11 )
                              {
                                case 0u:
                                  if ( *(_DWORD *)(v2 + 60) > 1u )
                                  {
                                    if ( *(_DWORD *)(v2 + 64) == 1 )
                                    {
                                      sub_41B4C0(1, v10, v2);
                                      v50 = *(_DWORD *)(v2 + 60);
                                      for ( i = 2; i <= v50; ++i )
                                        *(_DWORD *)(*(_DWORD *)(v2 + 72) + 4 * i - 8) = *(_DWORD *)(*(_DWORD *)(v2 + 72)
                                                                                                  + 4 * i
                                                                                                  - 4);
                                      *(_DWORD *)(v2 + 60) = v50 - 1;
                                      --*(_DWORD *)(v2 + 64);
                                    }
                                    else
                                    {
                                      sub_41B4C0(-1, v10, v2);
                                      v48 = *(_DWORD *)(v2 + 60);
                                      for ( j = 3; j <= v48; ++j )
                                        *(_DWORD *)(*(_DWORD *)(v2 + 72) + 4 * j - 8) = *(_DWORD *)(*(_DWORD *)(v2 + 72)
                                                                                                  + 4 * j
                                                                                                  - 4);
                                      *(_DWORD *)(v2 + 60) = v48 - 1;
                                    }
                                  }
                                  continue;
                                case 1u:
                                  goto LABEL_62;
                                case 2u:
                                  goto LABEL_63;
                                case 0xAu:
                                  v52 = 1;
                                  goto LABEL_136;
                                case 0xCu:
                                  v52 = -1;
                                  goto LABEL_136;
                                case 0xDu:
                                  goto LABEL_42;
                                case 0x14u:
                                  v52 = 0;
LABEL_136:
                                  sub_41B4C0(v52, v10, v2);
                                  break;
                                default:
                                  continue;
                              }
                              continue;
                            case 61:
LABEL_63:
                              sub_440B60();
                              continue;
                            case 62:
                            case 71:
LABEL_40:
                              *(_DWORD *)v2 = 9999999;
                              sub_457958();
                              v14 = *(_DWORD *)v2;
                              goto LABEL_41;
                            case 63:
                              dword_486008 |= 0x8000u;
LABEL_69:
                              sub_459EB8();
                              continue;
                            case 69:
LABEL_62:
                              sub_42CBD8(v10, v9);
                              continue;
                            case 78:
                              v28 = *(_DWORD *)(v2 + 208) - 1;
                              goto LABEL_67;
                            case 81:
                            case 113:
LABEL_42:
                              sub_43D470(v11);
                            case 82:
                            case 114:
                              goto LABEL_55;
                            case 98:
                            case 119:
LABEL_35:
                              v13 = *(_DWORD *)(v2 + 28) + 1;
                              goto LABEL_36;
                            case 100:
                              v12 = (unsigned int)(*(_DWORD *)(v2 + 28) + 1) >> 1;
LABEL_34:
                              sub_418E6C(v12);
                              continue;
                            case 107:
                            case 121:
LABEL_32:
                              v13 = 1;
                              goto LABEL_36;
                            case 109:
                              sub_44F07C(v10, v9);
                              v15 = sub_43D49C(6, v2);
                              LOBYTE(v17) = v15;
                              v18 = (v17 | 0x20) - 97;
                              if ( (unsigned __int8)v18 > 0x19u )
                                goto LABEL_48;
                              if ( *(_DWORD *)(v2 + 80) == 14 )
                                *(_DWORD *)(v2 + 80) = 0;
                              v19 = *(_DWORD *)(v2 + 80);
                              *(_DWORD *)(v2 + 8 * v19 + 84) = v15;
                              *(_DWORD *)(v2 + 8 * v19 + 88) = *(_DWORD *)v2;
                              *(_DWORD *)(v2 + 80) = v19 + 1;
                              goto LABEL_55;
                            case 110:
                              v28 = *(_DWORD *)(v2 + 208) + 1;
LABEL_67:
                              sub_43684C(v28, v9, v10);
                              continue;
                            case 115:
                              sub_44F07C(v10, v9);
                              v24 = (char *)sub_43D4D8(10);
                              if ( *v24 != 0 )
                              {
                                v25 = (FILE *)sub_4314D8(v24);
                                if ( v25 != nullptr )
                                {
                                  v26 = 0;
                                  do
                                  {
                                    v27 = *(const char **)(*(_DWORD *)(v2 + 52) + 4 * v26);
                                    v76 = v26;
                                    sub_46EEFC(v25, "%s\n", v27);
                                    v26 = v76 + 1;
                                  }
                                  while ( v76 + 1 <= *(_DWORD *)(v2 + 20) );
                                  fclose(v25);
                                }
                              }
                              sub_44F07C(v23, v22);
                              free(v24);
                              continue;
                            case 117:
                              v13 = (unsigned int)(*(_DWORD *)(v2 + 28) + 1) >> 1;
LABEL_36:
                              sub_419264(v13);
                              continue;
                            default:
                              continue;
                          }
                          while ( 2 )
                          {
                            v34 = *v74;
                            *(_BYTE *)v33 = *v74;
                            if ( v34 != 0 )
                            {
                              if ( v34 == 9 )
                                v76 = (v76 + 8) & 0xFFFFFFF8;
                              else
                                ++v76;
                              ++v74;
                              v35 = (FILE ***)((char *)v33 + 1);
                              if ( (int)v76 < v71 )
                                goto LABEL_93;
                              *((_BYTE *)v33 + 1) = 0;
                              v33 = (FILE ***)((char *)v33 + 1);
                            }
                            else
                            {
                              v39 = 4 * v75;
                              v67 = *((char **)Block + v75);
                              free(v67 - 4);
                              if ( v75 == *(_DWORD *)v2 )
                                v66 = v73;
                              if ( *(_DWORD *)(v2 + 20) >= ++v75 )
                              {
                                v74 = *(_BYTE **)((char *)Block + v39 + 4);
                                if ( v68 == *((_DWORD *)v74 - 1) )
                                {
                                  v35 = v33;
LABEL_93:
                                  v33 = v35;
                                  continue;
                                }
                              }
                            }
                            break;
                          }
                          v36 = (char *)v33 - (char *)p_p_Stream;
                          v37 = (_DWORD *)sub_470E78();
                          v67 = (char *)(v37 + 1);
                          *v37 = v68;
                          qmemcpy(v67, p_p_Stream, v36 + 1);
                          v69 = sub_47168C(v73, 1032);
                          v38 = v73;
                          *(_DWORD *)(v69 + 4 * v73++) = v67;
                          if ( v71 > (int)v76 )
                          {
                            if ( v75 > *(_DWORD *)(v2 + 20) )
                            {
                              free(Block);
                              *(_DWORD *)(v2 + 52) = v69;
                              *(_DWORD *)(v2 + 20) = v38;
                              *(_DWORD *)(v2 + 16) = v76;
                              *(_DWORD *)v2 = v66;
                              *(_BYTE *)(v2 + 252) = 0;
LABEL_105:
                              sub_418EA0();
LABEL_55:
                              sub_418F38();
                              continue;
                            }
                            v68 = *((_DWORD *)v74 - 1);
                          }
                          v35 = p_p_Stream;
                          v76 = 0;
                          goto LABEL_93;
                        }
                        if ( v8 >= -11 )
                        {
                          switch ( v77 )
                          {
                            case -11:
                              goto LABEL_33;
                            case -10:
                              goto LABEL_35;
                            case -7:
                              goto LABEL_40;
                            case -6:
                              goto LABEL_39;
                            case -3:
                              goto LABEL_31;
                            case -2:
                              goto LABEL_32;
                            default:
                              break;
                          }
                        }
LABEL_137:
                        ;
                      }
                      while ( (unsigned __int8)(v77 - 48) > 9u );
                      v78[0] = v77;
                      sub_41CA38();
                      sub_46F088(":%c", v77);
                      v53 = 1;
                      do
                      {
                        v54 = v53++;
                        v77 = v54;
                        v55 = sub_43D49C(v53, v2);
                        v56 = v55;
                        v57 = v77;
                        if ( v55 > 0xFF || (unsigned __int8)(v55 - 48) > 9u )
                          goto LABEL_143;
                        v78[v53 - 1] = v55;
                        sub_418130(v55);
                      }
                      while ( v53 != 15 );
                      v57 = 15;
LABEL_143:
                      v78[v57] = 0;
                      v60 = sub_418398(10, v78, nullptr);
                      v61 = v60 - 1;
                      if ( (unsigned int)(v60 - 1) <= 0x98967E )
                        break;
                      sub_418F38();
                    }
                  }
                  while ( v56 > 122 );
                  if ( v56 > 97 )
                  {
                    switch ( v56 )
                    {
                      case 'b':
                      case 'u':
                      case 'w':
                      case 'y':
                        goto LABEL_167;
                      case 'd':
                      case 'e':
                      case 'z':
                        goto LABEL_166;
                      case 'g':
                        goto LABEL_171;
                      case 'n':
                        sub_43684C(v60 + *(_DWORD *)(v2 + 208), v58, v59);
                        goto LABEL_27;
                      case 'p':
                        goto LABEL_168;
                      default:
                        goto LABEL_27;
                    }
                  }
                  if ( v56 != 71 )
                    break;
LABEL_171:
                  sub_419230(v61, 1);
                }
              }
              while ( v56 > 71 );
              if ( v56 != 63 )
                break;
              dword_486008 |= 0x8000u;
LABEL_175:
              sub_459EB8();
            }
            if ( v56 <= 63 )
            {
              if ( v56 == 62 || v56 == 60 )
                goto LABEL_171;
              if ( v56 <= 60 )
                break;
            }
          }
          if ( v56 == 47 )
          {
            dword_486008 &= ~0x8000u;
            goto LABEL_175;
          }
          if ( v56 <= 47 )
          {
            if ( v56 == 37 )
            {
LABEL_168:
              sub_46BC24();
              v62 = *(_DWORD *)(v2 + 76);
              if ( v62 <= 0 )
                v62 = *(_DWORD *)(v2 + 24);
              v61 = v60 * v62 / 0x64u;
              goto LABEL_171;
            }
            if ( v56 <= 37 )
            {
              if ( v56 == 32 )
                goto LABEL_166;
              if ( v56 <= 32 )
              {
                if ( v56 == 13 )
                  goto LABEL_166;
                if ( v56 <= 13 )
                {
                  if ( v56 == -3 )
                  {
LABEL_166:
                    sub_418E6C(v60);
                  }
                  else if ( v56 == -2 )
                  {
LABEL_167:
                    sub_419264(v60);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return sub_416E5C(v3);
}

