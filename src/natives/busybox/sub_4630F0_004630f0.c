// busybox.exe @ 0x4630f0 size=47

char *__usercall sub_4630F0@<eax>(const char *a1@<eax>)
{
  int *v2; // eax
  char *v3; // eax

  v2 = _errno();
  v3 = strerror(*v2);
  return sub_463088((int)"'%s' %s", a1, v3);
}

