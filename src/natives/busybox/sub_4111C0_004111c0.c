// busybox.exe @ 0x4111c0 size=156

int __cdecl sub_4111C0(LPSTR lpMultiByteStr, WCHAR a2, UINT CodePage, int cbMultiByte)
{
  int result; // eax
  WCHAR WideCharStr[8]; // [esp+2Ch] [ebp-20h] BYREF
  BOOL UsedDefaultChar; // [esp+3Ch] [ebp-10h] BYREF

  WideCharStr[0] = a2;
  if ( CodePage == 0 )
  {
    if ( a2 <= 0xFFu )
    {
      *lpMultiByteStr = a2;
      return 1;
    }
LABEL_7:
    *errno() = 42;
    return -1;
  }
  UsedDefaultChar = false;
  result = WideCharToMultiByte(CodePage, 0, WideCharStr, 1, lpMultiByteStr, cbMultiByte, nullptr, &UsedDefaultChar);
  if ( result == 0 || UsedDefaultChar )
    goto LABEL_7;
  return result;
}

