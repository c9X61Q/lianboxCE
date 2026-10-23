// busybox.exe @ 0x44ada8 size=1349

int __usercall sub_44ADA8@<eax>(const char **a1@<eax>, int a2@<ecx>)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ebx
  const char *v6; // esi
  int v7; // eax
  int (*v8)(); // ecx
  int v9; // ecx
  _DWORD *v10; // ebx
  const char *v11; // eax
  int v12; // esi
  int v13; // ecx
  const char *v14; // eax
  const char **v15; // ebx
  int v16; // eax
  _BYTE *v17; // edx
  int v18; // esi
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  char v22; // dl
  int v23; // edx
  int v24; // ecx
  int v25; // ebx
  char v26; // al
  const char *v27; // esi
  __int16 v28; // ax
  int (__fastcall *v29)(int, int); // ecx
  int v30; // ebx
  int v31; // ecx
  int v32; // ebx
  int v33; // ebx
  int v34; // ebx
  int v36; // [esp+Ch] [ebp-84h]
  const char *v37; // [esp+10h] [ebp-80h]
  size_t *v38; // [esp+10h] [ebp-80h]
  int v39; // [esp+14h] [ebp-7Ch] BYREF
  int v40; // [esp+18h] [ebp-78h]
  int v41; // [esp+1Ch] [ebp-74h]
  char v42; // [esp+20h] [ebp-70h]
  char v43[56]; // [esp+24h] [ebp-6Ch] BYREF
  int v44; // [esp+5Ch] [ebp-34h]

  v40 = 0;
  v41 = 0;
  v42 = 0;
  v39 = sub_4728CC(a2);
  while ( 1 )
  {
    v37 = *a1;
    if ( *a1 == nullptr )
      return v39;
    v3 = sub_439918("-follow", v37);
    v5 = v3;
    v6 = a1[1];
    if ( v3 <= 17 )
    {
      if ( v3 == 0 )
      {
        *((_BYTE *)&qword_485BF0 + 7) |= 0x42u;
        goto LABEL_106;
      }
      if ( v3 == 1 )
      {
        *((_BYTE *)&qword_485BF0 + 5) = 1;
        goto LABEL_106;
      }
    }
    else
    {
      if ( v6 == nullptr )
        goto LABEL_42;
      ++a1;
    }
    if ( (unsigned int)(v3 - 32) <= 1 )
    {
      *(&NumOfElements + v3 - 32) = sub_4708EC();
      goto LABEL_106;
    }
    if ( v3 == 2 )
    {
      *((_BYTE *)&qword_485BF0 + 7) |= 8u;
      goto LABEL_106;
    }
    if ( v3 != 3 && v3 != 6 )
    {
      switch ( v3 )
      {
        case 7:
        case 4:
          v7 = v40++;
          v39 = sub_471600(v4, 4 * v7 + 12);
          *(_DWORD *)(v39 + 4 * v40 + 4) = 0;
          v41 = 0;
          goto LABEL_106;
        case 5:
        case 8:
          v42 ^= 1u;
          goto LABEL_106;
        case 9:
          *((_BYTE *)&qword_485BF0 + 4) = 0;
          v8 = sub_432B40;
LABEL_26:
          sub_4141B8((int)&v39, (int)v8);
          goto LABEL_106;
        case 10:
          *((_BYTE *)&qword_485BF0 + 4) = 0;
          v8 = (int (*)())sub_432B50;
          goto LABEL_26;
        default:
          break;
      }
      v8 = sub_432B74;
      if ( v3 == 11 )
        goto LABEL_26;
      v8 = sub_432B7C;
      if ( v3 == 12 )
        goto LABEL_26;
      if ( v3 == 13 )
      {
        *((_BYTE *)&qword_485BF0 + 4) = 0;
        *((_BYTE *)&qword_485BF0 + 7) |= 8u;
        v8 = (int (*)())sub_432754;
        goto LABEL_26;
      }
      v8 = sub_432798;
      switch ( v3 )
      {
        case 14:
          goto LABEL_26;
        case 15:
          *((_BYTE *)&qword_485BF0 + 4) = 0;
          v10 = (_DWORD *)sub_4141B8((int)&v39, (int)sub_432840);
          v10[2] = ++a1;
          while ( 1 )
          {
            v11 = *a1;
            if ( *a1 == nullptr )
              sub_41784C("%s requires an argument", "-exec");
            LOBYTE(v9) = *v11;
            v9 &= ~0x10u;
            if ( (_BYTE)v9 == 43 && v11[1] == 0 )
              break;
            ++a1;
            ++v10[4];
          }
          if ( *v11 == 43 )
            v10[5] = sub_4728CC(v9);
          if ( v10[4] == 0 )
LABEL_42:
            sub_41784C("%s requires an argument", v37);
          v10[3] = sub_470E78();
          v12 = v10[4];
          v13 = 0;
          while ( v12 != 0 )
          {
            v36 = v13;
            --v12;
            v38 = (size_t *)(v10[3] + 4 * v12);
            *v38 = sub_41F808(*(const char **)(v10[2] + 4 * v12), "{}");
            v13 = *(_DWORD *)(v10[3] + 4 * v12) + v36;
          }
          if ( v13 != 1 && v10[5] != 0 )
          {
            v14 = "only one '{}' allowed for -exec +";
            goto LABEL_53;
          }
          break;
        case 17:
          v15 = a1;
          v16 = 1;
          while ( 1 )
          {
            v17 = *++v15;
            if ( *v15 == nullptr )
              break;
            if ( *v17 == 40 )
            {
              if ( v17[1] == 0 )
                ++v16;
            }
            else if ( *v17 == 41 && v17[1] == 0 && --v16 == 0 )
            {
              *v15 = nullptr;
              v18 = sub_4141B8((int)&v39, (int)sub_432A68);
              *(_DWORD *)(v18 + 8) = sub_44ADA8();
              *v15 = ")";
              a1 = v15;
              goto LABEL_106;
            }
          }
          v14 = "unpaired '('";
LABEL_53:
          sub_418210(v14);
        default:
          if ( (unsigned int)(v3 - 18) <= 1 )
          {
            v19 = sub_4141B8((int)&v39, (int)sub_4329DC);
            *(_DWORD *)(v19 + 8) = v6;
            v20 = v5 == 19;
LABEL_65:
            *(_BYTE *)(v19 + 12) = v20;
            break;
          }
          if ( (unsigned int)(v3 - 20) <= 2 )
          {
            v19 = sub_4141B8((int)&v39, (int)sub_432A78);
            *(_DWORD *)(v19 + 8) = v6;
            v20 = v5 == 22;
            goto LABEL_65;
          }
          switch ( v3 )
          {
            case 23:
              sub_4141B8((int)&v39, (int)sub_432B8C);
              sub_4716D4(0, v6);
              goto LABEL_106;
            case 24:
              v21 = sub_4141B8((int)&v39, (int)sub_432C38);
              v22 = *v6;
              if ( *v6 == 98 )
              {
                v23 = 12288;
              }
              else
              {
                switch ( v22 )
                {
                  case 'c':
                    v23 = 0x2000;
                    break;
                  case 'd':
                    v23 = 0x4000;
                    break;
                  case 'p':
                    v23 = 4096;
                    break;
                  case 'f':
                    v23 = 0x8000;
                    break;
                  case 'l':
                    v23 = 40960;
                    break;
                  case 's':
                    v23 = 49152;
                    break;
                  default:
                    goto LABEL_76;
                }
              }
              if ( v6[1] != 0 )
LABEL_76:
                sub_41784C("invalid argument '%s' to '%s'", v6, "-type");
              *(_DWORD *)(v21 + 8) = v23;
              break;
            case 16:
              v8 = (int (*)())sub_4328AC;
              goto LABEL_26;
            case 25:
              v25 = sub_4141B8((int)&v39, (int)sub_432AA8);
              v26 = *v6;
              *(_BYTE *)(v25 + 8) = *v6;
              if ( v26 == 47 )
                v27 = v6 + 1;
              else
                v27 = (const char *)sub_44D280();
              v28 = sub_417E48(v27, *(unsigned __int16 *)(v25 + 10), v24);
              *(_WORD *)(v25 + 10) = v28;
              if ( v28 == -1 )
                sub_41784C("invalid mode '%s'", v27);
              break;
            default:
              v29 = sub_432984;
              if ( v3 != 26 )
              {
                v29 = sub_432934;
                if ( v3 != 27 )
                {
                  switch ( v3 )
                  {
                    case 28:
                      v30 = sub_4141B8((int)&v39, (int)sub_432A58);
                      sub_471860(v31, v43);
                      *(_DWORD *)(v30 + 8) = v44;
                      goto LABEL_106;
                    case 29:
                      v32 = sub_4141B8((int)&v39, (int)sub_4328F0);
                      *(_QWORD *)(v32 + 8) = sub_47098C();
                      goto LABEL_106;
                    case 30:
                      v33 = sub_4141B8((int)&v39, (int)sub_432BD8);
                      *(_BYTE *)(v33 + 8) = *v6;
                      sub_44D280();
                      *(_QWORD *)(v33 + 16) = sub_4709D8();
                      goto LABEL_106;
                    default:
                      break;
                  }
                  if ( v3 != 31 )
                  {
                    sub_41783C("unrecognized: %s", v37);
                    sub_418164();
                  }
                  v29 = sub_432908;
                }
              }
              v34 = sub_4141B8((int)&v39, (int)v29);
              *(_BYTE *)(v34 + 8) = *v6;
              sub_44D280();
              *(_DWORD *)(v34 + 12) = sub_470920();
              break;
          }
          break;
      }
    }
LABEL_106:
    ++a1;
  }
}

