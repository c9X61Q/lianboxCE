// busybox.exe @ 0x452724 size=82

int __usercall sub_452724@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // eax
  int v5; // edx

  v4 = sub_416EC0();
  if ( v5 == -1 && v4 == -1 )
    return 1;
  sub_442EA4(a1);
  sub_442EA4(a2);
  if ( sub_43228C(nullptr, nullptr) != 226 )
    sub_4320C4(nullptr);
  sub_43228C("QUIT", nullptr);
  return 0;
}

