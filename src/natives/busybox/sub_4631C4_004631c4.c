// busybox.exe @ 0x4631c4 size=28

char *__usercall sub_4631C4@<eax>(const void *a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>)
{
  char *v5; // eax

  v5 = (char *)sub_441F7C(a2, a3);
  qmemcpy(v5, a1, a2);
  return &v5[a2];
}

