// gettime.exe @ 0x4154a9 size=131

wchar_t *__cdecl _wsetlocale(int Category, const wchar_t *Locale)
{
  _DWORD v3[5]; // [esp+0h] [ebp-28h] BYREF
  int *v4; // [esp+14h] [ebp-14h] BYREF
  int v5; // [esp+18h] [ebp-10h] BYREF
  wchar_t *v6; // [esp+1Ch] [ebp-Ch] BYREF
  int v7; // [esp+20h] [ebp-8h] BYREF
  char v8; // [esp+27h] [ebp-1h] BYREF

  v6 = nullptr;
  v5 = 0;
  if ( (unsigned int)Category <= 5 )
  {
    v7 = __acrt_getptd();
    __acrt_eagerly_load_locale_apis();
    __acrt_update_thread_locale_data();
    *(_DWORD *)(v7 + 848) |= 0x10u;
    v4 = &v7;
    v3[0] = &v5;
    v3[1] = &v7;
    v3[2] = &v6;
    v3[3] = &Category;
    v3[4] = &Locale;
    __crt_seh_guarded_call<void>::operator()<_lambda_ac03c5d59bd18b09cb88b28331f6bfed_,_lambda_2a444430fde8c29194d880d93eed5e8f_ &,_lambda_02db5278e8aef8b5e4976579d73f5304_ &>(
      (int)&v8,
      (int)v3,
      &v4);
    return v6;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return nullptr;
  }
}

