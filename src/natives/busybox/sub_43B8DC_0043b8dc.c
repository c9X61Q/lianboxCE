// busybox.exe @ 0x43b8dc size=24

char __cdecl sub_43B8DC()
{
  int v0; // edx
  char result; // al

  v0 = dword_485FF0;
  if ( (*(_DWORD *)(dword_485FF0 + 56))-- == 1 )
  {
    result = *(_BYTE *)(v0 + 60);
    if ( result != 0 )
      sub_45309C();
  }
  return result;
}

