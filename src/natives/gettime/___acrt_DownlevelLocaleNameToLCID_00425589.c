// gettime.exe @ 0x425589 size=44

int __cdecl __acrt_DownlevelLocaleNameToLCID(wchar_t *a1)
{
  int TableIndexFromLocaleName; // eax

  if ( a1 != nullptr && (unsigned int)(TableIndexFromLocaleName = GetTableIndexFromLocaleName(a1)) < 0xE4 )
    return dword_42E5A0[2 * TableIndexFromLocaleName];
  else
    return 0;
}

