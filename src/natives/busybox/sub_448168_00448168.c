// busybox.exe @ 0x448168 size=58

int __usercall sub_448168@<eax>(char *a1@<eax>)
{
  FILE *v2; // eax

  v2 = off_4730E8(2);
  ++*(_DWORD *)(dword_485FF0 + 56);
  sub_46EF20(a1, v2);
  sub_43B8DC();
  return sub_431174();
}

