// gettime.exe @ 0x41a8e3 size=213

int __cdecl _wcstombs_internal(
        unsigned int *a1,
        char *a2,
        unsigned int a3,
        wchar_t *a4,
        unsigned int a5,
        struct __crt_cached_ptd_host *a6)
{
  unsigned int v6; // eax
  int v7; // ebx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  int v11; // edi
  int v12; // [esp-8h] [ebp-14h]
  int v13; // [esp+8h] [ebp-4h]

  v6 = a3;
  v7 = 0;
  v13 = 0;
  if ( a2 != nullptr )
  {
    if ( a3 != 0 )
    {
      *a2 = 0;
      goto LABEL_4;
    }
LABEL_11:
    *((_BYTE *)a6 + 28) = 1;
    *((_DWORD *)a6 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
    return 22;
  }
  if ( a3 != 0 )
    goto LABEL_11;
LABEL_4:
  if ( a1 != nullptr )
    *a1 = 0;
  if ( a5 <= a3 )
    v6 = a5;
  if ( v6 > 0x7FFFFFFF )
  {
    v12 = 22;
LABEL_22:
    v11 = v12;
    *((_DWORD *)a6 + 6) = v12;
    *((_BYTE *)a6 + 28) = 1;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
    return v11;
  }
  v9 = _wcstombs_l_helper(a2, a4, v6, a6);
  if ( v9 == -1 )
  {
    if ( a2 != nullptr )
      *a2 = 0;
    if ( *((_BYTE *)a6 + 28) != 0 )
      return *((_DWORD *)a6 + 6);
    return v7;
  }
  else
  {
    v10 = v9 + 1;
    if ( a2 != nullptr )
    {
      if ( v10 > a3 )
      {
        if ( a5 != -1 )
        {
          *a2 = 0;
          v12 = 34;
          goto LABEL_22;
        }
        v10 = a3;
        v13 = 80;
      }
      a2[v10 - 1] = 0;
    }
    if ( a1 != nullptr )
      *a1 = v10;
    return v13;
  }
}

