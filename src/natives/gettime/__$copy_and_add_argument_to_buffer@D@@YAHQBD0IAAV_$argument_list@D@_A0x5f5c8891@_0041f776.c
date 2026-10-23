// gettime.exe @ 0x41f776 size=176

rsize_t __cdecl copy_and_add_argument_to_buffer<char>(char *a1, char *Source, rsize_t MaxCount, int a4)
{
  rsize_t v4; // ecx
  size_t v6; // ebx
  char *v7; // eax
  char *v8; // esi
  rsize_t v9; // esi
  rsize_t v10; // [esp+0h] [ebp-4h]
  rsize_t v11; // [esp+0h] [ebp-4h]

  v4 = strlen(a1) + 1;
  v10 = v4;
  if ( v4 > ~MaxCount )
    return 12;
  v6 = v4 + MaxCount + 1;
  v7 = (char *)_calloc_base(v6, 1u);
  v8 = v7;
  if ( MaxCount != 0 && strncpy_s(v7, v6, Source, MaxCount) != 0
    || strncpy_s(&v8[MaxCount], v6 - MaxCount, a1, v10) != 0 )
  {
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  v11 = unknown_libname_101(a4);
  if ( v11 != 0 )
  {
    _free_base(v8);
    v9 = v11;
  }
  else
  {
    **(_DWORD **)(a4 + 4) = v8;
    v9 = 0;
    *(_DWORD *)(a4 + 4) += 4;
  }
  _free_base(nullptr);
  return v9;
}

