// gettime.exe @ 0x41a4aa size=63

int __stdcall __acrt_LCIDToLocaleName(int a1, wchar_t *Destination, rsize_t SizeInWords, int a4)
{
  int (__stdcall *v4)(); // eax

  v4 = sub_419FFF();
  if ( v4 != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), int, wchar_t *, rsize_t, int))v4)(
             v4,
             a1,
             Destination,
             SizeInWords,
             a4);
  else
    return __acrt_DownlevelLCIDToLocaleName(a1, Destination, SizeInWords);
}

