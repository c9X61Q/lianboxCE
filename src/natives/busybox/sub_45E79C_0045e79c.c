// busybox.exe @ 0x45e79c size=68

char __usercall sub_45E79C@<al>(const char *a1@<eax>, void *a2@<ecx>)
{
  size_t v3; // eax
  _DWORD *v4; // edx

  ++*(_DWORD *)(dword_485FF0 + 56);
  sub_4527B4(a2);
  *((_DWORD *)off_473358 + 5) = a1;
  v3 = strlen(a1);
  v4 = off_473358;
  *((_DWORD *)off_473358 + 3) = v3;
  v4[6] = 0;
  v4[1] = 1;
  return sub_43B8DC();
}

