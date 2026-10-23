// busybox.exe @ 0x42a428 size=73

int sub_42A428()
{
  int v0; // ebx
  int v1; // esi
  int v2; // edi

  v0 = sub_42A474();
  while ( sub_446A68() != 0 )
  {
    MultiByteStr += 4;
    v1 = sub_42A474();
    v2 = sub_427670(v0, v1);
    sub_431F68();
    sub_431F68();
    v0 = v2;
  }
  return v0;
}

