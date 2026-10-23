// gettime.exe @ 0x4186d8 size=238

int __cdecl fp_format_f_internal(
        char *const Src,
        unsigned int a2,
        signed int Size,
        struct _strflt *const a4,
        bool a5,
        struct __crt_cached_ptd_host *a6)
{
  char v6; // dl
  size_t v7; // edi
  int v8; // ecx
  char *v9; // ecx
  int v10; // eax
  char *v11; // eax
  struct __crt_cached_ptd_host *v12; // eax
  int v13; // eax
  int v14; // eax
  char *v16; // [esp+Ch] [ebp-4h]
  char *v17; // [esp+Ch] [ebp-4h]

  v6 = 0;
  v7 = Size;
  v8 = *((_DWORD *)a4 + 1) - 1;
  if ( a5 && v8 == Size )
    *(_WORD *)&Src[v8 + (*(_DWORD *)a4 == 45)] = 48;
  v9 = Src;
  v16 = Src;
  if ( *(_DWORD *)a4 == 45 )
  {
    v9 = Src + 1;
    *Src = 45;
    v16 = Src + 1;
  }
  v10 = *((_DWORD *)a4 + 1);
  if ( v10 <= 0 )
  {
    if ( v10 == 0 && **((_BYTE **)a4 + 2) == 48 )
      v6 = 1;
    if ( !a5 || v6 == 0 )
    {
      shift_bytes(Src, a2, v9, 1);
      v9 = v16;
    }
    *v9 = 48;
    v10 = 1;
  }
  v11 = &v9[v10];
  v17 = v11;
  if ( Size > 0 )
  {
    shift_bytes(Src, a2, v11, 1);
    v12 = a6;
    if ( *((_BYTE *)a6 + 20) == 0 )
    {
      __crt_cached_ptd_host::update_locale_slow(a6);
      v12 = a6;
    }
    *v17 = ***(_BYTE ***)(*((_DWORD *)v12 + 3) + 136);
    v13 = *((_DWORD *)a4 + 1);
    if ( v13 < 0 )
    {
      v14 = -v13;
      if ( a5 || v14 < Size )
        v7 = v14;
      shift_bytes(Src, a2, v17 + 1, v7);
      memset(v17 + 1, 48, v7);
    }
  }
  return 0;
}

