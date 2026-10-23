// busybox.exe @ 0x431fe8 size=101

int __cdecl sub_431FE8(int FileHandle)
{
  void *osfhandle; // ebx
  DWORD LastError; // eax

  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
  }
  else
  {
    osfhandle = (void *)FlushFileBuffers(osfhandle);
    if ( osfhandle != nullptr )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError != 5 )
      {
        if ( LastError == 6 )
          *_errno() = 22;
        else
          *_errno() = 5;
        return -1;
      }
    }
  }
  return (int)osfhandle;
}

