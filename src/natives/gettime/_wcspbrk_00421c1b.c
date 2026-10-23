// gettime.exe @ 0x421c1b size=78

wchar_t *__cdecl wcspbrk(const wchar_t *String, const wchar_t *Control)
{
  const wchar_t *v2; // ecx
  const wchar_t *v3; // esi
  wchar_t v4; // ax
  wchar_t v5; // bx

  v2 = String;
  if ( *String == 0 )
    return nullptr;
  while ( 1 )
  {
    v3 = Control;
    if ( *Control != 0 )
      break;
LABEL_6:
    if ( *++v2 == 0 )
      return nullptr;
  }
  v4 = *v2;
  v5 = *Control;
  while ( v5 != v4 )
  {
    v5 = *++v3;
    v4 = *v2;
    if ( *v3 == 0 )
      goto LABEL_6;
  }
  return (wchar_t *)v2;
}

