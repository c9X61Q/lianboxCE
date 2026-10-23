// gettime.exe @ 0x41c9bc size=81

__int64 __cdecl count_newline_bytes(_WORD *a1, _WORD *a2, char a3)
{
  _BYTE *v3; // ecx
  __int64 result; // rax
  _WORD *v5; // ecx
  __int64 v6; // rax

  if ( a3 == 1 || a3 == 2 )
  {
    v5 = a1;
    v6 = 0;
    while ( v5 != a2 )
    {
      if ( *v5 == 10 )
        ++v6;
      ++v5;
    }
    return 2 * v6;
  }
  else
  {
    v3 = a1;
    result = 0;
    while ( v3 != (_BYTE *)a2 )
    {
      if ( *v3 == 10 )
        ++result;
      ++v3;
    }
  }
  return result;
}

