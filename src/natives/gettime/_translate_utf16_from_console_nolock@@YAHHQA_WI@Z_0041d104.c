// gettime.exe @ 0x41d104 size=126

unsigned int __cdecl translate_utf16_from_console_nolock(int a1, wchar_t *const a2, unsigned int a3)
{
  wchar_t *v3; // edi
  wchar_t *v4; // ecx
  wchar_t *v5; // esi
  wchar_t *v6; // edx
  int v7; // eax
  int v9; // [esp-8h] [ebp-14h]

  v3 = a2;
  v4 = a2;
  v5 = a2;
  v6 = &a2[a3];
  if ( a2 < v6 )
  {
    while ( 1 )
    {
      v7 = *v4;
      if ( v7 == 26 )
        break;
      if ( v7 == 13 && v4 + 1 < v6 && v4[1] == 10 )
      {
        LOWORD(v7) = 10;
        v9 = 4;
      }
      else
      {
        v9 = 2;
      }
      *v5 = v7;
      v4 = (wchar_t *)((char *)v4 + v9);
      ++v5;
      v3 = a2;
      if ( v4 >= v6 )
        return ((char *)v5 - (char *)v3) & 0xFFFFFFFE;
    }
    *(_BYTE *)(dword_438A48[a1 >> 6] + 56 * (a1 & 0x3F) + 40) |= 2u;
  }
  return ((char *)v5 - (char *)v3) & 0xFFFFFFFE;
}

