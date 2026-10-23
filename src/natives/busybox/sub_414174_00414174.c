// busybox.exe @ 0x414174 size=67

int __usercall sub_414174@<eax>(const char *a1@<eax>)
{
  int v2; // esi
  int i; // ebx

  v2 = sub_4728CC();
  for ( i = 0; i != 10; ++i )
    *(_DWORD *)(v2 + 4 * i) = sub_4708BC("/var/lib/dpkg/info/%s.%s", a1, off_47D720[i]);
  return v2;
}

