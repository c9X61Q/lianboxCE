// busybox.exe @ 0x449dbc size=954

int __usercall sub_449DBC@<eax>(int a1@<eax>)
{
  int *i; // edx
  int v2; // eax
  unsigned int v3; // edi
  int *v4; // edx
  int v5; // esi
  int *v6; // ebx
  int *v7; // ecx
  int *v8; // ecx
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // eax
  int *v18; // [esp+Ch] [ebp-30h]
  int v19; // [esp+Ch] [ebp-30h]
  int *v20; // [esp+Ch] [ebp-30h]
  const char *v21; // [esp+Ch] [ebp-30h]
  int v22; // [esp+Ch] [ebp-30h]
  int *v23; // [esp+10h] [ebp-2Ch]
  unsigned int v25; // [esp+18h] [ebp-24h]
  int v26; // [esp+18h] [ebp-24h]
  int *v27; // [esp+18h] [ebp-24h]
  int v28; // [esp+1Ch] [ebp-20h] BYREF
  int v29; // [esp+28h] [ebp-14h]
  int v30; // [esp+2Ch] [ebp-10h]

  v28 = 2130706432;
  v30 = 0;
  v29 = 0;
  v25 = a1 | 0x7C380425;
  v23 = nullptr;
  for ( i = &v28; ; i = v6 )
  {
    v18 = i;
    v2 = sub_446730(v25);
    v3 = v2;
    v4 = v18;
    if ( (v2 & a1) != 0 )
      break;
    v5 = dword_486010;
    if ( v23 != nullptr && *(_DWORD *)dword_486010 == 654513154 )
    {
      v6 = sub_4460FC(621745408);
      v23[2] = (int)v6;
      v6[4] = (int)v23;
      v25 = 2084045857;
      v23 = nullptr;
      continue;
    }
    if ( (v2 & 0x3D0) != 0 )
    {
      v26 = *(_DWORD *)dword_486010;
      v19 = *(_DWORD *)dword_486010 & 0xFF00;
      while ( 1 )
      {
        v7 = v4;
        v4 = (int *)v4[4];
        if ( (*(_DWORD *)dword_486010 & 0x7F000000u) <= (*v4 & 0x7E000000u) && (v26 != *v7 || v19 != 4608) )
          break;
        if ( v4[4] == 0 )
          goto LABEL_51;
      }
      if ( v19 == 9472 )
        *(_DWORD *)dword_486010 = v26 + 100663296;
      v20 = v7;
      v27 = v4;
      v6 = sub_4460FC(*(_DWORD *)v5);
      v27[3] = (int)v6;
      v8 = v20;
      v6[4] = v20[4];
      if ( (v3 & 0x3C0) != 0 )
      {
        v6[2] = (int)v20;
        v25 = 2084045861;
        if ( (*(_DWORD *)v5 & 0xFF00) == 0x2000 )
        {
          sub_446730(0x200000u);
          *v6 &= 0x80FFFFFF;
          v25 = a1 | 0x7C3807E1;
          v8 = v20;
        }
      }
      else
      {
        v6[3] = (int)v20;
        v25 = a1 | 0x7C3807E1;
      }
      v8[4] = (int)v6;
    }
    else
    {
      v6 = sub_4460FC(*(_DWORD *)dword_486010);
      v18[3] = (int)v6;
      v6[4] = (int)v18;
      if ( (v3 & 0x7C380005) != 0 )
      {
        v25 = a1 | 0x7C3807F1;
        if ( v3 == 0x40000000 )
          goto LABEL_45;
        if ( v3 > 0x40000000 )
          continue;
        if ( v3 == 0x20000000 )
        {
LABEL_45:
          *v6 = 9984;
          v6[2] = sub_4728CC(v9);
          if ( (v3 & 0x40000000) != 0 )
          {
            sub_45EC34(*(double *)(v5 - 120));
          }
          else
          {
            sub_45EC78(v13);
            v25 = a1 | 0x7C3807E1;
          }
        }
        else
        {
          if ( v3 > 0x20000000 )
            continue;
          if ( v3 == 0x10000000 )
          {
            *v6 = 6400;
            v6[3] = sub_437FC0(*(unsigned int **)(v5 - 48), *(const char **)(v5 + 8), v9);
LABEL_55:
            v6[2] = sub_41EA34();
            continue;
          }
          if ( v3 > 0x10000000 )
            continue;
          if ( v3 == 0x8000000 )
            goto LABEL_40;
          if ( v3 > 0x8000000 )
            continue;
          if ( v3 == 0x4000000 )
          {
LABEL_40:
            *v6 = 9984;
            v21 = *(const char **)(v5 + 8);
            v10 = sub_438158(*(_DWORD *)(v5 - 56), v21);
            if ( v10 != 0 )
            {
              *v6 = 6144;
              v12 = *(_DWORD *)(v10 + 20);
            }
            else
            {
              v12 = sub_437FC0(*(unsigned int **)(v5 - 60), v21, v11);
            }
            v6[2] = v12;
            if ( (v3 & 0x8000000) != 0 )
            {
              *v6 |= 0xA0000u;
              v6[3] = sub_449DBC();
            }
          }
          else
          {
            if ( v3 > 0x4000000 )
              continue;
            if ( v3 == 0x200000 )
            {
              v25 = a1 | 0x7C3807E1;
              v23 = v6;
              continue;
            }
            if ( v3 > 0x200000 )
              continue;
            if ( v3 == 0x100000 )
            {
              sub_446730(0xE141u);
              sub_45B408();
              if ( (*(_BYTE *)(v5 + 4) & 1) == 0 )
                continue;
              goto LABEL_55;
            }
            if ( v3 > 0x100000 )
              continue;
            if ( v3 == 0x80000 )
              goto LABEL_55;
            if ( v3 <= 0x80000 )
            {
              if ( v3 == 1 )
              {
                v16 = sub_449DBC();
                v6 = (int *)v16;
                v18[3] = v16;
                if ( v16 == 0 )
LABEL_51:
                  sub_4645B8(v7);
                *(_DWORD *)(v16 + 16) = v18;
              }
              else if ( v3 == 4 )
              {
                v14 = sub_4728CC(v9);
                v15 = *(_DWORD *)(v5 + 8);
                *v6 = 8448;
                v6[2] = v14;
                v6[3] = v14 + 32;
                v22 = v15;
                sub_4716D4(1, v15);
                sub_4716D4(3, v22);
              }
            }
          }
        }
      }
      else
      {
        v25 = 2084045861;
      }
    }
  }
  return v29;
}

