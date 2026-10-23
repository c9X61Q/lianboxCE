// gettime.exe @ 0x4184ef size=338

int __cdecl fp_format_e_internal(
        char *const a1,
        unsigned int a2,
        int a3,
        bool a4,
        unsigned int a5,
        struct _strflt *const a6,
        bool a7,
        struct __crt_cached_ptd_host *a8)
{
  int v8; // eax
  char *v10; // esi
  struct __crt_cached_ptd_host *v11; // eax
  char *v12; // esi
  rsize_t v13; // eax
  int v14; // ecx

  v8 = a3;
  if ( a3 <= 0 )
    v8 = 0;
  if ( a2 > v8 + 9 )
  {
    if ( a7 )
      shift_bytes(a1, a2, &a1[*(_DWORD *)a6 == 45], a3 > 0);
    v10 = a1;
    if ( *(_DWORD *)a6 == 45 )
    {
      *a1 = 45;
      v10 = a1 + 1;
    }
    if ( a3 > 0 )
    {
      *v10 = v10[1];
      ++v10;
      v11 = a8;
      if ( *((_BYTE *)a8 + 20) == 0 )
      {
        __crt_cached_ptd_host::update_locale_slow(a8);
        v11 = a8;
      }
      *v10 = ***(_BYTE ***)(*((_DWORD *)v11 + 3) + 136);
    }
    v12 = &v10[a3 + !a7];
    v13 = -1;
    if ( a2 != -1 )
      v13 = a2 + a1 - v12;
    if ( strcpy_s(v12, v13, "e+000") != 0 )
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    if ( a4 )
      *v12 = 69;
    if ( **((_BYTE **)a6 + 2) != 48 )
    {
      v14 = *((_DWORD *)a6 + 1) - 1;
      if ( v14 < 0 )
      {
        v14 = 1 - *((_DWORD *)a6 + 1);
        v12[1] = 45;
      }
      if ( v14 >= 100 )
      {
        v12[2] += v14 / 100;
        v14 %= 100;
      }
      if ( v14 >= 10 )
      {
        v12[3] += v14 / 10;
        v14 %= 10;
      }
      v12[4] += v14;
    }
    if ( a5 == 2 && v12[2] == 48 )
      memmove(v12 + 2, v12 + 3, 3u);
    return 0;
  }
  else
  {
    *((_BYTE *)a8 + 28) = 1;
    *((_DWORD *)a8 + 6) = 34;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a8);
    return 34;
  }
}

