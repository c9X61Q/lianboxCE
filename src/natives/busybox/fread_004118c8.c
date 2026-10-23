// busybox.exe @ 0x4118c8 size=6

// attributes: thunk
size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  return __imp_fread(Buffer, ElementSize, ElementCount, Stream);
}

