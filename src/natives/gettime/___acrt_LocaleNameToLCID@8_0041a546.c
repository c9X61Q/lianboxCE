// gettime.exe @ 0x41a546 size=49

int __stdcall __acrt_LocaleNameToLCID(wchar_t *a1, int a2)
{
  int (__stdcall *v2)(); // eax

  v2 = sub_41A033();
  if ( v2 != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), wchar_t *, int))v2)(v2, a1, a2);
  else
    return __acrt_DownlevelLocaleNameToLCID(a1);
}

