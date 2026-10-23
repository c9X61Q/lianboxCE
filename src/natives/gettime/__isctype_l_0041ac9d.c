// gettime.exe @ 0x41ac9d size=203

int __cdecl _isctype_l(int C, int Type, _locale_t Locale)
{
  int v3; // eax
  int v4; // eax
  int result; // eax
  int v6; // [esp+0h] [ebp-20h] BYREF
  struct __crt_locale_pointers v7; // [esp+4h] [ebp-1Ch] BYREF
  char v8; // [esp+Ch] [ebp-14h]
  CHAR MultiByteStr; // [esp+10h] [ebp-10h] BYREF
  char v10; // [esp+11h] [ebp-Fh]
  char v11; // [esp+12h] [ebp-Eh]
  WORD CharType[2]; // [esp+14h] [ebp-Ch] BYREF
  __int16 v13; // [esp+18h] [ebp-8h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v6, Locale);
  if ( C >= -1 && C <= 255 )
  {
    v3 = *(unsigned __int16 *)(*(_DWORD *)v7.locinfo + 2 * C);
    goto LABEL_12;
  }
  if ( *(__int16 *)(*(_DWORD *)v7.locinfo + 2 * BYTE1(C)) >= 0 )
  {
    MultiByteStr = C;
    v10 = 0;
    v4 = 1;
  }
  else
  {
    MultiByteStr = BYTE1(C);
    v10 = C;
    v11 = 0;
    v4 = 2;
  }
  *(_DWORD *)CharType = 0;
  v13 = 0;
  if ( __acrt_GetStringTypeA(&v7, 1u, &MultiByteStr, v4, CharType, *((_DWORD *)v7.locinfo + 2), 1) != 0 )
  {
    v3 = CharType[0];
LABEL_12:
    result = Type & v3;
    if ( v8 != 0 )
      *(_DWORD *)(v6 + 848) &= ~2u;
    return result;
  }
  if ( v8 != 0 )
    *(_DWORD *)(v6 + 848) &= ~2u;
  return 0;
}

