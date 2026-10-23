// busybox.exe @ 0x47168c size=69

char *__usercall sub_47168C@<eax>(char *a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>)
{
  char *v3; // esi
  int v5; // ebp
  unsigned int v6; // edi

  v3 = a1;
  v5 = 1 << a2;
  if ( (a3 & ((1 << a2) - 1)) == 0 )
  {
    v6 = a2 >> 8;
    v3 = (char *)sub_471600(a1, (a2 >> 8) * (v5 + a3 + 1));
    memset(&v3[v6 * a3], 0, v6 * (v5 + 1));
  }
  return v3;
}

