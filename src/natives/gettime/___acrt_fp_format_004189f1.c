// gettime.exe @ 0x4189f1 size=385

errno_t __cdecl __acrt_fp_format(
        int *a1,
        char *a2,
        rsize_t a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        int a9,
        int a10,
        __crt_cached_ptd_host *a11)
{
  int v12; // ebx
  char v13; // cl
  int v14; // ecx
  bool v15; // zf
  int v16; // esi
  unsigned int v17; // [esp-4h] [ebp-18h]
  char v18; // [esp+10h] [ebp-4h]

  if ( a2 == nullptr || a3 == 0 || a4 == 0 || (v12 = 0, a5 == 0) )
  {
    *((_BYTE *)a11 + 28) = 1;
    *((_DWORD *)a11 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a11);
    return 22;
  }
  if ( a6 == 65 || a6 == 69 || a6 == 70 || (v18 = 0, a6 == 71) )
    v18 = 1;
  v13 = a8;
  if ( (a8 & 8) == 0 )
  {
    v14 = __acrt_fp_classify(a1);
    if ( v14 != 0 )
    {
      if ( a1[1] >= 0 )
        return fp_format_nan_or_infinity(v14, 0, a2, a3, v18);
      else
        return fp_format_nan_or_infinity(v14, 1u, a2, a3, v18);
    }
    v13 = a8;
  }
  if ( (v13 & 0x10) != 0 )
    v17 = 3;
  else
    v17 = 2;
  if ( (v13 & 0x20) != 0 )
    v12 = a10;
  if ( a6 > 97 )
  {
    v16 = a6 - 101;
    v15 = a6 == 101;
  }
  else
  {
    if ( a6 == 97 || a6 == 65 )
      return fp_format_a(a1, a2, a3, a4, a5, a7, v18, v17, v12, a11);
    v16 = a6 - 69;
    v15 = a6 == 69;
  }
  if ( v15 )
    return fp_format_e((double *)a1, a2, a3, a4, a5, a7, v18, v17, v12, a11);
  if ( v16 == 1 )
    return fp_format_f((double *)a1, a2, a3, a4, a5, a7, v12, a11);
  return fp_format_g((double *)a1, a2, a3, a4, a5, a7, v18, v17, v12, a11);
}

