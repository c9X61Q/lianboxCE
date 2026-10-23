// busybox.exe @ 0x41ca70 size=37

int __usercall sub_41CA70@<eax>(_DWORD *a1@<eax>)
{
  memset(a1, 0, 0x1Cu);
  a1[4] = -1;
  a1[5] = -1;
  a1[6] = -1;
  return 0;
}

