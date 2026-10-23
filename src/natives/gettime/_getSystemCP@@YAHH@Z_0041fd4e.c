// gettime.exe @ 0x41fd4e size=113

UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v2, nullptr);
  dword_438E28 = 0;
  result = a1;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_438E28 = 1;
      result = GetOEMCP();
      break;
    case 0xFFFFFFFD:
      dword_438E28 = 1;
      result = GetACP();
      break;
    case 0xFFFFFFFC:
      dword_438E28 = 1;
      result = *(_DWORD *)(v2[1] + 8);
      break;
    default:
      break;
  }
  if ( v3 != 0 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return result;
}

