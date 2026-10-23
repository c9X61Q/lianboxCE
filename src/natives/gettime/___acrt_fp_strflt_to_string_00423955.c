// gettime.exe @ 0x423955 size=250

int __cdecl __acrt_fp_strflt_to_string(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __crt_cached_ptd_host *a7)
{
  int v8; // edx
  int v9; // eax
  int *v10; // ebx
  int v11; // esi
  char *v12; // eax
  char *v13; // esi
  char v14; // bl
  int v15; // [esp-8h] [ebp-14h]
  int v16; // [esp+8h] [ebp-4h]

  if ( a1 == nullptr )
  {
    *((_BYTE *)a7 + 28) = 1;
    *((_DWORD *)a7 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a7);
    return 22;
  }
  if ( a2 != 0 )
  {
    v8 = a3;
    v9 = a3;
    *a1 = 0;
    if ( a3 <= 0 )
      v9 = 0;
    if ( a2 <= v9 + 1 )
    {
      v15 = 34;
LABEL_10:
      v11 = v15;
      *((_DWORD *)a7 + 6) = v15;
      *((_BYTE *)a7 + 28) = 1;
      _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a7);
      return v11;
    }
    v10 = (int *)a4;
    if ( a4 != 0 )
    {
      v12 = *(char **)(a4 + 8);
      v13 = a1 + 1;
      v16 = (int)v12;
      *a1 = 48;
      if ( a3 > 0 )
      {
        do
        {
          v14 = *v12;
          if ( *v12 != 0 )
            ++v12;
          else
            v14 = 48;
          *v13++ = v14;
          --v8;
        }
        while ( v8 > 0 );
        v10 = (int *)a4;
      }
      *v13 = 0;
      if ( v8 >= 0 && should_round_up(v16, v12, *v10, a5, a6) )
      {
        while ( *--v13 == 57 )
          *v13 = 48;
        ++*v13;
      }
      if ( *a1 == 49 )
        ++v10[1];
      else
        memmove(a1, a1 + 1, strlen(a1 + 1) + 1);
      return 0;
    }
  }
  v15 = 22;
  goto LABEL_10;
}

