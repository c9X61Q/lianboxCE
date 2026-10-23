// gettime.exe @ 0x426697 size=141

unsigned __int8 *__cdecl _mbsdec_l(const unsigned __int8 *Start, const unsigned __int8 *Pos, _locale_t Locale)
{
  unsigned __int8 *v4; // edx
  int v5; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  if ( Start == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return nullptr;
  }
  if ( Pos == nullptr )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return nullptr;
  }
  if ( Start >= Pos )
    return nullptr;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v5, Locale);
  v4 = (unsigned __int8 *)(Pos - 1);
  if ( *(_DWORD *)(v6 + 8) != 0 )
  {
    do
      --v4;
    while ( Start <= v4 && (*(_BYTE *)(*v4 + v6 + 25) & 4) != 0 );
    v4 = (unsigned __int8 *)&Pos[-(((_BYTE)Pos - (_BYTE)v4) & 1) - 1];
  }
  if ( v7 != 0 )
    *(_DWORD *)(v5 + 848) &= ~2u;
  return v4;
}

