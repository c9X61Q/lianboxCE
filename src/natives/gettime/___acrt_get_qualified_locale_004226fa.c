// gettime.exe @ 0x4226fa size=516

int __cdecl __acrt_get_qualified_locale(_WORD *a1, UINT *a2, LPWSTR lpLCData)
{
  struct __acrt_ptd *v3; // eax
  int v4; // esi
  _WORD **v5; // ebx
  UINT v6; // eax
  UINT v7; // esi
  wchar_t *v8; // edi
  wchar_t *Source; // [esp+10h] [ebp-4h]

  v3 = __acrt_getptd();
  v4 = (int)v3 + 80;
  v3 = (struct __acrt_ptd *)((char *)v3 + 672);
  *(_DWORD *)(v4 + 8) = 0;
  *(_WORD *)v3 = 0;
  v5 = (_WORD **)(v4 + 4);
  Source = (wchar_t *)v3;
  *(_DWORD *)v4 = a1;
  *(_DWORD *)(v4 + 4) = a1 + 64;
  if ( a1[64] != 0 )
    TranslateName((int)&off_42DA50, 22, (const wchar_t **)(v4 + 4));
  if ( **(_WORD **)v4 != 0 )
  {
    if ( **v5 != 0 )
      GetLocaleNameFromLangCountry((__int16 **)v4);
    else
      GetLocaleNameFromLanguage((__int16 **)v4);
    if ( *(_DWORD *)(v4 + 8) == 0 && TranslateName((int)&off_42D740, 64, (const wchar_t **)v4) )
    {
      if ( **v5 != 0 )
        GetLocaleNameFromLangCountry((__int16 **)v4);
      else
        GetLocaleNameFromLanguage((__int16 **)v4);
    }
  }
  else
  {
    GetLocaleNameFromDefault(v4);
  }
  if ( *(_DWORD *)(v4 + 8) != 0 )
  {
    v6 = a1 == nullptr || *a1 != 0 || a1[128] != 0 ? ProcessCodePage(a1 != nullptr ? a1 + 128 : nullptr, v4) : GetACP();
    v7 = v6;
    if ( v6 != 0 && v6 != 65000 && IsValidCodePage((unsigned __int16)v6) )
    {
      if ( a2 != nullptr )
        *a2 = v7;
      if ( lpLCData == nullptr )
        return 1;
      lpLCData[144] = 0;
      if ( wcsncpy_s(lpLCData + 144, 0x55u, Source, wcslen(Source) + 1) != 0 )
        goto LABEL_36;
      if ( __acrt_GetLocaleInfoEx(lpLCData + 144, 0x1001u, lpLCData, 64) != 0
        && __acrt_GetLocaleInfoEx(lpLCData + 144, 0x1002u, lpLCData + 64, 64) != 0
        && (wcschr(lpLCData + 64, 0x5Fu) == nullptr && wcschr(lpLCData + 64, 0x2Eu) == nullptr
         || __acrt_GetLocaleInfoEx(lpLCData + 144, 7u, lpLCData + 64, 64) != 0) )
      {
        v8 = lpLCData + 128;
        if ( v7 != 65001 )
        {
          unknown_libname_103(v7, v8, 16, 10);
          return 1;
        }
        if ( wcsncpy_s(v8, 0x10u, L"utf8", 5u) == 0 )
          return 1;
LABEL_36:
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      }
    }
  }
  return 0;
}

