// busybox.exe @ 0x423094 size=52

int sub_423094()
{
  int v0; // ebx

  ++*(_DWORD *)(dword_485FF0 + 56);
  v0 = *(_DWORD *)dword_47344C;
  *(_DWORD *)dword_47344C = **(_DWORD **)dword_47344C;
  if ( *(_BYTE *)(v0 + 8) == 1 )
    sub_431ECC();
  sub_4631A8();
  return sub_43B8DC();
}

