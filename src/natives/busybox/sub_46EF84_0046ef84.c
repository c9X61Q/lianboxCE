// busybox.exe @ 0x46ef84 size=182

size_t __cdecl sub_46EF84(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // eax
  size_t v5; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  void *v8; // ebp
  size_t v9; // esi

  v4 = ElementCount;
  if ( ElementCount > ElementSize )
    v4 = ElementSize;
  if ( v4 == 1 && (v6 = fileno(Stream), sub_43C480(v6) != 0) )
  {
    v7 = ElementCount;
    if ( ElementCount < ElementSize )
      v7 = ElementSize;
    v8 = (void *)sub_470E78();
    qmemcpy(v8, Buffer, v7);
    *((_BYTE *)v8 + v7) = 0;
    v9 = sub_414398((const char *)v8, Stream);
    free(v8);
    v5 = ElementCount;
    if ( v9 == -1 )
      return 0;
  }
  else
  {
    SetLastError(0);
    v5 = fwrite(Buffer, ElementSize, ElementCount, Stream);
    if ( ElementCount > v5 )
      sub_41C430(Stream);
  }
  return v5;
}

