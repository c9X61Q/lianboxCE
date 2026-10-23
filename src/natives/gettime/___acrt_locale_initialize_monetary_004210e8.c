// gettime.exe @ 0x4210e8 size=865

int __cdecl __acrt_locale_initialize_monetary(int a1)
{
  int v1; // esi
  char **v2; // ebx
  void **v3; // edi
  wchar_t *v5; // edi
  int LocaleInfoA; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  char *v26; // edx
  char v27; // al
  char *v28; // esi
  char v29; // cl
  volatile signed __int32 *v30; // eax
  volatile signed __int32 *v31; // ecx
  struct __crt_locale_pointers v32; // [esp+Ch] [ebp-10h] BYREF
  void *Block; // [esp+14h] [ebp-8h]
  void *v34; // [esp+18h] [ebp-4h]

  v1 = a1;
  v32.locinfo = (struct __crt_locale_data *)a1;
  v34 = nullptr;
  v32.mbcinfo = nullptr;
  if ( *(_DWORD *)(a1 + 172) != 0 || *(_DWORD *)(a1 + 176) != 0 )
  {
    v2 = (char **)_calloc_base(1u, 0x50u);
    _free_base(nullptr);
    if ( v2 == nullptr )
      return 1;
    Block = _calloc_base(1u, 4u);
    _free_base(nullptr);
    if ( Block == nullptr )
    {
      _free_base(v2);
      return 1;
    }
    if ( *(_DWORD *)(a1 + 172) == 0 )
    {
      qmemcpy(v2, &off_437070, 80);
LABEL_24:
      v1 = a1;
      v3 = (void **)(a1 + 136);
      *v2 = **(char ***)(a1 + 136);
      v2[1] = *(char **)(*(_DWORD *)(a1 + 136) + 4);
      v2[2] = *(char **)(*(_DWORD *)(a1 + 136) + 8);
      v2[12] = *(char **)(*(_DWORD *)(a1 + 136) + 48);
      v2[13] = *(char **)(*(_DWORD *)(a1 + 136) + 52);
      *(_DWORD *)Block = 1;
      if ( v34 != nullptr )
        *(_DWORD *)v34 = 1;
      goto LABEL_26;
    }
    v34 = _calloc_base(1u, 4u);
    _free_base(nullptr);
    if ( v34 == nullptr )
    {
      _free_base(v2);
      _free_base(Block);
      return 1;
    }
    v5 = *(wchar_t **)(a1 + 172);
    LocaleInfoA = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x15u, v2 + 3);
    v7 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x14u, v2 + 4) | LocaleInfoA;
    v8 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x16u, v2 + 5) | v7;
    v9 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x17u, v2 + 6) | v8;
    v10 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x18u, v2 + 7) | v9;
    v11 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x50u, v2 + 8) | v10;
    v12 = __acrt_GetLocaleInfoA(&v32, 1, v5, 0x51u, v2 + 9) | v11;
    v13 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x1Au, v2 + 10) | v12;
    v14 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x19u, (char **)((char *)v2 + 41)) | v13;
    v15 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x54u, (char **)((char *)v2 + 42)) | v14;
    v16 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x55u, (char **)((char *)v2 + 43)) | v15;
    v17 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x56u, v2 + 11) | v16;
    v18 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x57u, (char **)((char *)v2 + 45)) | v17;
    v19 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x52u, (char **)((char *)v2 + 46)) | v18;
    v20 = __acrt_GetLocaleInfoA(&v32, 0, v5, 0x53u, (char **)((char *)v2 + 47)) | v19;
    v21 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x15u, v2 + 14) | v20;
    v22 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x14u, v2 + 15) | v21;
    v23 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x16u, v2 + 16) | v22;
    v24 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x17u, v2 + 17) | v23;
    v25 = __acrt_GetLocaleInfoA(&v32, 2, v5, 0x50u, v2 + 18) | v24;
    if ( (v25 | __acrt_GetLocaleInfoA(&v32, 2, v5, 0x51u, v2 + 19)) != 0 )
    {
      __acrt_locale_free_monetary((void **)v2);
      _free_base(v2);
      _free_base(Block);
      _free_base(v34);
      return 1;
    }
    v26 = v2[7];
    while ( 1 )
    {
      v27 = *v26;
      if ( *v26 == 0 )
        goto LABEL_24;
      if ( (unsigned __int8)(v27 - 48) <= 9u )
        break;
      if ( v27 == 59 )
      {
        v28 = v26;
        do
        {
          v29 = v28[1];
          *v28++ = v29;
        }
        while ( v29 != 0 );
      }
      else
      {
LABEL_16:
        ++v26;
      }
    }
    *v26 = v27 - 48;
    goto LABEL_16;
  }
  v34 = nullptr;
  v2 = (char **)&off_437070;
  Block = nullptr;
  v3 = (void **)(a1 + 136);
LABEL_26:
  v30 = *(volatile signed __int32 **)(v1 + 132);
  if ( v30 != nullptr )
    _InterlockedDecrement(v30);
  v31 = *(volatile signed __int32 **)(v1 + 124);
  if ( v31 != nullptr && _InterlockedExchangeAdd(v31, 0xFFFFFFFF) == 0 )
  {
    _free_base(*v3);
    _free_base(*(void **)(v1 + 124));
  }
  *(_DWORD *)(v1 + 132) = v34;
  *(_DWORD *)(v1 + 124) = Block;
  *v3 = v2;
  return 0;
}

