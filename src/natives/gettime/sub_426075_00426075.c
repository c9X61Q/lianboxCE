// gettime.exe @ 0x426075 size=212

int __cdecl sub_426075(wchar_t Source, struct __crt_locale_pointers *a2)
{
  int result; // eax
  int v3; // [esp+0h] [ebp-14h] BYREF
  int v4; // [esp+4h] [ebp-10h]
  char v5; // [esp+Ch] [ebp-8h]
  WCHAR DestStr; // [esp+10h] [ebp-4h] BYREF

  result = 0xFFFF;
  if ( Source != 0xFFFF )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v3, a2);
    LOWORD(result) = Source;
    if ( *(_DWORD *)(v4 + 8) == 65001 )
    {
      if ( Source < 0x80u )
      {
        if ( (_wctype[(unsigned __int8)Source + 1] & 1) != 0 )
          LOWORD(result) = *(unsigned __int8 *)(*(_DWORD *)(v4 + 148) + (unsigned __int8)Source);
        else
          LOWORD(result) = (unsigned __int8)Source;
        goto LABEL_14;
      }
    }
    else
    {
      if ( Source < 0x100u )
      {
        if ( (_wctype[(unsigned __int8)Source + 1] & 1) != 0 )
          LOWORD(result) = *(unsigned __int8 *)(*(_DWORD *)(v4 + 148) + (unsigned __int8)Source);
        else
          LOWORD(result) = (unsigned __int8)Source;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v4 + 168) == 0 )
      {
LABEL_14:
        result = (unsigned __int16)result;
        goto LABEL_16;
      }
    }
    if ( __acrt_LCMapStringW(*(wchar_t **)(v4 + 168), 0x100u, &Source, 1u, &DestStr, 1) != 0 )
    {
      result = DestStr;
LABEL_16:
      if ( v5 != 0 )
        *(_DWORD *)(v3 + 848) &= ~2u;
      return result;
    }
    LOWORD(result) = Source;
    goto LABEL_14;
  }
  return result;
}

