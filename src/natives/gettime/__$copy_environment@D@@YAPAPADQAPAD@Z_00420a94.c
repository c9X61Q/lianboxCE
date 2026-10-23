// gettime.exe @ 0x420a94 size=175

_BYTE *__cdecl copy_environment<char>(const char **a1)
{
  const char **v1; // edi
  int v3; // ecx
  const char **i; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // esi
  const char *v7; // ecx
  int v8; // ebx
  unsigned int v9; // kr00_4

  v1 = a1;
  if ( a1 == nullptr )
    return nullptr;
  v3 = 0;
  for ( i = a1; *i != nullptr; ++v3 )
    ++i;
  v5 = _calloc_base(v3 + 1, 4u);
  v6 = v5;
  if ( v5 == nullptr )
LABEL_12:
    abort();
  v7 = *a1;
  if ( *a1 != nullptr )
  {
    v8 = v5 - (_BYTE *)a1;
    do
    {
      v9 = strlen(v7);
      *(const char **)((char *)v1 + v8) = (const char *)_calloc_base(v9 + 1, 1u);
      _free_base(nullptr);
      if ( *(const char **)((char *)v1 + v8) == nullptr )
        goto LABEL_12;
      if ( strcpy_s(*(char **)((char *)v1 + v8), v9 + 1, *v1) != 0 )
        _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
      v7 = *++v1;
    }
    while ( *v1 != nullptr );
  }
  _free_base(nullptr);
  return v6;
}

