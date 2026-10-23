// busybox.exe @ 0x431550 size=25

char sub_431550()
{
  int v0; // eax
  char result; // al

  v0 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 56) = 0;
  result = *(_BYTE *)(v0 + 60);
  if ( result != 0 )
    sub_45309C();
  return result;
}

