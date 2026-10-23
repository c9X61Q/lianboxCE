// gettime.exe @ 0x41807b size=163

char __cdecl fe_to_nearest(const double *a1, unsigned __int64 a2, __int16 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int16 v4; // ax
  unsigned __int64 v6; // rax
  char v7; // cl

  v3 = *(_QWORD *)a1;
  v4 = (a2 & *(_QWORD *)a1 & 0xFFFFFFFFFFFFFLL) >> a3;
  if ( v4 > 8u )
    return 1;
  if ( v4 < 8u )
    return 0;
  if ( (((v3 & ((1LL << a3) - 1)) >> 32) & 0xFFFFF | (unsigned int)v3 & ((1 << a3) - 1)) != 0 )
    return 1;
  if ( a3 == 48 )
  {
    v7 = (v3 & 0x7FF0000000000000LL) != 0;
  }
  else
  {
    LODWORD(v6) = a2 & (v3 >> 4);
    HIDWORD(v6) = (unsigned __int16)(WORD2(a2) & (HIDWORD(v3) >> 4));
    v7 = v6 >> a3;
  }
  return v7 & 1;
}

