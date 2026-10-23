// busybox.exe @ 0x43ccd0 size=291

int __cdecl sub_43CCD0(int a1, LPCWCH lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte)
{
  int *v5; // eax
  UINT CodePage; // edx
  unsigned int v7; // ecx
  bool v8; // al
  DWORD dwFlags; // eax
  BOOL *lpUsedDefaultChar; // ecx
  int v11; // eax
  int v12; // ebx
  BOOL UsedDefaultChar; // [esp+20h] [ebp-10h] BYREF

  UsedDefaultChar = false;
  if ( cbMultiByte == 0 )
  {
    v5 = _errno();
LABEL_14:
    *v5 = 7;
    return -1;
  }
  CodePage = *(_DWORD *)a1;
  v7 = *(_DWORD *)a1 - 50220;
  v8 = true;
  if ( v7 <= 9 )
    v8 = ((0x2A7u >> v7) & 1) == 0;
  if ( CodePage == 52936 || CodePage - 65000 <= 1 || !v8 || CodePage == 54936 || CodePage - 57002 <= 9 || CodePage == 42 )
  {
    dwFlags = 0;
    lpUsedDefaultChar = nullptr;
  }
  else
  {
    dwFlags = (*(_DWORD *)(a1 + 4) & 2) == 0 ? 0x400 : 0;
    lpUsedDefaultChar = &UsedDefaultChar;
  }
  v11 = WideCharToMultiByte(
          CodePage,
          dwFlags,
          lpWideCharStr,
          cchWideChar,
          lpMultiByteStr,
          cbMultiByte,
          nullptr,
          lpUsedDefaultChar);
  v12 = v11;
  if ( v11 == 0 )
  {
    if ( GetLastError() == 122 )
    {
      v5 = _errno();
      goto LABEL_14;
    }
LABEL_19:
    *_errno() = 42;
    return -1;
  }
  if ( UsedDefaultChar && (*(_BYTE *)(a1 + 4) & 2) == 0
    || (*(int (__cdecl **)(int, LPSTR, int))(a1 + 16))(a1, lpMultiByteStr, v11) != v11 )
  {
    goto LABEL_19;
  }
  return v12;
}

