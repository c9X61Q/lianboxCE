// gettime.exe @ 0x414286 size=225

void *__cdecl create_environment<char>(char *Source)
{
  char *v1; // ebx
  int v2; // edx
  char *v3; // esi
  char i; // al
  void *v5; // eax
  void *v6; // esi
  unsigned int v8; // ecx
  rsize_t v9; // eax
  char *v10; // eax
  char *v11; // edi
  rsize_t SizeInBytes; // [esp+Ch] [ebp-8h]
  char **v13; // [esp+10h] [ebp-4h]

  v1 = Source;
  v2 = 0;
  v3 = Source;
  for ( i = *Source; i != 0; i = *v3 )
  {
    if ( i != 61 )
      ++v2;
    v3 += strlen(v3) + 1;
  }
  v5 = _calloc_base(v2 + 1, 4u);
  v6 = v5;
  if ( v5 == nullptr )
  {
    _free_base(nullptr);
    return nullptr;
  }
  v13 = (char **)v5;
  while ( 1 )
  {
    if ( *v1 == 0 )
    {
      _free_base(nullptr);
      return v6;
    }
    v8 = strlen(v1);
    v9 = v8 + 1;
    SizeInBytes = v8 + 1;
    if ( *v1 != 61 )
      break;
LABEL_13:
    v1 += v9;
  }
  v10 = (char *)_calloc_base(v8 + 1, 1u);
  v11 = v10;
  if ( v10 != nullptr )
  {
    if ( strcpy_s(v10, SizeInBytes, v1) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    *v13++ = v11;
    _free_base(nullptr);
    v9 = SizeInBytes;
    goto LABEL_13;
  }
  unknown_libname_89(v6);
  _free_base(nullptr);
  _free_base(nullptr);
  return nullptr;
}

