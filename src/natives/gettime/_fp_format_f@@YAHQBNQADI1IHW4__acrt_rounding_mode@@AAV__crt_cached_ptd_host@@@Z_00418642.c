// gettime.exe @ 0x418642 size=150

int __cdecl fp_format_f(
        double *a1,
        char *Src,
        unsigned int a3,
        int a4,
        rsize_t SizeInBytes,
        size_t Size,
        int a7,
        __crt_cached_ptd_host *a8)
{
  int v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // [esp+8h] [ebp-Ch] BYREF
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h]

  v11 = 0;
  v12 = 0;
  v13 = 0;
  v8 = __acrt_fltout(*a1, Size, 0, (int)&v11, a4, SizeInBytes);
  v9 = -1;
  if ( a3 != -1 )
    v9 = a3 - (v11 == 45);
  result = __acrt_fp_strflt_to_string(&Src[v11 == 45], v9, Size + v12, (int)&v11, v8, a7, a8);
  if ( result == 0 )
    return fp_format_f_internal(Src, a3, Size, (struct _strflt *const)&v11, false, a8);
  *Src = 0;
  return result;
}

