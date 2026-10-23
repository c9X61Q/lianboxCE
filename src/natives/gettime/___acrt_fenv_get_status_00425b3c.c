// gettime.exe @ 0x425b3c size=170

int __usercall __acrt_fenv_get_status@<eax>(unsigned __int16 a1@<fpstat>)
{
  unsigned int v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // edx

  if ( dword_4386A4 >= 1 )
    v2 = _mm_getcsr() & 0x3F;
  else
    v2 = 0;
  v3 = (16 * (v2 & 1)) | (2 * (v2 & 4 | (8 * (v2 & 2)))) | ((v2 & 8 | ((v2 & 0x10 | (v2 >> 2) & 8) >> 2)) >> 1);
  v1 = (16 * (a1 & 1)) | (2 * (a1 & 4 | (8 * (a1 & 2)))) | ((a1 & 8 | ((a1 & 0x10 | (a1 >> 2) & 8u) >> 2)) >> 1);
  return v1 | v3 | ((v1 | (v3 << 8)) << 16);
}

