// busybox.exe @ 0x4493dc size=1043

int __usercall sub_4493DC@<eax>(char *a1@<eax>, void *a2@<edx>)
{
  int v2; // esi
  void *v3; // edx
  void *v4; // edx
  const char *v5; // eax
  void *v6; // eax
  int result; // eax
  const char *v8; // eax
  char *p_Str; // edi
  unsigned int v10; // ecx
  int v11; // eax
  char *i; // eax
  bool v13; // bl
  char *v14; // eax
  int v15; // ecx
  char v16; // dl
  const char *v17; // ebp
  unsigned __int8 v18; // bl
  _DWORD *v19; // edi
  int v20; // ecx
  unsigned int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // edx
  int v24; // eax
  int v25; // ebx
  int v26; // ebx
  int v27; // edi
  int v28; // ecx
  int v29; // edi
  _BYTE *v30; // eax
  _BYTE *v31; // ebx
  int *j; // ebx
  int *v33; // ebp
  int v34; // [esp+14h] [ebp-CCh]
  char *v35; // [esp+18h] [ebp-C8h]
  FILE *Stream; // [esp+20h] [ebp-C0h]
  size_t v38; // [esp+24h] [ebp-BCh]
  char *v39; // [esp+2Ch] [ebp-B4h] BYREF
  char Str; // [esp+30h] [ebp-B0h] BYREF
  char String[175]; // [esp+31h] [ebp-AFh] BYREF

  v34 = (int)a2;
  v2 = dword_486010;
  sub_431D70((_DWORD **)(dword_486010 + 48), a2);
  *(_BYTE *)(v2 + 4) = 0;
  if ( v34 != 2 )
  {
    sub_431D70((_DWORD **)(v2 + 100), v3);
    sub_431D70((_DWORD **)(v2 + 96), v4);
  }
  v35 = *(char **)(v2 + 28);
  if ( v35 != nullptr && v34 != 2 )
    goto LABEL_11;
  v5 = (const char *)sub_4460B4(a1);
  if ( v5 == nullptr )
    v5 = (const char *)&unk_475480;
  v6 = (void *)sub_4708BC("%s%s/%s", v5, a1, "httpd.conf");
  v35 = (char *)sub_415D34(v6);
  for ( result = sub_4314C0(v35); ; result = sub_4314C0(v35) )
  {
    Stream = (FILE *)result;
    if ( result != 0 )
      break;
    if ( v34 > 1 )
      return result;
    if ( v34 == 0 )
    {
      v8 = *(const char **)(v2 + 28);
      if ( v8 != nullptr )
        sub_41823C(v8);
    }
    v35 = "httpd.conf";
    v34 = 3;
LABEL_11:
    ;
  }
  if ( v34 != 2 )
    a1 = (char *)&unk_475480;
LABEL_25:
  while ( 1 )
  {
    p_Str = &Str;
    if ( fgets(&Str, 160, Stream) == nullptr )
      return fclose(Stream);
    v11 = 9217;
    while ( 1 )
    {
      LOBYTE(v10) = *p_Str;
      if ( (unsigned __int8)*p_Str <= 0xDu )
      {
        if ( _bittest(&v11, v10) )
          break;
      }
      if ( (_BYTE)v10 == 35 )
        break;
      if ( (_BYTE)v10 == 32 || (_BYTE)v10 == 9 )
      {
        for ( i = p_Str; ; LOBYTE(v10) = *i )
        {
          v13 = true;
          if ( (unsigned __int8)v10 <= 0xDu )
            v13 = ((0x2401u >> v10) & 1) == 0;
          if ( (_BYTE)v10 == 35 || !v13 )
            break;
          if ( (_BYTE)v10 != 32 && (_BYTE)v10 != 9 )
            *p_Str++ = v10;
          ++i;
        }
        break;
      }
      ++p_Str;
    }
    *p_Str = 0;
    if ( p_Str != &Str )
    {
      v14 = strchr(&Str, 58);
      if ( v14 != nullptr && (v16 = v14[1]) != 0 )
      {
        v17 = v14 + 1;
        v18 = Str & 0xDF;
        if ( (Str & 0xDF) == 0x49 )
        {
          if ( *(char **)(v2 + 36) != "index.html" )
            free(*(void **)(v2 + 36));
          *(_DWORD *)(v2 + 36) = sub_47188C();
        }
        else
        {
          LOBYTE(v15) = v34 == 0;
          if ( v18 != 72 || v34 != 0 )
          {
            if ( v18 == 65 || v18 == 68 )
            {
              if ( v16 == 42 )
              {
                if ( v18 == 68 )
                  *(_BYTE *)(v2 + 4) = 1;
              }
              else
              {
                v19 = (_DWORD *)sub_4728CC(v15);
                v20 = sub_45C96C(47, v19 + 1);
                if ( v20 < 0 )
                  goto LABEL_60;
                if ( *v17 != 0 )
                {
                  v20 = sub_418398(10, v17, &v39);
                  if ( *v39 == 46 )
                  {
                    if ( sub_45C96C(0, v19 + 2) != 32 )
                      goto LABEL_60;
                    goto LABEL_61;
                  }
                  if ( *v39 != 0 )
                    goto LABEL_60;
                }
                if ( v20 > 32 )
                {
LABEL_60:
                  v19[2] = 0;
                  v19[3] = 68;
LABEL_62:
                  *v19 = *(_DWORD *)(v2 + 48);
                  goto LABEL_64;
                }
                v21 = 0;
                if ( v20 != 32 )
                  v21 = 0xFFFFFFFF >> v20;
                v19[2] = ~v21;
LABEL_61:
                v19[3] = v18;
                if ( v18 == 68 )
                  goto LABEL_62;
                v22 = *(_DWORD **)(v2 + 48);
                if ( v22 != nullptr )
                {
                  do
                  {
                    v23 = v22;
                    v22 = (_DWORD *)*v22;
                  }
                  while ( v22 != nullptr );
                  *v23 = v19;
                }
                else
                {
LABEL_64:
                  *(_DWORD *)(v2 + 48) = v19;
                }
              }
            }
            else if ( v18 != 69 || v34 != 0 )
            {
              if ( Str == 46 )
              {
                v26 = sub_4728CC(v15);
                strcpy((char *)(v26 + 8), &Str);
                v27 = v17 - &Str + v26 + 8;
                *(_BYTE *)(v27 - 1) = 0;
                *(_DWORD *)(v26 + 4) = v27;
                *(_DWORD *)v26 = *(_DWORD *)(v2 + 100);
                *(_DWORD *)(v2 + 100) = v26;
              }
              else
              {
                if ( Str != 47 )
                  goto LABEL_84;
                strlen(a1);
                v29 = sub_4728CC(v28);
                sub_462670(v29 + 8, "/%s%.*s", a1, v17 - &Str - 1, &Str);
                v30 = sub_418250((_BYTE *)(v29 + 8));
                v38 = (size_t)&v30[-v29 - 8];
                v31 = v30 + 1;
                strcpy(v30 + 1, v17);
                *(_DWORD *)(v29 + 4) = v31;
                for ( j = (int *)(v2 + 96); ; j = (int *)*j )
                {
                  v33 = (int *)*j;
                  if ( *j == 0 )
                    break;
                  if ( strlen((const char *)v33 + 8) <= v38 )
                  {
                    *(_DWORD *)v29 = v33;
                    break;
                  }
                }
                *j = v29;
              }
            }
            else
            {
              v24 = atoi(String);
              if ( v24 <= 99 )
                goto LABEL_84;
              v25 = 0;
              while ( (unsigned __int16)word_47FEE0[v25] != v24 )
              {
                if ( ++v25 == 12 )
                  goto LABEL_25;
              }
              *(_DWORD *)(v2 + 4 * v25 + 176) = sub_47188C();
            }
          }
          else
          {
            *(_DWORD *)(v2 + 32) = sub_47188C();
            sub_470B28();
          }
        }
      }
      else
      {
LABEL_84:
        sub_41783C("config error '%s' in '%s'", &Str, v35);
      }
    }
  }
}

