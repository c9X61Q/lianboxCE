// busybox.exe @ 0x46ee30 size=204

int __usercall sub_46EE30@<eax>(int cbMultiByte@<ecx>, LPSTR lpMultiByteStr@<edx>, const CHAR *a3@<eax>)
{
  int result; // eax
  WCHAR *lpWideCharStr; // edi
  LPSTR v8; // edx
  WCHAR *v9; // eax
  CHAR *v10; // ebx

  if ( lpMultiByteStr == nullptr )
    return 0;
  result = 0;
  if ( a3 != nullptr )
  {
    lpWideCharStr = (WCHAR *)sub_470E78();
    MultiByteToWideChar(1u, 0, a3, cbMultiByte, lpWideCharStr, cbMultiByte);
    WideCharToMultiByte(0, 0, lpWideCharStr, cbMultiByte, lpMultiByteStr, cbMultiByte, nullptr, nullptr);
    if ( GetConsoleOutputCP() == 858 )
    {
      v8 = lpMultiByteStr;
      v9 = lpWideCharStr;
      v10 = &lpMultiByteStr[cbMultiByte];
      while ( v8 != v10 )
      {
        if ( *v9 == 305 )
          *v8 = 0x80;
        ++v8;
        ++v9;
      }
    }
    free(lpWideCharStr);
    return 1;
  }
  return result;
}

