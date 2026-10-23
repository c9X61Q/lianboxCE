// gettime.exe @ 0x415d77 size=47

int __cdecl get_default_code_page(wchar_t *a1)
{
  int result; // eax
  WCHAR LCData[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)LCData = 0;
  if ( __acrt_GetLocaleInfoEx(a1, 0x20001004u, LCData, 2) == 0 )
    return 65001;
  result = *(_DWORD *)LCData;
  if ( *(_DWORD *)LCData == 0 )
    return 65001;
  return result;
}

