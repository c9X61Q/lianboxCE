// gettime.exe @ 0x419e7d size=124

BOOL __stdcall __crt_seh_guarded_call<int>::operator()<_lambda_6b4b7855443974f2b4b77000ea21c99c_,_lambda_8f7d3b162ab39427f4fa9995c67a7986_ &,_lambda_cc9a5ba8a5d8428b9634eab82665e5dc_>(
        int *a1,
        int **a2,
        int *a3)
{
  BOOL v3; // esi

  __acrt_lock(*a1);
  dword_438E04 = unknown_libname_88(**a2);
  v3 = EnumSystemLocalesW(LocaleEnumProc, 1u);
  dword_438E04 = __security_cookie;
  __acrt_unlock(*a3);
  return v3;
}

