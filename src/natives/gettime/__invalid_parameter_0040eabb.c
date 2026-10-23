// gettime.exe @ 0x40eabb size=55

void __cdecl _invalid_parameter(
        wchar_t *Expression,
        wchar_t *FunctionName,
        wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  _BYTE v5[40]; // [esp+0h] [ebp-28h] BYREF

  __crt_cached_ptd_host::__crt_cached_ptd_host((__crt_cached_ptd_host *)v5, nullptr);
  _invalid_parameter_internal(Expression, FunctionName, FileName, LineNo, Reserved, (__crt_cached_ptd_host *)v5);
  __crt_cached_ptd_host::~__crt_cached_ptd_host((__crt_cached_ptd_host *)v5);
}

