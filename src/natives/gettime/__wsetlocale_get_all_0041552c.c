// gettime.exe @ 0x41552c size=410

char *__cdecl _wsetlocale_get_all(int a1)
{
  char *v1; // ebx
  char *result; // eax
  wchar_t *v3; // edi
  const unsigned __int16 *v4; // eax
  int v5; // eax
  volatile signed __int32 *v6; // ecx
  volatile signed __int32 *v7; // eax
  volatile signed __int32 *v8; // ecx
  volatile signed __int32 *v9; // eax
  const unsigned __int16 **v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  wchar_t **v12; // [esp+14h] [ebp-4h]

  v11 = 1;
  v1 = (char *)_malloc_base(0x6A6u);
  result = nullptr;
  if ( v1 != nullptr )
  {
    *(_DWORD *)v1 = 1;
    v3 = (wchar_t *)(v1 + 4);
    *((_WORD *)v1 + 2) = 0;
    v10 = (const unsigned __int16 **)(a1 + 48);
    _wcscats((wchar_t *)v1 + 2, 0x351u, 3);
    v12 = &off_42C664;
    do
    {
      if ( wcscat_s(v3, 0x351u, L";") != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v4 = *v10;
      v10 += 4;
      v5 = wcscmp(v4, *v10);
      if ( v5 != 0 )
        v5 = v5 < 0 ? -1 : 1;
      v11 = v5 == 0 ? v11 : 0;
      v12 += 3;
      _wcscats(v3, 0x351u, 3);
    }
    while ( (int)v12 < (int)&off_42C694 );
    if ( v11 != 0 )
    {
      _free_base(v1);
      v8 = *(volatile signed __int32 **)(a1 + 40);
      if ( v8 != nullptr && _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 0 )
        _free_base(*(void **)(a1 + 40));
      v9 = *(volatile signed __int32 **)(a1 + 36);
      if ( v9 != nullptr && _InterlockedDecrement(v9) == 0 )
        _free_base(*(void **)(a1 + 36));
      *(_DWORD *)(a1 + 36) = 0;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      return *(char **)(a1 + 64);
    }
    else
    {
      v6 = *(volatile signed __int32 **)(a1 + 40);
      if ( v6 != nullptr && _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 0 )
        _free_base(*(void **)(a1 + 40));
      v7 = *(volatile signed __int32 **)(a1 + 36);
      if ( v7 != nullptr && _InterlockedDecrement(v7) == 0 )
        _free_base(*(void **)(a1 + 36));
      *(_DWORD *)(a1 + 36) = 0;
      result = v1 + 4;
      *(_DWORD *)(a1 + 28) = 0;
      *(_DWORD *)(a1 + 40) = v1;
      *(_DWORD *)(a1 + 32) = v1 + 4;
    }
  }
  return result;
}

