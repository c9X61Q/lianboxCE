// busybox.exe @ 0x42e728 size=77

int __usercall sub_42E728@<eax>(char *a1@<eax>)
{
  unsigned int v1; // esi
  unsigned int v2; // edx
  unsigned int v3; // edi
  int v4; // ecx

  if ( *a1 == 43 )
    ++a1;
  v1 = sub_418400(a1, nullptr, 10);
  v3 = v2;
  if ( *_errno() != 0 )
    sub_418164();
  sub_46F088("%llu:", __PAIR64__(v3, v1));
  return sub_42E5F8(v1, v3, v4);
}

