// gettime.exe @ 0x41a3eb size=60

int __stdcall __acrt_GetUserDefaultLocaleName(wchar_t *Destination, rsize_t SizeInWords)
{
  int (__stdcall *v2)(); // eax
  LCID UserDefaultLCID; // eax

  v2 = sub_419FC8();
  if ( v2 != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), wchar_t *, rsize_t))v2)(v2, Destination, SizeInWords);
  UserDefaultLCID = GetUserDefaultLCID();
  return __acrt_LCIDToLocaleName(UserDefaultLCID, Destination, SizeInWords, 0);
}

