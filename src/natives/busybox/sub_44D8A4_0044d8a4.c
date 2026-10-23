// busybox.exe @ 0x44d8a4 size=89

char __fastcall sub_44D8A4(char a1)
{
  void **v1; // ebx

  v1 = (void **)off_473358;
  if ( off_473358 == &unk_473120 )
    return a1;
  ++*(_DWORD *)(dword_485FF0 + 56);
  if ( (int)v1[2] >= 0 )
    sub_442EA4((int)v1[2]);
  sub_4631A8();
  while ( v1[7] != nullptr )
    sub_44D9D0();
  off_473358 = *v1;
  sub_4631A8();
  return sub_43B8DC();
}

