// busybox.exe @ 0x443400 size=131

__int64 __cdecl sub_443400(int FileHandle, __int64 Offset, int Origin)
{
  void *osfhandle; // eax

  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
  }
  else
  {
    if ( GetFileType(osfhandle) == 1 )
      return lseeki64(FileHandle, Offset, Origin);
    *_errno() = 29;
  }
  return -1;
}

