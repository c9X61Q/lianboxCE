// gettime.exe @ 0x41844b size=164

int __cdecl fp_format_e(
        double *a1,
        char *a2,
        unsigned int a3,
        int a4,
        rsize_t SizeInBytes,
        int a6,
        bool a7,
        unsigned int a8,
        int a9,
        __crt_cached_ptd_host *a10)
{
  int v10; // eax
  int v11; // ecx
  int result; // eax
  int v13[3]; // [esp+8h] [ebp-Ch] BYREF

  v10 = __acrt_fltout(*a1, a6 + 1, 1, (int)v13, a4, SizeInBytes);
  v11 = -1;
  if ( a3 != -1 )
    v11 = a3 - (v13[0] == 45) - (a6 > 0);
  result = __acrt_fp_strflt_to_string(&a2[(v13[0] == 45) + (a6 > 0)], v11, a6 + 1, (int)v13, v10, a9, a10);
  if ( result == 0 )
    return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *const)v13, false, a10);
  *a2 = 0;
  return result;
}

