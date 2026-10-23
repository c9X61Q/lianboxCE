// busybox.exe @ 0x4526ac size=25

int __usercall sub_4526AC@<eax>(int *a1@<eax>)
{
  int v1; // eax

  v1 = sub_451138(a1);
  return ((v1 & 7) != 0) + v1 / 8;
}

