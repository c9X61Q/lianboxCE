// gettime.exe @ 0x418019 size=98

int __cdecl __acrt_fp_classify(int *a1)
{
  int v1; // edi
  int v2; // edx

  v1 = *a1;
  v2 = a1[1];
  if ( (((unsigned int)v2 >> 20) & 0x7FF) != 0x7FF )
    return 0;
  if ( (v2 & 0xFFFFF | v1) == 0 )
    return 1;
  if ( v2 < 0 && v1 == 0 && (v2 & 0xFFFFF) == 0x80000 )
    return 4;
  if ( (v2 & 0x80000) != 0 )
    return 2;
  return 3;
}

