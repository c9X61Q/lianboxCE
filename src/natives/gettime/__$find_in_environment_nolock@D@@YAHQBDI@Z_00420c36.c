// gettime.exe @ 0x420c36 size=85

int __cdecl find_in_environment_nolock<char>(char *String1, size_t MaxCount)
{
  int v2; // edi
  _DWORD *v3; // esi
  const char *v4; // eax
  char v5; // al

  v2 = dword_4389D8;
  v3 = (_DWORD *)dword_4389D8;
  v4 = *(const char **)dword_4389D8;
  if ( *(_DWORD *)dword_4389D8 == 0 )
    return -(((int)v3 - v2) >> 2);
  while ( 1 )
  {
    if ( _strnicoll(String1, v4, MaxCount) == 0 )
    {
      v5 = *(_BYTE *)(MaxCount + *v3);
      if ( v5 == 61 || v5 == 0 )
        break;
    }
    v4 = (const char *)*++v3;
    if ( *v3 == 0 )
      return -(((int)v3 - v2) >> 2);
  }
  return ((int)v3 - v2) >> 2;
}

