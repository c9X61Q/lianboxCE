// busybox.exe @ 0x451864 size=42

int __usercall sub_451864@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  a1[3] = sub_4728CC(a3);
  *a1 = 0;
  a1[1] = a2;
  a1[2] = 0;
  return 0;
}

