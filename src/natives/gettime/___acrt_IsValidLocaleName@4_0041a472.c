// gettime.exe @ 0x41a472 size=56

int __stdcall __acrt_IsValidLocaleName(wchar_t *a1)
{
  int (__stdcall *v1)(); // eax
  LCID v3; // eax

  v1 = sub_419FE2();
  if ( v1 != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), wchar_t *))v1)(v1, a1);
  v3 = __acrt_LocaleNameToLCID(a1, 0);
  return IsValidLocale(v3, 1u);
}

