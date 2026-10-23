// busybox.exe @ 0x45c090 size=101

void __usercall sub_45C090(const char *a1@<eax>, const char *a2@<edx>)
{
  char *Block; // esi
  DWORD v4; // ebx

  Block = (char *)sub_4708BC("/var/lib/dpkg/info/%s.%s", a1, a2);
  v4 = 0;
  if ( sub_442D6C(Block, 0) == 0 )
    v4 = sub_444E20(Block);
  free(Block);
  if ( v4 != 0 )
    sub_41784C("%s failed, exit code %d", a2, v4);
}

