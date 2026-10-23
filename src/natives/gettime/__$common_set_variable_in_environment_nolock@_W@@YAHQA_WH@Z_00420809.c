// gettime.exe @ 0x420809 size=650

int __cdecl common_set_variable_in_environment_nolock<wchar_t>(wchar_t *Str, int a2)
{
  wchar_t *v2; // esi
  wchar_t *v4; // edi
  wchar_t *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  size_t v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  __int16 v12; // ax
  wchar_t *v13; // eax
  wchar_t *v14; // esi
  wchar_t v15; // [esp+8h] [ebp-14h]
  wchar_t *v16; // [esp+Ch] [ebp-10h]
  size_t v17; // [esp+Ch] [ebp-10h]
  void *SizeInWordsb; // [esp+10h] [ebp-Ch]
  _DWORD *SizeInWords; // [esp+10h] [ebp-Ch]
  rsize_t SizeInWordsa; // [esp+10h] [ebp-Ch]
  size_t Count; // [esp+14h] [ebp-8h]
  size_t Counta; // [esp+14h] [ebp-8h]
  _DWORD *Block; // [esp+18h] [ebp-4h]

  v2 = Str;
  if ( Str == nullptr )
  {
    *_errno() = 22;
    return -1;
  }
  v4 = Str;
  v5 = wcschr(Str, 0x3Du);
  v16 = v5;
  if ( v5 == nullptr || v5 == Str )
  {
    *_errno() = 22;
    _free_base(Str);
    return -1;
  }
  v15 = v5[1];
  sub_420C1C();
  v6 = 0;
  Block = (_DWORD *)dword_4389DC;
  if ( dword_4389DC == 0 )
  {
    if ( a2 != 0 && dword_4389D8 != 0 )
    {
      if ( sub_4145F4() == 0 )
      {
        *_errno() = 22;
LABEL_10:
        v6 = -1;
LABEL_11:
        _free_base(Str);
        return v6;
      }
      sub_420C1C();
      v7 = dword_4389DC;
      Block = (_DWORD *)dword_4389DC;
      goto LABEL_18;
    }
    if ( v15 == 0 )
      goto LABEL_11;
    if ( dword_4389D8 != 0 )
      goto LABEL_17;
    dword_4389D8 = (int)_calloc_base(1u, 4u);
    _free_base(nullptr);
    if ( dword_4389D8 == 0 )
      goto LABEL_10;
    Block = (_DWORD *)dword_4389DC;
    if ( dword_4389DC == 0 )
    {
LABEL_17:
      dword_4389DC = (int)_calloc_base(1u, 4u);
      _free_base(nullptr);
      v7 = dword_4389DC;
      Block = (_DWORD *)dword_4389DC;
      if ( dword_4389DC == 0 )
        goto LABEL_10;
LABEL_18:
      if ( v7 == 0 )
        goto LABEL_10;
    }
  }
  v17 = v16 - Str;
  v8 = find_in_environment_nolock<wchar_t>(Str, v17);
  Count = v8;
  if ( v8 < 0 || *Block == 0 )
  {
    if ( v15 == 0 )
      goto LABEL_11;
    v11 = -v8;
    Counta = v11;
    if ( v11 + 2 < v11 )
      goto LABEL_10;
    if ( v11 + 2 >= 0x3FFFFFFF )
      goto LABEL_10;
    SizeInWords = _recalloc_base(Block, v11 + 2, 4u);
    _free_base(nullptr);
    v10 = (int)SizeInWords;
    if ( SizeInWords == nullptr )
      goto LABEL_10;
    v4 = nullptr;
    SizeInWords[Counta] = Str;
    SizeInWords[Counta + 1] = 0;
LABEL_33:
    dword_4389DC = v10;
    goto LABEL_34;
  }
  _free_base((void *)Block[v8]);
  v9 = Count;
  if ( v15 == 0 )
  {
    while ( Block[v9] != 0 )
    {
      Block[v9] = Block[v9 + 1];
      ++v9;
    }
    SizeInWordsb = _recalloc_base(Block, v9, 4u);
    _free_base(nullptr);
    v10 = (int)SizeInWordsb;
    if ( SizeInWordsb == nullptr )
      goto LABEL_34;
    goto LABEL_33;
  }
  v4 = nullptr;
  Block[Count] = Str;
LABEL_34:
  if ( a2 != 0 )
  {
    do
      v12 = *v2++;
    while ( v12 != 0 );
    SizeInWordsa = v2 - (Str + 1) + 2;
    v13 = (wchar_t *)_calloc_base(SizeInWordsa, 2u);
    v14 = v13;
    if ( v13 == nullptr )
    {
      _free_base(nullptr);
LABEL_41:
      _free_base(v4);
      return v6;
    }
    if ( wcscpy_s(v13, SizeInWordsa, Str) != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    v14[v17] = 0;
    if ( !SetEnvironmentVariableW(v14, v15 != 0 ? &v14[v17 + 1] : nullptr) )
    {
      *_errno() = 42;
      _free_base(v14);
      v6 = -1;
      goto LABEL_41;
    }
    _free_base(v14);
  }
  _free_base(v4);
  return 0;
}

