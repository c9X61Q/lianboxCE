// busybox.exe @ 0x443380 size=88

int __cdecl sub_443380(int FileHandle)
{
  int v1; // ebx
  void *osfhandle; // eax
  void *v3; // esi
  DWORD Mode[3]; // [esp+8h] [ebp-Ch] BYREF

  v1 = isatty(FileHandle);
  if ( v1 != 0 )
  {
    osfhandle = (void *)_get_osfhandle(FileHandle);
    v3 = osfhandle;
    if ( osfhandle == (void *)-1 || GetFileType(osfhandle) != 2 || !GetConsoleMode(v3, Mode) )
      return 0;
  }
  return v1;
}

