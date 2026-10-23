// busybox.exe @ 0x46ef20 size=97

int __cdecl sub_46EF20(char *Buffer, FILE *Stream)
{
  int v2; // eax
  int v3; // ebx

  v2 = fileno(Stream);
  if ( sub_43C480(v2) != 0 )
    return -(sub_414398(Buffer, Stream) == -1);
  SetLastError(0);
  v3 = fputs(Buffer, Stream);
  if ( v3 == -1 )
    sub_41C430(Stream);
  return v3;
}

