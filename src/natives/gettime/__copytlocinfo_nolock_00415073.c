// gettime.exe @ 0x415073 size=47

void __cdecl _copytlocinfo_nolock(_DWORD *a1, _DWORD *a2)
{
  if ( a2 != nullptr && a1 != nullptr && a1 != a2 )
  {
    qmemcpy(a1, a2, 0xB8u);
    a1[3] = 0;
    __acrt_add_locale_ref(a1);
  }
}

