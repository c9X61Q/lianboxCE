// gettime.exe @ 0x4214b2 size=541

int __cdecl __acrt_locale_initialize_numeric(int a1)
{
  int v1; // edi
  void *v2; // esi
  char **v3; // ebx
  _DWORD *v5; // ecx
  wchar_t *v6; // edi
  int LocaleInfoA; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  char *v11; // edx
  char v12; // al
  char *v13; // esi
  char v14; // cl
  volatile signed __int32 *v15; // eax
  volatile signed __int32 *v16; // ecx
  _DWORD *v17; // eax
  struct __crt_locale_pointers v18; // [esp+Ch] [ebp-18h] BYREF
  int v19; // [esp+14h] [ebp-10h]
  void *Block; // [esp+18h] [ebp-Ch]
  void **v21; // [esp+1Ch] [ebp-8h]
  void *v22; // [esp+20h] [ebp-4h]

  v1 = a1;
  v2 = nullptr;
  v18.locinfo = (struct __crt_locale_data *)a1;
  v18.mbcinfo = nullptr;
  if ( *(_DWORD *)(a1 + 176) == 0 && *(_DWORD *)(a1 + 172) == 0 )
  {
    v22 = nullptr;
    v3 = (char **)&off_437070;
    goto LABEL_25;
  }
  v19 = 1;
  v3 = (char **)_calloc_base(1u, 0x50u);
  if ( v3 == nullptr )
    return 1;
  qmemcpy(v3, *(const void **)(a1 + 136), 0x50u);
  v21 = (void **)(a1 + 136);
  v2 = nullptr;
  v22 = _malloc_base(4u);
  _free_base(nullptr);
  v5 = v22;
  if ( v22 == nullptr )
  {
    _free_base(v3);
    return 1;
  }
  v1 = a1;
  *(_DWORD *)v22 = 0;
  if ( *(_DWORD *)(a1 + 176) != 0 )
  {
    Block = _malloc_base(4u);
    _free_base(nullptr);
    if ( Block == nullptr )
    {
      _free_base(v3);
LABEL_13:
      _free_base(v22);
      return v19;
    }
    *(_DWORD *)Block = 0;
    v6 = *(wchar_t **)(a1 + 176);
    LocaleInfoA = __acrt_GetLocaleInfoA(&v18, 1, v6, 0xEu, v3);
    v8 = __acrt_GetLocaleInfoA(&v18, 1, v6, 0xFu, v3 + 1) | LocaleInfoA;
    v9 = __acrt_GetLocaleInfoA(&v18, 1, v6, 0x10u, v3 + 2) | v8;
    v10 = __acrt_GetLocaleInfoA(&v18, 2, v6, 0xEu, v3 + 12) | v9;
    if ( (v10 | __acrt_GetLocaleInfoA(&v18, 2, v6, 0xFu, v3 + 13)) != 0 )
    {
      __acrt_locale_free_numeric((void **)v3);
      _free_base(v3);
      _free_base(Block);
      v19 = -1;
      goto LABEL_13;
    }
    v11 = v3[2];
    while ( 1 )
    {
      v12 = *v11;
      if ( *v11 == 0 )
      {
        v1 = a1;
        *(_DWORD *)v22 = 1;
        v2 = Block;
        *(_DWORD *)Block = 1;
        goto LABEL_26;
      }
      if ( (unsigned __int8)(v12 - 48) <= 9u )
        break;
      if ( v12 == 59 )
      {
        v13 = v11;
        do
        {
          v14 = v13[1];
          *v13++ = v14;
        }
        while ( v14 != 0 );
      }
      else
      {
LABEL_17:
        ++v11;
      }
    }
    *v11 = v12 - 48;
    goto LABEL_17;
  }
  *v3 = (char *)off_437070;
  v3[1] = (char *)off_437074;
  v3[2] = (char *)off_437078;
  v3[12] = (char *)off_4370A0;
  v3[13] = (char *)off_4370A4;
  *v5 = 1;
LABEL_25:
  v21 = (void **)(v1 + 136);
LABEL_26:
  v15 = *(volatile signed __int32 **)(v1 + 128);
  if ( v15 != nullptr )
    _InterlockedDecrement(v15);
  v16 = *(volatile signed __int32 **)(v1 + 124);
  if ( v16 != nullptr && _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 0 )
  {
    _free_base(*(void **)(v1 + 124));
    _free_base(*v21);
  }
  *(_DWORD *)(v1 + 124) = v22;
  v17 = v21;
  *(_DWORD *)(v1 + 128) = v2;
  *v17 = v3;
  return 0;
}

