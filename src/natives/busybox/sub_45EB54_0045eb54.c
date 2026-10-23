// busybox.exe @ 0x45eb54 size=36

int __usercall sub_45EB54@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _DWORD *Block; // eax

  Block = (_DWORD *)sub_45EAA0(a1, a2, a3);
  if ( Block[1] != 0 )
  {
    sub_431588(Block);
    return 0;
  }
  else
  {
    free(Block);
    return 1;
  }
}

