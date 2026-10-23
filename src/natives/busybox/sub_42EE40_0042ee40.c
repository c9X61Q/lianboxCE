// busybox.exe @ 0x42ee40 size=122

int __cdecl sub_42EE40(int FileHandle, int a2, int a3)
{
  int v3; // ebx
  int v4; // esi
  _BYTE *i; // ebp
  int v6; // eax

  v3 = a2;
  if ( a2 != 0 )
  {
    v4 = 0;
    if ( (unsigned int)(a2 - 1) > 2 )
    {
      *_errno() = 40;
      return -1;
    }
  }
  else
  {
    for ( i = (_BYTE *)sub_4728CC(); ; i[v6] = 1 )
    {
      v6 = dup(FileHandle);
      v4 = v6;
      if ( a3 <= v6 || v6 < 0 )
        break;
    }
    while ( v3 < a3 )
    {
      if ( i[v3] != 0 )
        close(v3);
      ++v3;
    }
    free(i);
  }
  return v4;
}

