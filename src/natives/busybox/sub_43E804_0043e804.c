// busybox.exe @ 0x43e804 size=99

int sub_43E804()
{
  int result; // eax
  HMODULE LibraryA; // ebx

  result = 1;
  if ( ConvertINetMultiByteToUnicode == nullptr )
  {
    LibraryA = LoadLibraryA("mlang.dll");
    result = 0;
    if ( LibraryA != nullptr )
    {
      ConvertINetMultiByteToUnicode = (HRESULT (__stdcall *)(LPDWORD, DWORD, LPCSTR, LPINT, LPWSTR, LPINT))GetProcAddress(LibraryA, "ConvertINetMultiByteToUnicode");
      ConvertINetUnicodeToMultiByte = (HRESULT (__stdcall *)(LPDWORD, DWORD, LPCWSTR, LPINT, LPSTR, LPINT))GetProcAddress(LibraryA, "ConvertINetUnicodeToMultiByte");
      return 1;
    }
  }
  return result;
}

