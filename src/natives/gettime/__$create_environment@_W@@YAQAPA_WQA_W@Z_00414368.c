// gettime.exe @ 0x414368 size=285

wchar_t **__cdecl create_environment<wchar_t>(wchar_t *Source)
{
  wchar_t *v1; // ebx
  const unsigned __int16 *v2; // esi
  int v3; // edx
  unsigned __int16 v4; // cx
  wchar_t **v5; // esi
  unsigned __int16 v7; // dx
  size_t v8; // eax
  wchar_t *v9; // eax
  wchar_t *v10; // edi
  rsize_t SizeInWords; // [esp+Ch] [ebp-Ch]
  wchar_t **v12; // [esp+10h] [ebp-8h]

  v1 = Source;
  v2 = Source;
  v3 = 0;
  if ( *Source != 0 )
  {
    v4 = *Source;
    do
    {
      if ( v4 != 61 )
        ++v3;
      v2 += wcslen(v2) + 1;
      v4 = *v2;
    }
    while ( *v2 != 0 );
    v1 = Source;
  }
  v5 = (wchar_t **)_calloc_base(v3 + 1, 4u);
  if ( v5 == nullptr )
  {
    _free_base(nullptr);
    return nullptr;
  }
  v12 = v5;
  if ( *v1 == 0 )
  {
LABEL_16:
    _free_base(nullptr);
    return v5;
  }
  v7 = *v1;
  while ( 1 )
  {
    v8 = wcslen(v1) + 1;
    SizeInWords = v8;
    if ( v7 != 61 )
      break;
LABEL_15:
    v1 += v8;
    v7 = *v1;
    if ( *v1 == 0 )
      goto LABEL_16;
  }
  v9 = (wchar_t *)_calloc_base(v8, 2u);
  v10 = v9;
  if ( v9 != nullptr )
  {
    if ( wcscpy_s(v9, SizeInWords, v1) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    *v12++ = v10;
    _free_base(nullptr);
    v8 = SizeInWords;
    goto LABEL_15;
  }
  unknown_libname_89(v5);
  _free_base(nullptr);
  _free_base(nullptr);
  return nullptr;
}

