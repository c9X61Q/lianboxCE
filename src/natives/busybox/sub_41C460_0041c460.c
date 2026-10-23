// busybox.exe @ 0x41c460 size=84

int __usercall sub_41C460@<eax>(int a1@<eax>, int a2@<ecx>)
{
  DWORD LastError; // eax
  void *osfhandle; // eax
  DWORD FileType; // eax
  int v6; // edx
  bool v7; // zf

  LastError = GetLastError();
  if ( LastError == 232 )
  {
    osfhandle = (void *)_get_osfhandle(a1);
    FileType = GetFileType(osfhandle);
    a2 = v6;
    v7 = FileType == 3;
  }
  else
  {
    v7 = LastError == 109;
  }
  if ( v7 )
  {
    if ( dword_473594 == 0 )
      exit(141);
    *_errno() = 32;
  }
  return a2;
}

