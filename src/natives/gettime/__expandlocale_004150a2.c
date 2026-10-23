// gettime.exe @ 0x4150a2 size=965

wchar_t *__cdecl _expandlocale(
        wchar_t *Source,
        wchar_t *Destination,
        rsize_t SizeInWords,
        wchar_t *a4,
        rsize_t a5,
        _DWORD *a6)
{
  wchar_t *v6; // ebx
  wchar_t *result; // eax
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  BOOL v13; // ebx
  _DWORD *v14; // ebx
  int qualified_locale; // eax
  wchar_t *v16; // ecx
  __int16 v17; // ax
  rsize_t v18; // edi
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  unsigned __int16 default_code_page; // ax
  wchar_t *v23; // ecx
  __int16 v24; // ax
  wchar_t *v25; // [esp-Ch] [ebp-214h]
  _BYTE v26[16]; // [esp+Ch] [ebp-1FCh] BYREF
  wchar_t *v27; // [esp+1Ch] [ebp-1ECh]
  unsigned int v28; // [esp+20h] [ebp-1E8h]
  _DWORD *v29; // [esp+24h] [ebp-1E4h]
  int v30; // [esp+28h] [ebp-1E0h]
  wchar_t *v31; // [esp+2Ch] [ebp-1DCh]
  wchar_t *v32; // [esp+30h] [ebp-1D8h]
  int v33; // [esp+34h] [ebp-1D4h]
  wchar_t LCData[128]; // [esp+38h] [ebp-1D0h] BYREF
  unsigned __int16 v35; // [esp+138h] [ebp-D0h]
  unsigned __int16 v36; // [esp+13Ah] [ebp-CEh]
  unsigned __int16 v37; // [esp+13Ch] [ebp-CCh]
  __int16 v38; // [esp+13Eh] [ebp-CAh]
  __int16 v39; // [esp+140h] [ebp-C8h]
  __int16 v40; // [esp+142h] [ebp-C6h]
  wchar_t v41; // [esp+158h] [ebp-B0h] BYREF
  _BYTE v42[170]; // [esp+15Ah] [ebp-AEh] BYREF

  v6 = Destination;
  v29 = a6;
  result = nullptr;
  v27 = Destination;
  if ( Source != nullptr )
  {
    v8 = *Source == 67;
    v30 = 0;
    if ( v8 && Source[1] == 0 )
    {
      if ( wcscpy_s(Destination, SizeInWords, L"C") == 0 )
      {
        *v29 = 0;
        return v6;
      }
LABEL_59:
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    v9 = __acrt_getptd();
    v33 = v9 + 104;
    v6 = (wchar_t *)(v9 + 370);
    v32 = (wchar_t *)(v9 + 370);
    v31 = (wchar_t *)(v9 + 108);
    _expandlocale_locale_name_cache::_expandlocale_locale_name_cache(
      (_expandlocale_locale_name_cache *)v26,
      a4,
      a5,
      (const wchar_t *)(v9 + 80));
    v10 = wcslen(Source);
    v28 = v10;
    if ( v10 < 0x83 )
    {
      v11 = wcscmp(v6, Source);
      if ( v11 != 0 )
        v11 = v11 < 0 ? -1 : 1;
      if ( v11 == 0 )
        goto LABEL_53;
      v12 = wcscmp(v31, Source);
      if ( v12 != 0 )
        v12 = v12 < 0 ? -1 : 1;
      if ( v12 == 0 )
        goto LABEL_53;
    }
    v13 = (unsigned __int8)__acrt_can_use_vista_locale_apis() == 0;
    if ( __lc_wcstolc(LCData, Source) != 0 )
    {
      v14 = (_DWORD *)v33;
    }
    else
    {
      v8 = !v13;
      v14 = (_DWORD *)v33;
      if ( v8 )
        qualified_locale = __acrt_get_qualified_locale((int)LCData, v33, LCData);
      else
        qualified_locale = __acrt_get_qualified_locale_downlevel((int)LCData, v33, LCData);
      if ( qualified_locale != 0 )
      {
        v6 = v32;
        __lc_lctowcs(v32, 0x83u, LCData);
        v16 = &v41;
        do
          v17 = *v16++;
        while ( v17 != (_WORD)v30 );
        _expandlocale_locale_name_cache::commit_locale_name_cache_already_updated(
          (_expandlocale_locale_name_cache *)v26,
          &v41,
          (((char *)v16 - v42) >> 1) + 1);
        v18 = v10 + 1;
        goto LABEL_48;
      }
    }
    if ( __acrt_IsValidLocaleName(Source) != 0 )
    {
      v18 = v10 + 1;
      *v14 = (unsigned __int16)get_default_code_page(Source);
      v6 = v32;
      if ( wcsncpy_s(v32, 0x83u, Source, v18) != 0 )
        goto LABEL_59;
      _expandlocale_locale_name_cache::commit_locale_name((_expandlocale_locale_name_cache *)v26, Source, v18);
      goto LABEL_48;
    }
    if ( (unsigned __int8)parse_bcp47(LCData, (int)Source) != 0 && __acrt_IsValidLocaleName(&v41) != 0 )
    {
      if ( v35 == 0 )
      {
        default_code_page = get_default_code_page(&v41);
        goto LABEL_44;
      }
      v19 = v35;
      if ( (unsigned int)v35 - 65 <= 0x19 )
        v19 = v35 + 32;
      if ( v19 == 117 )
      {
        v20 = v36;
        if ( (unsigned int)v36 - 65 <= 0x19 )
          v20 = v36 + 32;
        if ( v20 == 116 )
        {
          v21 = v37;
          if ( (unsigned int)v37 - 65 <= 0x19 )
            v21 = v37 + 32;
          if ( v21 == 102 && v38 == 56 && v39 == 0 )
            goto LABEL_42;
        }
      }
      if ( v38 == 45 && v39 == 56 && v40 == 0 )
      {
LABEL_42:
        default_code_page = -535;
LABEL_44:
        v18 = v10 + 1;
        *v14 = default_code_page;
        v6 = v32;
        if ( wcsncpy_s(v32, 0x83u, Source, v18) != 0 )
          goto LABEL_59;
        v23 = &v41;
        do
          v24 = *v23++;
        while ( v24 != (_WORD)v30 );
        _expandlocale_locale_name_cache::commit_locale_name(
          (_expandlocale_locale_name_cache *)v26,
          &v41,
          (((char *)v23 - v42) >> 1) + 1);
LABEL_48:
        if ( *Source != 0 && v28 < 0x83 )
        {
          if ( wcsncpy_s(v31, 0x83u, Source, v18) != 0 )
            goto LABEL_59;
        }
        else
        {
          *v31 = 0;
        }
LABEL_53:
        v25 = v27;
        *v29 = *(_DWORD *)v33;
        if ( wcscpy_s(v25, SizeInWords, v6) != 0 )
          goto LABEL_59;
LABEL_56:
        _expandlocale_locale_name_cache::~_expandlocale_locale_name_cache((_expandlocale_locale_name_cache *)v26);
        return v6;
      }
    }
    v6 = nullptr;
    goto LABEL_56;
  }
  return result;
}

