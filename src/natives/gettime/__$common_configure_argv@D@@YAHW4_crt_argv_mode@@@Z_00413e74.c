// gettime.exe @ 0x413e74 size=317

int __cdecl common_configure_argv<char>(int a1)
{
  void *v2; // ebx
  char *buffer_for_argv; // esi
  int v4; // esi
  int v5; // edi
  void *v6; // edx
  int v7; // ecx
  _DWORD *i; // eax
  int v9; // [esp+4h] [ebp-Ch] BYREF
  void *Block; // [esp+8h] [ebp-8h] BYREF
  int v11; // [esp+Ch] [ebp-4h] BYREF

  if ( a1 == 0 )
    return 0;
  if ( a1 != 2 && a1 != 1 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
  __acrt_initialize_multibyte();
  __acrt_GetModuleFileNameA(nullptr, (int)&unk_4388D0, 260);
  dword_4389F4 = (int)&unk_4388D0;
  v2 = (void *)dword_438A04;
  if ( dword_438A04 == 0 || *(_BYTE *)dword_438A04 == 0 )
    v2 = &unk_4388D0;
  v11 = 0;
  v9 = 0;
  parse_command_line<char>(v2, 0, 0, &v11, &v9);
  buffer_for_argv = (char *)__acrt_allocate_buffer_for_argv(v11, v9, 1);
  if ( buffer_for_argv == nullptr )
  {
    v4 = 12;
    *_errno() = 12;
LABEL_13:
    _free_base(nullptr);
    return v4;
  }
  parse_command_line<char>(v2, buffer_for_argv, &buffer_for_argv[4 * v11], &v11, &v9);
  if ( a1 == 1 )
  {
    dword_4389FC = buffer_for_argv;
    dword_4389F8 = v11 - 1;
    v4 = 0;
    goto LABEL_13;
  }
  Block = nullptr;
  v5 = __acrt_expand_narrow_argv_wildcards(buffer_for_argv, &Block);
  if ( v5 != 0 )
  {
    _free_base(Block);
  }
  else
  {
    v6 = Block;
    v7 = 0;
    for ( i = Block; *i != 0; ++v7 )
      ++i;
    dword_4389F8 = v7;
    Block = nullptr;
    dword_4389FC = v6;
    _free_base(nullptr);
    v5 = 0;
  }
  Block = nullptr;
  _free_base(buffer_for_argv);
  return v5;
}

