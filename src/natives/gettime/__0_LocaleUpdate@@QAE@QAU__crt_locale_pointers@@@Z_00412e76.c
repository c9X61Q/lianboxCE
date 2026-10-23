// gettime.exe @ 0x412e76 size=130

_LocaleUpdate *__thiscall _LocaleUpdate::_LocaleUpdate(_LocaleUpdate *this, struct __crt_locale_pointers *const a2)
{
  struct __crt_locale_data **v3; // ebx
  struct __crt_locale_data *locinfo; // eax
  struct __crt_multibyte_data *mbcinfo; // ecx
  int v6; // eax
  int v7; // eax

  *((_BYTE *)this + 12) = 0;
  v3 = (struct __crt_locale_data **)((char *)this + 4);
  if ( a2 != nullptr )
  {
    locinfo = a2->locinfo;
    mbcinfo = a2->mbcinfo;
LABEL_5:
    *v3 = locinfo;
    *((_DWORD *)this + 2) = mbcinfo;
    return this;
  }
  if ( dword_438A0C == 0 )
  {
    locinfo = (struct __crt_locale_data *)off_437260;
    mbcinfo = (struct __crt_multibyte_data *)off_437264;
    goto LABEL_5;
  }
  v6 = __acrt_getptd();
  *(_DWORD *)this = v6;
  *v3 = *(struct __crt_locale_data **)(v6 + 76);
  *((_DWORD *)this + 2) = *(_DWORD *)(v6 + 72);
  sub_417F5D(v6, (char *)this + 4);
  sub_417FBB(*(_DWORD *)this, (char *)this + 8);
  v7 = *(_DWORD *)(*(_DWORD *)this + 848);
  if ( (v7 & 2) == 0 )
  {
    *(_DWORD *)(*(_DWORD *)this + 848) = v7 | 2;
    *((_BYTE *)this + 12) = 1;
  }
  return this;
}

