// busybox.exe @ 0x40cb90 size=2229

int __cdecl sub_40CB90(__int16 a1, int a2, int a3, char *a4, unsigned int *a5)
{
  int v6; // eax
  int result; // eax
  _BYTE *v8; // ebp
  char v9; // al
  _BYTE *v10; // edx
  unsigned int v11; // esi
  _BYTE *v12; // ebx
  int v13; // ebp
  double v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  char *v18; // eax
  unsigned int *v19; // esi
  unsigned int *v20; // esi
  int v21; // eax
  double v22; // st7
  int v23; // eax
  double v24; // st7
  double v25; // st7
  double v26; // st7
  int v27; // eax
  double v28; // st7
  double v29; // st7
  int v30; // eax
  int v31; // edx
  int v32; // eax
  unsigned int v33; // eax
  double v34; // st7
  double v35; // st7
  char *v36; // eax
  const wchar_t *v37; // edi
  size_t v38; // eax
  struct lconv *v39; // eax
  int v40; // eax
  _TBYTE ErrorMessage; // [esp+0h] [ebp-9Ch]
  int v42; // [esp+18h] [ebp-84h]
  int v43; // [esp+1Ch] [ebp-80h]
  int *v44; // [esp+20h] [ebp-7Ch]
  _BYTE *v45; // [esp+24h] [ebp-78h]
  int v46; // [esp+28h] [ebp-74h]
  _BYTE *v47; // [esp+2Ch] [ebp-70h]
  _WORD v48[5]; // [esp+3Eh] [ebp-5Eh] BYREF
  __int64 v49; // [esp+48h] [ebp-54h]
  int v50; // [esp+54h] [ebp-48h] BYREF
  int v51; // [esp+58h] [ebp-44h]
  int v52; // [esp+5Ch] [ebp-40h] BYREF
  _DWORD v53[2]; // [esp+60h] [ebp-3Ch] BYREF
  __int16 v54; // [esp+68h] [ebp-34h]
  int v55; // [esp+6Ch] [ebp-30h]
  __int16 v56; // [esp+70h] [ebp-2Ch]
  int v57; // [esp+74h] [ebp-28h]
  int v58; // [esp+78h] [ebp-24h]
  int v59; // [esp+7Ch] [ebp-20h]

  v6 = *errno();
  v52 = -1;
  v53[0] = -1;
  v46 = v6;
  v53[1] = -3;
  v50 = a2;
  v54 = 0;
  v55 = 0;
  v43 = a1 & 0x6000;
  v51 = v43;
  v56 = 0;
  v58 = a3;
  result = *a4;
  v57 = 0;
  v59 = -1;
  if ( result != 0 )
  {
    v8 = a4 + 1;
LABEL_5:
    if ( result != 37 )
    {
      sub_40B130(result, (int)&v50);
      goto LABEL_4;
    }
    v53[0] = -1;
    v52 = -1;
    v51 = a1 & 0x6000;
    v9 = *v8;
    if ( *v8 != 0 )
    {
      v42 = 0;
      v10 = v8;
      v45 = v8;
      v44 = &v52;
      v11 = 0;
      while ( 2 )
      {
        v12 = v10 + 1;
        v13 = v9;
        switch ( v9 )
        {
          case ' ':
            if ( v11 != 0 )
              goto LABEL_72;
            v9 = v10[1];
            v51 |= 0x40u;
            ++v10;
            goto LABEL_10;
          case '#':
            if ( v11 != 0 )
              goto LABEL_72;
            v9 = v10[1];
            v51 |= 0x800u;
            ++v10;
            goto LABEL_10;
          case '%':
            v8 = v10 + 1;
            sub_40B130(37, (int)&v50);
            goto LABEL_4;
          case '\'':
            if ( v11 != 0 )
              goto LABEL_72;
            v47 = v10;
            v51 |= 0x1000u;
            *(_DWORD *)&v48[1] = 0;
            v39 = localeconv();
            v40 = sub_410FC0((int)v48, v39->thousands_sep, 16, (int)&v48[1]);
            if ( v40 > 0 )
              v56 = v48[0];
            v55 = v40;
            v9 = v47[1];
            v10 = v12;
            goto LABEL_10;
          case '*':
            if ( v44 == nullptr )
              goto LABEL_47;
            if ( (v11 & 0xFFFFFFFD) != 0 )
            {
              v9 = v10[1];
              v44 = nullptr;
              ++v10;
              v11 = 4;
            }
            else
            {
              v27 = *a5;
              *v44 = *a5;
              if ( v27 >= 0 )
                goto LABEL_68;
              if ( v11 != 0 )
              {
                v53[0] = -1;
LABEL_68:
                v9 = v10[1];
                v44 = nullptr;
                ++a5;
                ++v10;
                goto LABEL_10;
              }
              v9 = v10[1];
              v52 = -v52;
              ++a5;
              ++v10;
              v51 |= 0x400u;
              v44 = nullptr;
            }
            goto LABEL_10;
          case '+':
            if ( v11 != 0 )
              goto LABEL_72;
            v9 = v10[1];
            v51 |= 0x100u;
            ++v10;
            goto LABEL_10;
          case '-':
            if ( v11 != 0 )
              goto LABEL_72;
            v9 = v10[1];
            v51 |= 0x400u;
            ++v10;
            goto LABEL_10;
          case '.':
            if ( v11 <= 1 )
            {
              v9 = *++v10;
              v53[0] = 0;
              v44 = v53;
              v11 = 2;
            }
            else
            {
LABEL_47:
              v9 = v10[1];
              v11 = 4;
              ++v10;
            }
            goto LABEL_10;
          case '0':
            if ( v11 != 0 )
            {
              if ( v11 > 3 )
                goto LABEL_110;
              v13 = 48;
LABEL_107:
              if ( v11 == 2 )
                v11 = 3;
LABEL_17:
              if ( v44 != nullptr )
              {
                if ( *v44 >= 0 )
                {
                  *v44 = v13 + 10 * *v44 - 48;
                  v9 = *++v10;
                  goto LABEL_10;
                }
                *v44 = v13 - 48;
              }
LABEL_72:
              v9 = *++v10;
            }
            else
            {
              v9 = v10[1];
              v51 |= 0x200u;
              ++v10;
            }
            goto LABEL_10;
          case 'A':
            if ( (v51 & 4) != 0 )
              goto LABEL_51;
            goto LABEL_74;
          case 'C':
            v53[0] = -1;
            v20 = a5 + 1;
            goto LABEL_53;
          case 'E':
            if ( (v51 & 4) != 0 )
              goto LABEL_59;
            goto LABEL_76;
          case 'F':
            if ( (v51 & 4) != 0 )
              goto LABEL_55;
            goto LABEL_95;
          case 'G':
            if ( (v51 & 4) != 0 )
              goto LABEL_57;
            goto LABEL_97;
          case 'I':
            v9 = v10[1];
            if ( v9 == 54 )
            {
              if ( v10[2] != 52 )
              {
LABEL_110:
                v8 = v45;
                sub_40B130(37, (int)&v50);
                goto LABEL_4;
              }
              v9 = v10[3];
              v42 = 3;
              v10 += 3;
              v11 = 4;
            }
            else if ( v9 == 51 )
            {
              if ( v10[2] != 50 )
                goto LABEL_110;
              v9 = v10[3];
              v42 = 2;
              v10 += 3;
              v11 = 4;
            }
            else
            {
              v42 = 0;
              ++v10;
              v11 = 4;
            }
LABEL_10:
            if ( v9 == 0 )
              return v57;
            continue;
          case 'L':
            v9 = v10[1];
            v51 |= 4u;
            ++v10;
            v11 = 4;
            goto LABEL_10;
          case 'S':
            v19 = a5 + 1;
            goto LABEL_100;
          case 'X':
          case 'o':
          case 'u':
          case 'x':
            if ( v42 == 3 )
            {
              v14 = *(double *)a5;
              a5 += 2;
              *(double *)&v48[1] = v14;
            }
            else
            {
              LODWORD(v14) = *a5;
              if ( v42 == 2 )
                goto LABEL_25;
              if ( v42 != 1 )
              {
                if ( v42 == 5 )
                  LODWORD(v14) = LOBYTE(v14);
LABEL_25:
                HIDWORD(v14) = 0;
                *(_DWORD *)&v48[1] = LODWORD(v14);
                ++a5;
                *(_DWORD *)&v48[3] = 0;
                goto LABEL_26;
              }
              *(_QWORD *)&v14 = LOWORD(v14);
              ++a5;
              *(_DWORD *)&v48[1] = LOWORD(v14);
              *(_DWORD *)&v48[3] = 0;
            }
LABEL_26:
            if ( v13 != 117 )
            {
              v15 = HIDWORD(v14);
              v16 = LODWORD(v14);
              v17 = v13;
              v8 = v12;
              sub_40C0C0(v17, v16, v15, (int)&v50);
              goto LABEL_4;
            }
            goto LABEL_35;
          case 'a':
            v51 |= 0x20u;
            if ( (v51 & 4) != 0 )
            {
LABEL_51:
              v22 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 3;
              *(double *)&ErrorMessage = v22;
              sub_40C5D0((int)&v50, ErrorMessage);
            }
            else
            {
LABEL_74:
              v28 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 2;
              *(double *)&ErrorMessage = v28;
              sub_40C5D0((int)&v50, ErrorMessage);
            }
            goto LABEL_4;
          case 'c':
            v53[0] = -1;
            v20 = a5 + 1;
            if ( (unsigned int)(v42 - 2) <= 1 )
            {
LABEL_53:
              v23 = *a5;
              a5 = v20;
              v8 = v10 + 1;
              v48[1] = v23;
              sub_40B190((int)&v48[1], 1, (int)&v50);
            }
            else
            {
              v21 = *a5++;
              v8 = v10 + 1;
              LOBYTE(v48[1]) = v21;
              sub_40B2B0((char *)&v48[1], 1, (int)&v50);
            }
            goto LABEL_4;
          case 'd':
          case 'i':
            v51 |= 0x80u;
            if ( v42 == 3 )
            {
              v14 = *(double *)a5;
              a5 += 2;
              *(double *)&v48[1] = v14;
            }
            else
            {
              LODWORD(v14) = *a5;
              if ( v42 == 2 )
                goto LABEL_33;
              if ( v42 != 1 )
              {
                if ( v42 == 5 )
                  LODWORD(v14) = SLOBYTE(v14);
LABEL_33:
                *(_QWORD *)&v14 = SLODWORD(v14);
                *(_QWORD *)&v48[1] = SLODWORD(v14);
                ++a5;
                goto LABEL_34;
              }
              ++a5;
              *(_QWORD *)&v14 = SLOWORD(v14);
              *(_QWORD *)&v48[1] = SLOWORD(v14);
            }
LABEL_34:
            v49 = SHIDWORD(v14) >> 31;
LABEL_35:
            sub_40BA10(LODWORD(v14), HIDWORD(v14), &v50);
LABEL_36:
            v8 = v12;
LABEL_4:
            result = (char)*v8++;
            if ( result != 0 )
              goto LABEL_5;
            return v57;
          case 'e':
            v51 |= 0x20u;
            if ( (v51 & 4) != 0 )
            {
LABEL_59:
              v26 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 3;
              *(double *)&ErrorMessage = v26;
              sub_40BE80(&v50, ErrorMessage);
            }
            else
            {
LABEL_76:
              v29 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 2;
              *(double *)&ErrorMessage = v29;
              sub_40BE80(&v50, ErrorMessage);
            }
            goto LABEL_4;
          case 'f':
            v51 |= 0x20u;
            if ( (v51 & 4) != 0 )
            {
LABEL_55:
              v24 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 3;
              *(double *)&ErrorMessage = v24;
              sub_40B940((int)&v50, ErrorMessage);
            }
            else
            {
LABEL_95:
              v34 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 2;
              *(double *)&ErrorMessage = v34;
              sub_40B940((int)&v50, ErrorMessage);
            }
            goto LABEL_4;
          case 'g':
            v51 |= 0x20u;
            if ( (v51 & 4) != 0 )
            {
LABEL_57:
              v25 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 3;
              *(double *)&ErrorMessage = v25;
              sub_40BF30(&v50, ErrorMessage);
            }
            else
            {
LABEL_97:
              v35 = *(double *)a5;
              v8 = v10 + 1;
              a5 += 2;
              *(double *)&ErrorMessage = v35;
              sub_40BF30(&v50, ErrorMessage);
            }
            goto LABEL_4;
          case 'h':
            v9 = v10[1];
            if ( v9 == 104 )
            {
              v9 = v10[2];
              v42 = 5;
              v10 += 2;
            }
            else
            {
              v42 = 1;
              ++v10;
            }
            v11 = 4;
            goto LABEL_10;
          case 'j':
            v9 = v10[1];
            v42 = 3;
            ++v10;
            v11 = 4;
            goto LABEL_10;
          case 'l':
            v9 = v10[1];
            if ( v9 == 108 )
            {
              v9 = v10[2];
              v42 = 3;
              v10 += 2;
            }
            else
            {
              v42 = 2;
              ++v10;
            }
            v11 = 4;
            goto LABEL_10;
          case 'm':
            v8 = v10 + 1;
            v36 = strerror(v46);
            sub_40B380(v36, (int)&v50);
            goto LABEL_4;
          case 'n':
            v30 = *a5++;
            v31 = v57;
            switch ( v42 )
            {
              case 5:
                *(_BYTE *)v30 = v57;
                v8 = v12;
                break;
              case 1:
                *(_WORD *)v30 = v57;
                v8 = v12;
                break;
              case 2:
                *(_DWORD *)v30 = v57;
                v8 = v12;
                break;
              default:
                *(_DWORD *)v30 = v57;
                if ( v42 != 3 )
                  goto LABEL_36;
                v8 = v12;
                *(_DWORD *)(v30 + 4) = v31 >> 31;
                break;
            }
            goto LABEL_4;
          case 'p':
            if ( v11 == 0 )
            {
              v32 = a1 & 0x6000;
              if ( v51 == v43 )
              {
                BYTE1(v32) = BYTE1(v43) | 2;
                v53[0] = 8;
                v51 = v32;
              }
            }
            v33 = *a5++;
            v8 = v10 + 1;
            *(_DWORD *)&v48[1] = v33;
            *(_DWORD *)&v48[3] = 0;
            v49 = 0;
            sub_40C0C0(120, v33, 0, (int)&v50);
            goto LABEL_4;
          case 's':
            v18 = (char *)*a5;
            v19 = a5 + 1;
            if ( (unsigned int)(v42 - 2) <= 1 )
            {
LABEL_100:
              v37 = (const wchar_t *)*a5;
              if ( v37 == nullptr )
                v37 = L"(null)";
              if ( v53[0] < 0 )
                v38 = wcslen(v37);
              else
                v38 = sub_410E00(v37, v53[0]);
              v8 = v12;
              sub_40B190((int)v37, v38, (int)&v50);
              a5 = v19;
            }
            else
            {
              ++a5;
              v8 = v10 + 1;
              sub_40B380(v18, (int)&v50);
            }
            goto LABEL_4;
          case 't':
          case 'z':
            v42 = 0;
            v9 = v10[1];
            v11 = 4;
            ++v10;
            goto LABEL_10;
          default:
            if ( (unsigned __int8)(v9 - 48) > 9u || v11 > 3 )
              goto LABEL_110;
            if ( v11 != 0 )
              goto LABEL_107;
            v11 = 1;
            goto LABEL_17;
        }
      }
    }
    return v57;
  }
  return result;
}

