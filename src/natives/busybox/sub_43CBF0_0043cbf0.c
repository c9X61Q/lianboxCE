// busybox.exe @ 0x43cbf0 size=224

int __cdecl sub_43CBF0(int a1, LPCCH lpMultiByteStr, int a3, LPWSTR lpWideCharStr, int *a5)
{
  int cbMultiByte; // ebx
  UINT CodePage; // eax
  bool v7; // bp
  DWORD dwFlags; // edx
  int v9; // eax

  cbMultiByte = (*(int (__cdecl **)(int, LPCCH, int))(a1 + 16))(a1, lpMultiByteStr, a3);
  if ( cbMultiByte != -1 )
  {
    CodePage = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == 20127 && *lpMultiByteStr < 0 )
      goto LABEL_12;
    v7 = true;
    if ( CodePage - 50220 <= 9 )
      v7 = ((0x2A7u >> (CodePage - 44)) & 1) == 0;
    if ( CodePage == 52936
      || CodePage == 54936
      || !v7
      || CodePage == 65000
      || CodePage == 42
      || (dwFlags = 8, CodePage - 57002 <= 9) )
    {
      dwFlags = 0;
    }
    v9 = MultiByteToWideChar(CodePage, dwFlags, lpMultiByteStr, cbMultiByte, lpWideCharStr, *a5);
    *a5 = v9;
    if ( v9 == 0 )
    {
LABEL_12:
      *_errno() = 42;
      return -1;
    }
  }
  return cbMultiByte;
}

