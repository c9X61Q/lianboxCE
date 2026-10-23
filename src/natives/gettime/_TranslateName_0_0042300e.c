// gettime.exe @ 0x42300e size=97

char __cdecl TranslateName_0(int a1, int a2, const wchar_t **a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // eax

  v3 = a2;
  v4 = 0;
  if ( a2 < 0 )
    return 0;
  while ( 1 )
  {
    v5 = (v4 + v3) / 2;
    v6 = _wcsicmp(*a3, *(const wchar_t **)(12 * v5 + a1));
    if ( v6 == 0 )
      break;
    if ( v6 >= 0 )
      v4 = v5 + 1;
    else
      v3 = v5 - 1;
    if ( v4 > v3 )
      return 0;
  }
  *a3 = (const wchar_t *)(12 * v5 + 4 + a1);
  return 1;
}

