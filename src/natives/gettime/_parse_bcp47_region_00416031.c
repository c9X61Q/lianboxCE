// gettime.exe @ 0x416031 size=189

char __cdecl parse_bcp47_region(int a1, _DWORD *a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  const unsigned __int16 *v5; // eax
  int v7; // [esp+Ch] [ebp-4h]

  v2 = 0;
  if ( a2[2] != 0 )
    return 0;
  if ( a2[1] != 2 || (unsigned __int8)string_is_alpha(*a2, 2) == 0 )
  {
    if ( a2[1] == 3 )
    {
      v3 = *a2;
      v7 = *a2;
      while ( 1 )
      {
        v4 = *(unsigned __int16 *)(v3 + 2 * v2);
        v5 = __pctype_func();
        if ( __acrt_locale_get_ctype_array_value(v5, v4, 4) == 0 )
          break;
        v3 = v7;
        if ( (unsigned int)++v2 >= 3 )
          goto LABEL_8;
      }
    }
    return 0;
  }
LABEL_8:
  if ( wcsncpy_s((wchar_t *)(a1 + 128), 0x40u, (const wchar_t *)*a2, a2[1]) != 0
    || wcsncat_s((wchar_t *)(a1 + 288), 0x55u, asc_42A55C, 1u) != 0
    || wcsncat_s((wchar_t *)(a1 + 288), 0x55u, (const wchar_t *)*a2, a2[1]) != 0 )
  {
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  return 1;
}

