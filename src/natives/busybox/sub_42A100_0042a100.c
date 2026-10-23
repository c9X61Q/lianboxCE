// busybox.exe @ 0x42a100 size=75

int sub_42A100()
{
  int v0; // ebx
  int v1; // esi

  v0 = sub_42A14C();
  while ( sub_446A68() != 0 )
  {
    MultiByteStr += 4;
    v1 = sub_42A14C();
    if ( sub_446FB8() != 0 )
    {
      sub_431F68();
    }
    else
    {
      sub_431F68();
      v1 = v0;
    }
    v0 = v1;
  }
  return v0;
}

