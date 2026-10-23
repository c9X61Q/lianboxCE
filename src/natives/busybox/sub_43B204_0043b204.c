// busybox.exe @ 0x43b204 size=917

void __usercall sub_43B204(_BYTE *a1@<eax>)
{
  void *v1; // ebx
  signed int v2; // edi
  int k; // esi
  signed int v4; // eax
  signed int v5; // eax
  unsigned int v6; // ebp
  int m; // edi
  int v8; // esi
  int n; // edx
  int v10; // ecx
  char *Str; // eax
  size_t v12; // eax
  char *v13; // esi
  void *v14; // edx
  int v15; // ecx
  char *v16; // edi
  unsigned __int8 *i; // ebp
  unsigned int v18; // edi
  int v19; // eax
  int v20; // ebp
  const char *v21; // ecx
  bool v22; // zf
  int v23; // eax
  char *v24; // edi
  char *v25; // eax
  char v26; // dl
  char v27; // bp
  char v28; // cl
  const char *v29; // ebp
  size_t v30; // ecx
  size_t v31; // eax
  size_t v32; // [esp+10h] [ebp-28h]
  int v33; // [esp+10h] [ebp-28h]
  int v34; // [esp+14h] [ebp-24h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+14h] [ebp-24h]
  unsigned int j; // [esp+14h] [ebp-24h]
  int v39; // [esp+18h] [ebp-20h]
  int v40; // [esp+20h] [ebp-18h]
  int v41; // [esp+24h] [ebp-14h]

  v1 = dword_48600C;
  if ( (**(_BYTE **)dword_48600C & 2) == 0 )
    return;
  if ( *a1 == 0 )
  {
    *a1 = 1;
    v13 = (char *)sub_470E78();
    sub_45C5AC(*((_DWORD *)v1 + 5) + 1, *((_DWORD *)v1 + 8));
    v35 = sub_419988((int)v13);
    sub_431E38(v15, v14);
    if ( *((_DWORD *)v1 + 13) == 0 )
      v32 = sub_41E224(v13, v35);
    v16 = &v13[strlen(v13)];
    for ( i = (unsigned __int8 *)&v16[-v32]; i < (unsigned __int8 *)v16; ++i )
      v32 -= (strchr(" `\"#$%^&*()=+{}[]:;'|\\<>", *i) == nullptr) - 1;
    if ( *((_DWORD *)v1 + 13) != 0 )
    {
      sub_452CC0();
      v36 = 0;
      v18 = 0;
      while ( 1 )
      {
        v19 = *((_DWORD *)v1 + 13);
        v20 = 4 * v18;
        v21 = *(const char **)(v19 + 4 * v18);
        if ( *((_DWORD *)v1 + 14) - 1 <= v18 )
          break;
        ++v18;
        v22 = stricmp(v21, *(const char **)(v19 + v20 + 4)) == 0;
        v23 = *((_DWORD *)v1 + 13);
        if ( v22 )
          free(*(void **)(v23 + v20));
        else
          *(_DWORD *)(v23 + 4 * v36++) = *(_DWORD *)(v23 + v20);
      }
      *(_DWORD *)(v19 + 4 * v36) = v21;
      *((_DWORD *)v1 + 14) = v36 + 1;
    }
    if ( *((_DWORD *)v1 + 14) == 1 )
    {
      *a1 = 0;
      v24 = (char *)sub_452F5C();
      v31 = strlen(v24);
      v30 = v31;
      if ( v24[v31 - 1] != 47 )
      {
        v24[v31] = 32;
        v24[v31 + 1] = 0;
        v30 = v31 + 1;
      }
    }
    else
    {
      sub_418A3C();
      v24 = *((char **)v1 + 13);
      if ( v24 == nullptr )
        goto LABEL_50;
      v25 = (char *)sub_47188C();
      v24 = v25;
      while ( 1 )
      {
        v26 = *v25;
        if ( *v25 == 0 )
          break;
        v27 = v26 + 32;
        if ( (unsigned __int8)(v26 - 65) > 0x19u )
          v27 = *v25;
        for ( j = 1; *((_DWORD *)v1 + 14) > j; ++j )
        {
          v28 = *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v1 + 13) + 4 * j) + v25 - v24);
          if ( (unsigned __int8)(v28 - 65) <= 0x19u )
            v28 += 32;
          if ( v27 != v28 )
            goto LABEL_44;
        }
        ++v25;
      }
LABEL_44:
      if ( v25 == v24 )
        goto LABEL_50;
      *v25 = 0;
      v29 = (const char *)sub_452F5C();
      free(v24);
      v30 = strlen(v29);
      v24 = (char *)v29;
    }
    if ( (signed int)(*((_DWORD *)v1 + 6) + v30 - v32) < *((_DWORD *)v1 + 7) )
    {
      strcpy(v13, (const char *)(*((_DWORD *)v1 + 8) + *((_DWORD *)v1 + 5)));
      sub_46291C(*((_DWORD *)v1 + 8) + *((_DWORD *)v1 + 5) - v32, "%s%s", v24, v13);
      *((_DWORD *)v1 + 6) = strlen(*((const char **)v1 + 8));
      sub_429010(*((_DWORD *)v1 + 3));
    }
LABEL_50:
    free(v24);
    free(v13);
    return;
  }
  if ( *((_DWORD *)dword_48600C + 14) != 0 )
  {
    sub_4368BC();
    v33 = *((_DWORD *)v1 + 14);
    v2 = 0;
    for ( k = 0; v33 > k; ++k )
    {
      v4 = strlen(*(const char **)(*((_DWORD *)v1 + 13) + 4 * k));
      if ( v2 < v4 )
        v2 = v4;
    }
    v39 = v2 + 2;
    v5 = *((_DWORD *)v1 + 1) / (unsigned int)(v2 + 2);
    v34 = *((_DWORD *)v1 + 14);
    v6 = 1;
    if ( (unsigned int)v5 > 1 )
    {
      v6 = *((_DWORD *)v1 + 1) / (unsigned int)(v2 + 2);
      v34 = v33 / v5 - ((v33 % v5 == 0) - 1);
    }
    for ( m = 0; v34 > m; ++m )
    {
      v8 = m;
      for ( n = 1; ; n = v40 + 1 )
      {
        v10 = 4 * v8;
        Str = *(char **)(*((_DWORD *)v1 + 13) + 4 * v8);
        if ( n == v6 )
          break;
        v8 += v34;
        if ( v33 <= v8 )
          break;
        v41 = v10;
        v40 = n;
        v12 = strlen(Str);
        sub_46F088("%s%-*s", *(const char **)(*((_DWORD *)v1 + 13) + v41), v39 - v12, byte_47C11A);
      }
      sub_46F108(Str);
    }
    sub_429010(0);
  }
}

