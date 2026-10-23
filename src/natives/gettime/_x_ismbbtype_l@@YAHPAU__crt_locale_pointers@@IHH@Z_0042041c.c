// gettime.exe @ 0x42041c size=80

BOOL __cdecl x_ismbbtype_l(struct __crt_locale_pointers *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  BOOL result; // eax
  _DWORD v5[3]; // [esp+0h] [ebp-10h] BYREF
  char v6; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v5, a1);
  result = (a4 & *(_BYTE *)(v5[2] + a2 + 25)) != 0
        || a3 != 0 && (*(_WORD *)(*(_DWORD *)v5[1] + 2 * a2) & (unsigned __int16)a3) != 0;
  if ( v6 != 0 )
    *(_DWORD *)(v5[0] + 848) &= ~2u;
  return result;
}

