// gettime.exe @ 0x422550 size=240

int __cdecl ProcessCodePage(wchar_t *String1, int a2)
{
  int v2; // edi
  int v3; // eax
  wchar_t *v4; // ecx
  wchar_t *v5; // eax
  bool v6; // cf
  wchar_t v7; // dx
  int result; // eax
  WCHAR LCData[2]; // [esp+8h] [ebp-4h] BYREF

  if ( String1 == nullptr )
    goto LABEL_21;
  v2 = 0;
  if ( *String1 == 0 )
    goto LABEL_21;
  v3 = wcscmp(String1, off_42E4E0);
  if ( v3 != 0 )
    v3 = v3 < 0 ? -1 : 1;
  if ( v3 != 0 )
  {
    if ( _wcsicmp(String1, L"utf8") == 0 || _wcsicmp(String1, L"utf-8") == 0 )
      return 65001;
    v4 = (wchar_t *)&off_42E4F4;
    v5 = String1;
    while ( 1 )
    {
      v6 = *v5 < *v4;
      if ( *v5 != *v4 )
        break;
      if ( *v5 == 0 )
        goto LABEL_15;
      v7 = v5[1];
      v6 = v7 < v4[1];
      if ( v7 != v4[1] )
        break;
      v5 += 2;
      v4 += 2;
      if ( v7 == 0 )
        goto LABEL_15;
    }
    v2 = v6 ? -1 : 1;
LABEL_15:
    if ( v2 != 0 )
      return unknown_libname_95(String1);
    result = __acrt_GetLocaleInfoEx((wchar_t *)(a2 + 592), 0x2000000Bu, LCData, 2);
  }
  else
  {
LABEL_21:
    result = __acrt_GetLocaleInfoEx((wchar_t *)(a2 + 592), 0x20001004u, LCData, 2);
  }
  if ( result != 0 )
  {
    result = *(_DWORD *)LCData;
    if ( *(int *)LCData < 3 )
      return 65001;
  }
  return result;
}

