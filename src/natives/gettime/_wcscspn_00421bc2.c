// gettime.exe @ 0x421bc2 size=89

size_t __cdecl wcscspn(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // edx
  const wchar_t *v3; // ecx
  const wchar_t *v4; // edi
  wchar_t v5; // ax

  v2 = String;
  v3 = String;
  if ( *String != 0 )
  {
    while ( 1 )
    {
      v4 = Control;
      if ( *Control != 0 )
        break;
LABEL_6:
      if ( *++v3 == 0 )
        return v3 - v2;
    }
    v5 = *Control;
    while ( *v3 != v5 )
    {
      v5 = *++v4;
      v2 = String;
      if ( *v4 == 0 )
        goto LABEL_6;
    }
  }
  return v3 - v2;
}

