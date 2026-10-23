// gettime.exe @ 0x4216f4 size=636

bool __cdecl initialize_lc_time(struct __crt_lc_time_data *const a1, struct __crt_locale_data *const a2)
{
  wchar_t *v2; // esi
  wchar_t *v3; // eax
  struct __crt_lc_time_data *v4; // ecx
  int v5; // ebx
  LCTYPE v6; // eax
  unsigned int v7; // edi
  int v8; // ebx
  LCTYPE v9; // esi
  int v10; // ebx
  int v11; // ebx
  char **v12; // eax
  wchar_t *v13; // edi
  bool v14; // zf
  LCTYPE v15; // esi
  char **v16; // eax
  LCTYPE v17; // esi
  int v18; // ebx
  int v19; // ebx
  int LocaleInfoA; // eax
  LCTYPE v21; // esi
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  struct __crt_locale_pointers v33; // [esp+Ch] [ebp-14h] BYREF
  int v34; // [esp+14h] [ebp-Ch]
  LCTYPE v35; // [esp+18h] [ebp-8h]
  LCTYPE LCType; // [esp+1Ch] [ebp-4h]

  v33.mbcinfo = nullptr;
  v35 = *((_DWORD *)a2 + 45);
  v2 = (wchar_t *)v35;
  v33.locinfo = a2;
  v3 = __acrt_copy_locale_name((wchar_t *)v35);
  v4 = a1;
  v5 = 0;
  *((_DWORD *)a1 + 88) = v3;
  v6 = 49;
  LCType = 49;
  v34 = 7;
  while ( 1 )
  {
    v7 = (v6 - 48) % 7;
    v8 = __acrt_GetLocaleInfoA(&v33, 1, v2, LCType, (char **)v4 + v7) | v5;
    v9 = LCType - 7;
    v10 = __acrt_GetLocaleInfoA(&v33, 1, (wchar_t *)v35, LCType - 7, (char **)a1 + v7 + 7) | v8;
    v11 = __acrt_GetLocaleInfoA(&v33, 2, (wchar_t *)v35, LCType, (char **)a1 + v7 + 45) | v10;
    v12 = (char **)((char *)a1 + 4 * v7);
    v13 = (wchar_t *)v35;
    v5 = __acrt_GetLocaleInfoA(&v33, 2, (wchar_t *)v35, v9, v12 + 52) | v11;
    v6 = LCType + 1;
    v14 = v34-- == 1;
    ++LCType;
    if ( v14 )
      break;
    v4 = a1;
    v2 = v13;
  }
  v15 = 56;
  v16 = (char **)((char *)a1 + 104);
  v35 = 56;
  LCType = (LCTYPE)a1 + 104;
  v34 = 12;
  do
  {
    v17 = v15 + 12;
    v18 = __acrt_GetLocaleInfoA(&v33, 1, v13, v17, v16 - 12) | v5;
    v19 = __acrt_GetLocaleInfoA(&v33, 1, v13, v35, (char **)LCType) | v18;
    LocaleInfoA = __acrt_GetLocaleInfoA(&v33, 2, v13, v17, (char **)(LCType + 132));
    v21 = v35;
    v5 = __acrt_GetLocaleInfoA(&v33, 2, v13, v35, (char **)(LCType + 180)) | LocaleInfoA | v19;
    v16 = (char **)(LCType + 4);
    v15 = v21 + 1;
    v14 = v34-- == 1;
    LCType += 4;
    v35 = v15;
  }
  while ( !v14 );
  v22 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x28u, (char **)a1 + 38) | v5;
  v23 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x29u, (char **)a1 + 39) | v22;
  v24 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x28u, (char **)a1 + 83) | v23;
  v25 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x29u, (char **)a1 + 84) | v24;
  v26 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x1Fu, (char **)a1 + 40) | v25;
  v27 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x20u, (char **)a1 + 41) | v26;
  v28 = __acrt_GetLocaleInfoA(&v33, 1, v13, 0x1003u, (char **)a1 + 42) | v27;
  v29 = __acrt_GetLocaleInfoA(&v33, 0, v13, 0x1009u, (char **)a1 + 43) | v28;
  v30 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x1Fu, (char **)a1 + 85) | v29;
  v31 = __acrt_GetLocaleInfoA(&v33, 2, v13, 0x20u, (char **)a1 + 86) | v30;
  return (v31 | __acrt_GetLocaleInfoA(&v33, 2, v13, 0x1003u, (char **)a1 + 87)) == 0;
}

