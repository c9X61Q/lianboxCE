// gettime.exe @ 0x42268d size=109

BOOL __cdecl TranslateName(int a1, int a2, const wchar_t **a3)
{
  int v3; // esi
  int v4; // edx
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  v3 = a2;
  v4 = 1;
  v5 = 0;
  while ( v5 <= v3 )
  {
    if ( v4 == 0 )
      break;
    v6 = (v5 + v3) / 2;
    v7 = _wcsicmp(*a3, *(const wchar_t **)(12 * v6 + a1));
    v4 = v7;
    if ( v7 != 0 )
    {
      if ( v7 >= 0 )
        v5 = v6 + 1;
      else
        v3 = v6 - 1;
    }
    else
    {
      *a3 = (const wchar_t *)(a1 + 4 + 12 * v6);
    }
  }
  return v4 == 0;
}

