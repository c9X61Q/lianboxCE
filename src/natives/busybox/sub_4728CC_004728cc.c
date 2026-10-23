// busybox.exe @ 0x4728cc size=26

void *__usercall sub_4728CC@<eax>(size_t a1@<eax>)
{
  void *v1; // edx

  v1 = sub_470E78(a1);
  memset(v1, 0, a1);
  return v1;
}

