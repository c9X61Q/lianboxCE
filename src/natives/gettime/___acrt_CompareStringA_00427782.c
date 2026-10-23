// gettime.exe @ 0x427782 size=70

int __cdecl __acrt_CompareStringA(
        struct __crt_locale_pointers *a1,
        wchar_t *a2,
        DWORD dwCmpFlags,
        char *String,
        size_t Count,
        char *a6,
        size_t a7,
        UINT CodePage)
{
  int result; // eax
  int v9; // [esp+0h] [ebp-10h] BYREF
  struct __crt_locale_pointers v10; // [esp+4h] [ebp-Ch] BYREF
  char v11; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, a1);
  result = InternalCompareStringA(&v10, a2, dwCmpFlags, String, Count, a6, a7, CodePage);
  if ( v11 != 0 )
    *(_DWORD *)(v9 + 848) &= ~2u;
  return result;
}

