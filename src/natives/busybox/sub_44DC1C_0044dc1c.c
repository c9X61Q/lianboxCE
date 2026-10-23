// busybox.exe @ 0x44dc1c size=27

unsigned int __usercall sub_44DC1C@<eax>(unsigned int a1@<eax>)
{
  unsigned int v1; // eax

  v1 = sub_418A48(a1);
  if ( *(_DWORD *)dword_486010 < v1 && *(_BYTE *)(v1 - 1) == 10 )
    --v1;
  return sub_418A48(v1);
}

