// gettime.exe @ 0x410ec8 size=350

char *__thiscall _lambda_2116bde18c9e5f34230805ea4a4660ed_::operator()(int this)
{
  const wchar_t *v2; // edi
  errno_t v3; // eax
  char *v5; // ebx
  errno_t v6; // eax
  struct __crt_locale_data *locinfo; // edi
  volatile signed __int32 *v8; // edx
  volatile signed __int32 *v9; // eax
  __crt_locale_pointers Locale; // [esp+Ch] [ebp-10h] BYREF
  int v11; // [esp+14h] [ebp-8h]
  size_t PtNumOfCharConverted; // [esp+18h] [ebp-4h] BYREF

  v2 = (const wchar_t *)call_wsetlocale(**(_DWORD **)this, **(char ***)(this + 4));
  if ( v2 == nullptr )
    return nullptr;
  v11 = __acrt_getptd();
  Locale.locinfo = *(struct __crt_locale_data **)(v11 + 76);
  Locale.mbcinfo = *(struct __crt_multibyte_data **)(v11 + 72);
  PtNumOfCharConverted = 0;
  v3 = _wcstombs_s_l(&PtNumOfCharConverted, nullptr, 0, v2, 0, &Locale);
  if ( v3 != 0 )
  {
    if ( v3 != 22 && v3 != 34 )
      return nullptr;
LABEL_19:
    _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
  }
  v5 = (char *)_malloc_base(PtNumOfCharConverted + 4);
  if ( v5 == nullptr )
    return nullptr;
  v6 = _wcstombs_s_l(nullptr, v5 + 4, PtNumOfCharConverted, v2, 0xFFFFFFFF, &Locale);
  if ( v6 != 0 )
  {
    if ( v6 == 22 || v6 == 34 )
      goto LABEL_19;
    _free_base(v5);
    return nullptr;
  }
  locinfo = Locale.locinfo;
  v8 = *((volatile signed __int32 **)Locale.locinfo + 4 * **(_DWORD **)this + 9);
  if ( v8 != nullptr && _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 0 )
  {
    _free_base(*((void **)locinfo + 4 * **(_DWORD **)this + 9));
    *((_DWORD *)locinfo + 4 * **(_DWORD **)this + 9) = 0;
  }
  if ( (dword_437458 & *(_DWORD *)(v11 + 848)) == 0 )
  {
    v9 = *((volatile signed __int32 **)locinfo + 4 * **(_DWORD **)this + 9);
    if ( v9 != nullptr && _InterlockedDecrement(v9) == 0 )
    {
      _free_base(*((void **)locinfo + 4 * **(_DWORD **)this + 9));
      *((_DWORD *)locinfo + 4 * **(_DWORD **)this + 9) = 0;
    }
  }
  *(_DWORD *)v5 = *((_DWORD *)locinfo + 3);
  *((_DWORD *)locinfo + 4 * **(_DWORD **)this + 9) = v5;
  *((_DWORD *)locinfo + 4 * **(_DWORD **)this + 7) = v5 + 4;
  return v5 + 4;
}

