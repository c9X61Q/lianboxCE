// busybox.exe @ 0x411800 size=6

// attributes: thunk
int __cdecl rename(const char *OldFilename, const char *NewFilename)
{
  return __imp_rename(OldFilename, NewFilename);
}

