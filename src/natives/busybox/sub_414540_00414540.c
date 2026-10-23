// busybox.exe @ 0x414540 size=86

void __usercall sub_414540(const char *a1@<eax>, const char *a2@<edx>)
{
  void *Block; // edi
  FILE *v3; // ebx

  Block = (void *)sub_4708BC("/var/lib/dpkg/info/%s.%s", a1, a2);
  v3 = (FILE *)sub_4314C0();
  free(Block);
  if ( v3 != nullptr )
  {
    while ( sub_470E94() != 0 )
      sub_43E368();
    fclose(v3);
  }
}

