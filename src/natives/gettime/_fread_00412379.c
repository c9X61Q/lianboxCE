// gettime.exe @ 0x412379 size=29

size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  return fread_s(Buffer, 0xFFFFFFFF, ElementSize, ElementCount, Stream);
}

