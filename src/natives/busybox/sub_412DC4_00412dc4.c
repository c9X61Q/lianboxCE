// busybox.exe @ 0x412dc4 size=1264

void __usercall sub_412DC4(const char *a1@<eax>)
{
  unsigned int v1; // ebx
  size_t v2; // eax
  size_t v3; // esi
  char *v4; // ebx
  int v5; // esi
  char *v6; // eax
  int v7; // edx
  int v8; // ecx
  unsigned __int8 *v9; // edi
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ebp
  size_t v13; // edi
  char v14; // dl
  unsigned __int8 v15; // al
  char v16; // al
  size_t v17; // edi
  int v18; // eax
  int v19; // ebp
  int v20; // edi
  int i; // eax
  char v22; // cl
  int v23; // edx
  int v24; // [esp+Ch] [ebp-1Ch]
  char *Str; // [esp+10h] [ebp-18h] BYREF
  char *EndPtr[5]; // [esp+14h] [ebp-14h] BYREF

  v1 = (unsigned int)a1;
  if ( dword_485C6C != nullptr )
  {
    v1 = sub_4708BC("%s\n%s", (const char *)dword_485C6C, a1);
    free(dword_485C6C);
    dword_485C6C = (void *)v1;
  }
  v2 = strlen((const char *)v1);
  v3 = v2;
  while ( v2 != 0 && *(_BYTE *)(v1 + v2 - 1) == 92 )
    --v2;
  if ( (((_BYTE)v3 - (_BYTE)v2) & 1) == 0 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)v1 == 0 || *(v4 = (char *)(strspn((const char *)v1, "; \n\r\t\v") + v1)) == 0 )
        {
LABEL_17:
          free(dword_485C6C);
          dword_485C6C = nullptr;
          return;
        }
        if ( *v4 != 35 )
          break;
        if ( v4[1] == 110 )
          ++MultiByteStr;
        v1 = (unsigned int)strpbrk(v4, "\n\r");
        if ( v1 == 0 )
          goto LABEL_17;
      }
      v5 = sub_4728CC();
      v6 = &v4[sub_433128(v5 + 4, v5 + 16)];
      *(_DWORD *)(v5 + 20) = *(_DWORD *)(v5 + 16);
      if ( *v6 == 44 )
      {
        if ( v6[1] == 43 && (unsigned __int8)(v6[2] - 48) <= 9u )
        {
          v7 = strtol(v6 + 2, EndPtr, 10);
          *(_DWORD *)(v5 + 24) = -2 - v7;
        }
        else
        {
          v7 = sub_433128(v5 + 8, v5 + 24) - 1;
        }
        if ( v7 < 0 )
          goto LABEL_28;
        *(_DWORD *)(v5 + 28) = *(_DWORD *)(v5 + 24);
      }
      v9 = (unsigned __int8 *)sub_460FB8();
      if ( *v9 == 33 )
      {
        *(_BYTE *)(v5 + 44) |= 1u;
        v9 = (unsigned __int8 *)sub_460FB8();
      }
      v10 = *v9;
      if ( (_BYTE)v10 == 0 )
