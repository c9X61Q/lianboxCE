// gettime.exe @ 0x4205a9 size=607

int __cdecl common_set_variable_in_environment_nolock<char>(char *Str, int a2)
{
  char *v3; // edi
  char *v4; // eax
  int v5; // ebx
  int v6; // eax
  size_t v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // kr00_4
  char *v11; // eax
  char *v12; // esi
  char *v13; // [esp+8h] [ebp-10h]
  rsize_t SizeInBytes; // [esp+Ch] [ebp-Ch]
  void *SizeInBytesb; // [esp+Ch] [ebp-Ch]
  rsize_t SizeInBytesa; // [esp+Ch] [ebp-Ch]
  _DWORD *Block; // [esp+10h] [ebp-8h]
  _DWORD *Blocka; // [esp+10h] [ebp-8h]
  char v19; // [esp+17h] [ebp-1h]

  if ( Str == nullptr )
  {
    *_errno() = 22;
    return -1;
  }
  v3 = Str;
  v4 = strchr(Str, 61);
  v13 = v4;
  if ( v4 == nullptr || v4 == Str )
  {
    *_errno() = 22;
    _free_base(Str);
    return -1;
  }
  v19 = v4[1];
  sub_420C02();
  v5 = 0;
  if ( dword_4389D8 == 0 )
  {
    if ( a2 != 0 && dword_4389DC != 0 )
    {
      if ( sub_4145EF() == 0 )
      {
        *_errno() = 22;
        goto LABEL_10;
      }
      sub_420C02();
    }
    else
    {
      if ( v19 == 0 )
        goto LABEL_11;
      dword_4389D8 = (int)_calloc_base(1u, 4u);
      _free_base(nullptr);
      if ( dword_4389D8 == 0
        || dword_4389DC == 0 && (dword_4389DC = (int)_calloc_base(1u, 4u), _free_base(nullptr), dword_4389DC == 0) )
      {
LABEL_10:
        v5 = -1;
LABEL_11:
        _free_base(Str);
        return v5;
      }
    }
  }
  Block = (_DWORD *)dword_4389D8;
  if ( dword_4389D8 == 0 )
    goto LABEL_10;
  v6 = find_in_environment_nolock<char>(Str, v13 - Str);
  SizeInBytes = v6;
  if ( v6 < 0 || *Block == 0 )
  {
    if ( v19 == 0 )
      goto LABEL_11;
    v9 = -v6;
    SizeInBytesa = v9;
    if ( v9 + 2 < v9 )
      goto LABEL_10;
    if ( v9 + 2 >= 0x3FFFFFFF )
      goto LABEL_10;
    Blocka = _recalloc_base(Block, v9 + 2, 4u);
    _free_base(nullptr);
    v8 = (int)Blocka;
    if ( Blocka == nullptr )
      goto LABEL_10;
    v3 = nullptr;
    Blocka[SizeInBytesa] = Str;
    Blocka[SizeInBytesa + 1] = 0;
LABEL_32:
    dword_4389D8 = v8;
    goto LABEL_33;
  }
  _free_base((void *)Block[v6]);
  v7 = SizeInBytes;
  if ( v19 == 0 )
  {
    while ( Block[v7] != 0 )
    {
      Block[v7] = Block[v7 + 1];
      ++v7;
    }
    SizeInBytesb = _recalloc_base(Block, v7, 4u);
    _free_base(nullptr);
    v8 = (int)SizeInBytesb;
    if ( SizeInBytesb == nullptr )
      goto LABEL_33;
    goto LABEL_32;
  }
  v3 = nullptr;
  Block[SizeInBytes] = Str;
LABEL_33:
  if ( a2 != 0 )
  {
    v10 = strlen(Str);
    v11 = (char *)_calloc_base(v10 + 2, 1u);
    v12 = v11;
    if ( v11 == nullptr )
    {
      _free_base(nullptr);
LABEL_39:
      _free_base(v3);
      return v5;
    }
    if ( strcpy_s(v11, v10 + 2, Str) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v13[v12 - Str] = 0;
    if ( __acrt_SetEnvironmentVariableA(v12, v19 != 0 ? &v13[v12 - Str + 1] : nullptr) == 0 )
    {
      *_errno() = 42;
      _free_base(v12);
      v5 = -1;
      goto LABEL_39;
    }
    _free_base(v12);
  }
  _free_base(v3);
  return 0;
}

