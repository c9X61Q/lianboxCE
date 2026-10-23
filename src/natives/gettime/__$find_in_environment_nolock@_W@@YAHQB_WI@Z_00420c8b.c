// gettime.exe @ 0x420c8b size=88

int __cdecl find_in_environment_nolock<wchar_t>(wchar_t *String1, size_t MaxCount)
{
  int v2; // edi
  _DWORD *v3; // esi
  wchar_t *v4; // eax
  int v5; // eax

  v2 = dword_4389DC;
  v3 = (_DWORD *)dword_4389DC;
  v4 = *(wchar_t **)dword_4389DC;
  if ( *(_DWORD *)dword_4389DC == 0 )
    return -(((int)v3 - v2) >> 2);
  while ( 1 )
  {
    if ( sub_426733(String1, v4, MaxCount) == 0 )
    {
      v5 = *(unsigned __int16 *)(*v3 + 2 * MaxCount);
      if ( v5 == 61 || (_WORD)v5 == 0 )
        break;
    }
    v4 = (wchar_t *)*++v3;
    if ( *v3 == 0 )
      return -(((int)v3 - v2) >> 2);
  }
  return ((int)v3 - v2) >> 2;
}

