// gettime.exe @ 0x412613 size=217

char __cdecl common_fseek_binary_mode_read_only_fast_track_nolock(int *a1, __int64 a2, int a3)
{
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  __int64 v6; // rax
  int *v7; // esi
  __int64 v9; // rax
  int v10; // edi

  if ( a3 == 2 )
    return 0;
  if ( (a1[3] & 0x4C0) == 0 )
    return 0;
  if ( (a1[3] & 6) != 0 )
    return 0;
  if ( a1[2] <= 0 )
    return 0;
  v3 = a1[4];
  v4 = 56 * (v3 & 0x3F);
  v5 = dword_438A48[v3 >> 6];
  if ( *(char *)(v5 + v4 + 40) < 0 || *(_BYTE *)(v5 + v4 + 41) != 0 )
    return 0;
  if ( a3 != 0 )
  {
    v7 = a1;
  }
  else
  {
    LODWORD(v6) = _lseeki64_nolock(v3, 0, 1u);
    if ( v6 < 0 )
      return 0;
    v7 = a1;
    if ( LongLongSub(a2, v6 - a1[2], &a2) < 0 )
      return 0;
  }
  v9 = v7[1] - *v7;
  if ( SHIDWORD(v9) > SHIDWORD(a2) )
    return 0;
  v10 = a2;
  if ( SHIDWORD(v9) >= SHIDWORD(a2) && (unsigned int)v9 > (unsigned int)a2 )
    return 0;
  if ( a2 > v7[2] )
    return 0;
  *v7 += a2;
  a1[2] -= v10;
  return 1;
}

