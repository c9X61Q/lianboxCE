// busybox.exe @ 0x410e20 size=406

int __cdecl sub_410E20(
        LPWSTR lpWideCharStr,
        BYTE *lpMultiByteStr,
        unsigned int a3,
        int *a4,
        UINT CodePage,
        unsigned int a6)
{
  int v6; // edx
  BYTE TestChar; // al
  int v8; // eax
  CHAR v10[16]; // [esp+2Ch] [ebp-10h] BYREF

  if ( lpMultiByteStr == nullptr )
    return 0;
  if ( a3 == 0 )
    return -2;
  v6 = *a4;
  TestChar = *lpMultiByteStr;
  *a4 = 0;
  *(_DWORD *)v10 = v6;
  if ( TestChar == 0 )
  {
    *lpWideCharStr = 0;
    return 0;
  }
  if ( a6 > 1 )
  {
    if ( (_BYTE)v6 != 0 )
    {
      v10[1] = TestChar;
      v8 = MultiByteToWideChar(CodePage, 8u, v10, 2, lpWideCharStr, 1);
LABEL_9:
      if ( v8 != 0 )
        return 2;
LABEL_19:
      *errno() = 42;
      return -1;
    }
    if ( IsDBCSLeadByteEx(CodePage, TestChar) )
    {
      if ( a3 > 1 )
      {
        v8 = MultiByteToWideChar(CodePage, 8u, (LPCCH)lpMultiByteStr, 2, lpWideCharStr, 1);
        goto LABEL_9;
      }
      *(_BYTE *)a4 = *lpMultiByteStr;
      return -2;
    }
  }
  if ( CodePage == 0 )
  {
    *lpWideCharStr = *lpMultiByteStr;
    return 1;
  }
  if ( MultiByteToWideChar(CodePage, 8u, (LPCCH)lpMultiByteStr, 1, lpWideCharStr, 1) != 0 )
    return 1;
  goto LABEL_19;
}

