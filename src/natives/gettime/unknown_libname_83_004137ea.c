// gettime.exe @ 0x4137ea size=36

// Microsoft VisualC universal runtime
int __stdcall unknown_libname_83(unsigned int a1, LPCWCH lpWideCharStr, LPSTR lpMultiByteStr, int cbMultiByte)
{
  return __acrt_WideCharToMultiByte(a1, 0, lpWideCharStr, -1, lpMultiByteStr, cbMultiByte, 0, 0);
}

