// busybox.exe @ 0x411960 size=6

// attributes: thunk
int __cdecl write(int FileHandle, const void *Buf, unsigned int MaxCharCount)
{
  return _write(FileHandle, Buf, MaxCharCount);
}

