// busybox.exe @ 0x462c50 size=35

int __usercall sub_462C50@<eax>(const char *Str@<eax>, int a2@<edx>)
{
  size_t v2; // eax

  v2 = strlen(Str);
  return sub_4631C4(a2, v2);
}

