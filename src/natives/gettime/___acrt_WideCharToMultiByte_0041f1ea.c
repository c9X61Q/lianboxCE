// gettime.exe @ 0x41f1ea size=108

int __cdecl __acrt_WideCharToMultiByte(
        unsigned int a1,
        unsigned int a2,
        LPCWCH lpWideCharStr,
        int cchWideChar,
        LPSTR lpMultiByteStr,
        int cbMultiByte,
        const CHAR *a7,
        BOOL *a8)
{
  bool v8; // bl
  DWORD v9; // eax
  UINT v10; // edx

  v8 = a1 == 65000 || a1 == 65001;
  v9 = filter_wcstomb_flags(a1, a2);
  if ( v8 && a8 != nullptr )
    *a8 = false;
  return WideCharToMultiByte(
           v10,
           v9,
           lpWideCharStr,
           cchWideChar,
           lpMultiByteStr,
           cbMultiByte,
           !v8 ? a7 : nullptr,
           !v8 ? a8 : nullptr);
}

