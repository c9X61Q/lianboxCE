// busybox.exe @ 0x42a14c size=115

int sub_42A14C()
{
  int v0; // ebx

  v0 = sub_42A1C0();
  while ( sub_446A68() != 0 )
  {
    MultiByteStr += 4;
    sub_42A1C0();
    if ( sub_446FB8() != 0 || sub_446FB8() != 0 )
    {
      sub_431F68();
      sub_431F68();
      v0 = sub_4728CC();
      *(_DWORD *)(v0 + 8) = 0;
      *(_DWORD *)(v0 + 12) = 0;
    }
    else
    {
      sub_431F68();
    }
  }
  return v0;
}

