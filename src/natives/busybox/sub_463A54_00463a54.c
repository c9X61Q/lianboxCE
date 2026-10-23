// busybox.exe @ 0x463a54 size=26

void *__usercall sub_463A54@<eax>(unsigned int a1@<eax>)
{
  void *v1; // edx

  v1 = (void *)sub_462C74(a1);
  memset(v1, 0, a1);
  return v1;
}

