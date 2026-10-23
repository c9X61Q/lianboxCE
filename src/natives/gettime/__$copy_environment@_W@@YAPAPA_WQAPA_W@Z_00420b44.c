// gettime.exe @ 0x420b44 size=189

_BYTE *__cdecl copy_environment<wchar_t>(const wchar_t **a1)
{
  const wchar_t **v1; // edi
  const wchar_t **v3; // eax
  int i; // ecx
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  const wchar_t *v7; // ecx
  int v8; // ebx
  const wchar_t *v9; // edx
  __int16 v10; // ax
  rsize_t SizeInWords; // [esp+4h] [ebp-8h]

  v1 = a1;
  if ( a1 == nullptr )
    return nullptr;
  v3 = a1;
  for ( i = 0; *v3 != nullptr; ++i )
    ++v3;
  v5 = _calloc_base(i + 1, 4u);
  v6 = v5;
  if ( v5 == nullptr )
LABEL_14:
    abort();
  v7 = *a1;
  if ( *a1 != nullptr )
  {
    v8 = v5 - (_BYTE *)a1;
    do
    {
      v9 = v7 + 1;
      do
        v10 = *v7++;
      while ( v10 != 0 );
      SizeInWords = v7 - v9 + 1;
      *(const wchar_t **)((char *)v1 + v8) = (const wchar_t *)_calloc_base(SizeInWords, 2u);
      _free_base(nullptr);
      if ( *(const wchar_t **)((char *)v1 + v8) == nullptr )
        goto LABEL_14;
      if ( wcscpy_s(*(wchar_t **)((char *)v1 + v8), SizeInWords, *v1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v7 = *++v1;
    }
    while ( *v1 != nullptr );
  }
  _free_base(nullptr);
  return v6;
}

