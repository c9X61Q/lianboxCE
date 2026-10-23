// gettime.exe @ 0x4194c1 size=63

int __cdecl __acrt_get_utf8_acp_compatibility_codepage()
{
  int v0; // edx
  _DWORD v2[3]; // [esp+0h] [ebp-10h] BYREF
  char v3; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v2, nullptr);
  v0 = 65001;
  if ( *(_DWORD *)(v2[1] + 8) != 65001 )
    v0 = __acrt_AreFileApisANSI() == 0;
  if ( v3 != 0 )
    *(_DWORD *)(v2[0] + 848) &= ~2u;
  return v0;
}

