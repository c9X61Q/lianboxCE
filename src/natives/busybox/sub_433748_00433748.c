// busybox.exe @ 0x433748 size=292

int __usercall sub_433748@<eax>(const char *lpFileName@<eax>, char *lpFileInformation@<edx>)
{
  int v4; // ebx
  HANDLE FirstFileA; // eax
  DWORD LastError; // eax
  size_t v7; // eax
  char v8; // al
  struct _WIN32_FIND_DATAA FindFileData; // [esp+Ch] [ebp-150h] BYREF

  v4 = 0;
  if ( !GetFileAttributesExA(lpFileName, GetFileExInfoStandard, lpFileInformation) )
  {
    v4 = 0;
    if ( GetLastError() != 32 || (FirstFileA = FindFirstFileA(lpFileName, &FindFileData)) == (HANDLE)-1 )
    {
      LastError = GetLastError();
      if ( LastError == 123 )
      {
        v7 = strlen(lpFileName);
        v4 = 2;
        if ( v7 > 1 )
        {
          v8 = lpFileName[v7 - 1];
          if ( v8 == 92 || v8 == 47 )
            return 20;
        }
      }
      else
      {
        v4 = 2;
        if ( LastError <= 0x7B )
        {
          v4 = 38;
          if ( LastError != 111 )
          {
            v4 = 2;
            if ( LastError <= 0x6F )
            {
              v4 = 13;
              if ( LastError != 36 )
              {
                v4 = 2;
                if ( LastError <= 0x21 )
                {
                  v4 = 13;
                  if ( LastError <= 0x1F && LastError != 5 )
                    return LastError == 8 ? 12 : 2;
                }
              }
            }
          }
        }
      }
    }
    else
    {
      *(_DWORD *)lpFileInformation = FindFileData.dwFileAttributes;
      *(FILETIME *)(lpFileInformation + 4) = FindFileData.ftCreationTime;
      *(FILETIME *)(lpFileInformation + 12) = FindFileData.ftLastAccessTime;
      *(FILETIME *)(lpFileInformation + 20) = FindFileData.ftLastWriteTime;
      *((_DWORD *)lpFileInformation + 7) = FindFileData.nFileSizeHigh;
      *((_DWORD *)lpFileInformation + 8) = FindFileData.nFileSizeLow;
      FindClose(FirstFileA);
    }
  }
  return v4;
}

