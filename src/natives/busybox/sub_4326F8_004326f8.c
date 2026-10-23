// busybox.exe @ 0x4326f8 size=34

int __usercall sub_4326F8@<eax>(char *Str@<eax>)
{
  size_t v1; // eax

  v1 = strlen(Str);
  return sub_43269C(v1, Str);
}

