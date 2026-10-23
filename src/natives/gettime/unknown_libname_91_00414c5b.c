// gettime.exe @ 0x414c5b size=254

// Microsoft VisualC universal runtime
int __thiscall unknown_libname_91(void ***this)
{
  int v2; // eax
  const unsigned __int16 *v3; // eax
  int v4; // eax
  int result; // eax

  _copytlocinfo_nolock(**this, *((_DWORD *)**(this + 1) + 19));
  v2 = _wsetlocale_nolock((int)**this, (int)**(this + 3), (wchar_t *)**(this + 4));
  **(this + 2) = (void *)v2;
  if ( v2 != 0 )
  {
    v3 = (const unsigned __int16 *)**(this + 4);
    if ( v3 != nullptr )
    {
      v4 = wcscmp(v3, word_437268);
      if ( v4 != 0 )
        v4 = v4 < 0 ? -1 : 1;
      if ( v4 != 0 )
        _InterlockedExchange(&dword_438A0C, 1);
    }
    _updatetlocinfoEx_nolock((char *)**(this + 1) + 76, **this);
    __acrt_release_locale_ref(**this);
    result = (int)**(this + 1);
    if ( (*(_BYTE *)(result + 848) & 2) == 0 && (dword_437458 & 1) == 0 )
    {
      _updatetlocinfoEx_nolock(&dword_438A30, *(_DWORD *)(result + 76));
      off_4370C0 = *((_UNKNOWN ***)dword_438A30 + 34);
      off_4370CC = *(wchar_t **)dword_438A30;
      result = *((_DWORD *)dword_438A30 + 1);
      dword_43726C = result;
    }
  }
  else
  {
    __acrt_release_locale_ref(**this);
    return __acrt_free_locale(**this);
  }
  return result;
}

