// busybox.exe @ 0x465f44 size=28

void *__usercall sub_465F44@<eax>(int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>)
{
  void *v3; // ebx

  v3 = (void *)sub_465ED8(a1, a2, a3);
  memset(v3, 0, a2);
  return v3;
}

