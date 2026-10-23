// gettime.exe @ 0x4187c6 size=207

int __cdecl fp_format_g(
        double *a1,
        char *Src,
        unsigned int a3,
        int a4,
        rsize_t SizeInBytes,
        signed int Size,
        bool a7,
        unsigned int a8,
        int a9,
        __crt_cached_ptd_host *a10)
{
  BOOL v10; // edx
  int v11; // eax
  const char *v12; // esi
  int result; // eax
  signed int v14; // eax
  int v15; // [esp+Ch] [ebp-14h] BYREF
  int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch]
  signed int v18; // [esp+18h] [ebp-8h]
  int v19; // [esp+1Ch] [ebp-4h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = __acrt_fltout(*a1, Size, 0, (int)&v15, a4, SizeInBytes);
  v10 = v15 == 45;
  v18 = v16 - 1;
  v11 = -1;
  v12 = &Src[v10];
  if ( a3 != -1 )
    v11 = a3 - v10;
  result = __acrt_fp_strflt_to_string(&Src[v10], v11, Size, (int)&v15, v19, a9, a10);
  if ( result != 0 )
  {
    *Src = 0;
  }
  else
  {
    v14 = v16 - 1;
    if ( v16 - 1 < -4 || v14 >= Size )
    {
      return fp_format_e_internal(Src, a3, Size, a7, a8, (struct _strflt *const)&v15, true, a10);
    }
    else
    {
      if ( v18 < v14 )
        v12[strlen(v12) - 1] = 0;
      return fp_format_f_internal(Src, a3, Size, (struct _strflt *const)&v15, true, a10);
    }
  }
  return result;
}

