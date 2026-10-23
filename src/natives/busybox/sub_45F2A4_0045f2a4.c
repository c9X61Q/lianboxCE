// busybox.exe @ 0x45f2a4 size=54

int __usercall sub_45F2A4@<eax>(_DWORD *a1@<eax>, void *a2@<edx>)
{
  *((_BYTE *)a1 + a1[50]) ^= 6u;
  *((_BYTE *)a1 + a1[51] - 1) += 0x80;
  sub_45F338();
  qmemcpy(a2, a1, 0x40u);
  return 64;
}

