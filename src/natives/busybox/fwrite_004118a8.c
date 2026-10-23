// busybox.exe @ 0x4118a8 size=6

// attributes: thunk
size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  return __imp_fwrite(Buffer, ElementSize, ElementCount, Stream);
}

