// busybox.exe @ 0x420960 size=73

FILE *__thiscall sub_420960(void *this)
{
  FILE *Stream; // ebx
  int v2; // ebp
  int i; // esi
  int v4; // edi

  Stream = (FILE *)sub_4314C0(this);
  if ( Stream != nullptr )
  {
    v2 = 0;
    for ( i = 0; ; *(_DWORD *)(i + 4 * v2++) = v4 )
    {
      v4 = sub_470E94();
      if ( v4 == 0 )
        break;
      i = sub_47168C(v2, 1026);
    }
    fclose(Stream);
    return (FILE *)i;
  }
  return Stream;
}

