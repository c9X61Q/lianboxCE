// busybox.exe @ 0x448130 size=53

char __usercall sub_448130@<al>(char *a1@<eax>)
{
  FILE *v2; // eax

  v2 = off_4730E8(1);
  ++*(_DWORD *)(dword_485FF0 + 56);
  sub_46EF20(a1, v2);
  return sub_43B8DC();
}