LABEL_28:
        sub_418210();
      v1 = (unsigned int)(v9 + 1);
      *(_BYTE *)(v5 + 49) = v10;
      v11 = sub_4635B0(v8, v10) - (_DWORD)"saicrw:btTydDgGhHlnNpPqx={}";
      if ( v11 == 0 )
        break;
      if ( v11 <= 3 )
      {
        if ( v11 == 3 || *(_DWORD *)(v5 + 24) == 0 && *(_DWORD *)(v5 + 8) == 0 )
        {
          while ( 1 )
          {
            v16 = *(_BYTE *)v1;
            if ( *(_BYTE *)v1 == 92 || v16 == 10 )
              break;
            v15 = v16 - 9;
            if ( v15 > 4u && v15 != 23 )
              goto LABEL_74;
            ++v1;
          }
          ++v1;
LABEL_74:
          v17 = strlen((const char *)v1);
          v18 = sub_41F49C();
          *(_DWORD *)(v5 + 36) = v18;
          v1 += v17;
          sub_449D44(-1, v18, 0, 0);
          goto LABEL_94;
        }
LABEL_79:
        sub_41784C("command '%c' uses only one address", *(_BYTE *)(v5 + 49));
      }
      if ( v11 <= 5 )
      {
        if ( v11 != 4 || *(_DWORD *)(v5 + 24) == 0 && *(_DWORD *)(v5 + 8) == 0 )
        {
          v1 += sub_44AC0C();
          if ( *(_BYTE *)(v5 + 49) == 119 )
          {
            *(_DWORD *)(v5 + 32) = sub_470D04();
            *(_BYTE *)(v5 + 48) = 10;
          }
          goto LABEL_94;
        }
        goto LABEL_79;
      }
      if ( v11 > 9 )
      {
        if ( v11 == 10 )
        {
          v19 = v9[1];
          v20 = sub_44B610(EndPtr, &Str);
          sub_449D44(-1, Str, v19, v19);
          sub_449D44(-1, EndPtr[0], v19, v19);
          strlen(Str);
          *(_DWORD *)(v5 + 36) = sub_4728CC();
          for ( i = 0; ; ++i )
          {
            v22 = Str[i];
            if ( v22 == 0 || EndPtr[0][i] == 0 )
              break;
            v23 = 2 * i;
            *(_BYTE *)(*(_DWORD *)(v5 + 36) + v23) = v22;
            *(_BYTE *)(*(_DWORD *)(v5 + 36) + v23 + 1) = EndPtr[0][i];
          }
          v1 += v20 + 1;
          free(Str);
          free(EndPtr[0]);
        }
        else if ( v11 > 0x1A )
        {
          sub_41784C("unsupported command %c", *(_BYTE *)(v5 + 49));
        }
      }
      else
      {
        v1 = sub_460FB8();
        v13 = strcspn((const char *)v1, "; \n\r\t\v");
        if ( v13 != 0 )
        {
          *(_DWORD *)(v5 + 36) = sub_4718A8();
          goto LABEL_85;
        }
      }
LABEL_94:
      *(_DWORD *)dword_485C64 = v5;
      dword_485C64 = v5;
    }
    v12 = *(&MultiByteStr + 1);
    v24 = sub_44B610(v5 + 36, &Str);
    *(_DWORD *)(v5 + 40) = 1;
    while ( 1 )
    {
      v13 = v24 + 1;
      v14 = *(_BYTE *)(v1 + v24 + 1);
      if ( v14 == 0 )
        goto LABEL_60;
      if ( (unsigned __int8)(v14 - 48) > 9u )
      {
        if ( (unsigned __int8)(v14 - 9) > 4u && v14 != 32 )
        {
          if ( v14 == 125 )
            goto LABEL_60;
          if ( (unsigned __int8)v14 > 0x7Du )
            goto LABEL_28;
          if ( v14 == 119 )
          {
            v13 += sub_44AC0C();
            *(_DWORD *)(v5 + 32) = sub_470D04();
            *(_BYTE *)(v5 + 48) = 10;
            free(EndPtr[0]);
            goto LABEL_59;
          }
          if ( (unsigned __int8)v14 > 0x77u )
            goto LABEL_28;
          if ( v14 == 112 )
          {
            *(_BYTE *)(v5 + 44) |= 4u;
            goto LABEL_59;
          }
          if ( (unsigned __int8)v14 > 0x70u )
            goto LABEL_28;
          if ( v14 == 105 )
            goto LABEL_56;
          if ( (unsigned __int8)v14 > 0x69u )
            goto LABEL_28;
          if ( v14 != 103 )
          {
            if ( (unsigned __int8)v14 > 0x67u )
              goto LABEL_28;
            if ( v14 != 73 )
            {
              if ( (unsigned __int8)v14 <= 0x49u )
              {
                if ( v14 == 35 )
                {
                  v13 += strlen((const char *)(v1 + v24 + 1));
                }
                else if ( v14 != 59 )
                {
                  goto LABEL_28;
                }
LABEL_60:
                if ( *Str != 0 )
                {
                  *(_DWORD *)(v5 + 12) = sub_4728CC();
                  sub_4716D4(v12, Str);
                }
                free(Str);
LABEL_85:
                v1 += v13;
                goto LABEL_94;
              }
              goto LABEL_28;
            }
LABEL_56:
            v12 |= 2u;
            goto LABEL_59;
          }
          if ( *Str != 94 )
            *(_DWORD *)(v5 + 40) = 0;
        }
      }
      else if ( *Str != 94 )
      {
        EndPtr[0] = (char *)(v1 + v24 + 1);
        *(_DWORD *)(v5 + 40) = strtol(EndPtr[0], EndPtr, 10);
        v13 = (size_t)&EndPtr[0][~v1];
      }
LABEL_59:
      v24 = v13;
    }
  }
  if ( dword_485C6C == nullptr )
    dword_485C6C = (void *)sub_47188C();
  *((char *)dword_485C6C + v3 - 1) = 0;
}

