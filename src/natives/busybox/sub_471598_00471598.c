// busybox.exe @ 0x471598 size=22

int __usercall sub_471598@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int i; // ecx

  for ( i = a2 + a3; i != a2; *(_BYTE *)(result - 1) ^= *(_BYTE *)(a2 - 1) )
  {
    ++result;
    ++a2;
  }
  return result;
}

