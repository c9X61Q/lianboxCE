// busybox.exe @ 0x448748 size=817

int __usercall sub_448748@<eax>(char *a1@<eax>)
{
  char *v1; // edi
  char *Str; // esi
  char *v3; // ebp
  char *v4; // edx
  char v5; // bl
  char *v6; // ebp
  char *v7; // eax
  int v8; // ecx
  char *v9; // ebp
  _BYTE *v10; // edx
  char *v11; // eax
  int v12; // edx
  char v13; // al
  char *v14; // eax
  int v15; // ebx
  size_t v16; // eax
  int v17; // ecx
  const char *v18; // ebx
  char *v19; // eax
  _DWORD *v20; // ebx
  char *v21; // eax
  char v23; // [esp+Fh] [ebp-31h]
  int v24; // [esp+10h] [ebp-30h]
  int v25; // [esp+14h] [ebp-2Ch]
  char *v26; // [esp+18h] [ebp-28h] BYREF
  _BYTE v27[2]; // [esp+1Eh] [ebp-22h] BYREF
  _BYTE Source[7]; // [esp+20h] [ebp-20h] BYREF
  char String[25]; // [esp+27h] [ebp-19h] BYREF

  v26 = a1;
  v1 = (char *)sub_4728CC();
  v27[1] = 0;
  v23 = 91;
  Str = nullptr;
  v24 = 0;
  while ( 1 )
  {
    v3 = v26;
    if ( *v26 == 0 )
      break;
    *(_DWORD *)Source = v27;
    v4 = ++v26;
    v5 = *v3;
    if ( *v3 != 92 )
      goto LABEL_54;
    v5 = v3[1];
    if ( v5 != 116 )
    {
      v5 = sub_418050(&v26);
      v4 = v3 + 1;
    }
    if ( v4 != v26 )
      goto LABEL_54;
    if ( v3[1] == 0 )
      break;
    v26 = v4 + 1;
    v5 = v3[1];
    if ( v5 == 120 )
    {
LABEL_42:
      v15 = 0;
      while ( 1 )
      {
        v25 = v15++;
        Source[v15 + 6] = *v26;
        String[v15] = 0;
        if ( strtoul(String, (char **)Source, 16) > 0xFF || *(_DWORD *)Source - (int)String < v15 )
          break;
        ++v26;
        if ( v15 == 3 )
          goto LABEL_47;
      }
      String[v25] = 0;
LABEL_47:
      v5 = strtoul(String, nullptr, 16);
      if ( v5 == 0 )
        v5 = 63;
      v7 = v27;
LABEL_50:
      *(_DWORD *)Source = v7;
LABEL_54:
      v6 = nullptr;
      goto LABEL_55;
    }
    if ( (unsigned __int8)v5 > 0x78u )
      goto LABEL_54;
    switch ( v5 )
    {
      case 'w':
LABEL_30:
        if ( Str == nullptr )
        {
          Str = (char *)sub_471624();
          if ( Str != nullptr )
          {
            v10 = *((_BYTE **)dword_48600C + 12);
            if ( *v10 != 0 )
            {
              v11 = (char *)sub_43C594((int)Str, (int)v10);
              v12 = (int)v11;
              if ( v11 != nullptr )
              {
                v13 = *v11;
                if ( v13 == 47 || v13 == 0 )
                {
                  *Str = 126;
                  sub_448258((int)(Str + 1), v12);
                }
              }
            }
          }
          else
          {
            Str = "(unknown)";
          }
        }
        *(_DWORD *)Source = Str;
        v6 = nullptr;
        if ( v5 != 119 )
        {
          v14 = strrchr(Str, 47);
          v6 = v14;
          if ( v14 != nullptr )
          {
            v9 = v14 + 1;
LABEL_41:
            *(_DWORD *)Source = v9;
            goto LABEL_54;
          }
        }
        goto LABEL_55;
      case 'u':
        v7 = *((char **)dword_48600C + 11);
        if ( v7 == nullptr )
          v7 = byte_47C11A;
        goto LABEL_50;
      case 'v':
        goto LABEL_54;
      case 't':
        goto LABEL_29;
      case 'h':
LABEL_25:
        v6 = (char *)sub_45C4B0();
        *(_DWORD *)Source = v6;
        if ( v5 == 104 )
          *(_BYTE *)sub_4635B0(v8, 46) = 0;
        goto LABEL_55;
      default:
        break;
    }
    if ( (unsigned __int8)v5 > 0x5Du )
      goto LABEL_54;
    if ( (unsigned __int8)v5 > 0x53u )
    {
      switch ( v5 )
      {
        case 'T':
          goto LABEL_29;
        case 'W':
          goto LABEL_30;
        case 'X':
          goto LABEL_42;
        case '[':
        case ']':
          if ( v23 != v5 )
            goto LABEL_54;
          v23 ^= 6u;
          break;
        default:
          goto LABEL_54;
      }
    }
    else
    {
      if ( v5 == 72 )
        goto LABEL_25;
      v6 = nullptr;
      if ( (unsigned __int8)v5 <= 0x48u )
      {
        if ( v5 != 36 )
        {
          if ( (unsigned __int8)(v5 - 64) > 1u )
            goto LABEL_55;
LABEL_29:
          v9 = String;
          *(_BYTE *)(sub_463600(nullptr, 9u) - 3) = 0;
          goto LABEL_41;
        }
        if ( sub_4365A0() == 0 )
          v5 = 35;
      }
LABEL_55:
      v27[0] = v5;
      v16 = strlen(*(const char **)Source);
      if ( v5 == 10 )
      {
        *((_DWORD *)dword_48600C + 4) = 0;
      }
      else if ( v23 != 93 )
      {
        *((_DWORD *)dword_48600C + 4) += v16;
      }
      v24 += v16;
      v18 = *(const char **)Source;
      v19 = (char *)sub_471600(v17, v24 + 1);
      v1 = strcat(v19, v18);
      free(v6);
    }
  }
  if ( Str != "(unknown)" )
    free(Str);
  v20 = dword_48600C;
  *((_DWORD *)dword_48600C + 10) = v1;
  v20[9] = v1;
  v21 = strrchr(v1, 10);
  v26 = v21;
  if ( v21 != nullptr )
    v20[10] = v21 + 1;
  return sub_452A28();
}

