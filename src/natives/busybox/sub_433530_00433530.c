// busybox.exe @ 0x433530 size=84

LPSTR sub_433530()
{
  if ( lpFilename == nullptr )
    lpFilename = (LPSTR)sub_4728CC();
  if ( *lpFilename == 0 )
  {
    GetModuleFileNameA(nullptr, lpFilename, 0x104u);
    sub_418E48(lpFilename);
  }
  return lpFilename;
}

