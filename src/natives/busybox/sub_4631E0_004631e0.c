// busybox.exe @ 0x4631e0 size=52

int sub_4631E0()
{
  int v0; // ebx
  int result; // eax

  v0 = dword_485FF0;
  result = 0;
  if ( *(_BYTE *)(dword_485FF0 + 2) == 0 && dword_4732C4 != 0 && *(_BYTE *)(dword_4732C4 + 24) == 1 )
  {
    sub_448168("You have stopped jobs.\n");
    *(_BYTE *)(v0 + 2) = 2;
    return 1;
  }
  return result;
}

