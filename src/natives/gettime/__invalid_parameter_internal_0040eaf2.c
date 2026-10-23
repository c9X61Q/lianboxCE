// gettime.exe @ 0x40eaf2 size=125

int __cdecl _invalid_parameter_internal(
        wchar_t *Expression,
        wchar_t *FunctionName,
        wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved,
        struct __acrt_ptd **a6)
{
  struct __acrt_ptd *v6; // eax
  int (__cdecl *v7)(wchar_t *, wchar_t *, wchar_t *, unsigned int, uintptr_t); // esi
  wchar_t *v9; // [esp-14h] [ebp-1Ch]
  wchar_t *v10; // [esp-10h] [ebp-18h]
  wchar_t *v11; // [esp-Ch] [ebp-14h]
  unsigned int v12; // [esp-8h] [ebp-10h]
  uintptr_t v13; // [esp-4h] [ebp-Ch]

  v6 = *a6;
  if ( (*a6 != nullptr
     || (v6 = __crt_cached_ptd_host::force_synchronize_per_thread_data((__crt_cached_ptd_host *)a6)) != nullptr)
    && (v7 = *((int (__cdecl **)(wchar_t *, wchar_t *, wchar_t *, unsigned int, uintptr_t))v6 + 215)) != nullptr )
  {
    v13 = Reserved;
    v12 = LineNo;
    v11 = FileName;
    v10 = FunctionName;
    v9 = Expression;
  }
  else
  {
    v13 = Reserved;
    v12 = LineNo;
    v11 = FileName;
    v10 = FunctionName;
    v7 = (int (__cdecl *)(wchar_t *, wchar_t *, wchar_t *, unsigned int, uintptr_t))__ROR4__(
                                                                                      __security_cookie
                                                                                    ^ dword_438754[__crt_cached_ptd_host::check_synchronize_global_state_index((__crt_cached_ptd_host *)a6)],
                                                                                      __security_cookie & 0x1F);
    v9 = Expression;
    if ( v7 == nullptr )
      _invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
  }
  return v7(v9, v10, v11, v12, v13);
}

