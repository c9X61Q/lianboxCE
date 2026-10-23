// gettime.exe @ 0x41ae47 size=431

int __cdecl __acrt_GetLocaleInfoA(struct __crt_locale_pointers *a1, int a2, wchar_t *a3, LCTYPE LCType, char **a5)
{
  int v5; // edi
  size_t LocaleInfoA; // eax
  size_t v8; // eax
  char *v9; // eax
  char *v10; // esi
  int v11; // eax
  char *v12; // eax
  size_t LocaleInfo; // eax
  WCHAR *v14; // eax
  rsize_t SizeInBytes; // [esp+10h] [ebp-8Ch]
  rsize_t SizeInBytesa; // [esp+10h] [ebp-8Ch]
  rsize_t SizeInBytesb; // [esp+10h] [ebp-8Ch]
  WCHAR LCData[2]; // [esp+14h] [ebp-88h] BYREF
  char Source[128]; // [esp+18h] [ebp-84h] BYREF

  v5 = 0;
  *(_DWORD *)LCData = a3;
  *a5 = nullptr;
  if ( a2 == 1 )
  {
    LocaleInfoA = InternalGetLocaleInfoA(a1, a3, LCType, Source, 128);
    SizeInBytes = LocaleInfoA;
    if ( LocaleInfoA != 0 )
    {
      *a5 = (char *)_calloc_base(LocaleInfoA, 1u);
      _free_base(nullptr);
      if ( *a5 != nullptr )
      {
        if ( strncpy_s(*a5, SizeInBytes, Source, SizeInBytes - 1) != 0 )
          _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
        return 0;
      }
      return -1;
    }
    if ( GetLastError() == 122 )
    {
      v8 = InternalGetLocaleInfoA(a1, a3, LCType, nullptr, 0);
      SizeInBytesa = v8;
      if ( v8 != 0 )
      {
        v9 = (char *)_calloc_base(v8, 1u);
        v10 = v9;
        if ( v9 != nullptr )
        {
          v11 = InternalGetLocaleInfoA(a1, *(wchar_t **)LCData, LCType, v9, SizeInBytesa);
LABEL_10:
          if ( v11 != 0 )
          {
            v12 = v10;
            v10 = nullptr;
            *a5 = v12;
LABEL_13:
            _free_base(v10);
            return v5;
          }
        }
LABEL_12:
        v5 = -1;
        goto LABEL_13;
      }
    }
  }
  else
  {
    if ( a2 != 2 )
    {
      if ( a2 == 0 )
      {
        *(_DWORD *)LCData = 0;
        if ( __acrt_GetLocaleInfoEx(a3, LCType | 0x20000000, LCData, 2) != 0 )
        {
          *(_BYTE *)a5 = LCData[0];
          return 0;
        }
      }
      return -1;
    }
    LocaleInfo = __acrt_GetLocaleInfoEx(a3, LCType, nullptr, 0);
    SizeInBytesb = LocaleInfo;
    if ( LocaleInfo != 0 )
    {
      v14 = (WCHAR *)_calloc_base(LocaleInfo, 2u);
      v10 = (char *)v14;
      if ( v14 == nullptr )
        goto LABEL_12;
      v11 = __acrt_GetLocaleInfoEx(*(wchar_t **)LCData, LCType, v14, SizeInBytesb);
      goto LABEL_10;
    }
  }
  return -1;
}

