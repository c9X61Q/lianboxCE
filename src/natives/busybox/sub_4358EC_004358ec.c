// busybox.exe @ 0x4358ec size=100

LPSTR sub_4358EC()
{
  LPSTR result; // eax
  BOOL UserNameA; // edx
  LPSTR i; // edx
  DWORD pcbBuffer; // [esp+8h] [ebp-4h] BYREF

  pcbBuffer = 100;
  if ( lpBuffer == nullptr )
    lpBuffer = (LPSTR)sub_4728CC();
  result = lpBuffer;
  if ( *lpBuffer == 0 )
  {
    UserNameA = GetUserNameA(lpBuffer, &pcbBuffer);
    result = nullptr;
    if ( UserNameA )
    {
      result = lpBuffer;
      for ( i = lpBuffer; *i != 0; ++i )
      {
        if ( *i == 32 )
          *i = 95;
      }
    }
  }
  return result;
}

