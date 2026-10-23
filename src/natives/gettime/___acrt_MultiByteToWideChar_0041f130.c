// gettime.exe @ 0x41f130 size=42

int __cdecl __acrt_MultiByteToWideChar(
        UINT CodePage,
        unsigned int a2,
        LPCCH lpMultiByteStr,
        int cbMultiByte,
        LPWSTR lpWideCharStr,
        int cchWideChar)
{
  DWORD v6; // eax

  v6 = filter_mbtowcs_flags(CodePage, a2);
  return MultiByteToWideChar(CodePage, v6, lpMultiByteStr, cbMultiByte, lpWideCharStr, cchWideChar);
}

